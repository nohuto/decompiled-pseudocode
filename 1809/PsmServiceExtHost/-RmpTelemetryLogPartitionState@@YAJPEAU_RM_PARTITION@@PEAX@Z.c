/*
 * XREFs of ?RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800367F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18001270C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001B000 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180036C20 (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z @ 0x180036C48 (-RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180036CD8 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpTelemetryLogPartitionState(struct _RM_PARTITION *a1, void *a2)
{
  char *v2; // rdi
  unsigned int v3; // ebx
  struct _RM_PARTITION *v4; // r13
  int v5; // esi
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // r11
  int v12; // edx
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx
  int v17; // ecx
  unsigned int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // ecx
  unsigned int v22; // r9d
  __int64 v23; // r10
  unsigned __int64 v24; // rdi
  ULONGLONG v25; // r11
  int *v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  unsigned int v29; // ebx
  int v30; // r9d
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // rax
  bool v34; // cc
  unsigned __int64 v36; // rax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v40; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v42; // [rsp+40h] [rbp-C0h] BYREF
  int v43; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+58h] [rbp-A8h]
  __int64 v47; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h]
  __int64 v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  unsigned int *v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  unsigned int *v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  unsigned int *v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v62; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v63; // [rsp+100h] [rbp+0h]
  unsigned __int64 *v64; // [rsp+110h] [rbp+10h]
  unsigned __int64 v65; // [rsp+118h] [rbp+18h]
  unsigned int *v66; // [rsp+120h] [rbp+20h]
  unsigned __int64 v67; // [rsp+128h] [rbp+28h]
  unsigned int *v68; // [rsp+130h] [rbp+30h]
  unsigned __int64 v69; // [rsp+138h] [rbp+38h]
  int *v70; // [rsp+140h] [rbp+40h]
  unsigned __int64 v71; // [rsp+148h] [rbp+48h]
  unsigned int *v72; // [rsp+150h] [rbp+50h]
  unsigned __int64 v73; // [rsp+158h] [rbp+58h]

  v2 = (char *)a1 + 144;
  v3 = 0;
  v41 = (unsigned __int64)a1;
  *((_WORD *)a1 + 94) = 0;
  v4 = a1;
  RmpPolicyPopulateActivityHostMetrics(a1, 0LL, (char *)a1 + 144, 10LL, RmpPolicyFilterActivityHostWithFlags, 2LL);
  v5 = 0;
  v6 = 0;
  v45 = 0LL;
  v7 = 0;
  v46 = 0LL;
  v8 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( *((_DWORD *)v2 + 9) )
  {
    do
    {
      v9 = RmpActivityHostIsRunnable(
             *(struct _RM_ACTIVITY_HOST **)(*(_QWORD *)v2 + ((unsigned __int64)v3 << 6) + 48),
             1u) != 0
         ? 2
         : 0;
      v13 = v12 | v9;
      if ( *(char *)(v11 + 1106) >= 0 )
        v13 = v9;
      ++*((_DWORD *)&v45 + v13);
      if ( (*(_BYTE *)(v10 + 62) & 2) != 0 )
      {
        v14 = *((_DWORD *)&v47 + v13);
        v15 = *(_QWORD *)v10 >> 20;
        if ( v15 > 0xFFFFFFFF )
          LODWORD(v15) = -1;
        v16 = v15 + v14;
        v17 = -1;
        if ( v16 >= v14 )
          v17 = v16;
        *((_DWORD *)&v47 + v13) = v17;
      }
      if ( (*(_BYTE *)(v10 + 62) & 8) != 0 )
      {
        v18 = *((_DWORD *)&v49 + v13);
        v19 = *(_QWORD *)(v10 + 24) >> 20;
        if ( v19 > 0xFFFFFFFF )
          LODWORD(v19) = -1;
        v20 = v19 + v18;
        v21 = -1;
        if ( v20 >= v18 )
          v21 = v20;
        *((_DWORD *)&v49 + v13) = v21;
      }
      if ( (_DWORD)v13 == 1 && (int)RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)v11, &v44) >= 0 )
      {
        v36 = v44 >> 20;
        if ( v44 >> 20 > 0xFFFFFFFF )
          LODWORD(v36) = -1;
        v37 = v36 + v8;
        v38 = -1;
        if ( v37 >= v8 )
          v38 = v37;
        v8 = v38;
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)v2 + 9) );
    v7 = v48;
    v5 = v47;
    v6 = v50;
    v4 = (struct _RM_PARTITION *)v41;
  }
  RmpSystemMemoryMetricsQuery(v4, (struct _RM_SYSTEM_MEMORY_METRICS *)&v62);
  v22 = dword_18009B0B0;
  v23 = 4LL;
  v24 = v63 >> 20;
  v25 = 0x400000000001LL;
  if ( v63 >> 20 > 0xFFFFFFFF )
    LODWORD(v24) = -1;
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x400000000001uLL) )
  {
    v42 = v24;
    v52 = (unsigned __int64 *)&v42;
    v43 = HIDWORD(v48);
    v54 = (unsigned int *)&v43;
    v39 = HIDWORD(v47);
    v56 = &v39;
    v58 = &v40;
    v60 = &v41;
    v53 = v23;
    v55 = v23;
    v57 = v23;
    v40 = v7;
    v59 = v23;
    LODWORD(v41) = v5;
    v61 = v23;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180084B83, 0LL, 0LL, 7u, &pData);
    v22 = dword_18009B0B0;
    v23 = 4LL;
    v25 = 0x400000000001LL;
  }
  v26 = (int *)&v45;
  v27 = v23;
  do
  {
    v28 = *v26;
    if ( (unsigned int)*v26 > 0xFF )
      v28 = 255;
    *v26 = v28;
    v26 = (int *)((char *)v26 + v23);
    --v27;
  }
  while ( v27 );
  v29 = HIDWORD(v46) | ((HIDWORD(v45) | (((unsigned int)v46 | ((_DWORD)v45 << 8)) << 8)) << 8);
  if ( v22 > (unsigned int)v23 && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, v25) )
  {
    LODWORD(v41) = v24;
    v52 = &v41;
    v54 = &v40;
    v56 = &v39;
    v53 = 4LL;
    v40 = v8;
    v55 = 4LL;
    v39 = v29;
    v57 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180084B16, 0LL, 0LL, 5u, &pData);
  }
  RmpSystemQueryCompressionProcessPrivateWorkingSet(&v41);
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x400000000001uLL) )
  {
    v33 = v67 >> 20;
    v34 = v67 >> 20 <= v32;
    v65 = v31;
    v67 = v31;
    if ( !v34 )
      LODWORD(v33) = v32;
    v39 = v6;
    LODWORD(v41) = v33;
    v64 = &v41;
    v40 = HIDWORD(v50);
    v66 = &v40;
    v68 = &v39;
    v70 = &v43;
    v72 = &v42;
    v69 = v31;
    v43 = v30;
    v71 = v31;
    v42 = v29;
    v73 = v31;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180084C33, 0LL, 0LL, 7u, &v62);
  }
  return 0LL;
}
