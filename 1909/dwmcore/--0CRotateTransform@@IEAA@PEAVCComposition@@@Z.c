/*
 * XREFs of ??0CRotateTransform@@IEAA@PEAVCComposition@@@Z @ 0x1800205BC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CRotateTransform *__fastcall CRotateTransform::CRotateTransform(CRotateTransform *this, struct CComposition *a2)
{
  CRotateTransform *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CRotateTransform::`vftable';
  result = this;
  *((_BYTE *)this + 148) = 0;
  return result;
}
