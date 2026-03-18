/*
 * XREFs of ?InitializeFromSharedResource@CSharedCompositionPointLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C01C4E20
 * Callers:
 *     ?Create@CSharedCompositionPointLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01C4D60 (-Create@CSharedCompositionPointLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 * Callees:
 *     ?Initialize@CCompositionPointLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C01B2CD0 (-Initialize@CCompositionPointLightMarshaler@DirectComposition@@UEAAJXZ.c)
 */

NTSTATUS __fastcall DirectComposition::CSharedCompositionPointLightMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedCompositionPointLightMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  result = DirectComposition::CCompositionPointLightMarshaler::Initialize(this);
  if ( result >= 0 )
  {
    result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
    if ( result >= 0 )
      *((_QWORD *)this + 18) = a2;
  }
  return result;
}
