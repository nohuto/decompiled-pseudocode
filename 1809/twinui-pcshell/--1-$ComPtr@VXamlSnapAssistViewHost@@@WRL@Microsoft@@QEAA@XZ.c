/*
 * XREFs of ??1?$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x180282EA4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlSnapAssistViewHost_IUnknown__::_1_::dtor$2 @ 0x18028295E (_Microsoft--WRL--Details--MakeAndInitialize_XamlSnapAssistViewHost_IUnknown__--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlViewHost@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180079DA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultitaskingV.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlSnapAssistViewHost>::~ComPtr<XamlSnapAssistViewHost>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IXamlViewHost>::Release(
             result,
             a2);
  }
  return result;
}
