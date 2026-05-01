/*
 * XREFs of ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003DEE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18003E0A0 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18003E190 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800493A4 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 */

void __fastcall RmpTelemetryTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  unsigned int v4; // edx
  LSTATUS v5; // eax
  bool v6; // sf
  LSTATUS v7; // eax
  bool v8; // sf
  DWORD v9; // ebx
  const struct _TlgProvider_t *v10; // rcx
  int v11; // r9d
  __int64 v12; // r10
  LSTATUS v13; // eax
  bool v14; // sf
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v16; // [rsp+34h] [rbp-CCh]
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v18; // [rsp+3Ch] [rbp-C4h]
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hKey; // [rsp+48h] [rbp-B8h] BYREF
  HKEY phkResult; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  char *v24; // [rsp+110h] [rbp+10h]
  __int64 v25; // [rsp+118h] [rbp+18h]
  char *v26; // [rsp+120h] [rbp+20h]
  __int64 v27; // [rsp+128h] [rbp+28h]
  char *v28; // [rsp+130h] [rbp+30h]
  __int64 v29; // [rsp+138h] [rbp+38h]
  char *v30; // [rsp+140h] [rbp+40h]
  __int64 v31; // [rsp+148h] [rbp+48h]
  int *v32; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+158h] [rbp+58h]
  int *v34; // [rsp+160h] [rbp+60h]
  __int64 v35; // [rsp+168h] [rbp+68h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  hKey = 0LL;
  phkResult = 0LL;
  RmpAcquireGlobalLock();
  RmpPartitionTableActOnActivePartitions(
    (struct _RM_PARTITION_TABLE *)(a2 + 312),
    v4,
    (int (*)(struct _RM_PARTITION *, void *))RmpTelemetryLogPartitionState,
    0LL);
  if ( *((_DWORD *)a2 + 77) )
  {
    if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x200000000001uLL) )
    {
      v33 = v12;
      v25 = (unsigned int)(v12 + 4);
      v24 = a2 + 272;
      v26 = a2 + 280;
      v28 = a2 + 288;
      v30 = a2 + 296;
      v17 = *((_DWORD *)a2 + 76);
      v32 = &v17;
      v34 = &v15;
      v27 = v25;
      v29 = v25;
      v31 = v25;
      v15 = v11;
      v35 = v12;
      TlgWrite(v10, &unk_180084CD7, 0LL, 0LL, v12 + 4, &pData);
    }
    *((_QWORD *)a2 + 35) = -1LL;
    *((_QWORD *)a2 + 34) = 0LL;
    *((_QWORD *)a2 + 36) = 0LL;
    *((_QWORD *)a2 + 37) = 0LL;
    *((_QWORD *)a2 + 38) = 0LL;
  }
  *((_DWORD *)a2 + 142) = GetTickCount();
  RmpReleaseGlobalLock();
  RtlGetDeviceFamilyInfoEnum(0LL, &v19, 0LL);
  if ( v19 == 3 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::GetCachedFeatureEnabledState();
    v15 = 1;
    LOBYTE(v16) = 1;
    v17 = 1;
    v18 = v16;
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::GetFeaturePropertyCache'::`2'::data,
      16669694LL,
      &v17);
    v5 = RegOpenKeyExW(
           HKEY_LOCAL_MACHINE,
           L"System\\CurrentControlSet\\Control\\Session Manager\\Memory Management",
           0,
           0x20006u,
           &hKey);
    v6 = v5 < 0;
    if ( v5 > 0 )
      v6 = 1;
    if ( !v6 )
    {
      v7 = RegOpenKeyExW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows NT\\ResourceManager",
             0,
             0x20006u,
             &phkResult);
      v8 = v7 < 0;
      if ( v7 > 0 )
        v8 = 1;
      if ( !v8 )
      {
        v13 = RegDeleteValueW(phkResult, L"SimulateCommitSavings");
        v14 = v13 < 0;
        if ( v13 > 0 )
          v14 = 1;
        if ( !v14 )
          RegDeleteValueW(hKey, L"SimulateCommitSavings");
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
}
