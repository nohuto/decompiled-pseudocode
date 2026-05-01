/*
 * XREFs of ??1?$ComPtr@VCTaskContinuityActivitiesExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801831C4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CTaskContinuityActivitiesExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x180182FF3 (_Microsoft--WRL--Details--MakeAndInitialize_CTaskContinuityActivitiesExperienceMana_ea_180182FF3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPeopleBarJumpViewExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x180191F05 (_Microsoft--WRL--Details--MakeAndInitialize_CPeopleBarJumpViewExperienceManager_IIn_ea_180191F05.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800923F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpVie.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CTaskContinuityActivitiesExperienceManager>::~ComPtr<CTaskContinuityActivitiesExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release(result);
  }
  return result;
}
