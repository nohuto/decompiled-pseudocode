/*
 * XREFs of ?AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z @ 0x18017F9F4
 * Callers:
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x1801B922C (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddRectToDirtyRegion@CDwmMetaRegion@@AEAAJPEBUtagRECT@@@Z @ 0x18017F8B8 (-AddRectToDirtyRegion@CDwmMetaRegion@@AEAAJPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::AddRegionRectangleContainingMove(HRGN *this, const struct tagRECT *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = CDwmMetaRegion::AddRectToDirtyRegion(this, a2);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x13Eu);
  return v4;
}
