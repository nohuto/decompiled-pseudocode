/*
 * XREFs of ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18009484C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004D428 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

CWindowNode *__fastcall CWindowNode::CWindowNode(CWindowNode *this, struct CComposition *a2)
{
  CWindowNode *result; // rax

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CWindowNode::`vftable';
  memset_0((char *)this + 560, 0, 0x4CuLL);
  *((_DWORD *)this + 157) = 1;
  *((_QWORD *)this + 96) = (char *)this + 800;
  *((_QWORD *)this + 97) = (char *)this + 800;
  *((_DWORD *)this + 196) = 2;
  *(_QWORD *)((char *)this + 788) = 2LL;
  *((_DWORD *)this + 206) = 1065353216;
  *((_DWORD *)this + 207) = 1065353216;
  *((_DWORD *)this + 208) = 1065353216;
  *(_QWORD *)((char *)this + 836) = 1065353216LL;
  *(_QWORD *)((char *)this + 844) = 0LL;
  *((_DWORD *)this + 213) = 0;
  *((_BYTE *)this + 856) = 0;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_DWORD *)this + 234) = 0;
  *((_BYTE *)this + 965) = 0;
  *((_DWORD *)this + 242) = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::sc_rcEmpty;
  *((_DWORD *)this + 243) = dword_18030BD84;
  *((_DWORD *)this + 244) = dword_18030BD88;
  *((_DWORD *)this + 245) = dword_18030BD8C;
  result = this;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_BYTE *)this + 1032) = 0;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 128) = 0LL;
  return result;
}
