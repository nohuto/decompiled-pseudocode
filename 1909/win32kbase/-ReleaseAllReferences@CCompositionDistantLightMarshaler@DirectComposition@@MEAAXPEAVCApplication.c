/*
 * XREFs of ?ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009DC80
 * Callers:
 *     ?ReleaseAllReferences@CSharedCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009DC00 (-ReleaseAllReferences@CSharedCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCAppli.c)
 *     ?ReleaseAllReferences@CSharedCompositionSpotLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009DC40 (-ReleaseAllReferences@CSharedCompositionSpotLightMarshaler@DirectComposition@@MEAAXPEAVCApplicat.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009DCD0 (-ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel.c)
 */

void __fastcall DirectComposition::CCompositionDistantLightMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  DirectComposition::CCompositionLightMarshaler::ReleaseAllReferences(this, a2);
}
