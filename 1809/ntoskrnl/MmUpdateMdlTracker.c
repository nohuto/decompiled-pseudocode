/*
 * XREFs of MmUpdateMdlTracker @ 0x1402A8E98
 * Callers:
 *     IopProbeAndLockPages @ 0x1400E10EC (IopProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x14027F4D0 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x140285C28 (IopProbeAndLockPages_1.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x140639C60 (NtWriteFile.c)
 *     NtWriteFileGather @ 0x1406CDB00 (NtWriteFileGather.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

_BOOL8 __fastcall MmUpdateMdlTracker(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  PEPROCESS v3; // r9
  _QWORD *i; // rbx
  unsigned __int64 v8; // rax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(PEPROCESS *)(a1 + 16);
  if ( !v3 )
    v3 = PsInitialSystemProcess;
  i = *(_QWORD **)&v3[1].ThreadSeed[6];
  if ( !i )
    return 0LL;
  KeAcquireInStackQueuedSpinLock(i + 3, &v12);
LABEL_5:
  for ( i = (_QWORD *)*i; i; i = (_QWORD *)i[1] )
  {
    v8 = i[3];
    if ( a1 < v8 )
      goto LABEL_5;
    if ( a1 <= v8 )
    {
      if ( a2 || a3 )
      {
        i[9] = a2;
        i[10] = a3;
        memset(i + 11, 0, 0x30uLL);
      }
      break;
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v12);
  OldIrql = v12.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  return i != 0;
}
