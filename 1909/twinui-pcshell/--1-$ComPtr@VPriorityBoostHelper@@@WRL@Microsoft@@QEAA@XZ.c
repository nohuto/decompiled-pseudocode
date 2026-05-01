/*
 * XREFs of ??1?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B5F34
 * Callers:
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$11 @ 0x1801B5B72 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$11.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$11_0 @ 0x1801B5E96 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$11_0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CInsightsExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1801D67D7 (_Microsoft--WRL--Details--MakeAndInitialize_CInsightsExperienceManager_IInspectable_ea_1801D67D7.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B8290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClo_ea_1801B8290.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PriorityBoostHelper>::~ComPtr<PriorityBoostHelper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release(result);
  }
  return result;
}
