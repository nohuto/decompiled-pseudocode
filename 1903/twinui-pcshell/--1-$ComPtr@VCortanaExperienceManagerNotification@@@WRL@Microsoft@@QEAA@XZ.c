/*
 * XREFs of ??1?$ComPtr@VCortanaExperienceManagerNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x18017D160
 * Callers:
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18017FE81 (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CQuickConnectExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x18019FED1 (_Microsoft--WRL--Details--MakeAndInitialize_CQuickConnectExperienceManager_IInspect_ea_18019FED1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180092380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNoti.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CortanaExperienceManagerNotification>::~ComPtr<CortanaExperienceManagerNotification>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release(result);
  }
  return result;
}
