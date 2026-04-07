/*
 * XREFs of ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x180079CE4
 * Callers:
 *     wistd::__function::__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_::operator() @ 0x180079920 (wistd--__function--__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18003BC3C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007974C (--$ActivateInstance@V-$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@W.c)
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x180079C38 (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ?UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ @ 0x18007A3D0 (-UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007A4D8 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x18007A6C0 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

void __fastcall CAnalogCompositorManager::OnHolographicDisplayCalibrationDriverDetected(CAnalogCompositorManager *this)
{
  __int64 v2; // rcx
  UDwmTrace *v3; // rcx
  int v4; // eax
  int v5; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( UDwmTrace::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<UDwmTrace>::get(v2, lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
    UDwmTrace::UDwmHolographicDeviceDriverDetected_(v3);
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v7 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Graphics.Holographic.Internal.HolographicDisplayMonitorManager",
      0x47u,
      0x46u);
    v4 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayMonitorManager>>(
           v7,
           (__int64 *)this + 7);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x89,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v4,
        (int)hstringHeader.Reserved.Reserved1);
      __debugbreak();
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 48LL))(*((_QWORD *)this + 7));
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x8A,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v5,
        (int)hstringHeader.Reserved.Reserved1);
      __debugbreak();
    }
  }
}
