/*
 * XREFs of ?exchange@_Atomic_bool@std@@QEAA_N_NW4memory_order@2@@Z @ 0x18008D39C
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800232B0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Atomic_bool::exchange(char *a1)
{
  char v1; // al

  v1 = *a1;
  *a1 = 0;
  return v1 != 0;
}
