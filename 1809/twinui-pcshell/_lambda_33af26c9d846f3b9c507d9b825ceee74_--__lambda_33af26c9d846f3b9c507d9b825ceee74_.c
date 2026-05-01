/*
 * XREFs of _lambda_33af26c9d846f3b9c507d9b825ceee74_::__lambda_33af26c9d846f3b9c507d9b825ceee74_ @ 0x18027E174
 * Callers:
 *     ??_E?$XamlExplorerHostWindowCreatedCallback@V_lambda_33af26c9d846f3b9c507d9b825ceee74_@@@@UEAAPEAXI@Z @ 0x18027F430 (--_E-$XamlExplorerHostWindowCreatedCallback@V_lambda_33af26c9d846f3b9c507d9b825ceee74_@@@@UEAAPE.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1802809C0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     _XamlAltTabViewHost::Show_::_1_::dtor$14 @ 0x180281049 (_XamlAltTabViewHost--Show_--_1_--dtor$14.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIAltTabViewHostInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180280940 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$C_ea_180280940.c)
 */

__int64 __fastcall lambda_33af26c9d846f3b9c507d9b825ceee74_::__lambda_33af26c9d846f3b9c507d9b825ceee74_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = a1[6];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = a1[5];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = a1[4];
  if ( v5 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = a1[1];
  if ( v6 )
  {
    a1[1] = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAltTabViewHost>,IAltTabViewHostInternal>::Release(v6);
  }
  return result;
}
