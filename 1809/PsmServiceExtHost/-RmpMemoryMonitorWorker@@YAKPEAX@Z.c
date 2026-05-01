/*
 * XREFs of ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x1800407A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180013338 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@2@Z @ 0x18001FC90 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180020050 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?LogTimedOutRevocationRequests@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180031A50 (-LogTimedOutRevocationRequests@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180036290 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@1@Z @ 0x180038474 (-RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_.c)
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180038CEC (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180040C28 (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800606C8 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@PEAPEAK@Z @ 0x180060978 (-RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@PEAPEAK@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180063E7C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x180064250 (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckPeriod@@YAEKK@Z @ 0x180064270 (-RmpMemoryMonitorCheckPeriod@@YAEKK@Z.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180064CD8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 */

__int64 __fastcall RmpMemoryMonitorWorker(__int64 Parameter)
{
  unsigned int *v2; // rsi
  DWORD TickCount; // eax
  int v4; // r12d
  int v5; // edx
  int v6; // r13d
  int i; // eax
  int v8; // edi
  unsigned int v9; // ebx
  int v10; // ebx
  DWORD v11; // edi
  struct _RM_PARTITION *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  __int64 v18; // rbx
  DWORD v19; // esi
  _QWORD *Value; // rdi
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  bool v24; // zf
  DWORD v25; // edi
  _QWORD *v26; // rbx
  int v27; // eax
  _QWORD *v28; // rax
  int v29; // ebx
  struct _RM_PARTITION *v30; // rbx
  DWORD v31; // ebx
  unsigned int *v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v35; // [rsp+3Ch] [rbp-C4h] BYREF
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v38[56]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v39; // [rsp+88h] [rbp-78h]
  __int128 v40; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-50h]
  __int128 v42; // [rsp+C0h] [rbp-40h]
  __int128 v43; // [rsp+D0h] [rbp-30h]
  __int128 v44; // [rsp+E0h] [rbp-20h]
  _BYTE v45[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v46; // [rsp+F4h] [rbp-Ch]
  __int64 v47; // [rsp+108h] [rbp+8h]
  __int64 v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  __int64 v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  __int64 v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  __int64 v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+188h] [rbp+88h]
  __int64 v59; // [rsp+190h] [rbp+90h]
  __int64 v60; // [rsp+198h] [rbp+98h]
  __int64 v61; // [rsp+1A0h] [rbp+A0h]
  __int64 v62; // [rsp+1A8h] [rbp+A8h]
  __int64 v63; // [rsp+1B0h] [rbp+B0h]
  __int64 v64; // [rsp+1B8h] [rbp+B8h]
  __int64 v65; // [rsp+1C0h] [rbp+C0h]
  __int64 v66; // [rsp+1C8h] [rbp+C8h]
  __int64 v67; // [rsp+1D0h] [rbp+D0h]
  _OWORD v68[3]; // [rsp+1E0h] [rbp+E0h] BYREF
  _OWORD v69[2]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v70[13]; // [rsp+230h] [rbp+130h] BYREF
  unsigned __int64 v71; // [rsp+298h] [rbp+198h]
  _BYTE v72[144]; // [rsp+2B0h] [rbp+1B0h] BYREF
  EVENT_DATA_DESCRIPTOR v73; // [rsp+340h] [rbp+240h] BYREF
  int *v74; // [rsp+360h] [rbp+260h]
  __int64 v75; // [rsp+368h] [rbp+268h]
  char *v76; // [rsp+370h] [rbp+270h]
  __int64 v77; // [rsp+378h] [rbp+278h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+380h] [rbp+280h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v72);
  v33 = (unsigned int *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 400LL);
  v2 = v33;
  TickCount = GetTickCount();
  *(_DWORD *)(Parameter + 80) = TickCount;
  *(_DWORD *)(Parameter + 88) = TickCount;
  RmpAcquireGlobalLock();
  RmpMemoryMonitorSetTimerIfEnabled(Parameter, 4LL);
  RmpReleaseGlobalLock();
  RmpPolicyPrepareToCheckMetrics(
    *(struct _RM_PARTITION **)Parameter,
    (struct _RM_POLICY *)v2,
    (struct _RM_RESOURCE_USAGE_LIMITS *)v70,
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
      (enum _RM_MEMORY_MONITOR_EVENT *)&v36);
    v6 = v36;
    if ( v36 == 2 )
      break;
    for ( i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep((__int64 *)Parameter, v70, &v35, (unsigned int *)&v34);
          i != 4;
          i = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep((__int64 *)Parameter, v70, &v35, (unsigned int *)&v34) )
    {
      if ( i == 3 )
        break;
      v8 = 0;
      if ( i == 2 )
        goto LABEL_8;
    }
    v8 = i;
LABEL_8:
    v4 = v34;
    v9 = v35;
    RmpMemoryMonitorUpdateMemoryUsageMetrics(Parameter, v35);
    if ( v9 > v4 )
      v4 = v9;
    if ( v8 == 4 )
      break;
    if ( v6 != 1 && v8 == 3 && dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008805D, 0LL, 0LL, 2u, &pData);
    if ( v2[24] && RmpMemoryMonitorCheckPeriod(*(_DWORD *)(Parameter + 76), *(_DWORD *)(Parameter + 80)) )
    {
      RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
        (struct _RM_RESOURCE_USAGE_LIMITS *)v70);
      *(_DWORD *)(Parameter + 80) = GetTickCount();
    }
    if ( v2[25] )
    {
      v10 = *(_DWORD *)(Parameter + 88);
      v11 = *(_DWORD *)(Parameter + 84);
      if ( GetTickCount() - v10 >= v11 )
      {
        v12 = *(struct _RM_PARTITION **)Parameter;
        v13 = *(_QWORD *)(*(_QWORD *)Parameter + 24LL);
        memset_0(v70, 0, 0x80uLL);
        memset_0(v45, 0, 0xF0uLL);
        v14 = *((_QWORD *)v12 + 4);
        v46 = -1LL;
        NtManagePartition(v14, 0LL, 0LL, v45, 240);
        v15 = RmpPageSize;
        v16 = RmpPageSize * v67;
        memset_0(&v40, 0, 0x50uLL);
        *(_QWORD *)&v44 = v58 + v65 + v64 + v63 + v62 + v61 + v60 + v59 + v44;
        *((_QWORD *)&v40 + 1) = v15 * v48 - v16;
        *((_QWORD *)&v42 + 1) = v15 * v49 - v16;
        *((_QWORD *)&v41 + 1) = v15 * v48 - v15 * v47;
        *(_QWORD *)&v41 = v15 * v47 - v16;
        *(_QWORD *)&v43 = v15 * (v50 + v51 + v57 + v56 + v55 + v54 + v52 + v53);
        *((_QWORD *)&v43 + 1) = *((_QWORD *)&v42 + 1) - v43;
        *(_QWORD *)&v40 = v15 * v66 - v16;
        RmpPolicyComputeUsageLimits(
          (struct _RM_USAGE_LIMIT_SETTINGS *)(v13 + 400),
          (struct _RM_REMEDIATION_ACTIONS *)(v13 + 456),
          (struct _RM_SYSTEM_MEMORY_METRICS *)&v40,
          v40,
          (struct _RM_RESOURCE_USAGE_LIMITS *)v70);
        v68[0] = v40;
        v68[2] = v42;
        v68[1] = v41;
        v69[1] = v44;
        v69[0] = v43;
        *((_WORD *)v12 + 94) = 0;
        v17 = v71;
        if ( *((_QWORD *)&v69[0] + 1) > v71 )
        {
          memset_0(v38, 0, 0x50uLL);
          v39 = v17;
          v29 = RmpMemoryMonitorEmptyWorkingSets(Parameter, v68, v38, 6LL);
          if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
          {
            v37 = v29;
            v74 = &v37;
            v76 = (char *)v69 + 8;
            v75 = 4LL;
            v77 = 8LL;
            TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180088086, 0LL, 0LL, 4u, &v73);
          }
          if ( !v29 )
            *(_DWORD *)(Parameter + 88) = GetTickCount();
        }
      }
    }
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 2688LL);
    if ( v18 )
    {
      v19 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v19) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_18009BF18 = GetCurrentThreadId();
      v21 = *(_DWORD *)(v18 + 184);
      if ( (v21 & 3) == 0 )
      {
        v22 = *(_QWORD *)(v18 + 168);
        *(_DWORD *)(v18 + 184) = v21 | 1;
        TpPostWork(v22);
      }
      if ( dword_18009B0B0 )
        ExecutionModel::ResourceManager::LogTimedOutRevocationRequests((ExecutionModel::ResourceManager *)v18);
      dword_18009BF18 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v23 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v23 & 1) == 0 )
          __int2c();
        v24 = v23[1]-- == 1LL;
        if ( v24 )
          *v23 &= ~1uLL;
      }
    }
    if ( v6 != 1 )
    {
      v2 = v33;
      if ( !RmpMemoryMonitorCheckEvent(*(void **)(Parameter + 16)) )
        continue;
    }
    v25 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v26 = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v25) )
        __int2c();
      *v26 |= 1uLL;
      ++v26[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    dword_18009BF18 = GetCurrentThreadId();
    v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 656LL);
    if ( (v27 & 1) == 0 )
      RmpMemoryMonitorSetTimer((__int64 *)Parameter, ((v27 & 2) != 0) + 1, v4);
    dword_18009BF18 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    v2 = v33;
    if ( HampLockTrackerId != -1 )
    {
      v28 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v28 & 1) == 0 )
        __int2c();
      v24 = v28[1]-- == 1LL;
      if ( v24 )
        *v28 &= ~1uLL;
    }
  }
  TpSetTimer(*(_QWORD *)(Parameter + 64), 0LL, 0LL, 0LL);
  TpWaitForTimer(*(_QWORD *)(Parameter + 64), 1LL);
  v30 = *(struct _RM_PARTITION **)Parameter;
  RmpPartitionTableRemovePartition(
    (struct _RM_PARTITION_TABLE *)(*(_QWORD *)(*(_QWORD *)Parameter + 24LL) + 312LL),
    *(struct _RM_PARTITION **)Parameter,
    &v33);
  RmpPartitionCleanup(v30);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v30);
  v31 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v31, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)v33);
  RtlWakeAddressAll(v33);
  return 0LL;
}
