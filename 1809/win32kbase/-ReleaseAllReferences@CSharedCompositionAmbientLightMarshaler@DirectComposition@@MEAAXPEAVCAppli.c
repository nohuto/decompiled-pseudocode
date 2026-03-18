/*
 * XREFs of ?ReleaseAllReferences@CSharedCompositionAmbientLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0182940
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C008B1F0 (-ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel.c)
 */

void __fastcall DirectComposition::CSharedCompositionAmbientLightMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedCompositionAmbientLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx

  DirectComposition::CCompositionLightMarshaler::ReleaseAllReferences(this, a2);
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 13) = 0LL;
  }
}
