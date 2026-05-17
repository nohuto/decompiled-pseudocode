/*
 * XREFs of RtlCreateHeap @ 0x18005F7E0
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     CsrpConnectToServer @ 0x18005D994 (CsrpConnectToServer.c)
 *     RtlDetectHeapLeaks @ 0x180084DE0 (RtlDetectHeapLeaks.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     RtlHeapTrkInitialize @ 0x1800F9AC0 (RtlHeapTrkInitialize.c)
 *     RtlDebugCreateHeap @ 0x1801076BC (RtlDebugCreateHeap.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x18000E97C (RtlpHeapGenerateRandomValue64.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlDeleteCriticalSection @ 0x18005C6B0 (RtlDeleteCriticalSection.c)
 *     RtlpMoveHeapBetweenLists @ 0x180060868 (RtlpMoveHeapBetweenLists.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800611AC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpPopulateListIndex @ 0x18006161C (RtlpPopulateListIndex.c)
 *     RtlpInitializeHeapSegment @ 0x1800617A8 (RtlpInitializeHeapSegment.c)
 *     RtlpCreateHeapEncoding @ 0x1800619AC (RtlpCreateHeapEncoding.c)
 *     RtlInitializeCriticalSectionEx @ 0x180061C40 (RtlInitializeCriticalSectionEx.c)
 *     RtlpHpHeapCreate @ 0x180063D90 (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x1800652CC (RtlpHpHeapDestroy.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A0740 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1800A09A0 (NtQuerySystemInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpGetHeapInterceptorIndex @ 0x180103C74 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapHandleError @ 0x180103D1C (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeCreate @ 0x180103D3C (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCommit @ 0x180105B44 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x180105CA8 (RtlpLogHeapCreateEvent.c)
 *     RtlDebugCreateHeap @ 0x1801076BC (RtlDebugCreateHeap.c)
 *     RtlpHpParametersVerify @ 0x180109E18 (RtlpHpParametersVerify.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlCreateHeap(int a1, char *a2, unsigned __int64 *a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  unsigned int v9; // r15d
  _DWORD *v10; // rdi
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  struct _PEB *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  int v21; // r15d
  unsigned int v22; // esi
  unsigned __int64 v23; // rdx
  int v24; // r15d
  __int64 v25; // rcx
  char *v26; // rdi
  char *v27; // rdx
  char *v28; // r12
  __int64 v29; // r15
  __int64 v30; // rcx
  char *v31; // rdi
  unsigned int v32; // eax
  __int64 v33; // r10
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 *v44; // rcx
  unsigned int v46; // eax
  int v47; // ecx
  unsigned __int64 v48; // r10
  unsigned int v49; // edx
  int v50; // r8d
  int v51; // r9d
  int v52; // edx
  unsigned int v53; // r9d
  unsigned __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int64 v57; // rcx
  int v58; // eax
  unsigned __int64 v59; // rdi
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v61; // r10
  char *v62; // [rsp+40h] [rbp-228h] BYREF
  unsigned __int64 v63; // [rsp+48h] [rbp-220h]
  __int64 v64; // [rsp+50h] [rbp-218h]
  unsigned int NtGlobalFlag; // [rsp+58h] [rbp-210h]
  unsigned __int64 *v66; // [rsp+60h] [rbp-208h] BYREF
  int v67; // [rsp+68h] [rbp-200h]
  unsigned __int64 v68; // [rsp+70h] [rbp-1F8h] BYREF
  char *v69; // [rsp+78h] [rbp-1F0h] BYREF
  __int64 v70; // [rsp+80h] [rbp-1E8h]
  unsigned __int64 v71; // [rsp+88h] [rbp-1E0h] BYREF
  __int64 v72; // [rsp+90h] [rbp-1D8h] BYREF
  unsigned __int64 *v73; // [rsp+98h] [rbp-1D0h] BYREF
  unsigned __int64 v74; // [rsp+A0h] [rbp-1C8h]
  __int128 v75; // [rsp+B0h] [rbp-1B8h]
  char *v76; // [rsp+C8h] [rbp-1A0h]
  void *v77; // [rsp+D0h] [rbp-198h] BYREF
  unsigned __int64 v78; // [rsp+E8h] [rbp-180h]
  int v79; // [rsp+F0h] [rbp-178h]
  char v80; // [rsp+F4h] [rbp-174h]
  __int128 v81; // [rsp+100h] [rbp-168h] BYREF
  char v82[16]; // [rsp+110h] [rbp-158h] BYREF
  unsigned __int64 *v83; // [rsp+120h] [rbp-148h]
  _OWORD v84[6]; // [rsp+130h] [rbp-138h] BYREF
  _BYTE v85[80]; // [rsp+190h] [rbp-D8h] BYREF
  char SystemInformation[40]; // [rsp+1E0h] [rbp-88h] BYREF
  __int64 v87; // [rsp+208h] [rbp-60h]

  v74 = a4;
  v70 = (__int64)a3;
  v63 = a5;
  v76 = a2;
  *(_QWORD *)&v75 = a5;
  v8 = a6;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v67 = 0;
  v62 = 0LL;
  v64 = 0LL;
  if ( dword_18015F3E8 && !a2 && !a5 )
  {
    v10 = (_DWORD *)_guard_dispatch_icall_fptr();
    if ( v10 )
      goto LABEL_145;
    if ( a6 != -1 )
      goto LABEL_165;
    v8 = 0LL;
    a4 = v74;
    a3 = (unsigned __int64 *)v70;
  }
  v9 = a1 & 0xF1FFFFFF;
  v10 = 0LL;
  if ( (v9 & 0x100) != 0 )
  {
    if ( (v9 & 2) != 0 && !a2 && !a3 && !a4 && !a5 )
    {
      if ( !v8 )
      {
        v10 = v85;
        goto LABEL_4;
      }
      v10 = (_DWORD *)v8;
      if ( (unsigned int)RtlpHpParametersVerify(v8) )
        goto LABEL_4;
LABEL_165:
      v23 = 0LL;
      goto LABEL_166;
    }
LABEL_145:
    v23 = a5;
LABEL_96:
    v44 = 0LL;
    goto LABEL_97;
  }
  if ( (RtlpHpHeapFeatures & 1) != 0 && (v9 & 2) != 0 && !a2 )
  {
    if ( !v8 )
      goto LABEL_119;
    if ( *(_QWORD *)(v8 + 8) || *(_QWORD *)(v8 + 16) || *(_QWORD *)(v8 + 48) || (v58 = 1, *(_QWORD *)(v8 + 72)) )
      v58 = 0;
    if ( v58 )
    {
LABEL_119:
      v10 = v85;
      if ( a5 )
        v10 = 0LL;
    }
  }
LABEL_4:
  if ( v10 )
  {
    if ( v10 == (_DWORD *)v85 )
    {
      memset(v10, 0, 0x50uLL);
      *v10 = 5242881;
      v10[3] = 1;
      v10[4] = -1;
      v46 = 1;
      v47 = -1;
    }
    else
    {
      v46 = v10[3];
      v47 = v10[4];
    }
    v75 = RtlpHpEnvHandle;
    _BitScanReverse(&v46, v46);
    BYTE1(v75) = v46;
    if ( v47 != -1 )
      BYTE2(v75) = v10[4] + 1;
    *((_QWORD *)&v75 + 1) = *((_QWORD *)v10 + 3);
    v48 = v74;
    if ( v70 )
      v48 = v70;
    v49 = v9 & 1 | 0x80000000;
    if ( (v9 & 4) == 0 )
      v49 = v9 & 1;
    v50 = v49 | 2;
    if ( (v9 & 8) == 0 )
      v50 = v49;
    v51 = v50 | 0x20000000;
    if ( (NtGlobalFlag & 0x1000) == 0 && (v9 & 0x8000000) == 0 )
      v51 = v50;
    v52 = v51 | 0x10000000;
    if ( (NtGlobalFlag & 0x10) == 0 && (v9 & 0x20) == 0 )
      v52 = v51;
    v53 = v52 | 0x40000000;
    if ( (v9 & 0x40000) == 0 )
      v53 = v52;
    v81 = v75;
    v54 = v48;
    if ( v74 <= v48 )
      v54 = v74;
    v55 = v53;
    LODWORD(v55) = v53 | 0x2000000;
    if ( (v9 & 0x10) == 0 )
      v55 = v53;
    v56 = RtlpHpHeapCreate(v55, v48, v54, &v81);
    v10 = (_DWORD *)v56;
    if ( v56 )
    {
      RtlpMoveHeapBetweenLists(v56, 0LL, 1LL);
      if ( !*((_WORD *)v10 + 14) )
      {
        RtlpHpHeapDestroy(v10);
        v10 = 0LL;
      }
    }
    goto LABEL_145;
  }
  if ( (v9 & 0x10000000) == 0 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( (v9 & 0xFFF80C00) == 0 )
        goto LABEL_9;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
      RtlpHeapHandleError(2LL);
    }
    if ( (v9 & 0xFFF80C00) != 0 )
      v9 &= 0x7F3FFu;
  }
LABEL_9:
  memset(v84, 0, sizeof(v84));
  if ( v8 && *(_DWORD *)v8 == 96 )
  {
    v84[0] = *(_OWORD *)v8;
    v84[1] = *(_OWORD *)(v8 + 16);
    v84[2] = *(_OWORD *)(v8 + 32);
    v84[3] = *(_OWORD *)(v8 + 48);
    v84[4] = *(_OWORD *)(v8 + 64);
    v84[5] = *(_OWORD *)(v8 + 80);
  }
  v11 = v9 | 0x20;
  if ( (NtGlobalFlag & 0x10) == 0 )
    v11 = v9;
  v12 = v11 | 0x40;
  if ( (NtGlobalFlag & 0x20) == 0 )
    v12 = v11;
  v13 = v12 | 0x80;
  if ( (NtGlobalFlag & 0x200000) == 0 )
    v13 = v12;
  v14 = v13 | 0x40000000;
  if ( (NtGlobalFlag & 0x40) == 0 )
    v14 = v13;
  v15 = v14 | 0x20000000;
  if ( (NtGlobalFlag & 0x80) == 0 )
    v15 = v14;
  v16 = v15 | 0x8000000;
  if ( (NtGlobalFlag & 0x1000) == 0 )
    v16 = v15;
  v17 = NtCurrentPeb();
  if ( !*((_QWORD *)&v84[0] + 1) )
    *((_QWORD *)&v84[0] + 1) = v17->HeapSegmentReserve;
  if ( !*(_QWORD *)&v84[1] )
    *(_QWORD *)&v84[1] = v17->HeapSegmentCommit;
  if ( !*((_QWORD *)&v84[1] + 1) )
    *((_QWORD *)&v84[1] + 1) = v17->HeapDeCommitFreeBlockThreshold;
  if ( !*(_QWORD *)&v84[2] )
    *(_QWORD *)&v84[2] = v17->HeapDeCommitTotalFreeThreshold;
  v18 = qword_180166088;
  if ( !qword_180166088 )
  {
    qword_180166090 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
    {
LABEL_159:
      v23 = v63;
LABEL_166:
      v10 = 0LL;
      goto LABEL_96;
    }
    v18 = v87;
    qword_180166088 = v87;
  }
  if ( !*((_QWORD *)&v84[2] + 1) )
    *((_QWORD *)&v84[2] + 1) = v18 - qword_180166090 - 4096;
  v19 = *(_QWORD *)&v84[3];
  if ( (unsigned __int64)(*(_QWORD *)&v84[3] - 1LL) > 0xFEFFF )
    v19 = 1044480LL;
  *(_QWORD *)&v84[3] = v19;
  if ( v74 )
    a4 = (v74 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    a4 = 0x2000LL;
  v68 = a4;
  if ( v70 )
    a3 = (unsigned __int64 *)((v70 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL);
  else
    a3 = (unsigned __int64 *)((a4 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL);
  v66 = a3;
  v20 = a4;
  if ( a4 > (unsigned __int64)a3 )
  {
    a4 = (unsigned __int64)a3;
    v68 = (unsigned __int64)a3;
    v20 = (unsigned __int64)a3;
  }
  if ( (v16 & 2) == 0 || a2 )
  {
    v70 = 0LL;
    v21 = v67;
  }
  else
  {
    v70 = 4096LL;
    v21 = 2;
    v67 = 2;
    if ( (unsigned __int64)(a3 - 512) < v20 )
    {
      a3 = (unsigned __int64 *)(((unsigned __int64)a3 + 69631) & 0xFFFFFFFFFFFF0000uLL);
      v66 = a3;
    }
  }
  if ( !v20 || !a3 )
    goto LABEL_159;
  if ( (v16 & 0x61000000) != 0 && (v16 & 0x10000000) == 0 )
    return RtlDebugCreateHeap(v16, (_DWORD)a2, (_DWORD)a3, a4, a5, (__int64)v84);
  NtGlobalFlag = 704;
  v22 = v16;
  v23 = v63;
  if ( (v16 & 1) != 0 )
  {
    if ( a5 )
      goto LABEL_166;
  }
  else
  {
    v64 = v63 & -(__int64)(a5 != 0);
    v22 = v16 | 0x80000000;
    if ( !v63 )
      v22 = v16;
    NtGlobalFlag = v63 != 0 ? 704 : 744;
  }
  if ( a2 )
  {
    if ( *((_QWORD *)&v84[4] + 1) )
    {
      if ( !*((_QWORD *)&v84[3] + 1)
        || !*(_QWORD *)&v84[4]
        || *((_QWORD *)&v84[3] + 1) > *(_QWORD *)&v84[4]
        || (v22 & 2) != 0 )
      {
        goto LABEL_192;
      }
      v69 = a2;
      v28 = &a2[*((_QWORD *)&v84[3] + 1)];
      v66 = *(unsigned __int64 **)&v84[4];
      memset(a2, 0, 0x1000uLL);
      v27 = a2;
    }
    else
    {
      if ( (int)ZwQueryVirtualMemory(-1LL, a2, 0LL, &v77, 48LL, 0LL) < 0 )
        goto LABEL_193;
      v28 = (char *)v77;
      if ( v77 != a2 || v79 == 0x10000 )
        goto LABEL_193;
      v27 = (char *)v77;
      v69 = (char *)v77;
      if ( v79 == 4096 )
      {
        if ( (v22 & 0x40000) != 0 && (v80 & 0x40) == 0 )
          goto LABEL_193;
        memset(v77, 0, 0x1000uLL);
        if ( (int)ZwQueryVirtualMemory(-1LL, a2, 3LL, v82, 32LL, 0LL) < 0 )
          goto LABEL_193;
        v66 = v83;
        v68 = v78;
        v27 = v69;
        v28 = &v69[v78];
      }
      else
      {
        v66 = (unsigned __int64 *)v78;
        v57 = v68;
        if ( v68 > v78 )
          v57 = v78;
        v68 = v57;
        if ( v57 < 0x2000 )
          goto LABEL_193;
      }
    }
    v67 = v21 | 1;
    v26 = a2;
    v62 = a2;
    v24 = v22 & 0x40000;
    goto LABEL_60;
  }
  v72 = 0LL;
  v71 = 0LL;
  if ( *((_QWORD *)&v84[4] + 1) )
  {
LABEL_192:
    v10 = 0LL;
    v44 = (__int64 *)v64;
    goto LABEL_97;
  }
  v71 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
  v73 = (unsigned __int64 *)((char *)v66 + v71);
  if ( (unsigned __int64 *)((char *)v66 + v71) < v66 )
  {
    v73 = v66;
    v71 = 0LL;
  }
  v24 = v22 & 0x40000;
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v72, 0LL, &v73, 0x2000, (v22 & 0x40000) != 0 ? 64 : 4) < 0 )
    goto LABEL_193;
  v26 = (char *)v72;
  v62 = (char *)v72;
  v66 = v73;
  if ( v71 )
  {
    RtlpSecMemFreeVirtualMemory(v25, &v72, &v71, 0x8000LL);
    v26 = (char *)(v71 + v72);
    v62 = (char *)(v71 + v72);
    v66 = (unsigned __int64 *)((char *)v73 - v71);
  }
  v27 = v26;
  v69 = v26;
  v28 = v26;
LABEL_60:
  if ( v27 == v28 )
  {
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v69, 0LL, &v68, 4096, v24 != 0 ? 64 : 4) < 0 )
      goto LABEL_193;
    v29 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v30 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v30 = 2147353472LL;
    if ( *(_BYTE *)v30 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(v62, v69, v68, 1LL);
    v28 += v68;
    v26 = v62;
  }
  else
  {
    v29 = 2147353472LL;
  }
  v31 = v26 + 704;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v59 = (unsigned __int64)(v31 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)v62 + 41) = v59;
    v32 = NtGlobalFlag + 2064;
    v31 = (char *)(v59 + 2064);
    v22 |= 0x4000000u;
  }
  else
  {
    v32 = NtGlobalFlag;
  }
  NtGlobalFlag = (v32 + 15) & 0xFFFFFFF0;
  *((_WORD *)v62 + 4) = NtGlobalFlag >> 4;
  v62[10] = 1;
  v62[15] = 1;
  *((_DWORD *)v62 + 38) = -285217025;
  *((_DWORD *)v62 + 28) = v22 & 0xEFFFFFFF;
  *((_DWORD *)v62 + 36) = 0;
  memset(v62 + 568, 0, 0x78uLL);
  RtlpCreateHeapEncoding(v62);
  *((_DWORD *)v62 + 162) = 1;
  v33 = (__int64)v62;
  if ( (*((_DWORD *)v62 + 28) & 0x8000000) != 0 )
  {
    HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
    *(_DWORD *)(v61 + 144) = HeapInterceptorIndex;
    *((_DWORD *)v62 + 28) &= ~0x40u;
    v33 = (__int64)v62;
  }
  *(_DWORD *)(v33 + 116) = v22 & 0x6001007D;
  *((_WORD *)v62 + 105) = (_WORD)v31 - (_WORD)v62;
  *((_QWORD *)v62 + 27) = 0LL;
  v34 = v62 + 336;
  *((_QWORD *)v62 + 43) = v62 + 336;
  *v34 = v34;
  v35 = v62 + 272;
  *((_QWORD *)v62 + 35) = v62 + 272;
  *v35 = v35;
  v36 = v62 + 288;
  *((_QWORD *)v62 + 37) = v62 + 288;
  *v36 = v36;
  v37 = v62 + 240;
  *((_QWORD *)v62 + 31) = v62 + 240;
  *v37 = v37;
  if ( !v64 && (v22 & 1) == 0 )
  {
    v64 = (__int64)v31;
    if ( (int)RtlInitializeCriticalSectionEx(v31, 0LL, 0x10000000LL) >= 0 )
    {
      v31 += 40;
      goto LABEL_74;
    }
    goto LABEL_159;
  }
LABEL_74:
  *((_QWORD *)v62 + 44) = v64;
  *((_DWORD *)v62 + 30) |= 0x80000000;
  if ( (unsigned __int8)RtlpInitializeHeapSegment(
                          (_DWORD)v62,
                          (_DWORD)v62,
                          NtGlobalFlag + 1104,
                          a4,
                          v67,
                          (__int64)v69,
                          (__int64)v28,
                          (__int64)&v69[(_QWORD)v66 - v70]) )
  {
    if ( a2 )
      memset(v31, 0, 0x80uLL);
    *((_DWORD *)v31 + 2) = 128;
    *((_QWORD *)v31 + 5) = v31 + 56;
    *((_QWORD *)v31 + 4) = v62 + 336;
    *((_QWORD *)v31 + 6) = v31 + 72;
    RtlpPopulateListIndex(v62, v31);
    *((_WORD *)v62 + 104) = 0;
    *((_QWORD *)v62 + 20) = *((_QWORD *)&v84[0] + 1);
    *((_QWORD *)v62 + 21) = *(_QWORD *)&v84[1];
    *((_QWORD *)v62 + 22) = *((_QWORD *)&v84[1] + 1) >> 4;
    *((_QWORD *)v62 + 23) = *(_QWORD *)&v84[2] >> 4;
    *((_QWORD *)v62 + 25) = *((_QWORD *)&v84[2] + 1);
    *((_DWORD *)v62 + 37) = (unsigned __int64)(*(_QWORD *)&v84[3] + 15LL) >> 4;
    *((_QWORD *)v62 + 45) = RtlpHeapKey ^ *((_QWORD *)&v84[4] + 1);
    *((_DWORD *)v62 + 172) = 4;
    *((_QWORD *)v62 + 87) = 2088960LL;
    if ( (RtlpDisableHeapLookaside & 1) != 0 )
      *((_DWORD *)v62 + 30) = 1;
    *((_QWORD *)v62 + 32) = 31LL;
    *((_QWORD *)v62 + 33) = -16LL;
    v38 = (__int64)v62;
    if ( (v62[112] & 0x20) != 0 )
    {
      *((_QWORD *)v62 + 32) += 16LL;
      v38 = (__int64)v62;
    }
    *(_QWORD *)(v38 + 408) = 0LL;
    *((_WORD *)v62 + 208) = 0;
    v62[418] = 0;
    v62[419] = 0;
    *((_QWORD *)v62 + 40) = 0LL;
    if ( (v22 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
    {
LABEL_84:
      RtlpMoveHeapBetweenLists(v62, 0LL, 1LL);
      if ( *((_WORD *)v62 + 104) )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v40 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v40 = 2147353472LL;
        if ( *(_BYTE *)v40 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v29 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapCreateEvent((_DWORD)v62, v22, (_DWORD)v66, v68, *(unsigned __int8 *)v29);
        }
        v41 = 2147353482LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v42 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v42 = 2147353482LL;
        if ( *(_BYTE *)v42 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v41 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapCreateEvent((_DWORD)v62, v22, (_DWORD)v66, v68, *(unsigned __int8 *)v41);
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v43 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v43 = 2147353480LL;
        if ( *(_BYTE *)v43 )
          RtlpHeapLogRangeCreate(v62, v66, v22);
        *((_DWORD *)v62 + 30) &= ~0x80000000;
        *((_QWORD *)v62 + 46) = 0LL;
        v10 = v62;
        v62 = 0LL;
        v23 = v63;
        goto LABEL_96;
      }
      goto LABEL_193;
    }
    *((_QWORD *)v62 + 53) = RtlAllocateHeap((__int64)v62, 0x80000Au, 256LL);
    v39 = *((_QWORD *)v62 + 53);
    if ( v39 )
    {
      *(_BYTE *)(v39 - 1) = 1;
      *((_WORD *)v62 + 216) = 128;
      goto LABEL_84;
    }
  }
LABEL_193:
  v10 = 0LL;
  v44 = (__int64 *)v64;
  v23 = v63;
LABEL_97:
  if ( v44 && v44 != (__int64 *)v23 )
    RtlDeleteCriticalSection(v44, v23, a3, a4);
  if ( v62 )
  {
    if ( !a2 )
    {
      v66 = 0LL;
      RtlpSecMemFreeVirtualMemory(v44, &v62, &v66, 0x8000LL);
    }
  }
  return (__int64)v10;
}
