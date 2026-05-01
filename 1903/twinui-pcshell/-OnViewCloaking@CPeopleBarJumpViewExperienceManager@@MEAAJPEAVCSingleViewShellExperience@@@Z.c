/*
 * XREFs of ?OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180192AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1800502F4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_1800502F4.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180050428 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x180192894 (-GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewCloaking(
        CPeopleBarJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        __int64 a3)
{
  __int64 v3; // rdx
  int v5; // ebx
  int MonitorWorkArea; // eax
  __int64 v7; // rdx
  struct tagRECT v9; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((unsigned int *)this + 61);
  v5 = 92;
  if ( (_DWORD)v3 )
  {
    v3 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v3 )
    {
      v3 = (unsigned int)(v3 - 1);
      if ( (_DWORD)v3 )
      {
        if ( (_DWORD)v3 == 1 )
          v5 = 91;
      }
      else
      {
        v5 = 89;
      }
    }
    else
    {
      v5 = 90;
    }
  }
  else
  {
    v5 = 88;
  }
  wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService((__int64)this, v3, a3);
  MonitorWorkArea = CPeopleBarJumpViewExperienceManager::GetMonitorWorkArea((const RECT *)this - 3, &v9);
  if ( MonitorWorkArea < 0 )
  {
    v7 = 247LL;
LABEL_13:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorWorkArea);
    return 0LL;
  }
  MonitorWorkArea = CExperienceManagerAnimationHelper::Begin(
                      (__int64)this + 336,
                      *((ExperienceManagerUtils **)this + 4),
                      v5 | 0x200000u,
                      0LL,
                      0);
  if ( MonitorWorkArea < 0 )
  {
    v7 = 250LL;
    goto LABEL_13;
  }
  return 0LL;
}
