/*
 * XREFs of ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180044F30
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@2@Z @ 0x180021D40 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180022380 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180037130 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@1@Z @ 0x1800392C8 (-RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18003AFAC (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x1800453D8 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18006D620 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@PEAPEAK@Z @ 0x18006D8D0 (-RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@PEAPEAK@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180070F6C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x180071340 (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckPeriod@@YAEKK@Z @ 0x180071360 (-RmpMemoryMonitorCheckPeriod@@YAEKK@Z.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180071DC8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 */

__int64 __fastcall RmpMemoryMonitorWorker(__int64 Parameter)
{
  __int64 v2; // r13
  DWORD TickCount; // eax
  int v4; // r14d
  int v5; // edx
  int v6; // r12d
  int i; // eax
  int v8; // edi
  unsigned int v9; // ebx
  int v10; // ebx
  DWORD v11; // edi
  struct _RM_PARTITION *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbx
  DWORD v16; // r15d
  _QWORD *Value; // rdi
  int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  bool v21; // zf
  DWORD v22; // edi
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int v29; // ebx
  struct _RM_PARTITION *v30; // rbx
  DWORD v31; // ebx
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  int v35; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int *v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v39[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v40; // [rsp+60h] [rbp-A0h]
  __int128 v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  unsigned __int64 v43; // [rsp+88h] [rbp-78h]
  __int128 v44; // [rsp+90h] [rbp-70h]
  __int128 v45; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v46; // [rsp+B0h] [rbp-50h]
  __int128 v47; // [rsp+C0h] [rbp-40h]
  __int128 v48; // [rsp+D0h] [rbp-30h]
  __int128 v49; // [rsp+E0h] [rbp-20h]
  _BYTE v50[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v51; // [rsp+F4h] [rbp-Ch]
  __int64 v52; // [rsp+108h] [rbp+8h]
  __int64 v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  __int64 v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  __int64 v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  __int64 v62; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+188h] [rbp+88h]
  __int64 v64; // [rsp+190h] [rbp+90h]
  __int64 v65; // [rsp+198h] [rbp+98h]
  __int64 v66; // [rsp+1A0h] [rbp+A0h]
  __int64 v67; // [rsp+1A8h] [rbp+A8h]
  __int64 v68; // [rsp+1B0h] [rbp+B0h]
  __int64 v69; // [rsp+1B8h] [rbp+B8h]
  __int64 v70; // [rsp+1C0h] [rbp+C0h]
  __int64 v71; // [rsp+1C8h] [rbp+C8h]
  __int64 v72; // [rsp+1D0h] [rbp+D0h]
  _OWORD v73[3]; // [rsp+1E0h] [rbp+E0h] BYREF
  _OWORD v74[2]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v75[13]; // [rsp+230h] [rbp+130h] BYREF
  unsigned __int64 v76; // [rsp+298h] [rbp+198h]
  _BYTE v77[144]; // [rsp+2B0h] [rbp+1B0h] BYREF
  EVENT_DATA_DESCRIPTOR v78; // [rsp+340h] [rbp+240h] BYREF
  int *v79; // [rsp+360h] [rbp+260h]
  __int64 v80; // [rsp+368h] [rbp+268h]
  char *v81; // [rsp+370h] [rbp+270h]
  __int64 v82; // [rsp+378h] [rbp+278h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+380h] [rbp+280h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v77);
  v2 = *(_QWORD *)(*(_QWORD *)Parameter + 24LL);
  TickCount = GetTickCount();
  *(_DWORD *)(Parameter + 80) = TickCount;
  *(_DWORD *)(Parameter + 88) = TickCount;
  RmpAcquireGlobalLock();
  RmpMemoryMonitorSetTimerIfEnabled(Parameter, 4LL);
  RmpReleaseGlobalLock();
  RmpPolicyPrepareToCheckMetrics(
    *(struct _RM_PARTITION **)Parameter,
    (struct _RM_POLICY *)(v2 + 400),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v75,
    0LL);
  v4 = 0;
  while ( 1 )
  {
    v5 = 7;
    if ( v4 >= 4 )
      v5 = 39;
    RmpMemoryMonitorWaitForEvents(
      (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
      v5,
      0xFFFFFFFF,
      (enum _RM_MEMORY_MONITOR_EVENT *)&v35);
    v6 = v35;
    if ( v35 == 2 )
      break;
    for ( i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(
                (__int64 *)Parameter,
                v75,
                (unsigned int *)&v34,
                (unsigned int *)&v33);
          i != 4;
          i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(
                (__int64 *)Parameter,
                v75,
                (unsigned int *)&v34,
                (unsigned int *)&v33) )
    {
      if ( i == 3 )
        break;
      v8 = 0;
      if ( i == 2 )
        goto LABEL_8;
    }
    v8 = i;
LABEL_8:
    v4 = v33;
    v9 = v34;
    RmpMemoryMonitorUpdateMemoryUsageMetrics(Parameter, v34, v33);
    if ( v9 > v4 )
      v4 = v9;
    if ( v8 == 4 )
      break;
    if ( v6 != 1 && v8 == 3 && hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180095D65, 0LL, 0LL, 2u, &pData);
    if ( *(_DWORD *)(v2 + 496) && RmpMemoryMonitorCheckPeriod(*(_DWORD *)(Parameter + 76), *(_DWORD *)(Parameter + 80)) )
    {
      RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
        (struct _RM_RESOURCE_USAGE_LIMITS *)v75);
      *(_DWORD *)(Parameter + 80) = GetTickCount();
    }
    if ( *(_DWORD *)(v2 + 500) )
    {
      v10 = *(_DWORD *)(Parameter + 88);
      v11 = *(_DWORD *)(Parameter + 84);
      if ( GetTickCount() - v10 >= v11 )
      {
        v12 = *(struct _RM_PARTITION **)Parameter;
        v13 = *(_QWORD *)(*(_QWORD *)Parameter + 24LL);
        memset_0(v75, 0, 0x80uLL);
        memset_0(v50, 0, 0xF0uLL);
        v14 = *((_QWORD *)v12 + 4);
        v51 = -1LL;
        NtManagePartition(v14, 0LL, 0LL, v50, 240);
        *(_QWORD *)&v47 = 0LL;
        *((_QWORD *)&v45 + 1) = RmpPageSize * v53 - RmpPageSize * v72;
        *(_QWORD *)&v46 = RmpPageSize * v52 - RmpPageSize * v72;
        *((_QWORD *)&v46 + 1) = *((_QWORD *)&v45 + 1) - v46;
        *((_QWORD *)&v47 + 1) = RmpPageSize * v54 - RmpPageSize * v72;
        *(_QWORD *)&v48 = RmpPageSize * (v55 + v56 + v62 + v61 + v60 + v59 + v57 + v58);
        *((_QWORD *)&v48 + 1) = *((_QWORD *)&v47 + 1) - v48;
        *(_QWORD *)&v45 = RmpPageSize * v71 - RmpPageSize * v72;
        v49 = (unsigned __int64)(v63 + v70 + v69 + v68 + v67 + v66 + v65 + v64);
        RmpPolicyComputeUsageLimits(
          (struct _RM_USAGE_LIMIT_SETTINGS *)(v13 + 400),
          (struct _RM_REMEDIATION_ACTIONS *)(v13 + 456),
          (struct _RM_SYSTEM_MEMORY_METRICS *)&v45,
          v45,
          (struct _RM_RESOURCE_USAGE_LIMITS *)v75);
        v73[0] = v45;
        v73[2] = v47;
        v73[1] = v46;
        v74[1] = v49;
        v74[0] = v48;
        *((_WORD *)v12 + 94) = 0;
        if ( *((_QWORD *)&v74[0] + 1) > v76 )
        {
          v39[0] = 0LL;
          v40 = 0LL;
          v41 = 0LL;
          v44 = 0LL;
          v39[1] = 0LL;
          v42 = 0LL;
          v43 = v76;
          v29 = RmpMemoryMonitorEmptyWorkingSets(Parameter, v73, v39, 6LL);
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
          {
            v36 = v29;
            v79 = &v36;
            v81 = (char *)v74 + 8;
            v80 = 4LL;
            v82 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180095D8E, 0LL, 0LL, 4u, &v78);
          }
          if ( !v29 )
            *(_DWORD *)(Parameter + 88) = GetTickCount();
        }
      }
    }
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 2624LL);
    if ( v15 )
    {
      v16 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v16) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800AC208 = GetCurrentThreadId();
      v18 = *(_DWORD *)(v15 + 160);
      if ( (v18 & 3) == 0 )
      {
        v19 = *(_QWORD *)(v15 + 144);
        *(_DWORD *)(v15 + 160) = v18 | 1;
        TpPostWork(v19);
      }
      dword_1800AC208 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v20 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v20 & 1) == 0 )
          __int2c();
        v21 = v20[1]-- == 1LL;
        if ( v21 )
          *v20 &= ~1uLL;
      }
    }
    if ( v6 == 1 || RmpMemoryMonitorCheckEvent(*(void **)(Parameter + 16)) )
    {
      v22 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v23 = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v22) )
          __int2c();
        *v23 |= 1uLL;
        ++v23[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800AC208 = GetCurrentThreadId();
      v24 = *(_QWORD *)(*(_QWORD *)Parameter + 24LL);
      if ( (*(_DWORD *)(v24 + 656) & 1) == 0 && (*(_BYTE *)(v24 + 2616) & 1) == 0 )
      {
        if ( (*(_DWORD *)(v24 + 656) & 2) != 0 )
        {
          v25 = 1000LL;
          if ( v4 <= 0 )
            v25 = 1000LL;
        }
        else
        {
          v25 = 0xFFFFFFFFLL;
        }
        v26 = -10000000LL;
        if ( v4 <= 0 )
          v26 = -50000000LL;
        v27 = *(_QWORD *)(Parameter + 64);
        v38 = v26;
        TpSetTimer(v27, &v38, 0LL, v25);
      }
      dword_1800AC208 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v28 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v28 & 1) == 0 )
          __int2c();
        v21 = v28[1]-- == 1LL;
        if ( v21 )
          *v28 &= ~1uLL;
      }
    }
  }
  TpSetTimer(*(_QWORD *)(Parameter + 64), 0LL, 0LL, 0LL);
  TpWaitForTimer(*(_QWORD *)(Parameter + 64), 1LL);
  v30 = *(struct _RM_PARTITION **)Parameter;
  RmpPartitionTableRemovePartition(
    (struct _RM_PARTITION_TABLE *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 312LL),
    *(struct _RM_PARTITION **)Parameter,
    &v37);
  RmpPartitionCleanup(v30);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v30);
  v31 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v31, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)v37);
  RtlWakeAddressAll(v37);
  return 0LL;
}
