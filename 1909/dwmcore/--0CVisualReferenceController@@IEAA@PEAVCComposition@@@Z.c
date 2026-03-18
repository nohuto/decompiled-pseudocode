/*
 * XREFs of ??0CVisualReferenceController@@IEAA@PEAVCComposition@@@Z @ 0x1800AD594
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CVisualReferenceController *__fastcall CVisualReferenceController::CVisualReferenceController(
        CVisualReferenceController *this,
        struct CComposition *a2)
{
  CVisualReferenceController *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CVisualReferenceController::`vftable';
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  return result;
}
