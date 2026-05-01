/*
 * XREFs of ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180022380
 * Callers:
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001ADF0 (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@2@Z @ 0x180021D40 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180022DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpPolicyGetCurrentUsageLimits@@YAXPEAU_RM_PARTITION@@PEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18003B018 (-RmpPolicyGetCurrentUsageLimits@@YAXPEAU_RM_PARTITION@@PEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REM.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180044F30 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall RmpPolicyComputeUsageLimits(
        struct _RM_USAGE_LIMIT_SETTINGS *a1,
        struct _RM_REMEDIATION_ACTIONS *a2,
        struct _RM_SYSTEM_MEMORY_METRICS *a3,
        unsigned __int64 a4,
        struct _RM_RESOURCE_USAGE_LIMITS *a5)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  char *v15; // r15
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int128 v18; // rax
  unsigned __int64 v19; // kr10_8
  unsigned __int64 v20; // rsi
  unsigned __int128 v21; // rax
  unsigned __int64 v22; // kr20_8
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // kr30_8
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // r8
  unsigned __int128 v28; // rax
  unsigned __int64 v29; // kr40_8
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  unsigned __int128 v32; // rax
  unsigned __int64 v33; // kr50_8
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // kr60_8
  unsigned __int64 v36; // r9
  unsigned __int128 v37; // rax
  unsigned __int64 v38; // kr70_8
  unsigned __int64 v39; // r8
  bool v40; // zf
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // kr80_8
  unsigned __int64 v43; // kr90_8
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // krA0_8
  __int16 v53; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v54; // [rsp+32h] [rbp-CEh] BYREF
  __int64 v55; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v56; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+58h] [rbp-A8h]
  __int64 v59; // [rsp+60h] [rbp-A0h]
  __int64 v60; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+70h] [rbp-90h]
  __int64 v62; // [rsp+78h] [rbp-88h]
  __int64 v63; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+98h] [rbp-68h]
  __int64 v67; // [rsp+A0h] [rbp-60h]
  __int128 v68; // [rsp+B0h] [rbp-50h]
  __int128 v69; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v70; // [rsp+D0h] [rbp-30h]
  __int128 v71; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v72; // [rsp+F0h] [rbp-10h]
  __int128 v73; // [rsp+100h] [rbp+0h]
  __int128 v74; // [rsp+110h] [rbp+10h] BYREF
  __int128 v75; // [rsp+120h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+30h] BYREF
  void *v77; // [rsp+140h] [rbp+40h]
  int v78; // [rsp+148h] [rbp+48h]
  int v79; // [rsp+14Ch] [rbp+4Ch]
  unsigned __int64 *v80; // [rsp+150h] [rbp+50h]
  __int64 v81; // [rsp+158h] [rbp+58h]
  char *v82; // [rsp+160h] [rbp+60h]
  __int64 v83; // [rsp+168h] [rbp+68h]
  __int16 *v84; // [rsp+170h] [rbp+70h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  __int128 *v86; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+188h] [rbp+88h]
  __int16 *v88; // [rsp+190h] [rbp+90h]
  __int64 v89; // [rsp+198h] [rbp+98h]
  char *v90; // [rsp+1A0h] [rbp+A0h]
  __int64 v91; // [rsp+1A8h] [rbp+A8h]
  __int128 *v92; // [rsp+1B0h] [rbp+B0h]
  __int64 v93; // [rsp+1B8h] [rbp+B8h]
  char *v94; // [rsp+1C0h] [rbp+C0h]
  __int64 v95; // [rsp+1C8h] [rbp+C8h]

  v56 = a4;
  if ( *(_OWORD *)a5 != __PAIR128__(*((_QWORD *)a3 + 5), a4) )
  {
    *(_QWORD *)&v69 = 0LL;
    *((_QWORD *)&v71 + 1) = 0LL;
    *((_QWORD *)&v72 + 1) = 0LL;
    v74 = 0uLL;
    *(_QWORD *)&v75 = 0LL;
    v8 = *((unsigned int *)a1 + 5);
    v9 = -1LL;
    v11 = v8;
    v10 = a4 * (unsigned __int128)v8;
    v12 = -1LL;
    v13 = *((_QWORD *)a3 + 5);
    if ( is_mul_ok(a4, v11) )
      v12 = v10;
    v55 = *((_QWORD *)&v10 + 1);
    *(_QWORD *)&v68 = a4;
    v14 = a4 - *(_QWORD *)a1;
    v15 = (char *)a3 + 40;
    *((_QWORD *)&v68 + 1) = v13;
    v16 = v12 / 0x64;
    if ( v16 >= v14 )
      v16 = v14;
    v17 = -1LL;
    v19 = *((unsigned int *)a1 + 11);
    v18 = a4 * (unsigned __int128)*((unsigned int *)a1 + 11);
    v20 = -1LL;
    *(_QWORD *)&v71 = v16;
    v58 = *((_QWORD *)&v18 + 1);
    *((_QWORD *)&v70 + 1) = v16;
    if ( is_mul_ok(a4, v19) )
      v17 = v18;
    v22 = *((unsigned int *)a1 + 3);
    v21 = a4 * (unsigned __int128)*((unsigned int *)a1 + 3);
    *((_QWORD *)&v75 + 1) = v17 / 0x64;
    v59 = *((_QWORD *)&v21 + 1);
    v23 = -1LL;
    if ( is_mul_ok(a4, v22) )
      v23 = v21;
    v24 = *((unsigned int *)a1 + 4);
    v25 = v23 / 0x64;
    v60 = (v13 * (unsigned __int128)*((unsigned int *)a1 + 4)) >> 64;
    if ( is_mul_ok(v13, v24) )
      v20 = v13 * v24;
    v26 = v20 / 0x64;
    if ( v25 < v26 )
      v26 = v25;
    if ( v16 < v26 )
      v26 = v16;
    v27 = -1LL;
    v29 = *((unsigned int *)a1 + 2);
    v28 = a4 * (unsigned __int128)*((unsigned int *)a1 + 2);
    *(_QWORD *)&v70 = v26;
    v61 = *((_QWORD *)&v28 + 1);
    if ( is_mul_ok(a4, v29) )
      v27 = v28;
    v30 = v27 / 0x64;
    if ( v26 < v30 )
      v30 = v26;
    v31 = -1LL;
    v33 = *((unsigned int *)a1 + 6);
    v32 = v13 * (unsigned __int128)*((unsigned int *)a1 + 6);
    *((_QWORD *)&v69 + 1) = v30;
    v34 = -1LL;
    v62 = *((_QWORD *)&v32 + 1);
    if ( is_mul_ok(v13, v33) )
      v31 = v32;
    v35 = *((unsigned int *)a1 + 7);
    v36 = v31 / 0x64;
    v63 = (v13 * (unsigned __int128)*((unsigned int *)a1 + 7)) >> 64;
    *((_QWORD *)&v72 + 1) = v36;
    if ( is_mul_ok(v13, v35) )
      v34 = v13 * v35;
    *(_QWORD *)&v72 = v36;
    v38 = *((unsigned int *)a1 + 8);
    v37 = v13 * (unsigned __int128)*((unsigned int *)a1 + 8);
    *(_QWORD *)&v73 = v34 / 0x64;
    v39 = -1LL;
    v64 = *((_QWORD *)&v37 + 1);
    if ( is_mul_ok(v13, v38) )
      v39 = v37;
    v40 = *((_DWORD *)a2 + 10) == 0;
    *((_QWORD *)&v73 + 1) = v39 / 0x64;
    if ( !v40 )
    {
      v51 = -1LL;
      v52 = *((unsigned int *)a1 + 9);
      v65 = (a4 * (unsigned __int128)*((unsigned int *)a1 + 9)) >> 64;
      if ( is_mul_ok(a4, v52) )
        v51 = a4 * v52;
      *(_QWORD *)&v74 = v51 / 0x64;
    }
    if ( *((_DWORD *)a2 + 11) )
    {
      v41 = -1LL;
      v42 = *((unsigned int *)a1 + 10);
      v66 = (v13 * (unsigned __int128)*((unsigned int *)a1 + 10)) >> 64;
      if ( is_mul_ok(v13, v42) )
        v41 = v13 * v42;
      *((_QWORD *)&v74 + 1) = v41 / 0x64;
    }
    if ( *((_DWORD *)a1 + 12) )
    {
      v43 = *((unsigned int *)a1 + 12);
      v67 = (v13 * (unsigned __int128)*((unsigned int *)a1 + 12)) >> 64;
      if ( is_mul_ok(v13, v43) )
        v9 = v13 * v43;
      *(_QWORD *)&v75 = v9 / 0x64;
    }
    if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
    {
      v81 = 8LL;
      v80 = &v56;
      v82 = v15;
      v84 = &v53;
      v86 = &v69;
      v88 = &v54;
      v90 = (char *)&v71 + 8;
      v92 = &v74;
      v94 = (char *)&v74 + 8;
      v83 = 8LL;
      v53 = 5;
      v85 = 2LL;
      v87 = 40LL;
      v54 = 5;
      v89 = 2LL;
      v91 = 40LL;
      v93 = 8LL;
      v95 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800AB288;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800AB288;
      v77 = &unk_180094F0B;
      UserData.Reserved = 2;
      v78 = 164;
      v79 = 1;
      LODWORD(v55) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
    }
    v44 = v69;
    *(_OWORD *)a5 = v68;
    v45 = v70;
    *((_OWORD *)a5 + 1) = v44;
    v46 = v71;
    *((_OWORD *)a5 + 2) = v45;
    v47 = v72;
    *((_OWORD *)a5 + 3) = v46;
    v48 = v73;
    *((_OWORD *)a5 + 4) = v47;
    v49 = v74;
    *((_OWORD *)a5 + 5) = v48;
    v50 = v75;
    *((_OWORD *)a5 + 6) = v49;
    *((_OWORD *)a5 + 7) = v50;
  }
}
