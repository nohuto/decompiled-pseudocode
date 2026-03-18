/*
 * XREFs of ?ReleaseAllReferences@CShapeVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B0720
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007BD70 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ClearShapes@CShapeVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B05D8 (-ClearShapes@CShapeVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CShapeVisualMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[44]);
  this[44] = 0LL;
  DirectComposition::CShapeVisualMarshaler::ClearShapes((DirectComposition::CShapeVisualMarshaler *)this, a2);
  DirectComposition::CVisualMarshaler::ReleaseAllReferences((DirectComposition::CVisualMarshaler *)this, a2);
}
