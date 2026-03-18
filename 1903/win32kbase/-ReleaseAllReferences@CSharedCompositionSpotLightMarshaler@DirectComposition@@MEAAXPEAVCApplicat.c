/*
 * XREFs of ?ReleaseAllReferences@CSharedCompositionSpotLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009E670
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009E6B0 (-ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplication.c)
 */

void __fastcall DirectComposition::CSharedCompositionSpotLightMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedCompositionSpotLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx

  DirectComposition::CCompositionDistantLightMarshaler::ReleaseAllReferences(this, a2);
  v3 = *((_QWORD *)this + 23);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 23) = 0LL;
  }
}
