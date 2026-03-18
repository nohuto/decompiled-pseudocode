/*
 * XREFs of PopCompleteNotifyTransitionCommon @ 0x140165A10
 * Callers:
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1402FB520 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopSystemIrpCompletion @ 0x14059C460 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PopPrepChildWake @ 0x140165D40 (PopPrepChildWake.c)
 *     PopReadyParentSleep @ 0x140165DAC (PopReadyParentSleep.c)
 *     PopReadyChildWake @ 0x140165E2C (PopReadyChildWake.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDiagTraceDriverVeto @ 0x1405AD970 (PopDiagTraceDriverVeto.c)
 */

LONG __fastcall PopCompleteNotifyTransitionCommon(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  _QWORD *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r15
  bool v8; // r12
  char v9; // r13
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 v17; // rax
  __int64 **v18; // rdx
  __int64 *v19; // r15
  __int64 *v20; // r11
  __int64 *i; // r10
  _DISPATCHER_HEADER *v22; // r9
  unsigned __int8 OldIrql; // bl
  LONG result; // eax
  __int64 v25; // rax
  __int64 **v26; // rdx
  __int64 *j; // rsi
  __int64 *v28; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF

  v4 = (_QWORD *)*(a2 - 17);
  v5 = a1;
  v6 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = (PopCurrentBroadcast & 0x80000000000000LL) != 0;
  if ( (PVOID)*(a2 - 16) != IopRootDeviceNode )
    v6 = *(a2 - 16);
  v9 = 0;
  v10 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140442FD0 + 1, &LockHandle);
  v13 = v5 + 48;
  v14 = (__int64 *)*a2;
  v15 = 9LL * *((unsigned __int8 *)a2 + 56);
  v16 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v16 != a2 )
    goto LABEL_51;
  *v16 = v14;
  v14[1] = (__int64)v16;
  if ( !*(_BYTE *)(v5 + 464) )
  {
    v17 = v5 + 104 + 8 * v15;
    v18 = *(__int64 ***)(v17 + 8);
    if ( *v18 == (__int64 *)v17 )
    {
      *a2 = v17;
      a2[1] = (__int64)v18;
      *v18 = a2;
      *(_QWORD *)(v17 + 8) = a2;
      --*(_DWORD *)(v13 + 8 * v15 + 20);
      if ( v6 )
      {
        LOBYTE(v11) = *((_BYTE *)a2 + 56);
        LOBYTE(v12) = v8;
        v10 = (unsigned __int8)PopReadyParentSleep(v6 + 144, v5 + 48, v11, v12) != 0;
      }
      v19 = (__int64 *)a2[4];
      if ( v19 != a2 + 4 )
      {
        do
        {
          LOBYTE(v11) = *((_BYTE *)a2 + 56);
          LOBYTE(v12) = v8;
          if ( (unsigned __int8)PopReadyParentSleep(v19[5], v13, v11, v12) )
            ++v10;
          v19 = (__int64 *)*v19;
        }
        while ( v19 != a2 + 4 );
        v5 = a1;
      }
      while ( v4 )
      {
        LOBYTE(v11) = v8;
        PopPrepChildWake(v4 + 18, v13, v11);
        v4 = (_QWORD *)*v4;
      }
      v20 = a2 + 2;
      for ( i = (__int64 *)a2[2]; i != v20; i = (__int64 *)*v28 )
      {
        LOBYTE(v11) = v8;
        PopPrepChildWake(*(i - 1), v13, v11);
      }
      if ( a3 >= 0 )
        goto LABEL_14;
      if ( a4 && *(_BYTE *)v5 == 3 )
        PopDiagTraceDriverVeto(a4, a2);
      if ( a3 >= 0 || *(_BYTE *)(v5 + 466) || a3 == -1073741637 && *(_BYTE *)(v5 + 467) || *(int *)(v5 + 448) < 0 )
      {
LABEL_14:
        v9 = 0;
      }
      else
      {
        *(_DWORD *)(v5 + 448) = a3;
        v9 = 1;
        *(_QWORD *)(v5 + 456) = a2[8];
      }
      goto LABEL_15;
    }
LABEL_51:
    __fastfail(3u);
  }
  v25 = v5 + 72 + 8 * v15;
  v26 = *(__int64 ***)(v25 + 8);
  if ( *v26 != (__int64 *)v25 )
    goto LABEL_51;
  *a2 = v25;
  a2[1] = (__int64)v26;
  *v26 = a2;
  *(_QWORD *)(v25 + 8) = a2;
  ++*(_DWORD *)(v13 + 8 * v15 + 20);
  while ( v4 )
  {
    LOBYTE(v11) = *((_BYTE *)a2 + 56);
    LOBYTE(v12) = v8;
    if ( (unsigned __int8)PopReadyChildWake(v4 + 18, v5 + 48, v11, v12) )
      ++v10;
    v4 = (_QWORD *)*v4;
  }
  for ( j = (__int64 *)a2[2]; j != a2 + 2; j = (__int64 *)*j )
  {
    LOBYTE(v11) = *((_BYTE *)a2 + 56);
    LOBYTE(v12) = v8;
    if ( (unsigned __int8)PopReadyChildWake(*(j - 1), v5 + 48, v11, v12) )
      ++v10;
  }
LABEL_15:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  if ( v9 )
    return KeSetEvent(*(PRKEVENT *)(v5 + 24), 0, 0);
  if ( v10 )
    return KeReleaseSemaphoreEx(*(_QWORD *)(v5 + 32), 0, v10, v22, 0);
  return result;
}
