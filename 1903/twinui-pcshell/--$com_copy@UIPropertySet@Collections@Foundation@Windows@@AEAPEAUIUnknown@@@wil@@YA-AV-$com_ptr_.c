/*
 * XREFs of ??$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1800997E8
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180039980 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x18022EC20 (-EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 *     ?GetActivationValueSet@TabViewManager@@AEAA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18022F380 (-GetActivationValueSet@TabViewManager@@AEAA-AV-$com_ptr_t@UIPropertySet@Collections@Foundation@W.c)
 *     ?UpdatePropertySetWithTargetGroupForActivation@TabViewManager@@UEAAJPEAUIUnknown@@@Z @ 0x180241840 (-UpdatePropertySetWithTargetGroupForActivation@TabViewManager@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_copy<Windows::Foundation::Collections::IPropertySet,IUnknown * &>(_QWORD *a1, _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *a2 )
  {
    v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*a2)(
           *a2,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           a1);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5421LL,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
