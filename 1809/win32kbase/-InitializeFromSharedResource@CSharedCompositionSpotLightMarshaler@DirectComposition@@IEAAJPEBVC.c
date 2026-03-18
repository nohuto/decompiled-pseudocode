/*
 * XREFs of ?InitializeFromSharedResource@CSharedCompositionSpotLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C0182C60
 * Callers:
 *     ?Create@CSharedCompositionSpotLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0182B98 (-Create@CSharedCompositionSpotLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@P.c)
 * Callees:
 *     ?Initialize@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0089BC0 (-Initialize@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJXZ.c)
 */

NTSTATUS __fastcall DirectComposition::CSharedCompositionSpotLightMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedCompositionSpotLightMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  result = DirectComposition::CCompositionSpotLightMarshaler::Initialize(this);
  if ( result >= 0 )
  {
    result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
    if ( result >= 0 )
      *((_QWORD *)this + 23) = a2;
  }
  return result;
}
