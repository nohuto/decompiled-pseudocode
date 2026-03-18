/*
 * XREFs of ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x180020528
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1802137BC (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 * Callees:
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x180020588 (--0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::CLinearGradientBrush(
        CLinearGradientBrush *this,
        struct CComposition *a2)
{
  CGradientBrush::CGradientBrush(this, a2, 1);
  *((_QWORD *)this + 24) = 1065353216LL;
  *(_QWORD *)this = &CLinearGradientBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_QWORD *)this + 10) = &CLinearGradientBrush::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 49) = 0;
  return this;
}
