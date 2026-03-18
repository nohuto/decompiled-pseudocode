/*
 * XREFs of ??0CRadialGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x18019C060
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x18001E638 (--0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CRadialGradientBrush *__fastcall CRadialGradientBrush::CRadialGradientBrush(
        CRadialGradientBrush *this,
        struct CComposition *a2)
{
  CRadialGradientBrush *result; // rax

  CGradientBrush::CGradientBrush(this, a2, 0);
  *(_QWORD *)this = &CRadialGradientBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CTextBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_QWORD *)this + 10) = &CRadialGradientBrush::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 1056964608;
  *((_DWORD *)this + 49) = 1056964608;
  *((_DWORD *)this + 50) = 1056964608;
  *(_QWORD *)((char *)this + 204) = 1056964608LL;
  result = this;
  *((_DWORD *)this + 53) = 0;
  *((_BYTE *)this + 72) = 1;
  return result;
}
