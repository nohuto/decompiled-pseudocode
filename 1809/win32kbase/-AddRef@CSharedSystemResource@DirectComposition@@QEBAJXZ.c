/*
 * XREFs of ?AddRef@CSharedSystemResource@DirectComposition@@QEBAJXZ @ 0x1C01696A4
 * Callers:
 *     ?Create@CSharedReadCaptureControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C018235C (-Create@CSharedReadCaptureControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 *     ?Create@CSharedWriteCaptureControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C018256C (-Create@CSharedWriteCaptureControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedSystemResource::AddRef(DirectComposition::CSharedSystemResource *this)
{
  return ObReferenceObjectByPointer((char *)this - 24, 3u, ExCompositionObjectType, 0);
}
