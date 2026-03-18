/*
 * XREFs of ??0CTextBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801B4E68
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CTextBrush *__fastcall CTextBrush::CTextBrush(CTextBrush *this, struct CComposition *a2)
{
  CTextBrush *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &CTextBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CTextBrush::`vftable'{for `IVisualListenerInfoProvider'};
  result = this;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 1094713344;
  *(struct _D3DCOLORVALUE *)((char *)this + 116) = *(const struct _D3DCOLORVALUE *)&CTextBrush::k_defaultFontColor.r;
  *(_QWORD *)((char *)this + 132) = 400LL;
  *((_DWORD *)this + 35) = 5;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  return result;
}
