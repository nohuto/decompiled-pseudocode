/*
 * XREFs of ?AppendDrawListEntry@CD2DContext@@QEAAJPEAVCDrawListEntry@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1801FDC60
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180186740 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180024BE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180025878 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z @ 0x180189CE0 (-AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z.c)
 */

__int64 __fastcall CD2DContext::AppendDrawListEntry(
        CDrawListEntryBatch **this,
        struct CDrawListEntry *a2,
        struct CHwLightCollectionBuffer *a3,
        struct ClipPlaneInfoRef *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int appended; // eax
  __int64 v12; // rcx

  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  v8 = CD2DContext::EnsureDrawListBatch((CD2DContext *)this, a3, a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2DEu);
  }
  else
  {
    appended = CDrawListEntryBatch::AppendDrawListEntry(this[22], a2);
    v10 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, appended, 0x2E1u);
  }
  return v10;
}
