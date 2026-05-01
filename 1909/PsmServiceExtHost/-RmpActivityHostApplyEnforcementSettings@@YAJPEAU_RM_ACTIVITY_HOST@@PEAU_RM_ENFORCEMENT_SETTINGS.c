/*
 * XREFs of ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800257F0
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000BF94 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180019180 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800288A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001258 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180037E64 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180038AE0 (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmpActivityHostAreExecutionSpeedsEqual@@YAKPEAU_RM_ENFORCEMENT_SETTINGS@@0@Z @ 0x18003B938 (-RmpActivityHostAreExecutionSpeedsEqual@@YAKPEAU_RM_ENFORCEMENT_SETTINGS@@0@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180049286 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800708E8 (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180070AA0 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostApplyEnforcementSettings(char *P, struct _RM_ENFORCEMENT_SETTINGS *a2, int a3)
{
  char *v4; // rsi
  char v5; // r12
  unsigned __int8 v7; // dl
  DWORD v8; // r14d
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v11; // ecx
  _QWORD *v12; // rax
  bool v13; // zf
  unsigned __int8 v14; // cl
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // r11
  int v19; // ebx
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 *v23; // r10
  int v24; // edx
  DWORD v25; // r12d
  _QWORD *v26; // rbx
  DWORD v27; // eax
  DWORD v28; // ecx
  _QWORD *v29; // rax
  int v30; // r12d
  char v31; // cl
  unsigned __int8 v32; // dl
  bool v33; // dl
  unsigned __int8 v34; // cl
  int v36; // eax
  bool v37; // al
  char v38; // al
  int v39; // eax
  char v40; // [rsp+60h] [rbp-A0h] BYREF
  bool v41; // [rsp+61h] [rbp-9Fh] BYREF
  char v42; // [rsp+62h] [rbp-9Eh] BYREF
  char v43; // [rsp+63h] [rbp-9Dh] BYREF
  bool v44; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v45; // [rsp+68h] [rbp-98h] BYREF
  int v46; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR v54; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v56; // [rsp+D0h] [rbp-30h]
  int v57; // [rsp+D8h] [rbp-28h]
  int v58; // [rsp+DCh] [rbp-24h]
  unsigned int *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  __int64 *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  char *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  char *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  char *v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  char *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  bool *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  char *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+160h] [rbp+60h] BYREF
  void *v76; // [rsp+170h] [rbp+70h]
  int v77; // [rsp+178h] [rbp+78h]
  int v78; // [rsp+17Ch] [rbp+7Ch]
  unsigned int *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+190h] [rbp+90h] BYREF
  char *v82; // [rsp+1A0h] [rbp+A0h]
  int v83; // [rsp+1A8h] [rbp+A8h]
  int v84; // [rsp+1ACh] [rbp+ACh]
  int *v85; // [rsp+1B0h] [rbp+B0h]
  __int64 v86; // [rsp+1B8h] [rbp+B8h]
  unsigned int *v87; // [rsp+1C0h] [rbp+C0h]
  __int64 v88; // [rsp+1C8h] [rbp+C8h]
  __int64 *v89; // [rsp+1D0h] [rbp+D0h]
  __int64 v90; // [rsp+1D8h] [rbp+D8h]
  char *v91; // [rsp+1E0h] [rbp+E0h]
  __int64 v92; // [rsp+1E8h] [rbp+E8h]
  char *v93; // [rsp+1F0h] [rbp+F0h]
  __int64 v94; // [rsp+1F8h] [rbp+F8h]
  char *v95; // [rsp+200h] [rbp+100h]
  __int64 v96; // [rsp+208h] [rbp+108h]
  char *v97; // [rsp+210h] [rbp+110h]
  __int64 v98; // [rsp+218h] [rbp+118h]
  bool *v99; // [rsp+220h] [rbp+120h]
  __int64 v100; // [rsp+228h] [rbp+128h]

  v46 = a3;
  v4 = P + 1168;
  v5 = a3;
  if ( !memcmp_0(a2, P + 1168, 0x20uLL) && (v5 & 3) == 0 )
    return 0LL;
  v7 = *((_BYTE *)a2 + 28);
  if ( (!(v4[28] & 1) & v7) != 0 )
  {
    RmpGpuMonitorEnableForHost((struct _RM_ACTIVITY_HOST *)P);
  }
  else if ( (v4[28] & 1) != 0 && (v7 & 1) == 0 )
  {
    RmpGpuMonitorDisableForHost((struct _RM_ACTIVITY_HOST *)P);
  }
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(P + 64);
  CurrentThreadId = GetCurrentThreadId();
  v11 = HampLockTrackerId;
  *((_DWORD *)P + 18) = CurrentThreadId;
  v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 1;
  if ( v11 != -1 )
  {
    v12 = TlsGetValue(v11);
    if ( (*(_BYTE *)v12 & 2) == 0 )
      __int2c();
    v13 = v12[2]-- == 1LL;
    if ( v13 )
      *v12 &= ~2uLL;
  }
  *((_DWORD *)P + 18) = 0;
  RtlReleaseSRWLockExclusive(P + 64);
  v14 = *((_BYTE *)a2 + 28);
  if ( (((unsigned __int8)v4[28] ^ v14) & 4) != 0 )
  {
    v39 = RmpQoSEnableDisableForHost((struct _RM_ACTIVITY_HOST *)P, (v14 >> 2) & 1);
    v45 = v39;
    v24 = v39;
    if ( v39 == -1073741822 )
    {
      v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 4;
    }
    else if ( v39 < 0 )
    {
      goto LABEL_40;
    }
  }
  v15 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)v4 + 2) != v15
    || *((_QWORD *)v4 + 1) != *((_QWORD *)a2 + 1)
    || *(_QWORD *)v4 != *(_QWORD *)a2
    || !RmpActivityHostAreExecutionSpeedsEqual((struct _RM_ENFORCEMENT_SETTINGS *)v4, a2) )
  {
    v16 = *((_QWORD *)a2 + 1);
    v17 = *(_QWORD *)a2;
    goto LABEL_17;
  }
  if ( (v5 & 1) != 0 )
  {
LABEL_17:
    v18 = *((_QWORD *)P + 4);
    v13 = v15 == 0;
    v19 = *((_DWORD *)P + 156);
    v20 = *(__int64 **)(*((_QWORD *)P + 6) + 40LL);
    v48 = v15;
    v21 = *v20;
    v22 = *((unsigned int *)P + 155);
    v50 = v17;
    v23 = &v48;
    if ( v13 )
      v23 = 0LL;
    v49 = v16;
    v24 = (*(__int64 (__fastcall **)(__int64 *, char *, char *, __int64, int, __int64, __int64 *, __int64 *, __int64 *, _QWORD))(v21 + 32))(
            v20,
            P + 88,
            P + 552,
            v22,
            v19,
            v18,
            v23,
            &v50,
            &v49,
            0LL);
    if ( v24 >= 0 )
    {
      v25 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v26 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v25) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *v26 |= 2uLL;
        ++v26[2];
      }
      RtlAcquireSRWLockExclusive(P + 64);
      v27 = GetCurrentThreadId();
      v28 = HampLockTrackerId;
      *((_DWORD *)P + 18) = v27;
      *(_QWORD *)v4 = *(_QWORD *)a2;
      *((_QWORD *)v4 + 1) = *((_QWORD *)a2 + 1);
      *((_QWORD *)v4 + 2) = *((_QWORD *)a2 + 2);
      if ( v28 != -1 )
      {
        v29 = TlsGetValue(v28);
        if ( (*(_BYTE *)v29 & 2) == 0 )
          __int2c();
        v13 = v29[2]-- == 1LL;
        if ( v13 )
          *v29 &= ~2uLL;
      }
      *((_DWORD *)P + 18) = 0;
      RtlReleaseSRWLockExclusive(P + 64);
      if ( *((_DWORD *)v4 + 6) == *((_DWORD *)a2 + 6) && ((*((_BYTE *)a2 + 28) ^ (unsigned __int8)v4[28]) & 2) == 0
        || (v24 = RmpActivityHostApplyExecutionSpeed((struct _RM_ACTIVITY_HOST *)P, a2), v24 >= 0) )
      {
        v24 = 0;
      }
      v5 = v46;
    }
    v45 = v24;
    if ( v24 < 0 )
      goto LABEL_40;
  }
  v30 = v5 & 2;
  if ( *((int *)a2 + 6) >= 2 && (*((_BYTE *)a2 + 28) & 2) != 0 && v30 )
    RmHamHostActOnProcesses((struct _RM_ACTIVITY_HOST *)P, 0x2000u, 1u, RmpEnforcementApplyForegroundBoost, (void *)1);
  v31 = v4[28];
  v32 = *((_BYTE *)a2 + 28);
  if ( ((v32 ^ (unsigned __int8)v31) & 0x70) != 0 || v30 )
  {
    v38 = v4[28];
    if ( (*(_BYTE *)(*((_QWORD *)P + 6) + 508LL) & 0x10) != 0 )
    {
      RmHamHostActOnProcesses(
        (struct _RM_ACTIVITY_HOST *)P,
        0x2000u,
        1u,
        (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))HampSystemSetBamWindowStateProcess,
        (void *)(((unsigned __int64)v32 >> 4) & 7));
      v32 = *((_BYTE *)a2 + 28);
      v38 = v4[28];
    }
    v31 = v38 ^ (v32 ^ v38) & 0x70;
    v4[28] = v31;
    v32 = *((_BYTE *)a2 + 28);
  }
  v33 = (v32 & 8) != 0;
  if ( ((v31 & 8) != 0) != v33 || v30 )
  {
    if ( v33 )
      v24 = RmHamHostActOnProcesses(
              (struct _RM_ACTIVITY_HOST *)P,
              0x2000u,
              1u,
              (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostSetStoreHighMemoryPriorityProcessCallback,
              0LL);
    else
      v24 = 0;
    v45 = v24;
    if ( v24 < 0 )
      goto LABEL_40;
    v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 8;
  }
  v24 = 0;
  v45 = 0;
LABEL_40:
  if ( (P[836] & 1) != 0 )
  {
    if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
    {
      v34 = v4[28];
      v59 = &v45;
      v51 = *((_QWORD *)P + 4);
      v61 = &v51;
      v63 = v4 + 16;
      v67 = v4 + 8;
      v40 = v4[24];
      v69 = &v40;
      v41 = (v34 & 2) != 0;
      v60 = 4LL;
      v71 = &v41;
      v73 = &v42;
      v62 = 8LL;
      v64 = 8LL;
      v65 = v4;
      v66 = 8LL;
      v68 = 8LL;
      v70 = 1LL;
      v72 = 1LL;
      v42 = (v34 >> 4) & 7;
      v74 = 1LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800AB2C8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 8LL;
      UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
      v56 = &unk_180094014;
      UserData.Reserved = 2;
      v57 = 151;
      v58 = 1;
      v47 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
      return v45;
    }
  }
  else if ( hProvider > 4u && (byte_1800AB290 & 9) != 0 && (qword_1800AB298 & 9) == qword_1800AB298 )
  {
    v80 = 4LL;
    v79 = &v45;
    TlgCreateWsz(&pDesc, (LPCWSTR)P + 44);
    LOBYTE(v36) = P[553];
    if ( (unsigned __int8)v36 > 0xFu )
      v36 = 15;
    else
      v36 = (unsigned __int8)v36;
    v82 = P + 552;
    v83 = 4 * v36 + 8;
    v46 = *((_DWORD *)P + 155);
    v85 = &v46;
    v47 = *((_DWORD *)P + 156);
    v87 = &v47;
    v52 = *((_QWORD *)P + 4);
    v89 = &v52;
    v91 = v4 + 16;
    v95 = v4 + 8;
    v43 = v4[24];
    v97 = &v43;
    v37 = (v4[28] & 2) != 0;
    v84 = 0;
    v44 = v37;
    v99 = &v44;
    v86 = 4LL;
    v88 = 4LL;
    v90 = 8LL;
    v92 = 8LL;
    v93 = v4;
    v94 = 8LL;
    v96 = 8LL;
    v98 = 1LL;
    v100 = 1LL;
    *(_DWORD *)&v54.Level = 4;
    v75.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&v54.Id = 184549376;
    v54.Keyword = 9LL;
    v75.Size = *(unsigned __int16 *)off_1800AB288;
    v76 = &unk_1800940B7;
    v75.Reserved = 2;
    v77 = 222;
    v78 = 1;
    LODWORD(v48) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &v54, 0LL, 0LL, 0xDu, &v75);
    return v45;
  }
  return (unsigned int)v24;
}
