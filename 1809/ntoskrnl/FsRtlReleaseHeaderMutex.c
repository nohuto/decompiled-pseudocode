/*
 * XREFs of FsRtlReleaseHeaderMutex @ 0x1400511C0
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x1400E1528 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlReleaseEofLock @ 0x140103180 (FsRtlReleaseEofLock.c)
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall FsRtlReleaseHeaderMutex(__int64 a1, volatile signed __int32 *a2)
{
  ULONG_PTR v2; // rbx
  unsigned __int8 v3; // di
  signed __int32 v4; // eax
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a2 )
    _InterlockedIncrement(a2);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v3 = *(_BYTE *)(v2 + 48);
  *(_QWORD *)(v2 + 8) = 0LL;
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)v2, 1, 0);
  if ( v4 )
    ExpReleaseFastMutexContended(v2, v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  return KeAbPostRelease(v2);
}
