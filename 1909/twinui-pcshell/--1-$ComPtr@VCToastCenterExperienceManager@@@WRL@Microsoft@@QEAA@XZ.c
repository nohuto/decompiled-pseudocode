/*
 * XREFs of ??1?$ComPtr@VCToastCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A3CAC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CToastCenterExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1801A33F3 (_Microsoft--WRL--Details--MakeAndInitialize_CToastCenterExperienceManager_IInspecta_ea_1801A33F3.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIToastCenterExperienceManager@5678@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIHolographicExperienceExtension@Holographic@678@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801A8020 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBas_ea_1801A8020.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CToastCenterExperienceManager>::~ComPtr<CToastCenterExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>::Release(result);
  }
  return result;
}
