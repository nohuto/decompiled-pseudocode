/*
 * XREFs of ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@2@Z @ 0x18001FC90
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x1800407A0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000CBD4 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001B000 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180020050 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18006429C (-RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180064340 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180064AE0 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180064CD8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800654E0 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(
        __int64 *a1,
        _QWORD *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned int v12; // edi
  int v13; // ebx
  _DWORD *v14; // r9
  unsigned int v15; // r8d
  _QWORD *v16; // rcx
  _DWORD *v17; // rdx
  _QWORD *v18; // rdx
  unsigned int v19; // r11d
  unsigned int v20; // eax
  unsigned int *v21; // rax
  ULONG v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rcx
  int v27; // r9d
  UCHAR v28; // dl
  unsigned int v29; // edi
  unsigned int v30; // eax
  unsigned int *v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+60h] [rbp-A0h]
  __int128 v37; // [rsp+70h] [rbp-90h]
  __int128 v38; // [rsp+80h] [rbp-80h]
  __int128 v39; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-40h]
  _OWORD v43[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v44; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v45; // [rsp+100h] [rbp+0h]
  __int128 v46; // [rsp+110h] [rbp+10h]
  __int128 v47; // [rsp+120h] [rbp+20h]
  __int128 v48; // [rsp+130h] [rbp+30h]
  __int128 v49; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v50[2]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v51[2]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v52[4]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v53; // [rsp+194h] [rbp+94h]
  __int64 v54; // [rsp+1A8h] [rbp+A8h]
  __int64 v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1C0h] [rbp+C0h]
  __int64 v57; // [rsp+1D0h] [rbp+D0h]
  __int64 v58; // [rsp+1D8h] [rbp+D8h]
  __int64 v59; // [rsp+1E8h] [rbp+E8h]
  __int64 v60; // [rsp+1F0h] [rbp+F0h]
  __int64 v61; // [rsp+1F8h] [rbp+F8h]
  __int64 v62; // [rsp+200h] [rbp+100h]
  __int64 v63; // [rsp+208h] [rbp+108h]
  __int64 v64; // [rsp+210h] [rbp+110h]
  __int64 v65; // [rsp+228h] [rbp+128h]
  __int64 v66; // [rsp+230h] [rbp+130h]
  __int64 v67; // [rsp+238h] [rbp+138h]
  __int64 v68; // [rsp+240h] [rbp+140h]
  __int64 v69; // [rsp+248h] [rbp+148h]
  __int64 v70; // [rsp+250h] [rbp+150h]
  __int64 v71; // [rsp+258h] [rbp+158h]
  __int64 v72; // [rsp+260h] [rbp+160h]
  __int64 v73; // [rsp+268h] [rbp+168h]
  __int64 v74; // [rsp+270h] [rbp+170h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+280h] [rbp+180h] BYREF
  void *v76; // [rsp+290h] [rbp+190h]
  int v77; // [rsp+298h] [rbp+198h]
  int v78; // [rsp+29Ch] [rbp+19Ch]
  __int128 *v79; // [rsp+2A0h] [rbp+1A0h]
  __int64 v80; // [rsp+2A8h] [rbp+1A8h]
  char *v81; // [rsp+2B0h] [rbp+1B0h]
  __int64 v82; // [rsp+2B8h] [rbp+1B8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2C0h] [rbp+1C0h] BYREF
  int *v84; // [rsp+2E0h] [rbp+1E0h]
  __int64 v85; // [rsp+2E8h] [rbp+1E8h]
  int *v86; // [rsp+2F0h] [rbp+1F0h]
  __int64 v87; // [rsp+2F8h] [rbp+1F8h]
  __int128 *v88; // [rsp+300h] [rbp+200h]
  __int64 v89; // [rsp+308h] [rbp+208h]
  char *v90; // [rsp+310h] [rbp+210h]
  __int64 v91; // [rsp+318h] [rbp+218h]
  _OWORD *v92; // [rsp+320h] [rbp+220h]
  __int64 v93; // [rsp+328h] [rbp+228h]
  char *v94; // [rsp+330h] [rbp+230h]
  __int64 v95; // [rsp+338h] [rbp+238h]
  EVENT_DATA_DESCRIPTOR v96; // [rsp+340h] [rbp+240h] BYREF
  unsigned int **v97; // [rsp+360h] [rbp+260h]
  __int64 v98; // [rsp+368h] [rbp+268h]
  __int128 *v99; // [rsp+370h] [rbp+270h]
  __int64 v100; // [rsp+378h] [rbp+278h]
  char *v101; // [rsp+380h] [rbp+280h]
  __int64 v102; // [rsp+388h] [rbp+288h]

  v31 = a4;
  ResetEvent((HANDLE)a1[5]);
  ResetEvent((HANDLE)a1[6]);
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 24);
  memset_0(a2, 0, 0x80uLL);
  memset_0(v52, 0, 0xF0uLL);
  v9 = *(_QWORD *)(v7 + 32);
  v53 = -1LL;
  NtManagePartition(v9, 0LL, 0LL, v52, 240);
  v10 = RmpPageSize;
  v11 = RmpPageSize * v74;
  memset_0(&v44, 0, 0x50uLL);
  *(_QWORD *)&v48 = v65 + v66 + v67 + v68 + v69 + v70 + v71 + v72 + v48;
  *((_QWORD *)&v44 + 1) = v10 * v55 - v11;
  *((_QWORD *)&v46 + 1) = v10 * v56 - v11;
  *(_QWORD *)&v45 = v10 * v54 - v11;
  *((_QWORD *)&v45 + 1) = v10 * v55 - v10 * v54;
  *(_QWORD *)&v44 = v10 * v73 - v11;
  *(_QWORD *)&v47 = v10 * (v57 + v58 + v64 + v63 + v62 + v61 + v59 + v60);
  *((_QWORD *)&v47 + 1) = *((_QWORD *)&v46 + 1) - v47;
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v8 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v8 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&v44,
    v44,
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v40 = v44;
  v41 = v45;
  v12 = 0;
  v42 = v46;
  v43[0] = v47;
  v13 = 0;
  v43[1] = v48;
  *(_WORD *)(v7 + 188) = 0;
  memset_0(&v35, 0, 0x50uLL);
  v14 = (_DWORD *)(v8 + 472);
  v15 = 4;
  v16 = a2 + 6;
  *((_QWORD *)&v37 + 1) = *((_QWORD *)&v42 + 1);
  v17 = (_DWORD *)(v8 + 472);
  *((_QWORD *)&v35 + 1) = *((_QWORD *)&v40 + 1);
  do
  {
    if ( (unsigned __int64)v41 >= *v16 )
    {
      v24 = v15;
      if ( v12 > v15 )
        v24 = v12;
      v12 = v24;
      if ( *v17 )
        break;
    }
    --v16;
    --v17;
    --v15;
  }
  while ( v15 );
  v18 = a2 + 11;
  v19 = 0;
  v20 = 4;
  do
  {
    if ( *((_QWORD *)&v43[0] + 1) >= *v18 )
    {
      v25 = v20;
      if ( v19 > v20 )
        v25 = v19;
      v19 = v25;
      if ( *v14 )
        break;
    }
    --v18;
    --v14;
    --v20;
  }
  while ( v20 );
  if ( v15 || v20 )
  {
    if ( v15 < v20 )
    {
      v13 = *(_DWORD *)(v8 + 4LL * v20 + 476);
      *((_QWORD *)&v38 + 1) = a2[v20 + 7];
      *(_QWORD *)&v38 = *((_QWORD *)&v42 + 1) - *((_QWORD *)&v38 + 1);
    }
    else
    {
      v26 = a2[v15 + 2];
      v13 = *(_DWORD *)(v8 + 4LL * v15 + 456);
      *((_QWORD *)&v36 + 1) = *((_QWORD *)&v40 + 1) - v26;
      *(_QWORD *)&v36 = v26;
    }
    v49 = v35;
    v50[1] = v37;
    v50[0] = v36;
    v51[1] = v39;
    v51[0] = v38;
  }
  v21 = v31;
  *a3 = v12;
  *v21 = v19;
  if ( !v13 )
  {
    *((_DWORD *)a1 + 23) &= ~2u;
    if ( dword_18009B0B0 > 5u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
    {
      v80 = 8LL;
      v79 = &v41;
      v81 = (char *)v43 + 8;
      v82 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800880D3 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 1LL;
      UserData.Ptr = (ULONGLONG)off_18009B0B8;
      v23 = *(unsigned __int16 *)off_18009B0B8;
      v76 = &unk_1800880DE;
      UserData.Size = v23;
      UserData.Reserved = 2;
      v77 = 69;
      v78 = 1;
      EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    return 3LL;
  }
  if ( v13 != 4 && dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
  {
    v32 = v13;
    v84 = &v32;
    v86 = &v33;
    v88 = &v41;
    v90 = (char *)v43 + 8;
    v92 = v50;
    v94 = (char *)v51 + 8;
    v85 = 4LL;
    v33 = v27;
    v87 = 4LL;
    v89 = 8LL;
    v91 = 8LL;
    v93 = 8LL;
    v95 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008826A, 0LL, 0LL, 8u, &pData);
  }
  ResetEvent((HANDLE)a1[4]);
  switch ( v13 )
  {
    case 2:
      v30 = RmpMemoryMonitorEmptyWorkingSets(a1, &v40, &v49, 0LL);
      goto LABEL_44;
    case 3:
      v29 = RmpMemoryMonitorEmptyWorkingSets(a1, &v40, &v49, 1LL);
      if ( v29 != 2 )
        goto LABEL_45;
      *((_QWORD *)&v51[0] + 1) = a2[14];
      v30 = RmpMemoryMonitorEmptySystemStore(a1, &v40, &v49);
LABEL_44:
      v29 = v30;
      goto LABEL_45;
    case 4:
      RmpMemoryMonitorCheckQueueDecommitRepurposedMemory((struct _RM_MEMORY_MONITOR_DATA *)a1);
      v29 = 3;
      goto LABEL_45;
    case 5:
      v30 = RmpMemoryMonitorCommitSaveAndRevokeExtraActivities(a1, &v40, &v49);
      goto LABEL_44;
  }
  if ( v13 != 7 )
  {
    v29 = 2;
LABEL_45:
    *((_DWORD *)a1 + 23) &= ~2u;
    goto LABEL_46;
  }
  v29 = RmpMemoryMonitorRevokeAnyHost(a1, &v40, &v49, a2);
  if ( v29 != 2 )
    goto LABEL_45;
LABEL_46:
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_18009B0B0, v28, 0LL) )
  {
    if ( v13 != 4 )
    {
      RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)*a1, (struct _RM_SYSTEM_MEMORY_METRICS *)&v40);
      if ( dword_18009B0B0 > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
        {
          LODWORD(v31) = v29;
          v97 = &v31;
          v99 = &v41;
          v101 = (char *)v43 + 8;
          v98 = 4LL;
          v100 = 8LL;
          v102 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180088214, 0LL, 0LL, 5u, &v96);
        }
      }
    }
  }
  return v29;
}
