/*
 * XREFs of GreDereferenceObject @ 0x1C000E55C
 * Callers:
 *     DeleteOrSetRedirectionBitmap @ 0x1C000E0AC (DeleteOrSetRedirectionBitmap.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C000E518 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0023744 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C0057A10 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     NtGdiGetPixel @ 0x1C005E7C0 (NtGdiGetPixel.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C006C1C8 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0077534 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C015FC34 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C0251534 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vAltUnlockFast@SURFREF@@QEAAXXZ @ 0x1C025752C (-vAltUnlockFast@SURFREF@@QEAAXXZ.c)
 */

__int64 __fastcall GreDereferenceObject(HSURF a1, unsigned int a2)
{
  unsigned int v4; // ebx
  char v6; // [rsp+20h] [rbp-48h]
  _BYTE v7[56]; // [rsp+30h] [rbp-38h] BYREF

  SURFREF::SURFREF((SURFREF *)v7, a1);
  v4 = 0;
  if ( (unsigned int)SURFREF::bValid((SURFREF *)v7) )
  {
    if ( ((unsigned int)a1 & 0x800000) != 0 )
    {
      SURFREF::vAltUnlockFast((SURFREF *)v7);
    }
    else
    {
      v6 = 5;
      if ( !HmgShareUnlockRemoveObject(a1, 0LL, 1LL, a2, v6) || !(unsigned int)SURFREF::bDeleteSurface(v7, 0LL, 1LL) )
        v4 = -1073741823;
    }
  }
  else
  {
    v4 = -1073741816;
  }
  SURFREF::~SURFREF((SURFREF *)v7);
  return v4;
}
