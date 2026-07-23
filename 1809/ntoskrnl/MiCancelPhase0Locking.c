/*
 * XREFs of MiCancelPhase0Locking @ 0x140654CCC
 * Callers:
 *     MmPageEntireDriver @ 0x140654B30 (MmPageEntireDriver.c)
 *     MmResetDriverPaging @ 0x1406550E0 (MmResetDriverPaging.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiLockPagableSections @ 0x1409BDE2C (MiLockPagableSections.c)
 */

_QWORD *__fastcall MiCancelPhase0Locking(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *result; // rax

  if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
    {
      MiLockPagableSections(a1, 0LL);
      *(_DWORD *)(a1 + 104) &= ~0x400000u;
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    return KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}
