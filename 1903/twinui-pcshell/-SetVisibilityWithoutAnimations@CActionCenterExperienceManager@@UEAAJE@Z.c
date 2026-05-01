/*
 * XREFs of ?SetVisibilityWithoutAnimations@CActionCenterExperienceManager@@UEAAJE@Z @ 0x1801774E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x180178B40 (-put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::SetVisibilityWithoutAnimations(
        CActionCenterExperienceManager *this,
        unsigned __int8 a2)
{
  int IsVisible; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_BYTE *)this + 368) = 1;
  IsVisible = CActionCenterExperienceManager::put_IsVisible(this, a2);
  v4 = IsVisible;
  if ( IsVisible >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)IsVisible);
  *((_BYTE *)this + 368) = 0;
  return v4;
}
