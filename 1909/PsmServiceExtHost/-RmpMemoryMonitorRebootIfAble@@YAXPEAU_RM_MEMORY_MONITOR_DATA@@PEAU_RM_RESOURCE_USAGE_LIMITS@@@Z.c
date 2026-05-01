/*
 * XREFs of ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180072228
 * Callers:
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800725D8 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180011DC0 (TraceLoggingProviderEnabled.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001D960 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180037130 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

void __fastcall RmpMemoryMonitorRebootIfAble(struct _RM_MEMORY_MONITOR_DATA *a1, struct _RM_RESOURCE_USAGE_LIMITS *a2)
{
  __int64 v2; // rax
  char v5; // di
  __int64 v6; // rsi
  int v7; // r9d
  char v8; // al
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  DWORD cbData; // [rsp+3Ch] [rbp-CCh] BYREF
  BYTE Data[8]; // [rsp+40h] [rbp-C8h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h] BYREF
  _BYTE SystemInformation[8]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v20; // [rsp+90h] [rbp-78h]
  _BYTE v21[16]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v23[48]; // [rsp+118h] [rbp+10h] BYREF
  int v24; // [rsp+148h] [rbp+40h]
  int v25; // [rsp+14Ch] [rbp+44h]
  int v26; // [rsp+150h] [rbp+48h]
  int v27; // [rsp+188h] [rbp+80h]
  int v28; // [rsp+18Ch] [rbp+84h]
  __int64 v29; // [rsp+268h] [rbp+160h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+278h] [rbp+170h] BYREF
  __int64 *v31; // [rsp+298h] [rbp+190h]
  int v32; // [rsp+2A0h] [rbp+198h]
  int v33; // [rsp+2A4h] [rbp+19Ch]
  __int64 *v34; // [rsp+2A8h] [rbp+1A0h]
  int v35; // [rsp+2B0h] [rbp+1A8h]
  int v36; // [rsp+2B4h] [rbp+1ACh]
  __int64 *v37; // [rsp+2B8h] [rbp+1B0h]
  int v38; // [rsp+2C0h] [rbp+1B8h]
  int v39; // [rsp+2C4h] [rbp+1BCh]
  __int64 *v40; // [rsp+2C8h] [rbp+1C0h]
  int v41; // [rsp+2D0h] [rbp+1C8h]
  int v42; // [rsp+2D4h] [rbp+1CCh]
  __int64 *v43; // [rsp+2D8h] [rbp+1D0h]
  int v44; // [rsp+2E0h] [rbp+1D8h]
  int v45; // [rsp+2E4h] [rbp+1DCh]
  __int64 *v46; // [rsp+2E8h] [rbp+1E0h]
  int v47; // [rsp+2F0h] [rbp+1E8h]
  int v48; // [rsp+2F4h] [rbp+1ECh]
  int *v49; // [rsp+2F8h] [rbp+1F0h]
  int v50; // [rsp+300h] [rbp+1F8h]
  int v51; // [rsp+304h] [rbp+1FCh]
  EVENT_DATA_DESCRIPTOR v52; // [rsp+308h] [rbp+200h] BYREF
  unsigned __int64 *v53; // [rsp+328h] [rbp+220h]
  int v54; // [rsp+330h] [rbp+228h]
  int v55; // [rsp+334h] [rbp+22Ch]

  v2 = *(_QWORD *)a1;
  phkResult = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, (UCHAR)a2, 0LL) )
  {
    memset_0(SystemInformation, 0, 0x40uLL);
    memset_0(v23, 0, 0x158uLL);
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    NtQuerySystemInformation(SystemPerformanceInformation, v23, 0x158u, 0LL);
    v7 = *((_DWORD *)a1 + 23);
    if ( (v7 & 2) == 0 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000009uLL) )
      {
        v33 = 0;
        v36 = 0;
        v39 = 0;
        v42 = 0;
        v45 = 0;
        v48 = 0;
        v13 = v24 * v20;
        v31 = &v13;
        v32 = 8;
        v35 = 8;
        v38 = 8;
        v41 = 8;
        v14 = v20 * v26;
        v34 = &v14;
        v44 = 8;
        v47 = 8;
        v50 = 1;
        v15 = v20 * v25;
        v37 = &v15;
        v16 = v29 * v20;
        v40 = &v16;
        v17 = v20 * v28;
        v43 = &v17;
        v18 = v20 * v27;
        v46 = &v18;
        v8 = *(_BYTE *)(v6 + 508) & 1;
        v51 = 0;
        LOBYTE(v9) = v8;
        v49 = &v9;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180095E2C, 0LL, 0LL, 9u, &pData);
        v7 = *((_DWORD *)a1 + 23);
      }
      v5 = 1;
      *((_DWORD *)a1 + 23) = v7 | 2;
    }
  }
  if ( (*(_BYTE *)(v6 + 508) & 1) != 0 )
  {
    if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult)
      || (cbData = 4, RegQueryValueExW(phkResult, L"RebootOnLowCommit", 0LL, 0LL, Data, &cbData))
      || *(_DWORD *)Data )
    {
      if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                           a1,
                           52,
                           *((_DWORD *)a1 + 18),
                           (enum _RM_MEMORY_MONITOR_EVENT *)&v13) )
      {
        RmpSystemMemoryMetricsQuery(*(struct _RM_PARTITION **)a1, (struct _RM_SYSTEM_MEMORY_METRICS *)v21);
        if ( v22 >= *((_QWORD *)a2 + 15) )
          __fastfail(0xC00001AD);
        if ( v5 && hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000009uLL) )
        {
          v55 = 0;
          v53 = &v22;
          v54 = 8;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180095CE6, 0LL, 0LL, 3u, &v52);
        }
      }
    }
  }
  if ( phkResult )
    RegCloseKey(phkResult);
}
