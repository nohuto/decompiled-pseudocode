/*
 * XREFs of ??0CScaleTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x18019DA78
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CScaleTransform3D *__fastcall CScaleTransform3D::CScaleTransform3D(CScaleTransform3D *this, struct CComposition *a2)
{
  CScaleTransform3D *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *((_DWORD *)this + 38) = 1065353216;
  *((_DWORD *)this + 39) = 1065353216;
  *((_DWORD *)this + 40) = 1065353216;
  *(_QWORD *)this = &CScaleTransform3D::`vftable';
  result = this;
  *((_BYTE *)this + 148) = 0;
  return result;
}
