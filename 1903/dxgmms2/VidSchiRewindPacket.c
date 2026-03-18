/*
 * XREFs of VidSchiRewindPacket @ 0x1C00305EC
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F1E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiRun_PriorityTable @ 0x1C008A1A0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiCompleteRewindPacket @ 0x1C00125DC (VidSchiCompleteRewindPacket.c)
 */

void __fastcall VidSchiRewindPacket(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rbx
  int v7; // edi
  __int64 v9; // rsi
  _QWORD *v10; // rax
  int v11; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 88);
  v7 = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 96) + 24LL);
  if ( !(_DWORD)a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 1648), &LockHandle);
  if ( (*(_DWORD *)(v4 + 184) & 4) == 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
    v10[3] = v9;
    v10[4] = v4;
    v10[5] = *(unsigned int *)(a1 + 112);
    WdLogEvent5_WdEvent(v10);
    v11 = *(_DWORD *)(v4 + 184) | 4;
    *(_QWORD *)(v4 + 648) = a1;
    *(_DWORD *)(v4 + 184) = v11;
  }
  if ( a3 )
    VidSchiCompleteRewindPacket(v4, a4);
  if ( !v7 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
