/*
 * XREFs of ??0CMatrixTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x1800DA168
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CMatrixTransform3D *__fastcall CMatrixTransform3D::CMatrixTransform3D(
        CMatrixTransform3D *this,
        struct CComposition *a2)
{
  CMatrixTransform3D *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CMatrixTransform3D::`vftable';
  *((_DWORD *)this + 38) = 1065353216;
  *((_DWORD *)this + 43) = 1065353216;
  *((_DWORD *)this + 48) = 1065353216;
  *((_DWORD *)this + 53) = 1065353216;
  result = this;
  *((_BYTE *)this + 148) = 0;
  return result;
}
