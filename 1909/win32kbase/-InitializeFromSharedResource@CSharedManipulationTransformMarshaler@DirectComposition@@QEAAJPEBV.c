/*
 * XREFs of ?InitializeFromSharedResource@CSharedManipulationTransformMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C008CAB4
 * Callers:
 *     ?Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C008CA28 (-Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 * Callees:
 *     ?Initialize@CManipulationTransformMarshaler@DirectComposition@@UEAAJXZ @ 0x1C008CB10 (-Initialize@CManipulationTransformMarshaler@DirectComposition@@UEAAJXZ.c)
 */

NTSTATUS __fastcall DirectComposition::CSharedManipulationTransformMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedManipulationTransformMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  result = DirectComposition::CManipulationTransformMarshaler::Initialize(this);
  if ( result >= 0 )
  {
    result = ObReferenceObjectByPointer((char *)a2 - 24, 3u, ExCompositionObjectType, 0);
    if ( result >= 0 )
      *((_QWORD *)this + 14) = a2;
  }
  return result;
}
