/*
 * XREFs of ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@2@Z @ 0x180021D40
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180044F30 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180011DC0 (TraceLoggingProviderEnabled.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001D960 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180022380 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18007138C (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180071430 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180071BD0 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180071DC8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800725D8 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(
        __int64 *a1,
        _QWORD *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r13
  _DWORD *v12; // r9
  unsigned int v13; // r11d
  _QWORD *v14; // rcx
  unsigned int v15; // ebx
  unsigned int v16; // r8d
  _DWORD *v17; // rdx
  int v18; // edi
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  unsigned int v22; // eax
  unsigned int v23; // ecx
  int v24; // r9d
  UCHAR v25; // dl
  unsigned int v26; // ebx
  unsigned int v27; // eax
  unsigned int v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+50h] [rbp-B0h]
  __int128 v33; // [rsp+60h] [rbp-A0h]
  __int128 v34; // [rsp+70h] [rbp-90h]
  __int128 v35; // [rsp+80h] [rbp-80h]
  __int128 v36; // [rsp+90h] [rbp-70h]
  __int128 v37; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-40h]
  _OWORD v40[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v41; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v42; // [rsp+100h] [rbp+0h]
  __int128 v43; // [rsp+110h] [rbp+10h]
  __int128 v44; // [rsp+120h] [rbp+20h]
  __int128 v45; // [rsp+130h] [rbp+30h]
  __int128 v46; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v47[2]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v48[2]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v49[4]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v50; // [rsp+194h] [rbp+94h]
  __int64 v51; // [rsp+1A8h] [rbp+A8h]
  __int64 v52; // [rsp+1B0h] [rbp+B0h]
  __int64 v53; // [rsp+1C0h] [rbp+C0h]
  __int64 v54; // [rsp+1D0h] [rbp+D0h]
  __int64 v55; // [rsp+1D8h] [rbp+D8h]
  __int64 v56; // [rsp+1E8h] [rbp+E8h]
  __int64 v57; // [rsp+1F0h] [rbp+F0h]
  __int64 v58; // [rsp+1F8h] [rbp+F8h]
  __int64 v59; // [rsp+200h] [rbp+100h]
  __int64 v60; // [rsp+208h] [rbp+108h]
  __int64 v61; // [rsp+210h] [rbp+110h]
  __int64 v62; // [rsp+228h] [rbp+128h]
  __int64 v63; // [rsp+230h] [rbp+130h]
  __int64 v64; // [rsp+238h] [rbp+138h]
  __int64 v65; // [rsp+240h] [rbp+140h]
  __int64 v66; // [rsp+248h] [rbp+148h]
  __int64 v67; // [rsp+250h] [rbp+150h]
  __int64 v68; // [rsp+258h] [rbp+158h]
  __int64 v69; // [rsp+260h] [rbp+160h]
  __int64 v70; // [rsp+268h] [rbp+168h]
  __int64 v71; // [rsp+270h] [rbp+170h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+280h] [rbp+180h] BYREF
  void *v73; // [rsp+290h] [rbp+190h]
  int v74; // [rsp+298h] [rbp+198h]
  int v75; // [rsp+29Ch] [rbp+19Ch]
  __int128 *v76; // [rsp+2A0h] [rbp+1A0h]
  __int64 v77; // [rsp+2A8h] [rbp+1A8h]
  char *v78; // [rsp+2B0h] [rbp+1B0h]
  __int64 v79; // [rsp+2B8h] [rbp+1B8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2C0h] [rbp+1C0h] BYREF
  int *v81; // [rsp+2E0h] [rbp+1E0h]
  __int64 v82; // [rsp+2E8h] [rbp+1E8h]
  int *v83; // [rsp+2F0h] [rbp+1F0h]
  __int64 v84; // [rsp+2F8h] [rbp+1F8h]
  __int128 *v85; // [rsp+300h] [rbp+200h]
  __int64 v86; // [rsp+308h] [rbp+208h]
  char *v87; // [rsp+310h] [rbp+210h]
  __int64 v88; // [rsp+318h] [rbp+218h]
  _OWORD *v89; // [rsp+320h] [rbp+220h]
  __int64 v90; // [rsp+328h] [rbp+228h]
  char *v91; // [rsp+330h] [rbp+230h]
  __int64 v92; // [rsp+338h] [rbp+238h]
  EVENT_DATA_DESCRIPTOR v93; // [rsp+340h] [rbp+240h] BYREF
  unsigned int *v94; // [rsp+360h] [rbp+260h]
  __int64 v95; // [rsp+368h] [rbp+268h]
  __int128 *v96; // [rsp+370h] [rbp+270h]
  __int64 v97; // [rsp+378h] [rbp+278h]
  char *v98; // [rsp+380h] [rbp+280h]
  __int64 v99; // [rsp+388h] [rbp+288h]

  ResetEvent((HANDLE)a1[5]);
  ResetEvent((HANDLE)a1[6]);
  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 24);
  memset_0(a2, 0, 0x80uLL);
  memset_0(v49, 0, 0xF0uLL);
  v10 = *(_QWORD *)(v8 + 32);
  v50 = -1LL;
  NtManagePartition(v10, 0LL, 0LL, v49, 240);
  *(_QWORD *)&v43 = 0LL;
  *((_QWORD *)&v41 + 1) = RmpPageSize * v52 - RmpPageSize * v71;
  *((_QWORD *)&v43 + 1) = RmpPageSize * v53 - RmpPageSize * v71;
  *((_QWORD *)&v42 + 1) = *((_QWORD *)&v41 + 1) - (RmpPageSize * v51 - RmpPageSize * v71);
  v11 = v9 + 456;
  *(_QWORD *)&v41 = RmpPageSize * v70 - RmpPageSize * v71;
  *(_QWORD *)&v44 = RmpPageSize * (v54 + v55 + v61 + v60 + v59 + v58 + v56 + v57);
  *((_QWORD *)&v44 + 1) = *((_QWORD *)&v43 + 1) - v44;
  *(_QWORD *)&v42 = RmpPageSize * v51 - RmpPageSize * v71;
  v45 = (unsigned __int64)(v62 + v69 + v68 + v67 + v66 + v65 + v64 + v63);
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v9 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v9 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&v41,
    v41,
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v37 = v41;
  v12 = (_DWORD *)(v9 + 472);
  v13 = 0;
  v39 = v43;
  v14 = a2 + 6;
  v38 = v42;
  v15 = 0;
  v40[1] = v45;
  v16 = 4;
  v40[0] = v44;
  v17 = (_DWORD *)(v11 + 16);
  *(_WORD *)(v8 + 188) = 0;
  v18 = 0;
  *((_QWORD *)&v32 + 1) = *((_QWORD *)&v37 + 1);
  *((_QWORD *)&v34 + 1) = *((_QWORD *)&v39 + 1);
  *(_QWORD *)&v32 = 0LL;
  v33 = 0uLL;
  *(_QWORD *)&v34 = 0LL;
  v35 = 0uLL;
  v36 = 0LL;
  do
  {
    if ( (unsigned __int64)v38 >= *v14 )
    {
      v22 = v16;
      if ( v15 > v16 )
        v22 = v15;
      v15 = v22;
      if ( *v17 )
        break;
    }
    --v14;
    --v17;
    --v16;
  }
  while ( v16 );
  v19 = a2 + 11;
  v20 = 4;
  do
  {
    if ( *((_QWORD *)&v40[0] + 1) >= *v19 )
    {
      v23 = v20;
      if ( v13 > v20 )
        v23 = v13;
      v13 = v23;
      if ( *v12 )
        break;
    }
    --v19;
    --v12;
    --v20;
  }
  while ( v20 );
  if ( v16 || v20 )
  {
    if ( v16 < v20 )
    {
      v18 = *(_DWORD *)(v11 + 4LL * v20 + 20);
      *((_QWORD *)&v35 + 1) = a2[v20 + 7];
      *(_QWORD *)&v35 = *((_QWORD *)&v39 + 1) - *((_QWORD *)&v35 + 1);
    }
    else
    {
      v18 = *(_DWORD *)(v11 + 4LL * v16);
      *(_QWORD *)&v33 = a2[v16 + 2];
      *((_QWORD *)&v33 + 1) = *((_QWORD *)&v37 + 1) - v33;
    }
    v46 = v32;
    v47[0] = v33;
    v47[1] = v34;
    v48[0] = v35;
    v48[1] = 0LL;
  }
  *a3 = v15;
  *a4 = v13;
  if ( !v18 )
  {
    *((_DWORD *)a1 + 23) &= ~2u;
    if ( hProvider > 5u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
    {
      v77 = 8LL;
      v76 = &v38;
      v78 = (char *)v40 + 8;
      v79 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1800AB288;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800AB288;
      v73 = &unk_180095DE6;
      UserData.Reserved = 2;
      v74 = 69;
      v75 = 1;
      v28 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    return 3LL;
  }
  if ( v18 != 4 && hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v29 = v18;
    v81 = &v29;
    v83 = &v30;
    v85 = &v38;
    v87 = (char *)v40 + 8;
    v89 = v47;
    v91 = (char *)v48 + 8;
    v82 = 4LL;
    v30 = v24;
    v84 = 4LL;
    v86 = 8LL;
    v88 = 8LL;
    v90 = 8LL;
    v92 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180095F72, 0LL, 0LL, 8u, &pData);
  }
  ResetEvent((HANDLE)a1[4]);
  switch ( v18 )
  {
    case 2:
      v27 = RmpMemoryMonitorEmptyWorkingSets(a1, &v37, &v46, 0LL);
      goto LABEL_44;
    case 3:
      v26 = RmpMemoryMonitorEmptyWorkingSets(a1, &v37, &v46, 1LL);
      if ( v26 != 2 )
        goto LABEL_45;
      *((_QWORD *)&v48[0] + 1) = a2[14];
      v27 = RmpMemoryMonitorEmptySystemStore(a1, &v37, &v46);
LABEL_44:
      v26 = v27;
      goto LABEL_45;
    case 4:
      RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_MEMORY_MONITOR_DATA *)a1);
      v26 = 3;
      goto LABEL_45;
    case 5:
      v27 = RmpMemoryMonitorCommitSaveAndRevokeExtraActivities(a1, &v37, &v46);
      goto LABEL_44;
  }
  if ( v18 != 7 )
  {
    v26 = 2;
LABEL_45:
    *((_DWORD *)a1 + 23) &= ~2u;
    goto LABEL_46;
  }
  v26 = RmpMemoryMonitorRevokeAnyHost(a1, &v37, &v46, a2);
  if ( v26 != 2 )
    goto LABEL_45;
LABEL_46:
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v25, 0LL) )
  {
    if ( v18 != 4 )
    {
      RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)*a1, (struct _RM_SYSTEM_MEMORY_METRICS *)&v37);
      if ( hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
        {
          v28 = v26;
          v94 = &v28;
          v96 = &v38;
          v98 = (char *)v40 + 8;
          v95 = 4LL;
          v97 = 8LL;
          v99 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180095F1C, 0LL, 0LL, 5u, &v93);
        }
      }
    }
  }
  return v26;
}
