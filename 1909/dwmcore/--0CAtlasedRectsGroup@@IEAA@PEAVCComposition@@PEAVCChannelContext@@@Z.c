/*
 * XREFs of ??0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x1800AAC4C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CAtlasedRectsGroup *__fastcall CAtlasedRectsGroup::CAtlasedRectsGroup(
        CAtlasedRectsGroup *this,
        struct CComposition *a2,
        struct CChannelContext *a3)
{
  CAtlasedRectsGroup *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CAtlasedRectsGroup::`vftable';
  result = this;
  *((_BYTE *)this + 96) = 1;
  return result;
}
