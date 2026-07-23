/*
 * XREFs of ExTryToAcquireFastMutex @ 0x140109C50
 * Callers:
 *     KeTryToAcquireGuardedMutex @ 0x140109C30 (KeTryToAcquireGuardedMutex.c)
 *     FsRtlTryToAcquireHeaderMutex @ 0x140170C00 (FsRtlTryToAcquireHeaderMutex.c)
 *     RawScanDeletedList @ 0x1406ED978 (RawScanDeletedList.c)
 *     CreateMiniNtBootKey @ 0x140A381D0 (CreateMiniNtBootKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall ExTryToAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  PRTL_BALANCED_NODE v2; // rax
  PRTL_BALANCED_NODE v3; // rbx
  unsigned __int8 CurrentIrql; // si
  BOOLEAN result; // al
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = KeAbPreAcquire((ULONG_PTR)FastMutex, 0LL, 1);
  v3 = v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( _interlockedbittestandreset(&FastMutex->Count, 0) )
  {
    if ( v2 )
      BYTE2(v2[1].Left) |= 1u;
    result = 1;
    FastMutex->Owner = KeGetCurrentThread();
    FastMutex->OldIrql = CurrentIrql;
  }
  else
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    if ( v3 )
      KeAbPostReleaseEx((ULONG_PTR)FastMutex);
    _mm_pause();
    return 0;
  }
  return result;
}
