/*
 * XREFs of MiLockAddressSpaceToo @ 0x140025794
 * Callers:
 *     MiPrepareVadDelete @ 0x1405E02B8 (MiPrepareVadDelete.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 */

_KLOCK_ENTRY *__fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v4; // rdi
  _KLOCK_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = (volatile signed __int32 *)(a1 + 872);
  result = (_KLOCK_ENTRY *)KeAbPreAcquire(a1 + 872, 0LL);
  if ( _interlockedbittestandset64(v4, 0LL) )
  {
    if ( result )
      KeAbPostReleaseEx((ULONG_PTR)v4, result);
    MiUnlockVad(CurrentThread, a2);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    return (_KLOCK_ENTRY *)KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  else
  {
    if ( result )
      result->AcquiredByte |= 1u;
    LOBYTE(CurrentThread[1].Queue) |= 1u;
  }
  return result;
}
