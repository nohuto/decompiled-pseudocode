/*
 * XREFs of ??1?$ComPtr@VRetailDemoExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180184294
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_RetailDemoExperienceManager_RetailDemoExperienceManager__::_1_::dtor$2 @ 0x180183CE6 (_Microsoft--WRL--Details--MakeAndInitialize_RetailDemoExperienceManager_RetailDemoE_ea_180183CE6.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E6DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1800E6DD0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<RetailDemoExperienceManager>::~ComPtr<RetailDemoExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
