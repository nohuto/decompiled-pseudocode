/*
 * XREFs of GreReferenceObject @ 0x1C004567C
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C002C3F4 (CreateOrGetRedirectionBitmap.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002F08C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C0048080 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00AD814 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026AE74 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C026B264 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C0270E2C (-vKeepIt@SURFREF@@QEAAXXZ.c)
 */

__int64 __fastcall GreReferenceObject(HSURF a1)
{
  int v1; // ebx
  char v3; // [rsp+38h] [rbp+10h] BYREF

  SURFREF::SURFREF((SURFREF *)&v3, a1);
  v1 = SURFREF::bValid((SURFREF *)&v3);
  if ( v1 )
    SURFREF::vKeepIt((SURFREF *)&v3);
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v3);
  return v1 == 0 ? 0xC0000008 : 0;
}
