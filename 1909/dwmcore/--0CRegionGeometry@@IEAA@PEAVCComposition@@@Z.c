/*
 * XREFs of ??0CRegionGeometry@@IEAA@PEAVCComposition@@@Z @ 0x180079E98
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CRegionGeometry *__fastcall CRegionGeometry::CRegionGeometry(CRegionGeometry *this, struct CComposition *a2)
{
  CRegionGeometry *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 21) = 1065353216;
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 104) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = &CRegionGeometry::`vftable';
  result = this;
  *((_BYTE *)this + 160) = 1;
  return result;
}
