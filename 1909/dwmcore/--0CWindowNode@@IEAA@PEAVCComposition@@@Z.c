/*
 * XREFs of ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18004BBD8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800786A0 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

CWindowNode *__fastcall CWindowNode::CWindowNode(CWindowNode *this, struct CComposition *a2)
{
  CWindowNode *result; // rax

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CWindowNode::`vftable';
  memset_0((char *)this + 560, 0, 0x4CuLL);
  *((_DWORD *)this + 157) = 1;
  *((_QWORD *)this + 94) = (char *)this + 784;
  *((_QWORD *)this + 95) = (char *)this + 784;
  *((_DWORD *)this + 192) = 2;
  *(_QWORD *)((char *)this + 772) = 2LL;
  *((_DWORD *)this + 202) = 1065353216;
  *((_DWORD *)this + 203) = 1065353216;
  *((_DWORD *)this + 204) = 1065353216;
  *(_QWORD *)((char *)this + 820) = 1065353216LL;
  *(_QWORD *)((char *)this + 828) = 0LL;
  *((_DWORD *)this + 209) = 0;
  *((_BYTE *)this + 840) = 0;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_DWORD *)this + 230) = 0;
  *((_BYTE *)this + 947) = 0;
  *((_DWORD *)this + 237) = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::sc_rcEmpty;
  *((_DWORD *)this + 238) = dword_18033D304;
  *((_DWORD *)this + 239) = dword_18033D308;
  *((_DWORD *)this + 240) = dword_18033D30C;
  result = this;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_BYTE *)this + 1016) = 0;
  *((_QWORD *)this + 125) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  return result;
}
