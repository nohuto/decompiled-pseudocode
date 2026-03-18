/*
 * XREFs of VidSchiResetEngine @ 0x1C002F188
 * Callers:
 *     VidSchiResetEngines @ 0x1C00C7014 (VidSchiResetEngines.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     _TlgCreateSz @ 0x1C00290D8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0029110 (_TlgWrite.c)
 *     McTemplateK0dp @ 0x1C002B9B8 (McTemplateK0dp.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0039794 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C007A828 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiMarkDevicesInError @ 0x1C00C6C30 (VidSchiMarkDevicesInError.c)
 */

char __fastcall VidSchiResetEngine(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r14
  _DWORD *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _TDR_RECOVERY_CONTEXT *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rax
  char v12; // r15
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // r10d
  __int64 v20; // rdx
  const GUID *v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int16 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ebx
  const GUID *v30; // r9
  __int64 v31; // rcx
  unsigned __int16 *v32; // rax
  unsigned __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // eax
  bool IsLimitExhausted; // al
  __int64 v46; // rdx
  unsigned __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rcx
  const CHAR *v50; // rdx
  unsigned __int16 *v51; // rax
  LPCGUID v52; // r9
  char v53; // bl
  __int64 v54; // rdx
  __int64 v55; // rax
  char result; // al
  char v57; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v58[7]; // [rsp+39h] [rbp-CFh] BYREF
  int v59; // [rsp+40h] [rbp-C8h] BYREF
  int v60; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v61; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v63[7]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+90h] [rbp-78h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v65; // [rsp+98h] [rbp-70h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-68h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v67; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-58h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v69; // [rsp+B8h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v72; // [rsp+E0h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v74; // [rsp+108h] [rbp+0h]
  int v75; // [rsp+110h] [rbp+8h]
  int v76; // [rsp+114h] [rbp+Ch]
  _DWORD *v77; // [rsp+118h] [rbp+10h]
  int v78; // [rsp+120h] [rbp+18h]
  int v79; // [rsp+124h] [rbp+1Ch]
  __int64 v80; // [rsp+128h] [rbp+20h]
  _DWORD v81[2]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v82; // [rsp+138h] [rbp+30h]
  __int64 v83; // [rsp+140h] [rbp+38h]
  __int64 v84; // [rsp+148h] [rbp+40h]
  __int64 v85; // [rsp+150h] [rbp+48h]
  __int64 v86; // [rsp+158h] [rbp+50h]
  __int64 v87; // [rsp+160h] [rbp+58h]
  struct _TDR_RECOVERY_CONTEXT **v88; // [rsp+168h] [rbp+60h]
  __int64 v89; // [rsp+170h] [rbp+68h]
  char *v90; // [rsp+178h] [rbp+70h]
  __int64 v91; // [rsp+180h] [rbp+78h]
  _BYTE *v92; // [rsp+188h] [rbp+80h]
  __int64 v93; // [rsp+190h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v94; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v95; // [rsp+1B8h] [rbp+B0h]
  __int64 v96; // [rsp+1C0h] [rbp+B8h]
  _DWORD *v97; // [rsp+1C8h] [rbp+C0h]
  __int64 v98; // [rsp+1D0h] [rbp+C8h]
  __int64 v99; // [rsp+1D8h] [rbp+D0h]
  _DWORD v100[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v101; // [rsp+1E8h] [rbp+E0h]
  __int64 v102; // [rsp+1F0h] [rbp+E8h]
  unsigned int *v103; // [rsp+1F8h] [rbp+F0h]
  __int64 v104; // [rsp+200h] [rbp+F8h]
  int *v105; // [rsp+208h] [rbp+100h]
  __int64 v106; // [rsp+210h] [rbp+108h]
  int *v107; // [rsp+218h] [rbp+110h]
  __int64 v108; // [rsp+220h] [rbp+118h]
  EVENT_DATA_DESCRIPTOR v109; // [rsp+228h] [rbp+120h] BYREF
  __int64 *v110; // [rsp+248h] [rbp+140h]
  __int64 v111; // [rsp+250h] [rbp+148h]
  _DWORD *v112; // [rsp+258h] [rbp+150h]
  __int64 v113; // [rsp+260h] [rbp+158h]
  __int64 v114; // [rsp+268h] [rbp+160h]
  _DWORD v115[2]; // [rsp+270h] [rbp+168h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v116; // [rsp+278h] [rbp+170h]
  __int64 v117; // [rsp+280h] [rbp+178h]
  __int64 *v118; // [rsp+288h] [rbp+180h]
  __int64 v119; // [rsp+290h] [rbp+188h]
  char *v120; // [rsp+298h] [rbp+190h]
  __int64 v121; // [rsp+2A0h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2A8h] [rbp+1A0h] BYREF

  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v4[3] = *(_QWORD *)(a1 + 168);
  v4[4] = *(_QWORD *)(a1 + 64);
  v4[5] = *(_QWORD *)(a1 + 96);
  WdLogEvent5_WdEvent(v4);
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 2860) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 716));
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 2864)) == 1 )
    {
      *(_QWORD *)(a1 + 232) = 0LL;
      VidSchiSubmitPreemptionCommand(a1);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2864));
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 716));
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1648), &LockHandle);
  v6 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 112LL * *(unsigned int *)(a1 + 196));
  memset(v6, 0, 0x70uLL);
  *(_DWORD *)(a1 + 196) = (*(_DWORD *)(a1 + 196) + 1) & (*(_DWORD *)(a1 + 192) - 1);
  memset(v63, 0, sizeof(v63));
  v63[0] = a1;
  DpSynchronizeExecution(*(_QWORD *)(v5 + 24), VidSchiSetNodeResettingStateAtISR, v63, *(unsigned int *)(v5 + 32), v58);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  *v6 = 6;
  v9 = 0LL;
  *((_QWORD *)v6 + 1) = v63[1];
  *((_QWORD *)v6 + 2) = v63[2];
  *((_QWORD *)v6 + 3) = v63[3];
  *((_QWORD *)v6 + 4) = v63[4];
  *((_QWORD *)v6 + 6) = v63[6];
  if ( LODWORD(v63[6]) == HIDWORD(v63[6]) && !*(_DWORD *)(a1 + 2012) )
  {
    if ( *(_DWORD *)(a1 + 2860) )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
      v10[3] = 281LL;
      v10[4] = 2048LL;
      v10[5] = HIDWORD(v63[6]);
      v10[6] = *(unsigned int *)(a1 + 2860);
      v10[7] = 0LL;
      WdLogEvent5_WdCriticalError(v10);
      __debugbreak();
    }
    v11 = WdLogNewEntry5_WdEvent(v8, v7);
    *(_QWORD *)(v11 + 24) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(a1 + 96);
    WdLogEvent5_WdEvent(v11);
    v12 = 1;
    v63[5] = v63[2];
    *((_BYTE *)v6 + 61) = 0;
    goto LABEL_37;
  }
  if ( *(_QWORD *)(v5 + 2416) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v5 + 2408) = RecoveryContext;
    v9 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_QWORD *)RecoveryContext + 350) = a2;
      *((_QWORD *)RecoveryContext + 1) = v5 + 2404;
      *((_DWORD *)RecoveryContext + 4) = 6;
      v14 = *(_QWORD *)(v5 + 16);
      *((_QWORD *)v9 + 4) = v14;
      _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
      v15 = *((_QWORD *)v9 + 4);
      *((_QWORD *)v9 + 5) = -1LL;
      *((_DWORD *)v9 + 37) = 40971;
      *((_DWORD *)v9 + 38) = DpiGetDriverVersion(*(_QWORD *)(v15 + 192));
      *((_DWORD *)v9 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v5 + 2416) + 4LL);
      v16 = *((_QWORD *)v9 + 4);
      v17 = *(_QWORD *)(v16 + 464);
      if ( !v17 )
        v17 = *(_QWORD *)(v16 + 320);
      *((_QWORD *)v9 + 13) = v17;
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v5 + 2408), 1);
    }
  }
  v18 = *(unsigned __int16 *)(a1 + 4);
  v19 = *(_DWORD *)(a1 + 484) + 1;
  *(_DWORD *)(a1 + 484) = v19;
  v20 = *(_QWORD *)(v5 + 616);
  v21 = (const GUID *)*(unsigned int *)(v5 + 688);
  v71 = 0LL;
  v72 = 0;
  v22 = v20 + 8 * v18;
  if ( (unsigned int)v18 >= (unsigned int)v21 )
    v22 = v20;
  HIDWORD(v71) = *(unsigned __int16 *)(*(_QWORD *)v22 + 6LL);
  if ( (unsigned int)v18 < (unsigned int)v21 )
    v20 += 8 * v18;
  LODWORD(v71) = *(unsigned __int16 *)(*(_QWORD *)v20 + 8LL);
  if ( hProvider > 5u
    && (qword_1C004D058 & 0x400000000010LL) != 0
    && (qword_1C004D060 & 0x400000000010LL) == qword_1C004D060 )
  {
    v23 = *(_QWORD *)(v5 + 16);
    v24 = *(_QWORD *)(v23 + 276);
    v76 = 0;
    v64 = v24;
    v74 = &v64;
    v75 = 8;
    v25 = *(unsigned __int16 **)(v23 + 1392);
    v79 = 0;
    v77 = v81;
    v78 = 2;
    LODWORD(v23) = *v25;
    v26 = *((_QWORD *)v25 + 1);
    v81[1] = 0;
    v80 = v26;
    v84 = a1 + 64;
    v88 = &v65;
    v90 = (char *)v9 + 56;
    v82 = a1 + 168;
    v92 = &v58[3];
    v81[0] = v23;
    v83 = 8LL;
    v85 = 8LL;
    v86 = a1 + 96;
    v87 = 8LL;
    v65 = v9;
    v89 = 8LL;
    v91 = 4LL;
    *(_DWORD *)&v58[3] = v19;
    v93 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040F8A, 0LL, v21, 0xBu, &pData);
  }
  v29 = ((__int64 (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[37])(*(_QWORD *)(v5 + 8), &v71);
  if ( v29 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    *(_DWORD *)(a1 + 16) = 2;
  }
  *((_BYTE *)v6 + 61) = 1;
  v6[14] = v29;
  if ( hProvider > 5u )
  {
    v27 = 0x400000000010LL;
    if ( (qword_1C004D058 & 0x400000000010LL) != 0 && (qword_1C004D060 & 0x400000000010LL) == qword_1C004D060 )
    {
      v31 = *(_QWORD *)(v5 + 16);
      v66 = *(_QWORD *)(v31 + 276);
      v95 = &v66;
      v96 = 8LL;
      v32 = *(unsigned __int16 **)(v31 + 1392);
      v97 = v100;
      v98 = 2LL;
      LODWORD(v31) = *v32;
      v99 = *((_QWORD *)v32 + 1);
      v101 = &v67;
      v103 = &v72;
      v105 = &v59;
      v60 = *(_DWORD *)(a1 + 484);
      v107 = &v60;
      v100[0] = v31;
      v100[1] = 0;
      v67 = v9;
      v102 = 8LL;
      v104 = 4LL;
      v59 = v29;
      v106 = 4LL;
      v108 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040F10, 0LL, v30, 9u, &v94);
    }
  }
  v33 = v72;
  *((_QWORD *)v6 + 5) = v72;
  *((_BYTE *)v6 + 60) = v12;
  if ( !v12 )
    goto LABEL_34;
  if ( v33 < v63[2] || v33 > v63[4] )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
    v34[3] = 281LL;
    v34[4] = 10LL;
    v34[5] = v72;
    v34[6] = v63[2];
    v34[7] = *(_QWORD *)(v5 + 16);
    WdLogEvent5_WdCriticalError(v34);
    __debugbreak();
LABEL_34:
    v33 = v63[4];
  }
  v63[5] = v33;
  if ( v9 )
    *((_DWORD *)v9 + 704) = v29;
LABEL_37:
  v57 = 0;
  v62 = 0LL;
  if ( *(_QWORD *)(v5 + 2416) == a1 )
  {
    v35 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 104);
      v37 = *(_QWORD *)(v36 + 40);
      if ( v37 )
      {
        v38 = 0LL;
        if ( *(_QWORD *)(v37 + 8) )
          v38 = v36;
        v62 = v38;
      }
    }
  }
  VidSchiMarkDevicesInError(v63, &v57, &v62);
  if ( v9 )
  {
    v39 = v62;
    if ( v62 )
    {
      v40 = *(_QWORD *)(v62 + 40);
      v41 = v40;
      v42 = *(_QWORD *)(v40 + 8);
      if ( v42 )
      {
        *((_QWORD *)v9 + 351) = *(_QWORD *)(v42 + 64);
        v43 = *(_QWORD *)(*(_QWORD *)(v40 + 8) + 72LL);
        if ( v43 )
          v43 = *(_QWORD *)(v43 + 80);
        *((_QWORD *)v9 + 12) = v43;
        v41 = *(_QWORD *)(v39 + 40);
      }
      if ( !*(_BYTE *)(v41 + 2624) )
      {
        v44 = *(_DWORD *)(v39 + 48);
        if ( (v44 & 8) == 0 && (v44 & 1) == 0 )
        {
          TdrHistoryUpdate((struct _TDR_HISTORY *)(v40 + 32), v9);
          IsLimitExhausted = TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)(v40 + 32), v9, 1);
          *((_BYTE *)v9 + 2820) = IsLimitExhausted;
          if ( IsLimitExhausted )
          {
            v46 = *(_QWORD *)(v40 + 2616);
            v47 = (unsigned __int64)*(unsigned int *)(v5 + 4) >> 5;
            v48 = *(_DWORD *)(v5 + 4) & 0x1F;
            *(_DWORD *)(v46 + 4 * v47) |= 1 << (*(_BYTE *)(v5 + 4) & 0x1F);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0dp(v48, v46, (const GUID *)v47, *(_DWORD *)(v5 + 4), *((_QWORD *)v9 + 351));
            }
          }
        }
      }
    }
    TdrUpdateDbgReport(v9, 1);
    TdrCollectDbgInfoStage2(v9);
    if ( hProvider > 5u
      && (qword_1C004D058 & 0x400000000010LL) != 0
      && (qword_1C004D060 & 0x400000000010LL) == qword_1C004D060 )
    {
      v49 = *(_QWORD *)(v5 + 16);
      v50 = (const CHAR *)*((_QWORD *)v9 + 12);
      v68 = *(_QWORD *)(v49 + 276);
      v110 = &v68;
      v111 = 8LL;
      v51 = *(unsigned __int16 **)(v49 + 1392);
      v112 = v115;
      v113 = 2LL;
      LODWORD(v49) = *v51;
      v114 = *((_QWORD *)v51 + 1);
      v116 = &v69;
      LODWORD(v61) = *(_DWORD *)(a1 + 484);
      v118 = &v61;
      v115[0] = v49;
      v120 = (char *)v9 + 2808;
      v115[1] = 0;
      v69 = v9;
      v117 = 8LL;
      v119 = 4LL;
      v121 = 8LL;
      TlgCreateSz(&pDesc, v50);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040E99, 0LL, v52, 9u, &v109);
    }
    TdrCompleteRecoveryContext(v9, 1, 1);
    *(_QWORD *)(v5 + 2408) = 0LL;
  }
  v53 = v57;
  if ( v12 )
  {
    v54 = v63[5];
    *(_DWORD *)(a1 + 440) &= 0xFFFFFFFC;
    VidSchiCompletePendingCommandInNodeHwQueue(a1, v54, 0LL);
    v55 = v63[5];
    if ( v53 )
      v12 = 0;
    *(_QWORD *)(a1 + 64) = v63[5];
    *(_QWORD *)(a1 + 72) = v55;
  }
  RtlClearBitEx(v5 + 568, *(unsigned __int16 *)(a1 + 4));
  *(_DWORD *)(a1 + 16) = 0;
  result = v12;
  *((_BYTE *)v6 + 60) = v12;
  *((_BYTE *)v6 + 62) = v53;
  *((_QWORD *)v6 + 5) = v63[5];
  return result;
}
