/*
 * XREFs of GreDereferenceObject @ 0x1C0089FA4
 * Callers:
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002464C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00271CC (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0032864 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C0089084 (DeleteOrSetRedirectionBitmap.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0089F60 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00AAE88 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00AAED0 (UntrapAppContainerRenderingWrap.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00AC2F0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004E634 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C016654C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026A744 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C026AB34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
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
