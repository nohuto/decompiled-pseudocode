/*
 * XREFs of ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002A1B0
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01016DC (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C002A340 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

SPRITELOCK *__fastcall SPRITELOCK::SPRITELOCK(SPRITELOCK *this, struct PDEVOBJ *a2)
{
  __int64 v4; // rcx
  __int64 ThreadWin32Thread; // rbx
  struct _ERESOURCE *v6; // rbx

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !ThreadWin32Thread
    || !(unsigned int)PDEVOBJ::bAllowShareAccess(a2)
    || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 88LL;
    v6 = ghsemSprite;
    if ( ghsemSprite )
    {
      PsEnterPriorityRegion(v4);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
    }
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  }
  return this;
}
