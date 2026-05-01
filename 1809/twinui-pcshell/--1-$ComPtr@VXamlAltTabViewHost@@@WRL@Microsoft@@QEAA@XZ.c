/*
 * XREFs of ??1?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x18027E2FC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlAltTabViewHost_IUnknown__::_1_::dtor$2 @ 0x18027D2AE (_Microsoft--WRL--Details--MakeAndInitialize_XamlAltTabViewHost_IUnknown__--_1_--dtor$2.c)
 *     __lambda_33af26c9d846f3b9c507d9b825ceee74_::_lambda_33af26c9d846f3b9c507d9b825ceee74__::_1_::dtor$0 @ 0x18027D641 (__lambda_33af26c9d846f3b9c507d9b825ceee74_--_lambda_33af26c9d846f3b9c507d9b825ceee74__--_1_--dto.c)
 *     _XamlAltTabViewHost::Show_::_1_::dtor$13 @ 0x18028103D (_XamlAltTabViewHost--Show_--_1_--dtor$13.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIAltTabViewHostInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180280940 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$C_ea_180280940.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlAltTabViewHost>::~ComPtr<XamlAltTabViewHost>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAltTabViewHost>,IAltTabViewHostInternal>::Release(result);
  }
  return result;
}
