/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002E230
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C006BB50 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C008CED0 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreSetMagicColors @ 0x1C012D79C (GreSetMagicColors.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C002C420 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
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
