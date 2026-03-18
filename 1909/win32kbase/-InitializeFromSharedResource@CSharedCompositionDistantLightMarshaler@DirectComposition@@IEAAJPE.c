/*
 * XREFs of ?InitializeFromSharedResource@CSharedCompositionDistantLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C009E9E8
 * Callers:
 *     ?Create@CSharedCompositionDistantLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C009E958 (-Create@CSharedCompositionDistantLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedCompositionDistantLightMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedCompositionDistantLightMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 72) = 1;
  *((_DWORD *)this + 28) = -1082130432;
  *((_OWORD *)this + 5) = xmmword_1C01E0C30;
  *((_DWORD *)this + 29) = 1065353216;
  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
    *((_QWORD *)this + 15) = a2;
  return result;
}
