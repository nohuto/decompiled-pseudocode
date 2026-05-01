/*
 * XREFs of ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180021B80
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B03C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180011A90 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025B20 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800018AC (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000DAFC (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180012790 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpActivityHostAreExecutionSpeedsEqual@@YAKPEAU_RM_ENFORCEMENT_SETTINGS@@0@Z @ 0x18003A8B8 (-RmpActivityHostAreExecutionSpeedsEqual@@YAKPEAU_RM_ENFORCEMENT_SETTINGS@@0@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800499F6 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800637F8 (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800639B0 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostApplyEnforcementSettings(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        char a3)
{
  char *v4; // rsi
  DWORD v7; // r14d
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v10; // ecx
  _QWORD *v11; // rax
  bool v12; // zf
  unsigned __int8 v13; // cl
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // r11
  int v18; // ebx
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 *v22; // r10
  int v23; // edx
  _QWORD *v24; // rbx
  DWORD v25; // eax
  DWORD v26; // ecx
  _QWORD *v27; // rax
  int v28; // r12d
  unsigned __int8 v29; // dl
  char v30; // cl
  bool v31; // dl
  unsigned __int8 v32; // cl
  const WCHAR *v34; // rdx
  __int64 v35; // rax
  bool v36; // al
  char v37; // al
  int v38; // eax
  char v39; // [rsp+60h] [rbp-A0h] BYREF
  bool v40; // [rsp+61h] [rbp-9Fh] BYREF
  char v41; // [rsp+62h] [rbp-9Eh] BYREF
  char v42; // [rsp+63h] [rbp-9Dh] BYREF
  bool v43; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v44; // [rsp+68h] [rbp-98h] BYREF
  DWORD dwTlsIndex; // [rsp+6Ch] [rbp-94h] BYREF
  int v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR v53; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v55; // [rsp+D0h] [rbp-30h]
  int v56; // [rsp+D8h] [rbp-28h]
  int v57; // [rsp+DCh] [rbp-24h]
  unsigned int *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  __int64 *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  char *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  char *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  char *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  char *v68; // [rsp+130h] [rbp+30h]
  __int64 v69; // [rsp+138h] [rbp+38h]
  bool *v70; // [rsp+140h] [rbp+40h]
  __int64 v71; // [rsp+148h] [rbp+48h]
  char *v72; // [rsp+150h] [rbp+50h]
  __int64 v73; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+160h] [rbp+60h] BYREF
  void *v75; // [rsp+170h] [rbp+70h]
  int v76; // [rsp+178h] [rbp+78h]
  int v77; // [rsp+17Ch] [rbp+7Ch]
  unsigned int *v78; // [rsp+180h] [rbp+80h]
  __int64 v79; // [rsp+188h] [rbp+88h]
  const WCHAR *v80; // [rsp+190h] [rbp+90h]
  int v81; // [rsp+198h] [rbp+98h]
  int v82; // [rsp+19Ch] [rbp+9Ch]
  char *v83; // [rsp+1A0h] [rbp+A0h]
  int v84; // [rsp+1A8h] [rbp+A8h]
  int v85; // [rsp+1ACh] [rbp+ACh]
  DWORD *p_dwTlsIndex; // [rsp+1B0h] [rbp+B0h]
  __int64 v87; // [rsp+1B8h] [rbp+B8h]
  int *v88; // [rsp+1C0h] [rbp+C0h]
  __int64 v89; // [rsp+1C8h] [rbp+C8h]
  __int64 *v90; // [rsp+1D0h] [rbp+D0h]
  __int64 v91; // [rsp+1D8h] [rbp+D8h]
  char *v92; // [rsp+1E0h] [rbp+E0h]
  __int64 v93; // [rsp+1E8h] [rbp+E8h]
  char *v94; // [rsp+1F0h] [rbp+F0h]
  __int64 v95; // [rsp+1F8h] [rbp+F8h]
  char *v96; // [rsp+200h] [rbp+100h]
  __int64 v97; // [rsp+208h] [rbp+108h]
  char *v98; // [rsp+210h] [rbp+110h]
  __int64 v99; // [rsp+218h] [rbp+118h]
  bool *v100; // [rsp+220h] [rbp+120h]
  __int64 v101; // [rsp+228h] [rbp+128h]

  v4 = (char *)a1 + 1112;
  if ( !memcmp_0(a2, (char *)a1 + 1112, 0x20uLL) && (a3 & 3) == 0 )
    return 0LL;
  if ( (!(v4[28] & 1) & *((_BYTE *)a2 + 28)) != 0 )
  {
    RmpGpuMonitorEnableForHost(a1);
  }
  else if ( (v4[28] & 1) != 0 && (*((_BYTE *)a2 + 28) & 1) == 0 )
  {
    RmpGpuMonitorDisableForHost(a1);
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 64);
  CurrentThreadId = GetCurrentThreadId();
  v10 = HampLockTrackerId;
  *((_DWORD *)a1 + 18) = CurrentThreadId;
  v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 1;
  if ( v10 != -1 )
  {
    v11 = TlsGetValue(v10);
    if ( (*(_BYTE *)v11 & 2) == 0 )
      __int2c();
    v12 = v11[2]-- == 1LL;
    if ( v12 )
      *v11 &= ~2uLL;
  }
  *((_DWORD *)a1 + 18) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 64);
  v13 = *((_BYTE *)a2 + 28);
  if ( (((unsigned __int8)v4[28] ^ v13) & 4) != 0 )
  {
    v38 = RmpQoSEnableDisableForHost(a1, (v13 >> 2) & 1);
    v44 = v38;
    v23 = v38;
    if ( v38 == -1073741822 )
    {
      v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 4;
    }
    else if ( v38 < 0 )
    {
      goto LABEL_39;
    }
  }
  v14 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)v4 + 2) != v14
    || *((_QWORD *)v4 + 1) != *((_QWORD *)a2 + 1)
    || *(_QWORD *)v4 != *(_QWORD *)a2
    || !RmpActivityHostAreExecutionSpeedsEqual((struct _RM_ENFORCEMENT_SETTINGS *)v4, a2) )
  {
    v15 = *((_QWORD *)a2 + 1);
    v16 = *(_QWORD *)a2;
    goto LABEL_17;
  }
  if ( (a3 & 1) != 0 )
  {
LABEL_17:
    v17 = *((_QWORD *)a1 + 4);
    v12 = v14 == 0;
    v18 = *((_DWORD *)a1 + 156);
    v19 = *(__int64 **)(*((_QWORD *)a1 + 6) + 40LL);
    v47 = v14;
    v20 = *v19;
    v21 = *((unsigned int *)a1 + 155);
    v49 = v16;
    v22 = &v47;
    if ( v12 )
      v22 = 0LL;
    v48 = v15;
    v23 = (*(__int64 (__fastcall **)(__int64 *, char *, char *, __int64, int, __int64, __int64 *, __int64 *, __int64 *, _QWORD))(v20 + 32))(
            v19,
            (char *)a1 + 88,
            (char *)a1 + 552,
            v21,
            v18,
            v17,
            v22,
            &v49,
            &v48,
            0LL);
    if ( v23 >= 0 )
    {
      dwTlsIndex = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v24 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(dwTlsIndex) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *v24 |= 2uLL;
        ++v24[2];
      }
      RtlAcquireSRWLockExclusive((char *)a1 + 64);
      v25 = GetCurrentThreadId();
      v26 = HampLockTrackerId;
      *((_DWORD *)a1 + 18) = v25;
      *(_QWORD *)v4 = *(_QWORD *)a2;
      *((_QWORD *)v4 + 1) = *((_QWORD *)a2 + 1);
      *((_QWORD *)v4 + 2) = *((_QWORD *)a2 + 2);
      if ( v26 != -1 )
      {
        v27 = TlsGetValue(v26);
        if ( (*(_BYTE *)v27 & 2) == 0 )
          __int2c();
        v12 = v27[2]-- == 1LL;
        if ( v12 )
          *v27 &= ~2uLL;
      }
      *((_DWORD *)a1 + 18) = 0;
      RtlReleaseSRWLockExclusive((char *)a1 + 64);
      if ( *((_DWORD *)v4 + 6) == *((_DWORD *)a2 + 6) && ((*((_BYTE *)a2 + 28) ^ (unsigned __int8)v4[28]) & 2) == 0
        || (v23 = RmpActivityHostApplyExecutionSpeed(a1, a2), v23 >= 0) )
      {
        v23 = 0;
      }
    }
    v44 = v23;
    if ( v23 < 0 )
      goto LABEL_39;
  }
  v28 = a3 & 2;
  if ( *((int *)a2 + 6) >= 2 && (*((_BYTE *)a2 + 28) & 2) != 0 && v28 )
    RmHamHostActOnProcesses(a1, 0x2000, 1, RmpEnforcementApplyForegroundBoost, (void *)1);
  v29 = *((_BYTE *)a2 + 28);
  v30 = v4[28];
  if ( (((unsigned __int8)v30 ^ v29) & 0x70) != 0 || v28 )
  {
    v37 = v4[28];
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 6) + 508LL) & 0x10) == 0 )
    {
      RmHamHostActOnProcesses(
        a1,
        0x2000,
        1,
        (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))HampSystemSetBamWindowStateProcess,
        (void *)(((unsigned __int64)v29 >> 4) & 7));
      v29 = *((_BYTE *)a2 + 28);
      v37 = v4[28];
    }
    v30 = v37 ^ (v29 ^ v37) & 0x70;
    v4[28] = v30;
    v29 = *((_BYTE *)a2 + 28);
  }
  v31 = (v29 & 8) != 0;
  if ( ((v30 & 8) != 0) != v31 || v28 )
  {
    if ( v31 )
      v23 = RmHamHostActOnProcesses(
              a1,
              0x2000,
              1,
              (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostSetStoreHighMemoryPriorityProcessCallback,
              0LL);
    else
      v23 = 0;
    v44 = v23;
    if ( v23 < 0 )
      goto LABEL_39;
    v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 8;
  }
  v23 = 0;
  v44 = 0;
LABEL_39:
  if ( (*((_BYTE *)a1 + 812) & 1) != 0 )
  {
    if ( hProvider > 4u && (byte_18009B100 & 8) != 0 && (qword_18009B108 & 8) == qword_18009B108 )
    {
      v32 = v4[28];
      v58 = &v44;
      v50 = *((_QWORD *)a1 + 4);
      v60 = &v50;
      v62 = v4 + 16;
      v66 = v4 + 8;
      v39 = v4[24];
      v68 = &v39;
      v40 = (v32 & 2) != 0;
      v59 = 4LL;
      v70 = &v40;
      v72 = &v41;
      v61 = 8LL;
      v63 = 8LL;
      v64 = v4;
      v65 = 8LL;
      v67 = 8LL;
      v69 = 1LL;
      v71 = 1LL;
      v41 = (v32 >> 4) & 7;
      v73 = 1LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_18009B0F8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18008624C - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 8LL;
      UserData.Size = *(unsigned __int16 *)off_18009B0F8;
      v55 = &unk_180086257;
      UserData.Reserved = 2;
      v56 = 151;
      v57 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
      return v44;
    }
  }
  else if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 9) != 0 && (qword_18009B0C8 & 9) == qword_18009B0C8 )
  {
    v79 = 4LL;
    v78 = &v44;
    v34 = &pwsz;
    LODWORD(v35) = 0;
    if ( a1 != (struct _RM_ACTIVITY_HOST *)-88LL )
    {
      v34 = (const WCHAR *)((char *)a1 + 88);
      v35 = -1LL;
      do
        ++v35;
      while ( *((_WORD *)a1 + v35 + 44) );
    }
    v80 = v34;
    v81 = 2 * v35 + 2;
    LOBYTE(v35) = *((_BYTE *)a1 + 553);
    v82 = 0;
    if ( (unsigned __int8)v35 > 0xFu )
      LODWORD(v35) = 15;
    else
      LODWORD(v35) = (unsigned __int8)v35;
    v83 = (char *)a1 + 552;
    v84 = 4 * v35 + 8;
    dwTlsIndex = *((_DWORD *)a1 + 155);
    p_dwTlsIndex = &dwTlsIndex;
    v46 = *((_DWORD *)a1 + 156);
    v88 = &v46;
    v51 = *((_QWORD *)a1 + 4);
    v90 = &v51;
    v92 = v4 + 16;
    v96 = v4 + 8;
    v42 = v4[24];
    v98 = &v42;
    v36 = (v4[28] & 2) != 0;
    v85 = 0;
    v43 = v36;
    v100 = &v43;
    v87 = 4LL;
    v89 = 4LL;
    v91 = 8LL;
    v93 = 8LL;
    v94 = v4;
    v95 = 8LL;
    v97 = 8LL;
    v99 = 1LL;
    v101 = 1LL;
    *(_DWORD *)&v53.Level = 4;
    v74.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&v53.Id = ((unsigned int)&unk_1800862EF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v53.Keyword = 9LL;
    v74.Size = *(unsigned __int16 *)off_18009B0B8;
    v75 = &unk_1800862FA;
    v74.Reserved = 2;
    v76 = 222;
    v77 = 1;
    EventWriteTransfer(qword_18009B0D0, &v53, 0LL, 0LL, 0xDu, &v74);
    return v44;
  }
  return (unsigned int)v23;
}
