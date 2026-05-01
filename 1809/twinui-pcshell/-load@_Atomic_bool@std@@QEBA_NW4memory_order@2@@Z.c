/*
 * XREFs of ?load@_Atomic_bool@std@@QEBA_NW4memory_order@2@@Z @ 0x18014C168
 * Callers:
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000CA00 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Atomic_bool::load(_BYTE *a1)
{
  return *a1 != 0;
}
