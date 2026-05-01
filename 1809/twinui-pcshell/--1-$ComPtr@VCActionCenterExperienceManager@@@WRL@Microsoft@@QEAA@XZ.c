/*
 * XREFs of ??1?$ComPtr@VCActionCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180148B7C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CActionCenterExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x180148749 (_Microsoft--WRL--Details--MakeAndInitialize_CActionCenterExperienceManager_IInspect_ea_180148749.c)
 * Callees:
 *     ?Release@CActionCenterExperienceManager@@UEAAKXZ @ 0x18006EB90 (-Release@CActionCenterExperienceManager@@UEAAKXZ.c)
 */

CActionCenterExperienceManager *__fastcall Microsoft::WRL::ComPtr<CActionCenterExperienceManager>::~ComPtr<CActionCenterExperienceManager>(
        CActionCenterExperienceManager **a1)
{
  CActionCenterExperienceManager *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CActionCenterExperienceManager *)CActionCenterExperienceManager::Release(result);
  }
  return result;
}
