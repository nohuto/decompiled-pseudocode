/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002B910
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0043A30 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreSetMagicColors @ 0x1C01061E4 (GreSetMagicColors.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C002A340 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, struct PDEVOBJ *a2)
{
  __int64 v3; // rdi

  *(_QWORD *)this = 0LL;
  v3 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 && !PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v3 + 40) & 0x8000) == 0 )
  {
    *(_QWORD *)this = ghsemGreLock;
    EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)this, 2LL);
  }
}
