/*
 * XREFs of ??1?$ComPtr@VCActionCenterExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180193E58
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CActionCenterExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x180193909 (_Microsoft--WRL--Details--MakeAndInitialize_CActionCenterExperienceManager_IInspect_ea_180193909.c)
 * Callees:
 *     ?Release@CActionCenterExperienceManager@@UEAAKXZ @ 0x180076AE0 (-Release@CActionCenterExperienceManager@@UEAAKXZ.c)
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
