/*
 * XREFs of _lambda_47c4ee998602912f584be58de1a81d16_::operator() @ 0x1801A7648
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_47c4ee998602912f584be58de1a81d16__&_::Run @ 0x1801A98D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_47c4ee998602912f584be58de1a81d16__-_--Run.c)
 * Callees:
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18004E258 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180050428 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180410A78 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_47c4ee998602912f584be58de1a81d16_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char v5; // si
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(_QWORD *)a1;
  v5 = 1;
  wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService(a1, a2, a3);
  v6 = CExperienceManagerAnimationHelper::End((CExperienceManagerAnimationHelper *)(*(_QWORD *)a1 + 704LL));
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x275,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  v7 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)(*(_QWORD *)a1 + 64LL));
  v8 = v7;
  if ( v7 >= 0 )
  {
    v8 = 0;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x277,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( v5 )
    *(_DWORD *)(v4 + 736) = 0;
  return v8;
}
