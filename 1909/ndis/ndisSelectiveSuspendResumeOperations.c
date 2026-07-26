/*
 * XREFs of ndisSelectiveSuspendResumeOperations @ 0x1C00B95DC
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x1C00B6E90 (NdisMIdleNotificationCompleteEx.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C00B9D50 (ndisSetPowerResumeCompleteWorkItem.c)
 * Callees:
 *     ndisSetWakeUpTimer @ 0x1C001C960 (ndisSetWakeUpTimer.c)
 *     ndisMoveLinkedList @ 0x1C00B8774 (ndisMoveLinkedList.c)
 *     ndisReplayDirectOids @ 0x1C00B8C18 (ndisReplayDirectOids.c)
 *     ndisReplayRecvNbls @ 0x1C00B8CA4 (ndisReplayRecvNbls.c)
 *     ndisReplaySendNbls @ 0x1C00B8D08 (ndisReplaySendNbls.c)
 *     ndisSetIdleTimer @ 0x1C00B9B00 (ndisSetIdleTimer.c)
 */

void __fastcall ndisSelectiveSuspendResumeOperations(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v5; // r14
  __int64 v6; // rdx
  LONGLONG v7; // rcx
  struct _NET_BUFFER_LIST *First; // rbp
  struct _NET_BUFFER_LIST *v9; // rbx
  KIRQL v10; // al
  struct _KTHREAD *CurrentThread; // rdx
  KIRQL v12; // bl
  _QWORD *v13[3]; // [rsp+20h] [rbp-18h] BYREF

  SelectiveSuspend = a1->SelectiveSuspend;
  v13[0] = 0LL;
  v13[1] = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  if ( a2 )
  {
    SelectiveSuspend->Flags.Value &= ~0x10u;
    KeSetEvent(&SelectiveSuspend->DevicePowerReadyEvent, 0, 0);
    v6 = (MEMORY[0xFFFFF78000000014] - SelectiveSuspend->LastCancelTime.QuadPart) / 10000;
    SelectiveSuspend->TotalResumeLatencyMs += v6;
    SelectiveSuspend->LastResumeLatencyMs = v6;
    v7 = MEMORY[0xFFFFF78000000014] - SelectiveSuspend->LastSuspendTime.QuadPart;
    SelectiveSuspend->TotalSuspendedTimeMs += v7 / 10000;
    SelectiveSuspend->LastSuspendIntervalMs = v7 / 10000;
  }
  First = SelectiveSuspend->PendingSendNblQueue.First;
  SelectiveSuspend->PendingSendNblQueue.First = 0LL;
  SelectiveSuspend->PendingSendNblQueue.Last = &SelectiveSuspend->PendingSendNblQueue.First;
  v9 = SelectiveSuspend->PendingReceiveNblQueue.First;
  SelectiveSuspend->PendingReceiveNblQueue.First = 0LL;
  SelectiveSuspend->PendingReceiveNblQueue.Last = &SelectiveSuspend->PendingReceiveNblQueue.First;
  ndisMoveLinkedList(v13, (__int64)&SelectiveSuspend->PendingDirectOidQueue);
  KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
  if ( First )
    ndisReplaySendNbls(a1, First, 0);
  if ( v9 )
    ndisReplayRecvNbls(a1, v9);
  ndisReplayDirectOids((__int64)a1, v13, 0);
  ndisSetIdleTimer(a1);
  v10 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  CurrentThread = KeGetCurrentThread();
  a1->MiniportThread = CurrentThread;
  v12 = v10;
  ndisSetWakeUpTimer((__int64)a1, (__int64)CurrentThread);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v12);
}
