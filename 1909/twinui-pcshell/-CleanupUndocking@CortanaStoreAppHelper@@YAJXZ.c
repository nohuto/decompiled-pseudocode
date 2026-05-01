/*
 * XREFs of ?CleanupUndocking@CortanaStoreAppHelper@@YAJXZ @ 0x1801E5510
 * Callers:
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801EAF5C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801281F0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$Undocking_LegacyPolicySet@AEAH@CortanaUndocking_ApplyReplaceDecision@CortanaProactiveTelemetry@@QEAAXAEAH@Z @ 0x1801E1738 (--$Undocking_LegacyPolicySet@AEAH@CortanaUndocking_ApplyReplaceDecision@CortanaProactiveTelemetr.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801E3458 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801E3458.c)
 *     ??1CortanaUndocking_CleanupUndocking@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3E50 (--1CortanaUndocking_CleanupUndocking@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?SetSpeechRegKey@CortanaStoreAppHelper@@YAJPEBGK@Z @ 0x1801E74EC (-SetSpeechRegKey@CortanaStoreAppHelper@@YAJPEBGK@Z.c)
 *     ?StartActivity@CortanaUndocking_CleanupUndocking@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801E79B4 (-StartActivity@CortanaUndocking_CleanupUndocking@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E838C (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 */

__int64 __fastcall CortanaStoreAppHelper::CleanupUndocking(CortanaStoreAppHelper *this)
{
  unsigned int v1; // ebx
  unsigned int ValueW; // eax
  CortanaStoreAppHelper *v3; // rcx
  unsigned int v4; // r8d
  int v5; // eax
  int v6; // edi
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  int pvData; // [rsp+44h] [rbp-BCh] BYREF
  int v10; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v11[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"CortanaUndocking_CleanupUndocking");
  v11[0] = &CortanaProactiveTelemetry::CortanaUndocking_CleanupUndocking::`vftable';
  CortanaProactiveTelemetry::CortanaUndocking_CleanupUndocking::StartActivity((CortanaProactiveTelemetry::CortanaUndocking_CleanupUndocking *)v11);
  RegDeleteKeyValueW(
    HKEY_CURRENT_USER,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
    L"ReplaceCortanaCheckRefreshed");
  RegDeleteKeyValueW(
    HKEY_CURRENT_USER,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
    L"CortanaIsReplaceable");
  RegDeleteKeyValueW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Search", L"CortanaIsReplaced");
  v1 = 0;
  pcbData = 4;
  pvData = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Speech_OneCore\\Preferences",
             L"LegacyCortanaOn",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  if ( ValueW == 2 )
    goto LABEL_7;
  if ( !ValueW )
  {
    v5 = CortanaStoreAppHelper::SetSpeechRegKey(v3, (const unsigned __int16 *)1, v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x355,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
        (const char *)(unsigned int)v5);
      v1 = v6;
      goto LABEL_8;
    }
    v10 = 1;
    CortanaProactiveTelemetry::CortanaUndocking_ApplyReplaceDecision::Undocking_LegacyPolicySet<int &>(
      (__int64)v11,
      (__int64)&v10);
LABEL_7:
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
    goto LABEL_8;
  }
  v1 = wil::details::in1diag3::Return_Win32(
         retaddr,
         851LL,
         (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
         (const char *)ValueW);
LABEL_8:
  CortanaProactiveTelemetry::CortanaUndocking_CleanupUndocking::~CortanaUndocking_CleanupUndocking((CortanaProactiveTelemetry::CortanaUndocking_CleanupUndocking *)v11);
  return v1;
}
