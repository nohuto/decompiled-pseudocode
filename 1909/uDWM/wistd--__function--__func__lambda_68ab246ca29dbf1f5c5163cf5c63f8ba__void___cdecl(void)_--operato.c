/*
 * XREFs of wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_::operator() @ 0x1800795E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002CB58 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x1800798D8 (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ?UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ @ 0x18007A0F4 (-UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x18007A360 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

void wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl_void__::operator()()
{
  unsigned __int64 v0; // rdx
  unsigned __int8 v1; // cl
  __int64 v2; // rcx
  UDwmTrace *v3; // rcx

  CAnalogCompositorManager::GetInstance();
  if ( UDwmTrace::IsEnabled(v1, v0) )
  {
    wil::details::static_lazy<UDwmTrace>::get(v2, lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
    UDwmTrace::UDwmHolographicDeviceDriverLost_(v3);
  }
}
