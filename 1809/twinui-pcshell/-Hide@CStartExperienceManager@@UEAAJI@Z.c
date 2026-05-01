/*
 * XREFs of ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x18000C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18000C84C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x18001607C (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180017C5C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::Hide(CStartExperienceManager *this, int a2)
{
  struct CSingleViewShellExperience *v4; // rdx
  int v5; // eax
  int v6; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-68h]
  bool v10; // [rsp+40h] [rbp-48h] BYREF
  __int16 v11; // [rsp+44h] [rbp-44h] BYREF
  struct tagRECT v12; // [rsp+48h] [rbp-40h] BYREF
  struct tagRECT v13; // [rsp+58h] [rbp-30h] BYREF
  _WORD v14[4]; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( a2 && !*((_BYTE *)this + 592) )
  {
    wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService();
    CStartExperienceManager::GetMonitorInformation(
      (CStartExperienceManager *)((char *)this - 40),
      v4,
      &v13,
      (enum EDGEUI_TRAYSTUCKPLACE *)&v11,
      &v10,
      &v12,
      0LL);
    v14[1] = a2;
    v14[0] = 1;
    v14[2] = v11;
    v9 = 0;
    v14[3] = 0;
    RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v14, 8LL);
  }
  if ( a2 == 7 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 61) + 48LL))(*((_QWORD *)this + 61));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13F,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        v9);
    v6 = CSingleViewShellExperience::Hide((char *)this + 264, 0LL);
    if ( v6 >= 0 )
      return 0LL;
    v8 = 320LL;
    goto LABEL_13;
  }
  v6 = CSingleViewShellExperience::Hide((char *)this + 264, 0LL);
  if ( v6 < 0 )
  {
    v8 = 324LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v9);
  }
  return (unsigned int)v6;
}
