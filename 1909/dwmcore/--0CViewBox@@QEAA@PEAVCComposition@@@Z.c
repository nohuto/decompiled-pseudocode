/*
 * XREFs of ??0CViewBox@@QEAA@PEAVCComposition@@@Z @ 0x18019C52C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x1800CB01C (--0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z.c)
 */

CViewBox *__fastcall CViewBox::CViewBox(CViewBox *this, struct CComposition *a2)
{
  CViewBox *v2; // rcx
  CViewBox *result; // rax

  CComponentTransform2D::CComponentTransform2D(this, a2);
  *(_QWORD *)v2 = &CViewBox::`vftable';
  *((_DWORD *)v2 + 58) = 1056964608;
  *((_DWORD *)v2 + 59) = 1056964608;
  result = v2;
  *((_DWORD *)v2 + 60) = 2;
  return result;
}
