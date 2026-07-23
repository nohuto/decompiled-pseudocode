/*
 * XREFs of IoDecrementKeepAliveCount @ 0x1402845E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KeAlertThread @ 0x1400F22B0 (KeAlertThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140284A38 (IopAdjustFileObjectKeepAliveCount.c)
 */

__int64 __fastcall IoDecrementKeepAliveCount(int a1, int a2)
{
  int v2; // edi
  KIRQL v3; // bl
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 *v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v2 = IopAdjustFileObjectKeepAliveCount(a1, a2, 0, (unsigned int)&v9, (__int64)&v10);
  if ( v2 >= 0 && !v9 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140437010);
    v5 = v10;
    *(_QWORD *)(v10 + 48) = MEMORY[0xFFFFF78000000014] + 50000000LL;
    --*(_DWORD *)(v5 + 32);
    if ( *(_BYTE *)(v5 + 16) )
    {
      if ( qword_140437040 )
        KeAlertThread(qword_140437040, 0LL, v4);
    }
    else
    {
      v6 = (__int64 *)qword_140437008;
      if ( *(PVOID **)qword_140437008 != &qword_140437000 )
        __fastfail(3u);
      *(_QWORD *)v5 = &qword_140437000;
      *(_QWORD *)(v5 + 8) = v6;
      *v6 = v5;
      qword_140437008 = v5;
      *(_BYTE *)(v5 + 16) = 1;
      if ( !byte_140437038 )
      {
        byte_140437038 = 1;
        ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
      }
    }
    KxReleaseSpinLock(&qword_140437010);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v3);
  }
  return (unsigned int)v2;
}
