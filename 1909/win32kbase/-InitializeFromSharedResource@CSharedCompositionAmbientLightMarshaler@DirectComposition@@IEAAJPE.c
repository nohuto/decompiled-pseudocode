/*
 * XREFs of ?InitializeFromSharedResource@CSharedCompositionAmbientLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00A12E4
 * Callers:
 *     ?Create@CSharedCompositionAmbientLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00A1258 (-Create@CSharedCompositionAmbientLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedCompositionAmbientLightMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedCompositionAmbientLightMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  *((_BYTE *)this + 72) = 1;
  *((_OWORD *)this + 5) = xmmword_1C01E0C30;
  *((_DWORD *)this + 24) = 1065353216;
  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
    *((_QWORD *)this + 13) = a2;
  return result;
}
