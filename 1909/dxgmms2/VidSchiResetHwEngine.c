/*
 * XREFs of VidSchiResetHwEngine @ 0x1C00393BC
 * Callers:
 *     VidSchiResetEngines @ 0x1C00C9D2C (VidSchiResetEngines.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     _TlgCreateSz @ 0x1C0029C28 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0029C60 (_TlgWrite.c)
 */

bool __fastcall VidSchiResetHwEngine(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _DWORD *v5; // r15
  int v6; // eax
  int v7; // ecx
  const GUID *v8; // r9
  struct _TDR_RECOVERY_CONTEXT *v9; // rbx
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int16 *v20; // rax
  int v21; // eax
  const GUID *v22; // r9
  int v23; // r12d
  bool v24; // r14
  __int64 v25; // rcx
  unsigned __int16 *v26; // rax
  __int64 v27; // rcx
  const CHAR *v28; // rdx
  unsigned __int16 *v29; // rax
  LPCGUID v30; // r9
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rax
  bool v34; // cf
  int v35; // eax
  int v37; // [rsp+38h] [rbp-D0h] BYREF
  int v38; // [rsp+3Ch] [rbp-CCh] BYREF
  int v39; // [rsp+40h] [rbp-C8h] BYREF
  int v40; // [rsp+44h] [rbp-C4h] BYREF
  int v41; // [rsp+48h] [rbp-C0h] BYREF
  int v42; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v43; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v44[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A8h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v46; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+70h] [rbp-98h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v48; // [rsp+78h] [rbp-90h] BYREF
  __int64 v49; // [rsp+80h] [rbp-88h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v50; // [rsp+88h] [rbp-80h] BYREF
  __int64 v51; // [rsp+90h] [rbp-78h] BYREF
  __int64 v52; // [rsp+98h] [rbp-70h]
  __int64 v53; // [rsp+A0h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  _DWORD *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  __int64 v60; // [rsp+108h] [rbp+0h]
  _DWORD v61[2]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  __int64 v64; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]
  __int64 v66; // [rsp+138h] [rbp+30h]
  __int64 v67; // [rsp+140h] [rbp+38h]
  struct _TDR_RECOVERY_CONTEXT **v68; // [rsp+148h] [rbp+40h]
  __int64 v69; // [rsp+150h] [rbp+48h]
  char *v70; // [rsp+158h] [rbp+50h]
  __int64 v71; // [rsp+160h] [rbp+58h]
  int *v72; // [rsp+168h] [rbp+60h]
  __int64 v73; // [rsp+170h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v74; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v75; // [rsp+198h] [rbp+90h]
  __int64 v76; // [rsp+1A0h] [rbp+98h]
  _DWORD *v77; // [rsp+1A8h] [rbp+A0h]
  __int64 v78; // [rsp+1B0h] [rbp+A8h]
  __int64 v79; // [rsp+1B8h] [rbp+B0h]
  _DWORD v80[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v81; // [rsp+1C8h] [rbp+C0h]
  __int64 v82; // [rsp+1D0h] [rbp+C8h]
  int *v83; // [rsp+1D8h] [rbp+D0h]
  __int64 v84; // [rsp+1E0h] [rbp+D8h]
  int *v85; // [rsp+1E8h] [rbp+E0h]
  __int64 v86; // [rsp+1F0h] [rbp+E8h]
  int *v87; // [rsp+1F8h] [rbp+F0h]
  __int64 v88; // [rsp+200h] [rbp+F8h]
  EVENT_DATA_DESCRIPTOR v89; // [rsp+208h] [rbp+100h] BYREF
  __int64 *v90; // [rsp+228h] [rbp+120h]
  __int64 v91; // [rsp+230h] [rbp+128h]
  _DWORD *v92; // [rsp+238h] [rbp+130h]
  __int64 v93; // [rsp+240h] [rbp+138h]
  __int64 v94; // [rsp+248h] [rbp+140h]
  _DWORD v95[2]; // [rsp+250h] [rbp+148h] BYREF
  struct _TDR_RECOVERY_CONTEXT **v96; // [rsp+258h] [rbp+150h]
  __int64 v97; // [rsp+260h] [rbp+158h]
  int *v98; // [rsp+268h] [rbp+160h]
  __int64 v99; // [rsp+270h] [rbp+168h]
  char *v100; // [rsp+278h] [rbp+170h]
  __int64 v101; // [rsp+280h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+288h] [rbp+180h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1648), &LockHandle);
  v5 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 112LL * *(unsigned int *)(a1 + 196));
  memset(v5, 0, 0x70uLL);
  v6 = *(_DWORD *)(a1 + 196);
  v7 = *(_DWORD *)(a1 + 192) - 1;
  v51 = a1;
  v52 = 0LL;
  *(_DWORD *)(a1 + 196) = (v6 + 1) & v7;
  v53 = 0LL;
  DpSynchronizeExecution(
    *(_QWORD *)(v2 + 24),
    VidSchiSetHwNodeResettingStateAtISR,
    &v51,
    *(unsigned int *)(v2 + 32),
    &v37);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeFlushQueuedDpcs();
  *v5 = 10;
  v9 = 0LL;
  *((_QWORD *)v5 + 1) = v52;
  v5[9] = v53;
  if ( *(_QWORD *)(v2 + 2416) == a1 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    *(_QWORD *)(v2 + 2408) = RecoveryContext;
    v9 = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_QWORD *)RecoveryContext + 350) = a2;
      *((_QWORD *)RecoveryContext + 1) = v2 + 2404;
      *((_DWORD *)RecoveryContext + 4) = 6;
      v11 = *(_QWORD *)(v2 + 16);
      *((_QWORD *)v9 + 4) = v11;
      _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24));
      v12 = *((_QWORD *)v9 + 4);
      *((_QWORD *)v9 + 5) = -1LL;
      *((_DWORD *)v9 + 37) = 45060;
      *((_DWORD *)v9 + 38) = DpiGetDriverVersion(*(_QWORD *)(v12 + 192));
      *((_DWORD *)v9 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v2 + 2416) + 4LL);
      v13 = *((_QWORD *)v9 + 4);
      v14 = *(_QWORD *)(v13 + 464);
      if ( !v14 )
        v14 = *(_QWORD *)(v13 + 320);
      *((_QWORD *)v9 + 13) = v14;
      TdrCollectDbgInfoStage1(*(struct _TDR_RECOVERY_CONTEXT **)(v2 + 2408), 1);
    }
  }
  v15 = *(unsigned __int16 *)(a1 + 4);
  v16 = *(_DWORD *)(a1 + 484) + 1;
  *(_DWORD *)(a1 + 484) = v16;
  v17 = *(_QWORD *)(v2 + 616);
  if ( (unsigned int)v15 < *(_DWORD *)(v2 + 688) )
    v17 += 8 * v15;
  v44[1] = *(unsigned __int16 *)(*(_QWORD *)v17 + 6LL);
  v18 = *(_QWORD *)(v2 + 616);
  if ( (unsigned int)v15 < *(_DWORD *)(v2 + 688) )
    v18 += 8 * v15;
  v44[0] = *(unsigned __int16 *)(*(_QWORD *)v18 + 8LL);
  if ( hProvider > 5u
    && (qword_1C004E058 & 0x400000000010LL) != 0
    && (qword_1C004E060 & 0x400000000010LL) == qword_1C004E060 )
  {
    v19 = *(_QWORD *)(v2 + 16);
    v45 = *(_QWORD *)(v19 + 276);
    v56 = &v45;
    v57 = 8LL;
    v20 = *(unsigned __int16 **)(v19 + 1408);
    v58 = v61;
    v59 = 2LL;
    LODWORD(v19) = *v20;
    v60 = *((_QWORD *)v20 + 1);
    v62 = a1 + 168;
    v64 = a1 + 64;
    v66 = a1 + 96;
    v68 = &v46;
    v70 = (char *)v9 + 56;
    v72 = &v38;
    v61[0] = v19;
    v61[1] = 0;
    v63 = 8LL;
    v65 = 8LL;
    v67 = 8LL;
    v46 = v9;
    v69 = 8LL;
    v71 = 4LL;
    v38 = v16;
    v73 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040F8A, 0LL, v8, 0xBu, &pData);
  }
  *(_QWORD *)(a1 + 1744) = v9;
  *(_QWORD *)(a1 + 1736) = v5 + 4;
  v21 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))DxgCoreInterface[38])(*(_QWORD *)(v2 + 8), v44);
  *(_QWORD *)(a1 + 1736) = 0LL;
  v23 = v21;
  *(_QWORD *)(a1 + 1744) = 0LL;
  if ( v21 )
  {
    v24 = 0;
  }
  else
  {
    v24 = 1;
    *(_DWORD *)(a1 + 16) = 2;
  }
  *((_BYTE *)v5 + 49) = 1;
  v5[10] = v21;
  if ( hProvider > 5u
    && (qword_1C004E058 & 0x400000000010LL) != 0
    && (qword_1C004E060 & 0x400000000010LL) == qword_1C004E060 )
  {
    v25 = *(_QWORD *)(v2 + 16);
    v47 = *(_QWORD *)(v25 + 276);
    v75 = &v47;
    v76 = 8LL;
    v26 = *(unsigned __int16 **)(v25 + 1408);
    v77 = v80;
    v78 = 2LL;
    LODWORD(v25) = *v26;
    v79 = *((_QWORD *)v26 + 1);
    v81 = &v48;
    v83 = &v39;
    v85 = &v40;
    v41 = *(_DWORD *)(a1 + 484);
    v87 = &v41;
    v80[0] = v25;
    v80[1] = 0;
    v48 = v9;
    v82 = 8LL;
    v39 = 0;
    v84 = 4LL;
    v40 = v23;
    v86 = 4LL;
    v88 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040F10, 0LL, v22, 9u, &v74);
  }
  if ( v9 )
  {
    *((_DWORD *)v9 + 704) = v23;
    TdrUpdateDbgReport(v9, 1);
    TdrCollectDbgInfoStage2(v9);
    if ( hProvider > 5u
      && (qword_1C004E058 & 0x400000000010LL) != 0
      && (qword_1C004E060 & 0x400000000010LL) == qword_1C004E060 )
    {
      v27 = *(_QWORD *)(v2 + 16);
      v28 = (const CHAR *)*((_QWORD *)v9 + 12);
      v49 = *(_QWORD *)(v27 + 276);
      v90 = &v49;
      v91 = 8LL;
      v29 = *(unsigned __int16 **)(v27 + 1408);
      v92 = v95;
      v93 = 2LL;
      LODWORD(v27) = *v29;
      v94 = *((_QWORD *)v29 + 1);
      v96 = &v50;
      v42 = *(_DWORD *)(a1 + 484);
      v98 = &v42;
      v95[0] = v27;
      v100 = (char *)v9 + 2808;
      v95[1] = 0;
      v50 = v9;
      v97 = 8LL;
      v99 = 4LL;
      v101 = 8LL;
      TlgCreateSz(&pDesc, v28);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040E99, 0LL, v30, 9u, &v89);
    }
    TdrCompleteRecoveryContext(v9, 1, 1);
    *(_QWORD *)(v2 + 2408) = 0LL;
  }
  if ( v24 )
    *(_DWORD *)(a1 + 440) &= 0xFFFFFFFC;
  RtlClearBitEx(v2 + 568, *(unsigned __int16 *)(a1 + 4));
  *(_DWORD *)(a1 + 16) = 0;
  if ( v24 )
  {
    v31 = *(unsigned __int16 *)(a1 + 4);
    v32 = *(_QWORD *)(v2 + 616);
    v43 = 0LL;
    v33 = v32 + 8 * v31;
    v34 = (unsigned int)v31 < *(_DWORD *)(v2 + 688);
    if ( (unsigned int)v31 >= *(_DWORD *)(v2 + 688) )
      v33 = v32;
    HIDWORD(v43) = *(unsigned __int16 *)(*(_QWORD *)v33 + 6LL);
    if ( v34 )
      v32 += 8 * v31;
    LODWORD(v43) = *(unsigned __int16 *)(*(_QWORD *)v32 + 8LL);
    v35 = ((__int64 (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[39])(*(_QWORD *)(v2 + 8), &v43);
    *((_BYTE *)v5 + 50) = 1;
    v5[11] = v35;
    v24 = v35 == 0;
  }
  *((_BYTE *)v5 + 48) = v24;
  return v24;
}
