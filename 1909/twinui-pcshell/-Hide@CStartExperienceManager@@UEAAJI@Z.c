/*
 * XREFs of ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x180017710
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180013A18 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180015838 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4Rep.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180017BC8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x1800410B8 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA?AW4Variant_StartInSeparateUWP@@W4VariantReportingKind@2@_N@Z @ 0x18007ADD8 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA-AW4Vari.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::Hide(CStartExperienceManager *this, __int64 a2, __int64 a3)
{
  int v3; // esi
  struct CSingleViewShellExperience *v5; // rdx
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ebx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-78h]
  bool v12; // [rsp+40h] [rbp-58h] BYREF
  __int16 v13; // [rsp+44h] [rbp-54h] BYREF
  struct tagRECT v14; // [rsp+48h] [rbp-50h] BYREF
  struct tagRECT v15; // [rsp+58h] [rbp-40h] BYREF
  _WORD v16[4]; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v3 = a2;
  if ( (_DWORD)a2 && !*((_BYTE *)this + 600) )
  {
    wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService();
    CStartExperienceManager::GetMonitorInformation(
      (CStartExperienceManager *)((char *)this - 40),
      v5,
      &v15,
      (enum EDGEUI_TRAYSTUCKPLACE *)&v13,
      &v12,
      &v14,
      0LL);
    v16[2] = v13;
    v16[0] = 1;
    v16[1] = v3;
    v16[3] = 0;
    RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v16, 8LL, 0LL);
  }
  v6 = 0;
  wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::ReportUsageToService((__int64)this, a2, a3);
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::__private_GetVariant() == 3
    || (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::__private_GetVariant() == 4 )
  {
    v6 = 1;
  }
  if ( v3 == 7 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 48LL))(*((_QWORD *)this + 62));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x16E,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v7,
        v11);
    v8 = CSingleViewShellExperience::Hide(
           (__int64)this + 272,
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v6);
    if ( v8 >= 0 )
      return 0LL;
    v10 = 367LL;
    goto LABEL_16;
  }
  v8 = CSingleViewShellExperience::Hide(
         (__int64)this + 272,
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v6);
  if ( v8 < 0 )
  {
    v10 = 371LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v8,
      v11);
  }
  return (unsigned int)v8;
}
