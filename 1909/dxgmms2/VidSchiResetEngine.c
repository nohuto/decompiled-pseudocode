/*
 * XREFs of VidSchiResetEngine @ 0x1C002FB6C
 * Callers:
 *     VidSchiResetEngines @ 0x1C00C9D2C (VidSchiResetEngines.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     _TlgCreateSz @ 0x1C0029C28 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0029C60 (_TlgWrite.c)
 *     McTemplateK0dp @ 0x1C002C094 (McTemplateK0dp.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C003A19C (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C007CFE8 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiMarkDevicesInError @ 0x1C00C9944 (VidSchiMarkDevicesInError.c)
 */

char __fastcall VidSchiResetEngine(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r14
  _DWORD *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  const GUID *v9; // r9
  struct _TDR_RECOVERY_CONTEXT *v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rax
  char v13; // r15
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // r10d
  __int64 v21; // rdx
  __int64 v22; // rax
  bool v23; // cf
  __int64 v24; // rcx
  unsigned __int16 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // ebx
  const GUID *v29; // r9
  __int64 v30; // rcx
  unsigned __int16 *v31; // rax
  unsigned __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  bool IsLimitExhausted; // al
  __int64 v45; // rdx
  unsigned __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rcx
  const CHAR *v49; // rdx
  unsigned __int16 *v50; // rax
  LPCGUID v51; // r9
  char v52; // bl
  __int64 v53; // rdx
  __int64 v54; // rax
  char result; // al
  char v56; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v57[7]; // [rsp+39h] [rbp-CFh] BYREF
  int v58; // [rsp+40h] [rbp-C8h] BYREF
  int v59; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v60; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v62[7]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+90h] [rbp-78h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v64; // [rsp+98h] [rbp-70h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-68h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v66; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-58h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v68; // [rsp+B8h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v70[2]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v71; // [rsp+E0h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v73; // [rsp+108h] [rbp+0h]
  __int64 v74; // [rsp+110h] [rbp+8h]
  _DWORD *v75; // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+120h] [rbp+18h]
  __int64 v77; // [rsp+128h] [rbp+20h]
  _DWORD v78[2]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v79; // [rsp+138h] [rbp+30h]
  __int64 v80; // [rsp+140h] [rbp+38h]
  __int64 v81; // [rsp+148h] [rbp+40h]
  __int64 v82; // [rsp+150h] [rbp+48h]
  __int64 v83; // [rsp+158h] [rbp+50h]
  __int64 v84; // [rsp+160h] [rbp+58h]
  struct _TDR_RECOVERY_CONTEXT **v85; // [rsp+168h] [rbp+60h]
  __int64 v86; // [rsp+170h] [rbp+68h]
  char *v87; // [rsp+178h] [rbp+70h]
  __int64 v88; // [rsp+180h] [rbp+78h]
  _BYTE *v89; // [rsp+188h] [rbp+80h]
  __int64 v90; // [rsp+190h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v91; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v92; // [rsp+1B8h] [rbp+B0h]
  __int64 v93; // [rsp+1C0h] [rbp+B8h]
  _DWORD *v94; // [rsp+1C8h] [rbp+C0h]
  __int64 v95; // [rsp+1D0h] [rbp+C8h]
  __int64 v96; // [rsp+1D8h] [rbp+D0h]
  _DWORD v97[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v98; // [rsp+1E8h] [rbp+E0h]
  __int64 v99; // [rsp+1F0h] [rbp+E8h]
  unsigned int *v100; // [rsp+1F8h] [rbp+F0h]
  __int64 v101; // [rsp+200h] [rbp+F8h]
  int *v102; // [rsp+208h] [rbp+100h]
  __int64 v103; // [rsp+210h] [rbp+108h]
  int *v104; // [rsp+218h] [rbp+110h]
  __int64 v105; // [rsp+220h] [rbp+118h]
  EVENT_DATA_DESCRIPTOR v106; // [rsp+228h] [rbp+120h] BYREF
  __int64 *v107; // [rsp+248h] [rbp+140h]
  __int64 v108; // [rsp+250h] [rbp+148h]
  _DWORD *v109; // [rsp+258h] [rbp+150h]
  __int64 v110; // [rsp+260h] [rbp+158h]
  __int64 v111; // [rsp+268h] [rbp+160h]
  _DWORD v112[2]; // [rsp+270h] [rbp+168h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v113; // [rsp+278h] [rbp+170h]
  __int64 v114; // [rsp+280h] [rbp+178h]
  __int64 *v115; // [rsp+288h] [rbp+180h]
  __int64 v116; // [rsp+290h] [rbp+188h]
  char *v117; // [rsp+298h] [rbp+190h]
  __int64 v118; // [rsp+2A0h] [rbp+198h]
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
  memset(v62, 0, sizeof(v62));
  v62[0] = a1;
  DpSynchronizeExecution(*(_QWORD *)(v5 + 24), VidSchiSetNodeResettingStateAtISR, v62, *(unsigned int *)(v5 + 32), v57);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  *v6 = 6;
  v10 = 0LL;
  *((_QWORD *)v6 + 1) = v62[1];
  *((_QWORD *)v6 + 2) = v62[2];
  *((_QWORD *)v6 + 3) = v62[3];
  *((_QWORD *)v6 + 4) = v62[4];
  *((_QWORD *)v6 + 6) = v62[6];
  if ( LODWORD(v62[6]) == HIDWORD(v62[6]) && !*(_DWORD *)(a1 + 2012) )
  {
    if ( *(_DWORD *)(a1 + 2860) )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
      v11[3] = 281LL;
      v11[4] = 2048LL;
      v11[5] = HIDWORD(v62[6]);
      v11[6] = *(unsigned int *)(a1 + 2860);
      v11[7] = 0LL;
      WdLogEvent5_WdCriticalError(v11);
      __debugbreak();
    }
    v12 = WdLogNewEntry5_WdEvent(v8, v7);
    *(_QWORD *)(v12 + 24) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(v12 + 32) = *(_QWORD *)(a1 + 96);
    WdLogEvent5_WdEvent(v12);
    v13 = 1;
    v62[5] = v62[2];
    *((_BYTE *)v6 + 61) = 0;
    goto LABEL_37;
  }
  if ( *(_QWORD *)(v5 + 2416) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v5 + 2408) = RecoveryContext;
    v10 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_QWORD *)RecoveryContext + 350) = a2;
      *((_QWORD *)RecoveryContext + 1) = v5 + 2404;
      *((_DWORD *)RecoveryContext + 4) = 6;
      v15 = *(_QWORD *)(v5 + 16);
      *((_QWORD *)v10 + 4) = v15;
      _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24));
      v16 = *((_QWORD *)v10 + 4);
      *((_QWORD *)v10 + 5) = -1LL;
      *((_DWORD *)v10 + 37) = 45060;
      *((_DWORD *)v10 + 38) = DpiGetDriverVersion(*(_QWORD *)(v16 + 192));
      *((_DWORD *)v10 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v5 + 2416) + 4LL);
      v17 = *((_QWORD *)v10 + 4);
      v18 = *(_QWORD *)(v17 + 464);
      if ( !v18 )
        v18 = *(_QWORD *)(v17 + 320);
      *((_QWORD *)v10 + 13) = v18;
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v5 + 2408), 1);
    }
  }
  v19 = *(unsigned __int16 *)(a1 + 4);
  v20 = *(_DWORD *)(a1 + 484) + 1;
  v71 = 0;
  *(_DWORD *)(a1 + 484) = v20;
  v21 = *(_QWORD *)(v5 + 616);
  v22 = v21 + 8 * v19;
  v23 = (unsigned int)v19 < *(_DWORD *)(v5 + 688);
  if ( (unsigned int)v19 >= *(_DWORD *)(v5 + 688) )
    v22 = *(_QWORD *)(v5 + 616);
  v70[1] = *(unsigned __int16 *)(*(_QWORD *)v22 + 6LL);
  if ( v23 )
    v21 += 8 * v19;
  v70[0] = *(unsigned __int16 *)(*(_QWORD *)v21 + 8LL);
  if ( hProvider > 5u
    && (qword_1C004E058 & 0x400000000010LL) != 0
    && (qword_1C004E060 & 0x400000000010LL) == qword_1C004E060 )
  {
    v24 = *(_QWORD *)(v5 + 16);
    v63 = *(_QWORD *)(v24 + 276);
    v73 = &v63;
    v74 = 8LL;
    v25 = *(unsigned __int16 **)(v24 + 1408);
    v75 = v78;
    v76 = 2LL;
    LODWORD(v24) = *v25;
    v77 = *((_QWORD *)v25 + 1);
    v81 = a1 + 64;
    v85 = &v64;
    v87 = (char *)v10 + 56;
    v79 = a1 + 168;
    v89 = &v57[3];
    v78[0] = v24;
    v78[1] = 0;
    v80 = 8LL;
    v82 = 8LL;
    v83 = a1 + 96;
    v84 = 8LL;
    v64 = v10;
    v86 = 8LL;
    v88 = 4LL;
    *(_DWORD *)&v57[3] = v20;
    v90 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040F8A, 0LL, v9, 0xBu, &pData);
  }
  v28 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[37])(*(_QWORD *)(v5 + 8), v70);
  if ( v28 )
  {
    v13 = 0;
  }
  else
  {
    v13 = 1;
    *(_DWORD *)(a1 + 16) = 2;
  }
  *((_BYTE *)v6 + 61) = 1;
  v6[14] = v28;
  if ( hProvider > 5u )
  {
    v26 = 0x400000000010LL;
    if ( (qword_1C004E058 & 0x400000000010LL) != 0 && (qword_1C004E060 & 0x400000000010LL) == qword_1C004E060 )
    {
      v30 = *(_QWORD *)(v5 + 16);
      v65 = *(_QWORD *)(v30 + 276);
      v92 = &v65;
      v93 = 8LL;
      v31 = *(unsigned __int16 **)(v30 + 1408);
      v94 = v97;
      v95 = 2LL;
      LODWORD(v30) = *v31;
      v96 = *((_QWORD *)v31 + 1);
      v98 = &v66;
      v100 = &v71;
      v102 = &v58;
      v59 = *(_DWORD *)(a1 + 484);
      v104 = &v59;
      v97[0] = v30;
      v97[1] = 0;
      v66 = v10;
      v99 = 8LL;
      v101 = 4LL;
      v58 = v28;
      v103 = 4LL;
      v105 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040F10, 0LL, v29, 9u, &v91);
    }
  }
  v32 = v71;
  *((_QWORD *)v6 + 5) = v71;
  *((_BYTE *)v6 + 60) = v13;
  if ( !v13 )
    goto LABEL_34;
  if ( v32 < v62[2] || v32 > v62[4] )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26);
    v33[3] = 281LL;
    v33[4] = 10LL;
    v33[5] = v71;
    v33[6] = v62[2];
    v33[7] = *(_QWORD *)(v5 + 16);
    WdLogEvent5_WdCriticalError(v33);
    __debugbreak();
LABEL_34:
    v32 = v62[4];
  }
  v62[5] = v32;
  if ( v10 )
    *((_DWORD *)v10 + 704) = v28;
LABEL_37:
  v56 = 0;
  v61 = 0LL;
  if ( *(_QWORD *)(v5 + 2416) == a1 )
  {
    v34 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 104);
      v36 = *(_QWORD *)(v35 + 40);
      if ( v36 )
      {
        v37 = 0LL;
        if ( *(_QWORD *)(v36 + 8) )
          v37 = v35;
        v61 = v37;
      }
    }
  }
  VidSchiMarkDevicesInError(v62, &v56, &v61);
  if ( v10 )
  {
    v38 = v61;
    if ( v61 )
    {
      v39 = *(_QWORD *)(v61 + 40);
      v40 = v39;
      v41 = *(_QWORD *)(v39 + 8);
      if ( v41 )
      {
        *((_QWORD *)v10 + 351) = *(_QWORD *)(v41 + 64);
        v42 = *(_QWORD *)(*(_QWORD *)(v39 + 8) + 72LL);
        if ( v42 )
          v42 = *(_QWORD *)(v42 + 80);
        *((_QWORD *)v10 + 12) = v42;
        v40 = *(_QWORD *)(v38 + 40);
      }
      if ( !*(_BYTE *)(v40 + 2624) )
      {
        v43 = *(_DWORD *)(v38 + 48);
        if ( (v43 & 8) == 0 && (v43 & 1) == 0 )
        {
          TdrHistoryUpdate((struct _TDR_HISTORY *)(v39 + 32), v10);
          IsLimitExhausted = TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)(v39 + 32), v10, 1);
          *((_BYTE *)v10 + 2820) = IsLimitExhausted;
          if ( IsLimitExhausted )
          {
            v45 = *(_QWORD *)(v39 + 2616);
            v46 = (unsigned __int64)*(unsigned int *)(v5 + 4) >> 5;
            v47 = *(_DWORD *)(v5 + 4) & 0x1F;
            *(_DWORD *)(v45 + 4 * v46) |= 1 << (*(_BYTE *)(v5 + 4) & 0x1F);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0dp(v47, v45, (const GUID *)v46, *(_DWORD *)(v5 + 4), *((_QWORD *)v10 + 351));
            }
          }
        }
      }
    }
    TdrUpdateDbgReport(v10, 1);
    TdrCollectDbgInfoStage2(v10);
    if ( hProvider > 5u
      && (qword_1C004E058 & 0x400000000010LL) != 0
      && (qword_1C004E060 & 0x400000000010LL) == qword_1C004E060 )
    {
      v48 = *(_QWORD *)(v5 + 16);
      v49 = (const CHAR *)*((_QWORD *)v10 + 12);
      v67 = *(_QWORD *)(v48 + 276);
      v107 = &v67;
      v108 = 8LL;
      v50 = *(unsigned __int16 **)(v48 + 1408);
      v109 = v112;
      v110 = 2LL;
      LODWORD(v48) = *v50;
      v111 = *((_QWORD *)v50 + 1);
      v113 = &v68;
      LODWORD(v60) = *(_DWORD *)(a1 + 484);
      v115 = &v60;
      v112[0] = v48;
      v117 = (char *)v10 + 2808;
      v112[1] = 0;
      v68 = v10;
      v114 = 8LL;
      v116 = 4LL;
      v118 = 8LL;
      TlgCreateSz(&pDesc, v49);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040E99, 0LL, v51, 9u, &v106);
    }
    TdrCompleteRecoveryContext(v10, 1, 1);
    *(_QWORD *)(v5 + 2408) = 0LL;
  }
  v52 = v56;
  if ( v13 )
  {
    v53 = v62[5];
    *(_DWORD *)(a1 + 440) &= 0xFFFFFFFC;
    VidSchiCompletePendingCommandInNodeHwQueue(a1, v53, 0LL);
    v54 = v62[5];
    if ( v52 )
      v13 = 0;
    *(_QWORD *)(a1 + 64) = v62[5];
    *(_QWORD *)(a1 + 72) = v54;
  }
  RtlClearBitEx(v5 + 568, *(unsigned __int16 *)(a1 + 4));
  *(_DWORD *)(a1 + 16) = 0;
  result = v13;
  *((_BYTE *)v6 + 60) = v13;
  *((_BYTE *)v6 + 62) = v52;
  *((_QWORD *)v6 + 5) = v62[5];
  return result;
}
