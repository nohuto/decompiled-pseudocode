/*
 * XREFs of ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180005250
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800053B8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@wil@@.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall RmpTelemetryTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_TIMER *a3)
{
  LSTATUS v4; // eax
  bool v5; // sf
  LSTATUS v6; // eax
  bool v7; // sf
  DWORD v8; // ebx
  const struct _TlgProvider_t *v9; // rcx
  int v10; // r9d
  __int64 v11; // r10
  LSTATUS v12; // eax
  bool v13; // sf
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  char *v22; // [rsp+110h] [rbp+10h]
  __int64 v23; // [rsp+118h] [rbp+18h]
  char *v24; // [rsp+120h] [rbp+20h]
  __int64 v25; // [rsp+128h] [rbp+28h]
  char *v26; // [rsp+130h] [rbp+30h]
  __int64 v27; // [rsp+138h] [rbp+38h]
  char *v28; // [rsp+140h] [rbp+40h]
  __int64 v29; // [rsp+148h] [rbp+48h]
  int *v30; // [rsp+150h] [rbp+50h]
  __int64 v31; // [rsp+158h] [rbp+58h]
  int *v32; // [rsp+160h] [rbp+60h]
  __int64 v33; // [rsp+168h] [rbp+68h]
  __int64 *v34; // [rsp+170h] [rbp+70h]
  __int64 v35; // [rsp+178h] [rbp+78h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  hKey = 0LL;
  phkResult = 0LL;
  RmpAcquireGlobalLock();
  if ( a2[77] )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
    {
      v23 = 8LL;
      v22 = (char *)(a2 + 68);
      v24 = (char *)(a2 + 70);
      v26 = (char *)(a2 + 72);
      v28 = (char *)(a2 + 74);
      v14 = a2[76];
      v30 = &v14;
      v32 = &v15;
      v34 = &v19;
      v25 = 8LL;
      v27 = 8LL;
      v29 = 8LL;
      v31 = v11;
      v15 = v10;
      v33 = v11;
      v19 = 0x1000000LL;
      v35 = 8LL;
      TlgWrite(v9, &unk_180092AB6, 0LL, 0LL, 9u, &pData);
    }
    *((_QWORD *)a2 + 35) = -1LL;
    *((_QWORD *)a2 + 34) = 0LL;
    *((_QWORD *)a2 + 36) = 0LL;
    *((_QWORD *)a2 + 37) = 0LL;
    *((_QWORD *)a2 + 38) = 0LL;
  }
  a2[142] = GetTickCount();
  RmpReleaseGlobalLock();
  RtlGetDeviceFamilyInfoEnum(0LL, &v16, 0LL);
  if ( v16 == 3 )
  {
    wil::Feature<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::ReportUsageToService();
    v4 = RegOpenKeyExW(
           HKEY_LOCAL_MACHINE,
           L"System\\CurrentControlSet\\Control\\Session Manager\\Memory Management",
           0,
           0x20006u,
           &hKey);
    v5 = v4 < 0;
    if ( v4 > 0 )
      v5 = 1;
    if ( !v5 )
    {
      v6 = RegOpenKeyExW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows NT\\ResourceManager",
             0,
             0x20006u,
             &phkResult);
      v7 = v6 < 0;
      if ( v6 > 0 )
        v7 = 1;
      if ( !v7 )
      {
        v12 = RegDeleteValueW(phkResult, L"SimulateCommitSavings");
        v13 = v12 < 0;
        if ( v12 > 0 )
          v13 = 1;
        if ( !v13 )
          RegDeleteValueW(hKey, L"SimulateCommitSavings");
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v8, 0LL);
  }
}
