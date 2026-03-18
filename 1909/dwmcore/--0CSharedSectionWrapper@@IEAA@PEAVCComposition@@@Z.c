/*
 * XREFs of ??0CSharedSectionWrapper@@IEAA@PEAVCComposition@@@Z @ 0x1801F8E04
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CSharedSectionWrapper *__fastcall CSharedSectionWrapper::CSharedSectionWrapper(
        CSharedSectionWrapper *this,
        struct CComposition *a2)
{
  CSharedSectionWrapper *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CSharedSectionWrapper::`vftable';
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  return result;
}
