/*
 * XREFs of IoDecrementKeepAliveCount @ 0x140299490
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KeAlertThread @ 0x1400E4F50 (KeAlertThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1402998F0 (IopAdjustFileObjectKeepAliveCount.c)
 */

__int64 __fastcall IoDecrementKeepAliveCount(int a1, int a2)
{
  int v2; // edi
  KIRQL v3; // bl
  __int64 v4; // rdx
  __int64 *v5; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = IopAdjustFileObjectKeepAliveCount(a1, a2, 0, (unsigned int)&v8, (__int64)&v9);
  if ( v2 >= 0 && !v8 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_1404617F0);
    v4 = v9;
    *(_QWORD *)(v9 + 48) = MEMORY[0xFFFFF78000000014] + 50000000LL;
    --*(_DWORD *)(v4 + 32);
    if ( *(_BYTE *)(v4 + 16) )
    {
      if ( qword_140461820 )
        KeAlertThread(qword_140461820, 0);
    }
    else
    {
      v5 = (__int64 *)qword_1404617E8;
      if ( *(PVOID **)qword_1404617E8 != &qword_1404617E0 )
        __fastfail(3u);
      *(_QWORD *)v4 = &qword_1404617E0;
      *(_QWORD *)(v4 + 8) = v5;
      *v5 = v4;
      qword_1404617E8 = v4;
      *(_BYTE *)(v4 + 16) = 1;
      if ( !byte_140461818 )
      {
        byte_140461818 = 1;
        ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
      }
    }
    KxReleaseSpinLock(&qword_1404617F0);
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
