/*
 * XREFs of ?OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000C8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18000C84C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x18000CF40 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_18000CF40.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x18001607C (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewCloaking(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  int v8; // eax
  bool v10; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-34h] BYREF
  struct tagRECT v12; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT v13; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*((_BYTE *)this + 544)
    && (int)CStartExperienceManager::GetMonitorInformation(
              (CStartExperienceManager *)((char *)this - 88),
              a2,
              &v13,
              (enum EDGEUI_TRAYSTUCKPLACE *)&v11,
              &v10,
              &v12,
              0LL) >= 0 )
  {
    v7 = 81;
    if ( *((_BYTE *)a2 + 52) )
    {
      v7 = 82;
    }
    else
    {
      v5 = v11;
      if ( v11 )
      {
        v5 = v11 - 1;
        if ( v11 == 1 )
        {
          v7 = 79;
        }
        else
        {
          v5 = v11 - 2;
          if ( v11 == 2 )
          {
            v7 = 78;
          }
          else if ( v11 == 3 )
          {
            v7 = 80;
          }
        }
      }
      else
      {
        v7 = 77;
      }
    }
    wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService(v5, v4, v6);
    v8 = CExperienceManagerAnimationHelper::Begin((char *)this + 480, *((_QWORD *)this + 30), v7 | 0x200000u, 0LL);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x238,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        0);
  }
  return 0LL;
}
