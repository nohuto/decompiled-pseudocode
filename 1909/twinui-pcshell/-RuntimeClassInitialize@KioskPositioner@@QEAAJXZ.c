/*
 * XREFs of ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1803BDB28
 * Callers:
 *     ??$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803BA3F8 (--$MakeAndInitialize@VKioskPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??1?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAA@XZ @ 0x1800AD094 (--1-$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAA@XZ.c)
 *     ??4?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AD0D4 (--4-$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$unique_ptr@VPrimaryAppProxyBase@@U?$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AD140 (--4-$unique_ptr@VPrimaryAppProxyBase@@U-$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAE.c)
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800AD3A4 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800AD8C4 (-LoadShellLauncherConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguration.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801354D4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_KioskPositioner@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1803BDA68 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_KioskPositioner@@@wil@@CAX_NW4Report.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::RuntimeClassInitialize(KioskPositioner *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // edi
  const char *v7; // r9
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *AssignedAccessConfiguration; // rax
  Win32PrimaryAppProxy *v12; // [rsp+28h] [rbp-50h] BYREF
  char v13; // [rsp+30h] [rbp-48h]
  char v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h]
  GUID v16; // [rsp+48h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v15 = -2LL;
  try
  {
    v16 = GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986;
    v17 = 0LL;
    v18 = 0LL;
    v2 = CImmersiveShellComponent::RegisterServiceInformation(
           (KioskPositioner *)((char *)this + 40),
           (const struct CImmersiveShellComponent::ISC_SERVICE *)&v16,
           1LL);
    v6 = v2;
    if ( v2 >= 0 )
    {
      wil::Feature<__WilFeatureTraits_Feature_KioskPositioner>::ReportUsageToService(v4, v3, v5);
      KioskPositioner::LoadShellLauncherConfiguration(v9, &v12);
      if ( v14
        || (AssignedAccessConfiguration = (__int64 *)KioskPositioner::LoadAssignedAccessConfiguration(
                                                       v10,
                                                       (Win32PrimaryAppProxy **)&v16),
            std::optional<KioskPositioner::KioskPositionerConfiguration>::operator=(
              (__int64)&v12,
              AssignedAccessConfiguration),
            std::optional<KioskPositioner::KioskPositionerConfiguration>::~optional<KioskPositioner::KioskPositionerConfiguration>((__int64)&v16),
            v14) )
      {
        *((_BYTE *)this + 632) = 1;
        std::unique_ptr<PrimaryAppProxyBase>::operator=((__int64 *)this + 80, (__int64 *)&v12);
        *((_BYTE *)this + 633) = v13;
      }
      std::optional<KioskPositioner::KioskPositionerConfiguration>::~optional<KioskPositioner::KioskPositionerConfiguration>((__int64)&v12);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F9,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v2);
      result = v6;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x20B,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v7);
  }
  return result;
}
