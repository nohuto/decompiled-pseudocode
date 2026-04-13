/*
 * XREFs of _lambda_fb49d89dd543e7535ea7867a5f3a91a6_::__lambda_fb49d89dd543e7535ea7867a5f3a91a6_ @ 0x18002A27C
 * Callers:
 *     _ContentManagement::ContentManagementService::EnableLockScreenRotationAsync_::_1_::dtor$1 @ 0x1800C917A (_ContentManagement--ContentManagementService--EnableLockScreenRotationAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenOverlayAsync_::_1_::dtor$1 @ 0x1800C919E (_ContentManagement--ContentManagementService--EnableLockScreenOverlayAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$1 @ 0x1800C91C2 (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800C91C2.c)
 *     _ContentManagement::ContentManagementService::EnableContextualSuggestionsAsync_::_1_::dtor$1 @ 0x1800C91E6 (_ContentManagement--ContentManagementService--EnableContextualSuggestionsAsync_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020A40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 */

volatile signed __int64 *__fastcall lambda_fb49d89dd543e7535ea7867a5f3a91a6_::__lambda_fb49d89dd543e7535ea7867a5f3a91a6_(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(result);
  }
  return result;
}
