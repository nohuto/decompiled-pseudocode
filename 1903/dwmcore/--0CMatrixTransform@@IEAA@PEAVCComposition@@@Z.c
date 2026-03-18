/*
 * XREFs of ??0CMatrixTransform@@IEAA@PEAVCComposition@@@Z @ 0x1800CE578
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CMatrixTransform *__fastcall CMatrixTransform::CMatrixTransform(CMatrixTransform *this, struct CComposition *a2)
{
  CMatrixTransform *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CMatrixTransform::`vftable';
  *((_DWORD *)this + 38) = 1065353216;
  *((_DWORD *)this + 41) = 1065353216;
  result = this;
  *((_BYTE *)this + 148) = 0;
  return result;
}
