/*
 * XREFs of ?AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z @ 0x18017FFAC
 * Callers:
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x1802179A0 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddRectToDirtyRegion@CDwmMetaRegion@@AEAAJPEBUtagRECT@@@Z @ 0x18017FE60 (-AddRectToDirtyRegion@CDwmMetaRegion@@AEAAJPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::AddRegionRectangleContainingMove(HRGN *this, const struct tagRECT *a2)
{
  signed int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = CDwmMetaRegion::AddRectToDirtyRegion(this, a2);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x13Eu, 0LL);
  return v4;
}
