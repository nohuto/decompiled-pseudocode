/*
 * XREFs of MiLogHotPatchRundown @ 0x1405B0E40
 * Callers:
 *     MiTracingEnabledCallback @ 0x1405B16E0 (MiTracingEnabledCallback.c)
 * Callees:
 *     PsGetProcessId @ 0x140004670 (PsGetProcessId.c)
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgCreateSid @ 0x14008CFA8 (_TlgCreateSid.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     _TlgCreateSz @ 0x1400D6128 (_TlgCreateSz.c)
 *     MiFillLogProcessInfo @ 0x14012A978 (MiFillLogProcessInfo.c)
 *     _TlgWriteEx @ 0x14013CFBC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiIsActiveSystemHotPatch @ 0x1405B0E10 (MiIsActiveSystemHotPatch.c)
 *     PsGetNextProcess @ 0x140639220 (PsGetNextProcess.c)
 *     MmReleaseLoadLock @ 0x1406A5B10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A5B70 (MmAcquireLoadLock.c)
 *     MiGetProcessHotPatchContext @ 0x14088DE88 (MiGetProcessHotPatchContext.c)
 */

struct _EX_RUNDOWN_REF *MiLogHotPatchRundown()
{
  struct _EX_RUNDOWN_REF *result; // rax
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v2; // rax
  unsigned __int64 i; // rbx
  ULONG64 v4; // r8
  const struct _TlgProvider_t *v5; // r9
  _QWORD **v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  unsigned __int64 k; // rdi
  _QWORD *v11; // rax
  unsigned __int64 j; // rbx
  ULONG64 v13; // r8
  TraceLoggingHProvider v14; // r9
  _QWORD **v15; // rax
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rcx
  _QWORD **v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  unsigned __int64 m; // rbx
  ULONG64 v23; // r8
  const struct _TlgProvider_t *v24; // r9
  _QWORD **v25; // rax
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rcx
  PVOID *n; // rbx
  ULONG64 v29; // r8
  const struct _TlgProvider_t *v30; // r9
  __int64 v31; // r10
  struct _EX_RUNDOWN_REF *ii; // rcx
  __int64 ProcessHotPatchContext; // rbx
  signed __int64 *v34; // rsi
  __int64 v35; // rax
  unsigned __int64 jj; // rbx
  int v37; // r15d
  const struct _TlgProvider_t *v38; // r14
  ULONG v39; // r9d
  ULONG64 v40; // r8
  _QWORD **v41; // rax
  unsigned __int64 v42; // rcx
  _QWORD *v43; // rcx
  struct _EX_RUNDOWN_REF *v44; // rdi
  const GUID *v45; // [rsp+28h] [rbp-E0h]
  const GUID *v46; // [rsp+30h] [rbp-D8h]
  int v47; // [rsp+48h] [rbp-C0h] BYREF
  int v48; // [rsp+4Ch] [rbp-BCh] BYREF
  int v49; // [rsp+50h] [rbp-B8h] BYREF
  int v50; // [rsp+54h] [rbp-B4h] BYREF
  int v51; // [rsp+58h] [rbp-B0h] BYREF
  int v52; // [rsp+5Ch] [rbp-ACh] BYREF
  int v53; // [rsp+60h] [rbp-A8h] BYREF
  int v54; // [rsp+64h] [rbp-A4h] BYREF
  int v55; // [rsp+68h] [rbp-A0h] BYREF
  int v56; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v57; // [rsp+70h] [rbp-98h] BYREF
  int v58; // [rsp+74h] [rbp-94h] BYREF
  int v59; // [rsp+78h] [rbp-90h] BYREF
  unsigned int ProcessId; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v61; // [rsp+80h] [rbp-88h] BYREF
  int v62; // [rsp+84h] [rbp-84h] BYREF
  int v63; // [rsp+88h] [rbp-80h] BYREF
  int v64; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v65; // [rsp+90h] [rbp-78h] BYREF
  int v66; // [rsp+94h] [rbp-74h] BYREF
  int v67; // [rsp+98h] [rbp-70h] BYREF
  LPCSTR psz; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+B8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v71; // [rsp+E8h] [rbp-20h] BYREF
  int *v72; // [rsp+108h] [rbp+0h]
  __int64 v73; // [rsp+110h] [rbp+8h]
  int *v74; // [rsp+118h] [rbp+10h]
  __int64 v75; // [rsp+120h] [rbp+18h]
  int *v76; // [rsp+128h] [rbp+20h]
  __int64 v77; // [rsp+130h] [rbp+28h]
  int *v78; // [rsp+138h] [rbp+30h]
  __int64 v79; // [rsp+140h] [rbp+38h]
  int *v80; // [rsp+148h] [rbp+40h]
  __int64 v81; // [rsp+150h] [rbp+48h]
  _DWORD *v82; // [rsp+158h] [rbp+50h]
  __int64 v83; // [rsp+160h] [rbp+58h]
  __int64 v84; // [rsp+168h] [rbp+60h]
  _DWORD v85[2]; // [rsp+170h] [rbp+68h] BYREF
  EVENT_DATA_DESCRIPTOR v86; // [rsp+178h] [rbp+70h] BYREF
  unsigned int *p_ProcessId; // [rsp+198h] [rbp+90h]
  __int64 v88; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 *v90; // [rsp+1B8h] [rbp+B0h]
  __int64 v91; // [rsp+1C0h] [rbp+B8h]
  int *v92; // [rsp+1C8h] [rbp+C0h]
  __int64 v93; // [rsp+1D0h] [rbp+C8h]
  int *v94; // [rsp+1D8h] [rbp+D0h]
  __int64 v95; // [rsp+1E0h] [rbp+D8h]
  int *v96; // [rsp+1E8h] [rbp+E0h]
  __int64 v97; // [rsp+1F0h] [rbp+E8h]
  int *v98; // [rsp+1F8h] [rbp+F0h]
  __int64 v99; // [rsp+200h] [rbp+F8h]
  _DWORD *v100; // [rsp+208h] [rbp+100h]
  __int64 v101; // [rsp+210h] [rbp+108h]
  __int64 v102; // [rsp+218h] [rbp+110h]
  _DWORD v103[2]; // [rsp+220h] [rbp+118h] BYREF
  int *v104; // [rsp+228h] [rbp+120h]
  __int64 v105; // [rsp+230h] [rbp+128h]
  int *v106; // [rsp+238h] [rbp+130h]
  __int64 v107; // [rsp+240h] [rbp+138h]
  EVENT_DATA_DESCRIPTOR v108; // [rsp+248h] [rbp+140h] BYREF
  int *v109; // [rsp+268h] [rbp+160h]
  __int64 v110; // [rsp+270h] [rbp+168h]
  int *v111; // [rsp+278h] [rbp+170h]
  __int64 v112; // [rsp+280h] [rbp+178h]
  int *v113; // [rsp+288h] [rbp+180h]
  __int64 v114; // [rsp+290h] [rbp+188h]
  int *v115; // [rsp+298h] [rbp+190h]
  __int64 v116; // [rsp+2A0h] [rbp+198h]
  _DWORD *v117; // [rsp+2A8h] [rbp+1A0h]
  __int64 v118; // [rsp+2B0h] [rbp+1A8h]
  PVOID v119; // [rsp+2B8h] [rbp+1B0h]
  _DWORD v120[2]; // [rsp+2C0h] [rbp+1B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2C8h] [rbp+1C0h] BYREF
  int *v122; // [rsp+2E8h] [rbp+1E0h]
  __int64 v123; // [rsp+2F0h] [rbp+1E8h]
  int *v124; // [rsp+2F8h] [rbp+1F0h]
  __int64 v125; // [rsp+300h] [rbp+1F8h]
  _DWORD *v126; // [rsp+308h] [rbp+200h]
  __int64 v127; // [rsp+310h] [rbp+208h]
  __int64 v128; // [rsp+318h] [rbp+210h]
  _DWORD v129[2]; // [rsp+320h] [rbp+218h] BYREF
  EVENT_DATA_DESCRIPTOR v130; // [rsp+328h] [rbp+220h] BYREF
  int *v131; // [rsp+348h] [rbp+240h]
  __int64 v132; // [rsp+350h] [rbp+248h]
  int *v133; // [rsp+358h] [rbp+250h]
  __int64 v134; // [rsp+360h] [rbp+258h]
  _DWORD *v135; // [rsp+368h] [rbp+260h]
  __int64 v136; // [rsp+370h] [rbp+268h]
  __int64 v137; // [rsp+378h] [rbp+270h]
  _DWORD v138[2]; // [rsp+380h] [rbp+278h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+388h] [rbp+280h] BYREF

  result = (struct _EX_RUNDOWN_REF *)memset(&ApcState, 0, sizeof(ApcState));
  if ( hProvider && dword_1404645B0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
    v2 = *(_QWORD **)&MiGlobalHotPatchList;
    i = 0LL;
    while ( v2 )
    {
      i = (unsigned __int64)v2;
      v2 = (_QWORD *)*v2;
    }
    while ( i )
    {
      if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 0x20uLL) )
      {
        v47 = *(_DWORD *)(i + 24);
        v48 = *(_DWORD *)(i + 28);
        v122 = &v47;
        v124 = &v48;
        v126 = v129;
        v128 = *(_QWORD *)(i + 40);
        v129[0] = *(unsigned __int16 *)(i + 32);
        v123 = 4LL;
        v125 = 4LL;
        v127 = 2LL;
        v129[1] = 0;
        TlgWriteEx(v5, &unk_14038E024, v4, (ULONG)v5, v45, v46, 6u, &pData);
      }
      v6 = *(_QWORD ***)(i + 8);
      v7 = i;
      if ( v6 )
      {
        v8 = *v6;
        for ( i = *(_QWORD *)(i + 8); v8; v8 = (_QWORD *)*v8 )
          i = (unsigned __int64)v8;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v7 )
            break;
          v7 = i;
        }
      }
    }
    v9 = (_QWORD *)MiUserSidPatchLists;
    k = 0LL;
    while ( v9 )
    {
      k = (unsigned __int64)v9;
      v9 = (_QWORD *)*v9;
    }
    while ( k )
    {
      v11 = *(_QWORD **)(k + 24);
      j = 0LL;
      while ( v11 )
      {
        j = (unsigned __int64)v11;
        v11 = (_QWORD *)*v11;
      }
      while ( j )
      {
        if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 0x20uLL) )
        {
          v49 = *(_DWORD *)(j + 24);
          v50 = *(_DWORD *)(j + 28);
          v131 = &v49;
          v133 = &v50;
          v135 = v138;
          v137 = *(_QWORD *)(j + 40);
          v138[0] = *(unsigned __int16 *)(j + 32);
          v132 = 4LL;
          v134 = 4LL;
          v136 = 2LL;
          v138[1] = 0;
          TlgCreateSid(&pDesc, (const SID *)(k + 40));
          TlgWriteEx(v14, &unk_14038DE90, v13, (ULONG)v14, v45, v46, 7u, &v130);
        }
        v15 = *(_QWORD ***)(j + 8);
        v16 = j;
        if ( v15 )
        {
          v17 = *v15;
          for ( j = *(_QWORD *)(j + 8); v17; v17 = (_QWORD *)*v17 )
            j = (unsigned __int64)v17;
        }
        else
        {
          while ( 1 )
          {
            j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !j || *(_QWORD *)j == v16 )
              break;
            v16 = j;
          }
        }
      }
      v18 = *(_QWORD ***)(k + 8);
      v19 = k;
      if ( v18 )
      {
        v20 = *v18;
        for ( k = *(_QWORD *)(k + 8); v20; v20 = (_QWORD *)*v20 )
          k = (unsigned __int64)v20;
      }
      else
      {
        while ( 1 )
        {
          k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !k || *(_QWORD *)k == v19 )
            break;
          v19 = k;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&MiHotPatchListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&MiHotPatchListLock);
    KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MmAcquireLoadLock();
    v21 = (_QWORD *)MiSecureImageActivePatches;
    m = 0LL;
    while ( v21 )
    {
      m = (unsigned __int64)v21;
      v21 = (_QWORD *)*v21;
    }
    while ( m )
    {
      if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 0x20uLL) )
      {
        v51 = *(_DWORD *)(m + 24);
        v52 = *(_DWORD *)(m + 28);
        v53 = *(_DWORD *)(m + 32);
        v54 = *(_DWORD *)(m + 36);
        v55 = *(_DWORD *)(m + 40);
        v72 = &v51;
        v74 = &v52;
        v76 = &v53;
        v78 = &v54;
        v80 = &v55;
        v82 = v85;
        v84 = *(_QWORD *)(m + 56);
        v85[0] = *(unsigned __int16 *)(m + 48);
        v73 = 4LL;
        v75 = 4LL;
        v77 = 4LL;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 2LL;
        v85[1] = 0;
        TlgWriteEx(v24, &unk_14038DEF3, v23, (ULONG)v24, v45, v46, 9u, &v71);
      }
      v25 = *(_QWORD ***)(m + 8);
      v26 = m;
      if ( v25 )
      {
        v27 = *v25;
        for ( m = *(_QWORD *)(m + 8); v27; v27 = (_QWORD *)*v27 )
          m = (unsigned __int64)v27;
      }
      else
      {
        while ( 1 )
        {
          m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !m || *(_QWORD *)m == v26 )
            break;
          v26 = m;
        }
      }
    }
    for ( n = (PVOID *)PsLoadedModuleList; n != &PsLoadedModuleList; n = (PVOID *)*n )
    {
      if ( MiIsActiveSystemHotPatch((__int64)n) && hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 0x20uLL) )
      {
        v56 = *(_DWORD *)(v31 + 120);
        v57 = *(_DWORD *)(v31 + 156);
        v58 = *((_DWORD *)n + 30);
        v59 = *((_DWORD *)n + 39);
        v109 = &v56;
        v111 = &v57;
        v113 = &v58;
        v115 = &v59;
        v117 = v120;
        v119 = n[10];
        v120[0] = *((unsigned __int16 *)n + 36);
        v110 = 4LL;
        v112 = 4LL;
        v114 = 4LL;
        v116 = 4LL;
        v118 = 2LL;
        v120[1] = 0;
        TlgWriteEx(v30, &unk_14038DD5E, v29, (ULONG)v30, v45, v46, 8u, &v108);
      }
    }
    MmReleaseLoadLock(CurrentThread);
    for ( ii = 0LL; ; ii = v44 )
    {
      result = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(ii);
      v44 = result;
      if ( !result )
        return result;
      if ( ExAcquireRundownProtection_0(result + 96) )
        break;
LABEL_92:
      ;
    }
    KeStackAttachProcess((PRKPROCESS)v44, &ApcState);
    ProcessHotPatchContext = MiGetProcessHotPatchContext(v44, 0LL);
    if ( !ProcessHotPatchContext )
    {
LABEL_91:
      KeUnstackDetachProcess(&ApcState);
      ExReleaseRundownProtection_0(v44 + 96);
      goto LABEL_92;
    }
    MiFillLogProcessInfo((__int64)&v44[160], &v67, &psz);
    --CurrentThread->SpecialApcDisable;
    v34 = (signed __int64 *)(ProcessHotPatchContext + 16);
    ExAcquirePushLockSharedEx(ProcessHotPatchContext + 16, 0LL);
    v35 = *(_QWORD *)(ProcessHotPatchContext + 8);
    if ( (v35 & 1) != 0 )
    {
      if ( v35 == 1 )
      {
LABEL_88:
        if ( _InterlockedCompareExchange64(v34, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v34);
        KeAbPostRelease((ULONG_PTR)v34);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        goto LABEL_91;
      }
      jj = v35 ^ (ProcessHotPatchContext | 1);
    }
    else
    {
      jj = *(_QWORD *)(ProcessHotPatchContext + 8);
    }
    while ( jj )
    {
      v37 = *(_DWORD *)(jj + 88);
      if ( v37 )
      {
        v38 = hProvider;
        if ( hProvider->LevelPlus1 > 5 )
        {
          if ( TlgKeywordOn(hProvider, 0x20uLL) )
          {
            ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v44);
            v69 = *(_QWORD *)(jj + 24);
            v61 = *(_DWORD *)(jj + 48);
            v62 = *(_DWORD *)(jj + 52);
            v63 = *(_DWORD *)(jj + 80);
            v64 = *(_DWORD *)(jj + 84);
            v66 = *(_DWORD *)(jj + 32);
            p_ProcessId = &ProcessId;
            v65 = v37;
            v88 = 4LL;
            TlgCreateSz(&v89, psz);
            v91 = 8LL;
            v92 = &v61;
            v90 = &v69;
            v94 = &v62;
            v96 = &v63;
            v98 = &v64;
            v100 = v103;
            v102 = *(_QWORD *)(jj + 72);
            v103[0] = *(unsigned __int16 *)(jj + 64);
            v104 = &v65;
            v106 = &v66;
            v93 = 4LL;
            v95 = 4LL;
            v97 = 4LL;
            v99 = 4LL;
            v101 = 2LL;
            v103[1] = v39;
            v105 = 4LL;
            v107 = 4LL;
            TlgWriteEx(v38, &unk_14038DDD6, v40, v39, v45, v46, 0xDu, &v86);
          }
        }
      }
      v41 = *(_QWORD ***)(jj + 8);
      v42 = jj;
      if ( v41 )
      {
        v43 = *v41;
        for ( jj = *(_QWORD *)(jj + 8); v43; v43 = (_QWORD *)*v43 )
          jj = (unsigned __int64)v43;
      }
      else
      {
        while ( 1 )
        {
          jj = *(_QWORD *)(jj + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !jj || *(_QWORD *)jj == v42 )
            break;
          v42 = jj;
        }
      }
    }
    goto LABEL_88;
  }
  return result;
}
