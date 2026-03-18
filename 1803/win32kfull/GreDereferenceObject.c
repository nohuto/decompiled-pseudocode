/*
 * XREFs of GreDereferenceObject @ 0x1C00C5650
 * Callers:
 *     _SetCursorIconData @ 0x1C0014A20 (_SetCursorIconData.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00175DC (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0074C84 (CreateOrGetRedirectionBitmap.c)
 *     NtGdiGetPixel @ 0x1C008EAD0 (NtGdiGetPixel.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C008FE50 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C008FE80 (UntrapAppContainerRenderingWrap.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C4EA8 (DeleteOrSetRedirectionBitmap.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C00C7848 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C00DCEB8 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00DCEC8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C013B774 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C01970C4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

__int64 __fastcall GreDereferenceObject(HSURF a1, unsigned int a2)
{
  unsigned int v4; // ebx
  char v6; // [rsp+20h] [rbp-18h]
  char v7; // [rsp+50h] [rbp+18h] BYREF

  SURFREF::SURFREF((SURFREF *)&v7, a1);
  v4 = 0;
  if ( (unsigned int)SURFREF::bValid((SURFREF *)&v7) )
  {
    if ( ((unsigned int)a1 & 0x800000) != 0 )
    {
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v7);
    }
    else
    {
      v6 = 5;
      if ( !HmgShareUnlockRemoveObject(a1, 0LL, 1LL, a2, v6) || !(unsigned int)SURFREF::bDeleteSurface(&v7, 0LL, 1LL) )
        v4 = -1073741823;
    }
  }
  else
  {
    v4 = -1073741816;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v7);
  return v4;
}
