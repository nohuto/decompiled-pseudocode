/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0031A50
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001D470 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0041298 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreSetMagicColors @ 0x1C00D820C (GreSetMagicColors.c)
 * Callees:
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0031D90 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, struct PDEVOBJ *a2)
{
  __int64 v3; // rdi

  *(_QWORD *)this = 0LL;
  v3 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 && !(unsigned int)PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v3 + 40) & 0x8000) == 0 )
  {
    *(_QWORD *)this = ghsemGreLock;
    EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)this, 2LL);
  }
}
