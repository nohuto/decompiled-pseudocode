/*
 * XREFs of ?ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B2D30
 * Callers:
 *     ?ReleaseAllReferences@CSharedCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01C4EC0 (-ReleaseAllReferences@CSharedCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplica.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009DCD0 (-ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel.c)
 */

void __fastcall DirectComposition::CCompositionPointLightMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionPointLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  DirectComposition::CCompositionLightMarshaler::ReleaseAllReferences(this, a2);
}
