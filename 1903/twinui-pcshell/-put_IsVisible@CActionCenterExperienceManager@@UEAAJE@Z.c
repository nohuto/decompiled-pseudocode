/*
 * XREFs of ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x180178B40
 * Callers:
 *     ?SetVisibilityWithoutAnimations@CActionCenterExperienceManager@@UEAAJE@Z @ 0x1801774E0 (-SetVisibilityWithoutAnimations@CActionCenterExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180050B50 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x180050BE8 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::put_IsVisible(CActionCenterExperienceManager *this, char a2)
{
  int v2; // r9d
  CActionCenterExperienceManager *v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 34);
  if ( (v2 == 2) != (a2 != 0) )
  {
    v3 = (CActionCenterExperienceManager *)((char *)this - 24);
    if ( v2 == 2 )
    {
      v4 = CActionCenterExperienceManager::Hide(v3);
      if ( v4 < 0 )
      {
        v5 = 321LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
        return (unsigned int)v4;
      }
    }
    else
    {
      v4 = CActionCenterExperienceManager::Show(v3);
      if ( v4 < 0 )
      {
        v5 = 325LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
