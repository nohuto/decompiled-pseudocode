/*
 * XREFs of ?RuntimeClassInitialize@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAAJXZ @ 0x1800A4CE0
 * Callers:
 *     ??$MakeAndInitialize@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800A0858 (--$MakeAndInitialize@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIUnknown@@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A4000 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1801624A8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::RuntimeClassInitialize(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  __int64 v6; // rdx
  const char *v7; // r9
  _QWORD v8[2]; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  _QWORD *v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8[1] = -2LL;
  v2 = AppUsageTelemetry::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && TlgKeywordOn(v2, 0x400000000000uLL) )
  {
    v8[0] = 0x2000000LL;
    v10 = v8;
    v11 = 8;
    v12 = 0;
    TlgWrite(v3, &unk_1804E3659, 0LL, 0LL, 3u, &pData);
  }
  v4 = CImmersiveShellComponent::RegisterServiceInformation(
         (Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *)((char *)this + 48),
         &GUID_94c92056_6eff_5931_8491_99b92030d9e2);
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    51LL,
    (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
    (const char *)(unsigned int)v4);
  __debugbreak();
  *(_DWORD *)(v6 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(v6 + 136),
                           (void *)0x36,
                           (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v7);
  return LODWORD(v8[0]);
}
