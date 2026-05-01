/*
 * XREFs of ?OnViewCloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800916E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1800502F4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_1800502F4.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180050428 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z @ 0x180092858 (-SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewCloaking(
        ExperienceManagerUtils **this,
        struct CSingleViewShellExperience *a2,
        __int64 a3)
{
  __int64 v3; // rdx
  int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((unsigned int *)this + 76);
  v5 = 81;
  if ( (_DWORD)v3 )
  {
    v3 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v3 )
    {
      v3 = (unsigned int)(v3 - 1);
      if ( (_DWORD)v3 )
      {
        if ( (_DWORD)v3 == 1 )
          v5 = 80;
      }
      else
      {
        v5 = 78;
      }
    }
    else
    {
      v5 = 79;
    }
  }
  else
  {
    v5 = 77;
  }
  wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService((__int64)this, v3, a3);
  v6 = CExperienceManagerAnimationHelper::Begin((__int64)(this + 34), this[6], v5 | 0x20000000u, 0LL, 0);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x150,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)(unsigned int)v6);
  CBaseTrayFlyoutExperienceManager::SetBorderAccent((CBaseTrayFlyoutExperienceManager *)(this - 6), 0);
  return 0LL;
}
