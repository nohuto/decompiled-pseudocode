/*
 * XREFs of ?IsSystemEligibleForNewCortanaApp@CortanaStoreAppHelper@@YAJPEAE@Z @ 0x1801C73CC
 * Callers:
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801CBF3C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180013C14 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ @ 0x18003D6D8 (-IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x18008088C (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?IsMixedRealitySetupCompleteForCurrentUser@@YA_NXZ @ 0x1801BD7DC (-IsMixedRealitySetupCompleteForCurrentUser@@YA_NXZ.c)
 *     ??$Undocking_CortanaExperience@AEA_N@CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAAXAEA_N@Z @ 0x1801C1F34 (--$Undocking_CortanaExperience@AEA_N@CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@.c)
 *     ??$Undocking_MixedReality@AEA_N@CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAAXAEA_N@Z @ 0x1801C2C50 (--$Undocking_MixedReality@AEA_N@CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAAX.c)
 *     ??$Undocking_PPIEdition@AEA_N@CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAAXAEA_N@Z @ 0x1801C2EF4 (--$Undocking_PPIEdition@AEA_N@CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAAXAE.c)
 *     ??$Undocking_WindowsS@AEAE@CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x1801C3AD0 (--$Undocking_WindowsS@AEAE@CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAAXAEAE@.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801C4438 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801C4438.c)
 *     ??1CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801C4F0C (--1CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801C909C (-StartActivity@CortanaUndocking_SystemEligible@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801C936C (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppHelper::IsSystemEligibleForNewCortanaApp(
        CortanaStoreAppHelper *this,
        unsigned __int8 *a2)
{
  CortanaUndockingHelpers *v3; // rcx
  int WindowsLockdownMode; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  char v7; // di
  char v8; // si
  bool *v9; // r8
  char v11; // [rsp+20h] [rbp-E0h] BYREF
  __int16 v12; // [rsp+21h] [rbp-DFh] BYREF
  char v13; // [rsp+23h] [rbp-DDh] BYREF
  int v14; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v15; // [rsp+28h] [rbp-D8h]
  _QWORD v16[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v15 = -2LL;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"CortanaUndocking_SystemEligible");
  v16[0] = &CortanaProactiveTelemetry::CortanaUndocking_SystemEligible::`vftable';
  CortanaProactiveTelemetry::CortanaUndocking_SystemEligible::StartActivity((CortanaProactiveTelemetry::CortanaUndocking_SystemEligible *)v16);
  *(_BYTE *)this = 0;
  if ( !CortanaUndockingHelpers::IsUndockCortanaEnabled(v3) )
    goto LABEL_15;
  v14 = 0;
  WindowsLockdownMode = WldpQueryWindowsLockdownMode((enum WLDP_WINDOWS_LOCKDOWN_MODE *)&v14);
  v5 = WindowsLockdownMode;
  if ( WindowsLockdownMode >= 0 )
  {
    v7 = 1;
    if ( v14 )
    {
      v11 = 1;
      v8 = 1;
    }
    else
    {
      v11 = 0;
      v8 = 0;
    }
    CortanaProactiveTelemetry::CortanaUndocking_SystemEligible::Undocking_WindowsS<unsigned char &>((__int64)v16, &v11);
    WindowsLockdownMode = CortanaCapabilities::HasCortanaCapabilities(
                            2048,
                            (enum CortanaCapabilities::CapabilityFlags *)&v13,
                            v9);
    v5 = WindowsLockdownMode;
    if ( WindowsLockdownMode < 0 )
    {
      v6 = 124LL;
      goto LABEL_9;
    }
    CortanaProactiveTelemetry::CortanaUndocking_SystemEligible::Undocking_CortanaExperience<bool &>(
      (__int64)v16,
      (__int64)&v13);
    LOBYTE(v12) = IsPPIEdition();
    CortanaProactiveTelemetry::CortanaUndocking_SystemEligible::Undocking_PPIEdition<bool &>(
      (__int64)v16,
      (__int64)&v12);
    HIBYTE(v12) = IsMixedRealitySetupCompleteForCurrentUser();
    CortanaProactiveTelemetry::CortanaUndocking_SystemEligible::Undocking_MixedReality<bool &>(
      (__int64)v16,
      (__int64)&v12 + 1);
    if ( v12 || v8 || !v13 )
      v7 = 0;
    *(_BYTE *)this = v7;
LABEL_15:
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
    v5 = 0;
    goto LABEL_16;
  }
  v6 = 119LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
    (const char *)(unsigned int)WindowsLockdownMode);
LABEL_16:
  CortanaProactiveTelemetry::CortanaUndocking_SystemEligible::~CortanaUndocking_SystemEligible((CortanaProactiveTelemetry::CortanaUndocking_SystemEligible *)v16);
  return v5;
}
