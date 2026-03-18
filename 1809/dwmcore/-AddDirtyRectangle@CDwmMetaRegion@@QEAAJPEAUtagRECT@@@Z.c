/*
 * XREFs of ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x18017F1DC
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800A9F28 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x1801B922C (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddRectToDirtyRegion@CDwmMetaRegion@@AEAAJPEBUtagRECT@@@Z @ 0x18017F8B8 (-AddRectToDirtyRegion@CDwmMetaRegion@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?IntersectDirtyRectWithMoveData@CDwmMetaRegion@@AEAAJPEAUtagRECT@@@Z @ 0x18018071C (-IntersectDirtyRectWithMoveData@CDwmMetaRegion@@AEAAJPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::AddDirtyRectangle(CDwmMetaRegion *this, struct tagRECT *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx

  v4 = CDwmMetaRegion::AddRectToDirtyRegion(this, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x14Bu);
  }
  else
  {
    v7 = CDwmMetaRegion::IntersectDirtyRectWithMoveData(this, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x14Cu);
  }
  return v6;
}
