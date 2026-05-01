/*
 * XREFs of ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18007BE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18007BED8 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18007BFAC (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::HotKeyInvoked(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 128) == 2 )
  {
    v2 = CActionCenterExperienceManager::Hide((CActionCenterExperienceManager *)(a1 - 32));
    if ( v2 >= 0 )
      return 0LL;
    v4 = 359LL;
  }
  else
  {
    v2 = CActionCenterExperienceManager::Show((CActionCenterExperienceManager *)(a1 - 32));
    if ( v2 >= 0 )
      return 0LL;
    v4 = 363LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
