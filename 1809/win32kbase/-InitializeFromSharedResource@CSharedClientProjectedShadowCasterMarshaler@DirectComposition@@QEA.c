/*
 * XREFs of ?InitializeFromSharedResource@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C0182E30
 * Callers:
 *     ?Create@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0182D78 (-Create@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@SAJPEBVCSharedSystemResou.c)
 *     ?Create@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0182F90 (-Create@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@SAJPEBVCSharedSystemResourc.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedClientProjectedShadowCasterMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedClientProjectedShadowCasterMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
    *((_QWORD *)this + 13) = a2;
  return result;
}
