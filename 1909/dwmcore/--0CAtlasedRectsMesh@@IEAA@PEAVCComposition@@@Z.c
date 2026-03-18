/*
 * XREFs of ??0CAtlasedRectsMesh@@IEAA@PEAVCComposition@@@Z @ 0x1800AB42C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CAtlasedRectsMesh *__fastcall CAtlasedRectsMesh::CAtlasedRectsMesh(CAtlasedRectsMesh *this, struct CComposition *a2)
{
  CAtlasedRectsMesh *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CAtlasedRectsMesh::`vftable';
  result = this;
  *((_BYTE *)this + 128) = 1;
  return result;
}
