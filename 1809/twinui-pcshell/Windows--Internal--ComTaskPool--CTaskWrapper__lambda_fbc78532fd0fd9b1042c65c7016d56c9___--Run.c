/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fbc78532fd0fd9b1042c65c7016d56c9___::Run @ 0x180094F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800629D0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fbc78532fd0fd9b1042c65c7016d56c9___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = ActivateApplicationForExperienceWithPropertySet(
         (const unsigned __int16 *)qword_18050F1B8,
         &word_180411F30,
         (__int64)L"AccessibilityExperienceId",
         a4,
         1u,
         0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A3,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
}
