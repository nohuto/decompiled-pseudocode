/*
 * XREFs of GreReferenceObject @ 0x1C000E4C4
 * Callers:
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C000E468 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0023744 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0077534 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C0251534 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C0257584 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 */

__int64 __fastcall GreReferenceObject(HSURF a1)
{
  int v1; // ebx
  _BYTE v3[56]; // [rsp+20h] [rbp-38h] BYREF

  SURFREF::SURFREF((SURFREF *)v3, a1);
  v1 = SURFREF::bValid((SURFREF *)v3);
  if ( v1 )
    SURFREF::vKeepIt((SURFREF *)v3);
  SURFREF::~SURFREF((SURFREF *)v3);
  return v1 == 0 ? 0xC0000008 : 0;
}
