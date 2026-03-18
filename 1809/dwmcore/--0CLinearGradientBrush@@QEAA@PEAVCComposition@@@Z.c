/*
 * XREFs of ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x18001E87C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801C306C (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 * Callees:
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@@Z @ 0x18001E8DC (--0CGradientBrush@@IEAA@PEAVCComposition@@@Z.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::CLinearGradientBrush(
        CLinearGradientBrush *this,
        struct CComposition *a2)
{
  CGradientBrush::CGradientBrush(this, a2);
  *((_QWORD *)this + 23) = 1065353216LL;
  *(_QWORD *)this = &CLinearGradientBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_QWORD *)this + 9) = &CLinearGradientBrush::`vftable';
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 47) = 0;
  return this;
}
