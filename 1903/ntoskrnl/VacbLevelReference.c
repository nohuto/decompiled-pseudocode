/*
 * XREFs of VacbLevelReference @ 0x14007B08C
 * Callers:
 *     CcSetVacbLargeOffset @ 0x14007ACE4 (CcSetVacbLargeOffset.c)
 *     CcAdjustVacbLevelLockCount @ 0x14007AFE4 (CcAdjustVacbLevelLockCount.c)
 *     CcExtendVacbArray @ 0x14012FC04 (CcExtendVacbArray.c)
 *     CcCalculateVacbLevelLockCount @ 0x14015AC4C (CcCalculateVacbLevelLockCount.c)
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
