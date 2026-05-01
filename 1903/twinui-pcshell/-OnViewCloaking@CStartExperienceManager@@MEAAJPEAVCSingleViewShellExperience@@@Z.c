/*
 * XREFs of ?OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800500B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x1800415DC (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1800502F4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_1800502F4.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180050428 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewCloaking(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // ebx
  int v5; // eax
  bool v7; // [rsp+40h] [rbp-38h] BYREF
  int v8; // [rsp+44h] [rbp-34h] BYREF
  struct tagRECT v9; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT v10; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*((_BYTE *)this + 552)
    && (int)CStartExperienceManager::GetMonitorInformation(
              (CStartExperienceManager *)((char *)this - 88),
              a2,
              &v10,
              (enum EDGEUI_TRAYSTUCKPLACE *)&v8,
              &v7,
              &v9,
              0LL) >= 0 )
  {
    v4 = 81;
    if ( *((_BYTE *)a2 + 52) )
    {
      v4 = 82;
    }
    else if ( v8 )
    {
      switch ( v8 )
      {
        case 1:
          v4 = 79;
          break;
        case 2:
          v4 = 78;
          break;
        case 3:
          v4 = 80;
          break;
      }
    }
    else
    {
      v4 = 77;
    }
    wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService();
    v5 = CExperienceManagerAnimationHelper::Begin((char *)this + 488, *((_QWORD *)this + 31), v4 | 0x200000u, 0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x271,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        0);
  }
  return 0LL;
}
