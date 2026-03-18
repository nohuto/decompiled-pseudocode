/*
 * XREFs of VacbLevelReference @ 0x140022BAC
 * Callers:
 *     CcAdjustVacbLevelLockCount @ 0x1400223FC (CcAdjustVacbLevelLockCount.c)
 *     CcSetVacbLargeOffset @ 0x1400224B0 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x14012C9A4 (CcExtendVacbArray.c)
 *     CcCalculateVacbLevelLockCount @ 0x14015FB4C (CcCalculateVacbLevelLockCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VacbLevelReference(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  v3 = 0LL;
  if ( !a3 )
    v3 = 2LL * (*(_DWORD *)(a1 + 152) & 0x200);
  return a2 + v3 + 1024;
}
