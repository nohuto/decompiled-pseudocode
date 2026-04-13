/*
 * XREFs of _lambda_d0249701552e980dd27d25ea59751cd6_::__lambda_d0249701552e980dd27d25ea59751cd6_ @ 0x18002A940
 * Callers:
 *     _ContentManagement::ContentManagementService::ResolveLayoutBindingsAsync_::_1_::dtor$2 @ 0x1800C921C (_ContentManagement--ContentManagementService--ResolveLayoutBindingsAsync_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020A40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 */

HRESULT __fastcall lambda_d0249701552e980dd27d25ea59751cd6_::__lambda_d0249701552e980dd27d25ea59751cd6_(__int64 a1)
{
  HSTRING v2; // rcx
  HRESULT result; // eax
  volatile signed __int64 *v4; // rcx

  v2 = *(HSTRING *)(a1 + 8);
  if ( v2 )
    result = WindowsDeleteString(v2);
  v4 = *(volatile signed __int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v4);
  }
  return result;
}
