/*
 * XREFs of ?ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z @ 0x1801E536C
 * Callers:
 *     wil::details::lambda_call__lambda_063ee9af54754716e70af8f1a99db6a8___::_lambda_call__lambda_063ee9af54754716e70af8f1a99db6a8___ @ 0x1801DA478 (wil--details--lambda_call__lambda_063ee9af54754716e70af8f1a99db6a8___--_lambda_call__lambda_063e.c)
 *     ?HolographicUsageUpdatedFromRegistry@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DC2FC (-HolographicUsageUpdatedFromRegistry@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801DE538 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 *     _lambda_921a5a526b2b3e27a0030faf56813293_::operator() @ 0x1801E47D8 (_lambda_921a5a526b2b3e27a0030faf56813293_--operator().c)
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801EAF5C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$Undocking_LegacyPolicySet@AEAH@CortanaUndocking_ApplyReplaceDecision@CortanaProactiveTelemetry@@QEAAXAEAH@Z @ 0x1801E1738 (--$Undocking_LegacyPolicySet@AEAH@CortanaUndocking_ApplyReplaceDecision@CortanaProactiveTelemetr.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801E3458 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801E3458.c)
 *     ??1CortanaUndocking_ApplyReplaceDecision@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3E24 (--1CortanaUndocking_ApplyReplaceDecision@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801E4E8C (-ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801E51C8 (-ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801E6ECC (-RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGKK@Z @ 0x1801E7314 (-SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGKK@Z.c)
 *     ?SetSpeechRegKey@CortanaStoreAppHelper@@YAJPEBGK@Z @ 0x1801E74EC (-SetSpeechRegKey@CortanaStoreAppHelper@@YAJPEBGK@Z.c)
 *     ?StartActivity@CortanaUndocking_ApplyReplaceDecision@CortanaProactiveTelemetry@@QEAAX_N0@Z @ 0x1801E780C (-StartActivity@CortanaUndocking_ApplyReplaceDecision@CortanaProactiveTelemetry@@QEAAX_N0@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E838C (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppHelper::ApplyReplaceDecision(CortanaStoreAppHelper *this, unsigned __int8 a2)
{
  unsigned __int8 v3; // si
  CortanaStoreAppHelper *v4; // rcx
  unsigned int v5; // r8d
  int v6; // eax
  CortanaStoreAppHelper *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  CortanaStoreAppHelper *v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r9d
  unsigned int v13; // r9d
  unsigned int v14; // r9d
  int v16; // [rsp+20h] [rbp-168h] BYREF
  __int64 v17; // [rsp+28h] [rbp-160h]
  _QWORD v18[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v17 = -2LL;
  v3 = (unsigned __int8)this;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"CortanaUndocking_ApplyReplaceDecision");
  v18[0] = &CortanaProactiveTelemetry::CortanaUndocking_ApplyReplaceDecision::`vftable';
  CortanaProactiveTelemetry::CortanaUndocking_ApplyReplaceDecision::StartActivity(
    (CortanaProactiveTelemetry::CortanaUndocking_ApplyReplaceDecision *)v18,
    v3 != 0,
    a2 != 0);
  if ( a2 )
  {
    v6 = CortanaStoreAppHelper::ApplyDeviceCapabilitiesToStoreAppOnReplace(v4);
    v8 = v6;
    if ( v6 < 0 )
    {
      v9 = 803LL;
      goto LABEL_18;
    }
    v6 = CortanaStoreAppHelper::ApplyNonDeviceCapabilitiesToStoreAppOnReplace(v7);
    v8 = v6;
    if ( v6 < 0 )
    {
      v9 = 804LL;
      goto LABEL_18;
    }
    v6 = CortanaStoreAppHelper::RevokeDeviceCapabilitiesFromSystemAppOnReplace(v10);
    v8 = v6;
    if ( v6 < 0 )
    {
      v9 = 807LL;
      goto LABEL_18;
    }
    v11 = 0LL;
  }
  else
  {
    v11 = 1LL;
  }
  v16 = v11;
  v6 = CortanaStoreAppHelper::SetSpeechRegKey(v4, (const unsigned __int16 *)v11, v5);
  v8 = v6;
  if ( v6 >= 0 )
  {
    CortanaProactiveTelemetry::CortanaUndocking_ApplyReplaceDecision::Undocking_LegacyPolicySet<int &>(
      (__int64)v18,
      (__int64)&v16);
    v6 = CortanaStoreAppHelper::SetCortanaRegKey(L"ReplaceCortanaCheckRefreshed", (const unsigned __int16 *)1, 1u, v12);
    v8 = v6;
    if ( v6 >= 0 )
    {
      v6 = CortanaStoreAppHelper::SetCortanaRegKey(L"CortanaIsReplaceable", (const unsigned __int16 *)v3, 0, v13);
      v8 = v6;
      if ( v6 >= 0 )
      {
        v6 = CortanaStoreAppHelper::SetCortanaRegKey(L"CortanaIsReplaced", (const unsigned __int16 *)a2, 0, v14);
        v8 = v6;
        if ( v6 >= 0 )
        {
          wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
          v8 = 0;
          goto LABEL_20;
        }
        v9 = 818LL;
      }
      else
      {
        v9 = 817LL;
      }
    }
    else
    {
      v9 = 816LL;
    }
  }
  else
  {
    v9 = 813LL;
  }
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
    (const char *)(unsigned int)v6);
LABEL_20:
  CortanaProactiveTelemetry::CortanaUndocking_ApplyReplaceDecision::~CortanaUndocking_ApplyReplaceDecision((CortanaProactiveTelemetry::CortanaUndocking_ApplyReplaceDecision *)v18);
  return v8;
}
