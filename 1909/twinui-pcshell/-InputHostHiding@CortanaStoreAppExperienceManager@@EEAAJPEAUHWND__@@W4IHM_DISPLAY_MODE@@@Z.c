/*
 * XREFs of ?InputHostHiding@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1801DC520
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x1801DB160 (-CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ.c)
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DD820 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::InputHostHiding(__int64 a1)
{
  CortanaStoreAppExperienceManager *v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (CortanaStoreAppExperienceManager *)(a1 - 136);
  CortanaStoreAppExperienceManager::CheckThread((CortanaStoreAppExperienceManager *)(a1 - 136));
  v2 = CortanaStoreAppExperienceManager::PositionCortanaWindow(v1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x54A,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
