/*
 * XREFs of ??1?$ComPtr@VImeNotificationExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A1398
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ImeNotificationExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1801A11F3 (_Microsoft--WRL--Details--MakeAndInitialize_ImeNotificationExperienceManager_IInspe_ea_1801A11F3.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImeStatusNotificationExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801A1A30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIIme_ea_1801A1A30.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ImeNotificationExperienceManager>::~ComPtr<ImeNotificationExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Windows::Foundation::IClosable>::Release(result);
  }
  return result;
}
