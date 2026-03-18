/*
 * XREFs of ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0070990
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0043A30 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreSetMagicColors @ 0x1C01061E4 (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall NEEDGRELOCK::vUnlock(NEEDGRELOCK *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", *(_QWORD *)this, a3);
    if ( *(_QWORD *)this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
      PsLeavePriorityRegion(v4);
    }
    *(_QWORD *)this = 0LL;
  }
}
