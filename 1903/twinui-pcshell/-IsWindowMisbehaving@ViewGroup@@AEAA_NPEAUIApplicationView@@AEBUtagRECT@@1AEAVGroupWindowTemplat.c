/*
 * XREFs of ?IsWindowMisbehaving@ViewGroup@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@1AEAVGroupWindowTemplateAppliedToView@TabViewManagerMeasures@@@Z @ 0x18025F93C
 * Callers:
 *     ?OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_STATE@@2AEBUtagRECT@@3@Z @ 0x18025FB10 (-OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_ST.c)
 * Callees:
 *     ?CalculateSharedArea@@YANAEBUtagRECT@@0@Z @ 0x18025F1FC (-CalculateSharedArea@@YANAEBUtagRECT@@0@Z.c)
 *     ?ViewDidNotMatchTemplate@GroupWindowTemplateAppliedToView@TabViewManagerMeasures@@QEAAXAEBUtagRECT@@0NPEAUIApplicationView@@@Z @ 0x1802617F8 (-ViewDidNotMatchTemplate@GroupWindowTemplateAppliedToView@TabViewManagerMeasures@@QEAAXAEBUtagRE.c)
 */

bool __fastcall ViewGroup::IsWindowMisbehaving(
        ViewGroup *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        struct TabViewManagerMeasures::GroupWindowTemplateAppliedToView *a5)
{
  double v8; // xmm6_8
  bool result; // al

  result = 0;
  if ( !EqualRect(a3, a4) )
  {
    v8 = CalculateSharedArea(a3, a4);
    TabViewManagerMeasures::GroupWindowTemplateAppliedToView::ViewDidNotMatchTemplate(a5, a3, a4, v8, a2);
    if ( v8 < 0.8 )
      return 1;
  }
  return result;
}
