/*
 * XREFs of ?ReleaseAllReferences@CCompositionGlyphRunMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B8B70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CCompositionGlyphRunMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[5]);
  v4 = this[6];
  this[5] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  this[6] = 0LL;
}
