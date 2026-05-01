/*
 * XREFs of ??1?$ComPtr@VCCortanaConversationExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18014F4E4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CCortanaConversationExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x18014F333 (_Microsoft--WRL--Details--MakeAndInitialize_CCortanaConversationExperienceManager_I_ea_18014F333.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApplicationViewT.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CCortanaConversationExperienceManager>::~ComPtr<CCortanaConversationExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
