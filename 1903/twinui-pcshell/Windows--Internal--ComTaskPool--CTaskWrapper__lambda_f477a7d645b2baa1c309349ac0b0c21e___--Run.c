/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f477a7d645b2baa1c309349ac0b0c21e___::Run @ 0x180333370
 * Callers:
 *     <none>
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18006CC60 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f477a7d645b2baa1c309349ac0b0c21e___::Run()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v0 = ActivateApplicationForExperienceWithPropertySet(
         L"Microsoft.ECApp_8wekyb3d8bbwe!App",
         &String2,
         (__int64)L"AccessibilityExperienceId",
         0LL,
         1u,
         0LL);
  if ( v0 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x287,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v0);
}
