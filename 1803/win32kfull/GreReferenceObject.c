/*
 * XREFs of GreReferenceObject @ 0x1C00C5604
 * Callers:
 *     _SetCursorIconData @ 0x1C0014A20 (_SetCursorIconData.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0074C84 (CreateOrGetRedirectionBitmap.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C00C7D5C (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 * Callees:
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C00DCEB8 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00DCEC8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C01970AC (-vKeepIt@SURFREF@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C01970C4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

__int64 __fastcall GreReferenceObject(HSURF a1)
{
  unsigned int v1; // ebx
  char v3; // [rsp+38h] [rbp+10h] BYREF

  SURFREF::SURFREF((SURFREF *)&v3, a1);
  v1 = 0;
  if ( (unsigned int)SURFREF::bValid((SURFREF *)&v3) )
    SURFREF::vKeepIt((SURFREF *)&v3);
  else
    v1 = -1073741816;
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v3);
  return v1;
}
