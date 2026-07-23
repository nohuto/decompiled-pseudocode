/*
 * XREFs of RtlCreateHeap @ 0x1800491A0
 * Callers:
 *     CsrpConnectToServer @ 0x18004B854 (CsrpConnectToServer.c)
 *     RtlDetectHeapLeaks @ 0x18006B830 (RtlDetectHeapLeaks.c)
 *     LdrEnsureMrdataHeapExists @ 0x18007C748 (LdrEnsureMrdataHeapExists.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     RtlHeapTrkInitialize @ 0x1800F77B0 (RtlHeapTrkInitialize.c)
 *     RtlDebugCreateHeap @ 0x180104BF8 (RtlDebugCreateHeap.c)
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180048120 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpMoveHeapBetweenLists @ 0x180048408 (RtlpMoveHeapBetweenLists.c)
 *     RtlpPopulateListIndex @ 0x180048AD4 (RtlpPopulateListIndex.c)
 *     RtlpInitializeHeapSegment @ 0x180048C68 (RtlpInitializeHeapSegment.c)
 *     RtlpCreateHeapEncoding @ 0x180049EDC (RtlpCreateHeapEncoding.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x180049F80 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpHpHeapCreate @ 0x18004C4C0 (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x18004FBB4 (RtlpHpHeapDestroy.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009D190 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009D2F0 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x18009D550 (NtQuerySystemInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpGetHeapInterceptorIndex @ 0x180101438 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapHandleError @ 0x1801014E0 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeCreate @ 0x180101500 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCommit @ 0x18010321C (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x180103380 (RtlpLogHeapCreateEvent.c)
 *     RtlDebugCreateHeap @ 0x180104BF8 (RtlDebugCreateHeap.c)
 *     RtlpHpParametersVerify @ 0x1801072BC (RtlpHpParametersVerify.c)
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 */

PVOID __cdecl RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PVOID Parameters)
{
  _DWORD *v8; // rsi
  ULONG v9; // r15d
  _DWORD *v10; // rdi
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // esi
  struct _PEB *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  ULONG_PTR v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r8
  ULONG_PTR v23; // rcx
  unsigned int v24; // edi
  _RTL_CRITICAL_SECTION *v25; // rdx
  char *v26; // r13
  char *v27; // rdx
  char *v28; // rsi
  int v29; // r15d
  __int64 v30; // r15
  __int64 v31; // rsi
  unsigned int v32; // eax
  __int64 v33; // r9
  _DWORD *v34; // r10
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rcx
  _RTL_CRITICAL_SECTION *v44; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned int v49; // eax
  int v50; // ecx
  SIZE_T v51; // r10
  unsigned int v52; // edx
  int v53; // r8d
  int v54; // r9d
  int v55; // edx
  unsigned int v56; // r9d
  SIZE_T v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rax
  ULONG_PTR v60; // rcx
  int v61; // eax
  unsigned __int64 v62; // rsi
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v64; // r10
  PVOID HeapHandle; // [rsp+40h] [rbp-238h] BYREF
  unsigned __int64 v66; // [rsp+48h] [rbp-230h]
  __int64 v67; // [rsp+50h] [rbp-228h]
  unsigned int NtGlobalFlag; // [rsp+58h] [rbp-220h]
  ULONG_PTR v69; // [rsp+60h] [rbp-218h] BYREF
  int v70; // [rsp+68h] [rbp-210h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-208h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-200h] BYREF
  SIZE_T v73; // [rsp+80h] [rbp-1F8h]
  __int64 v74; // [rsp+88h] [rbp-1F0h] BYREF
  PVOID v75; // [rsp+90h] [rbp-1E8h] BYREF
  ULONG_PTR v76; // [rsp+98h] [rbp-1E0h] BYREF
  SIZE_T v77; // [rsp+A0h] [rbp-1D8h]
  __int128 v78; // [rsp+B0h] [rbp-1C8h]
  PVOID v79; // [rsp+C8h] [rbp-1B0h]
  PVOID MemoryInformation[3]; // [rsp+D0h] [rbp-1A8h] BYREF
  ULONG_PTR v81; // [rsp+E8h] [rbp-190h]
  int v82; // [rsp+F0h] [rbp-188h]
  char v83; // [rsp+F4h] [rbp-184h]
  __int128 v84; // [rsp+100h] [rbp-178h] BYREF
  char v85[16]; // [rsp+110h] [rbp-168h] BYREF
  ULONG_PTR v86; // [rsp+120h] [rbp-158h]
  _OWORD v87[6]; // [rsp+140h] [rbp-138h] BYREF
  _BYTE v88[80]; // [rsp+1A0h] [rbp-D8h] BYREF
  char SystemInformation[40]; // [rsp+1F0h] [rbp-88h] BYREF
  __int64 v90; // [rsp+218h] [rbp-60h]

  v77 = CommitSize;
  v73 = ReserveSize;
  v66 = (unsigned __int64)Lock;
  v79 = HeapBase;
  *(_QWORD *)&v78 = Lock;
  v8 = Parameters;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v70 = 0;
  HeapHandle = 0LL;
  v67 = 0LL;
  if ( dword_18015F9B8 && !HeapBase && !Lock )
  {
    v10 = (_DWORD *)_guard_dispatch_icall_fptr();
    if ( v10 )
      goto LABEL_143;
    if ( Parameters != (PVOID)-1LL )
      goto LABEL_176;
    v8 = 0LL;
    CommitSize = v77;
    ReserveSize = v73;
  }
  v9 = Flags & 0xF1FFFFFF;
  v10 = 0LL;
  if ( (v9 & 0x100) != 0 )
  {
    if ( (v9 & 2) != 0 && !HeapBase && !ReserveSize && !CommitSize && !Lock )
    {
      if ( !v8 )
      {
        v10 = v88;
        goto LABEL_5;
      }
      v10 = v8;
      if ( (unsigned int)RtlpHpParametersVerify(v8) )
        goto LABEL_5;
LABEL_176:
      v25 = 0LL;
      goto LABEL_206;
    }
LABEL_143:
    v25 = (_RTL_CRITICAL_SECTION *)Lock;
LABEL_87:
    v44 = 0LL;
    goto LABEL_88;
  }
  if ( (RtlpHpHeapFeatures & 1) != 0 && (v9 & 2) != 0 && !HeapBase )
  {
    if ( !v8 )
      goto LABEL_117;
    if ( *((_QWORD *)v8 + 1) || *((_QWORD *)v8 + 2) || *((_QWORD *)v8 + 6) || (v61 = 1, *((_QWORD *)v8 + 9)) )
      v61 = 0;
    if ( v61 )
    {
LABEL_117:
      v10 = v88;
      if ( Lock )
        v10 = 0LL;
    }
  }
LABEL_5:
  if ( v10 )
  {
    if ( v10 == (_DWORD *)v88 )
    {
      memset(v10, 0, 0x50uLL);
      *v10 = 5242881;
      v10[3] = 1;
      v10[4] = -1;
      v49 = 1;
      v50 = -1;
    }
    else
    {
      v49 = v10[3];
      v50 = v10[4];
    }
    v78 = RtlpHpEnvHandle;
    _BitScanReverse(&v49, v49);
    BYTE1(v78) = v49;
    if ( v50 != -1 )
      BYTE2(v78) = *((_BYTE *)v10 + 16) + 1;
    *((_QWORD *)&v78 + 1) = *((_QWORD *)v10 + 3);
    v51 = v77;
    if ( v73 )
      v51 = v73;
    v52 = v9 & 1 | 0x80000000;
    if ( (v9 & 4) == 0 )
      v52 = v9 & 1;
    v53 = v52 | 2;
    if ( (v9 & 8) == 0 )
      v53 = v52;
    v54 = v53 | 0x20000000;
    if ( (NtGlobalFlag & 0x1000) == 0 && (v9 & 0x8000000) == 0 )
      v54 = v53;
    v55 = v54 | 0x10000000;
    if ( (NtGlobalFlag & 0x10) == 0 && (v9 & 0x20) == 0 )
      v55 = v54;
    v56 = v55 | 0x40000000;
    if ( (v9 & 0x40000) == 0 )
      v56 = v55;
    v84 = v78;
    v57 = v51;
    if ( v77 <= v51 )
      v57 = v77;
    v58 = v56;
    LODWORD(v58) = v56 | 0x2000000;
    if ( (v9 & 0x10) == 0 )
      v58 = v56;
    v59 = RtlpHpHeapCreate(v58, v51, v57, &v84);
    v10 = (_DWORD *)v59;
    if ( v59 )
    {
      RtlpMoveHeapBetweenLists(v59, 0, 1, 0);
      if ( !*((_WORD *)v10 + 14) )
      {
        RtlpHpHeapDestroy(v10);
        v10 = 0LL;
      }
    }
    goto LABEL_143;
  }
  if ( (v9 & 0x10000000) == 0 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( (v9 & 0xFFF80C00) == 0 )
        goto LABEL_10;
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
LABEL_10:
  memset(v87, 0, sizeof(v87));
  if ( v8 && *v8 == 96 )
  {
    v87[0] = *(_OWORD *)v8;
    v87[1] = *((_OWORD *)v8 + 1);
    v87[2] = *((_OWORD *)v8 + 2);
    v87[3] = *((_OWORD *)v8 + 3);
    v87[4] = *((_OWORD *)v8 + 4);
    v87[5] = *((_OWORD *)v8 + 5);
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
  if ( !*((_QWORD *)&v87[0] + 1) )
    *((_QWORD *)&v87[0] + 1) = v17->HeapSegmentReserve;
  if ( !*(_QWORD *)&v87[1] )
    *(_QWORD *)&v87[1] = v17->HeapSegmentCommit;
  if ( !*((_QWORD *)&v87[1] + 1) )
    *((_QWORD *)&v87[1] + 1) = v17->HeapDeCommitFreeBlockThreshold;
  if ( !*(_QWORD *)&v87[2] )
    *(_QWORD *)&v87[2] = v17->HeapDeCommitTotalFreeThreshold;
  v18 = qword_180166050;
  if ( !qword_180166050 )
  {
    qword_180166058 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
    {
LABEL_205:
      v25 = (_RTL_CRITICAL_SECTION *)v66;
      goto LABEL_206;
    }
    v18 = v90;
    qword_180166050 = v90;
  }
  if ( !*((_QWORD *)&v87[2] + 1) )
    *((_QWORD *)&v87[2] + 1) = v18 - qword_180166058 - 4096;
  v19 = *(_QWORD *)&v87[3];
  if ( (unsigned __int64)(*(_QWORD *)&v87[3] - 1LL) > 0xFEFFF )
    v19 = 1044480LL;
  *(_QWORD *)&v87[3] = v19;
  if ( v77 )
  {
    v20 = (v77 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    v21 = v20;
  }
  else
  {
    v20 = 0x2000LL;
    v21 = 0x2000LL;
  }
  if ( v73 )
    v22 = (v73 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v22 = (v21 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v23 = v22;
  v69 = v22;
  if ( v21 > v22 )
    v20 = v22;
  RegionSize = v20;
  if ( (v16 & 2) == 0 || HeapBase )
  {
    v73 = 0LL;
  }
  else
  {
    v73 = 4096LL;
    v70 = 2;
    if ( v22 - 4096 < v20 )
    {
      v69 = (v22 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v23 = v69;
    }
  }
  if ( !v20 || !v23 )
    goto LABEL_205;
  if ( (v16 & 0x61000000) != 0 && (v16 & 0x10000000) == 0 )
    return (PVOID)RtlDebugCreateHeap(v16, HeapBase);
  NtGlobalFlag = 704;
  v24 = v16;
  v25 = (_RTL_CRITICAL_SECTION *)v66;
  if ( (v16 & 1) != 0 )
  {
    if ( !Lock )
      goto LABEL_51;
LABEL_206:
    v10 = 0LL;
    goto LABEL_87;
  }
  v67 = v66 & -(__int64)(Lock != 0LL);
  v24 = v16 | 0x80000000;
  if ( !v66 )
    v24 = v16;
  NtGlobalFlag = v66 != 0 ? 704 : 744;
LABEL_51:
  if ( HeapBase )
  {
    if ( !*((_QWORD *)&v87[4] + 1) )
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             HeapBase,
             MemoryBasicInformation,
             MemoryInformation,
             0x30uLL,
             0LL) < 0 )
        goto LABEL_188;
      v26 = (char *)MemoryInformation[0];
      if ( MemoryInformation[0] != HeapBase || v82 == 0x10000 )
        goto LABEL_188;
      v27 = (char *)MemoryInformation[0];
      BaseAddress = MemoryInformation[0];
      if ( v82 == 4096 )
      {
        if ( (v24 & 0x40000) != 0 && (v83 & 0x40) == 0 )
          goto LABEL_188;
        memset(MemoryInformation[0], 0, 0x1000uLL);
        if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, v85, 0x28uLL, 0LL) < 0 )
          goto LABEL_188;
        v69 = v86;
        RegionSize = v81;
        v27 = (char *)BaseAddress;
        v26 = (char *)BaseAddress + v81;
      }
      else
      {
        v69 = v81;
        v60 = RegionSize;
        if ( RegionSize > v81 )
          v60 = v81;
        RegionSize = v60;
        if ( v60 < 0x2000 )
          goto LABEL_188;
      }
      goto LABEL_58;
    }
    if ( *((_QWORD *)&v87[3] + 1)
      && *(_QWORD *)&v87[4]
      && *((_QWORD *)&v87[3] + 1) <= *(_QWORD *)&v87[4]
      && (v24 & 2) == 0 )
    {
      BaseAddress = HeapBase;
      v26 = (char *)HeapBase + *((_QWORD *)&v87[3] + 1);
      v69 = *(_QWORD *)&v87[4];
      memset(HeapBase, 0, 0x1000uLL);
      v27 = (char *)HeapBase;
LABEL_58:
      v70 |= 1u;
      v28 = (char *)HeapBase;
      HeapHandle = HeapBase;
      v29 = v24 & 0x40000;
      goto LABEL_59;
    }
LABEL_187:
    v10 = 0LL;
    v44 = (_RTL_CRITICAL_SECTION *)v67;
    goto LABEL_88;
  }
  v75 = 0LL;
  if ( *((_QWORD *)&v87[4] + 1) )
    goto LABEL_187;
  v74 = (RtlpHeapGenerateRandomValue64(v23, v66) & 0x1F) << 16;
  v76 = v69 + v74;
  if ( v69 + v74 < v69 )
  {
    v76 = v69;
    v74 = 0LL;
  }
  v29 = v24 & 0x40000;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v75, 0LL, &v76, 0x2000u, (v24 & 0x40000) != 0 ? 64 : 4) < 0 )
    goto LABEL_188;
  v28 = (char *)v75;
  HeapHandle = v75;
  v69 = v76;
  if ( v74 )
  {
    RtlpSecMemFreeVirtualMemory(v48, &v75, (ULONG_PTR *)&v74, 0x8000u);
    v28 = (char *)v75 + v74;
    HeapHandle = (char *)v75 + v74;
    v69 = v76 - v74;
  }
  v27 = v28;
  BaseAddress = v28;
  v26 = v28;
LABEL_59:
  if ( v27 == v26 )
  {
    if ( ZwAllocateVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           &RegionSize,
           0x1000u,
           v29 != 0 ? 64 : 4) < 0 )
      goto LABEL_188;
    v30 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      v47 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v47 = 2147353472LL;
    if ( *(_BYTE *)v47 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(HeapHandle, BaseAddress, RegionSize, 1LL);
    v26 += RegionSize;
    v28 = (char *)HeapHandle;
  }
  else
  {
    v30 = 2147353472LL;
  }
  v31 = (__int64)(v28 + 704);
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v62 = (v31 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)HeapHandle + 41) = v62;
    v32 = NtGlobalFlag + 2064;
    v31 = v62 + 2064;
    v24 |= 0x4000000u;
  }
  else
  {
    v32 = NtGlobalFlag;
  }
  NtGlobalFlag = (v32 + 15) & 0xFFFFFFF0;
  *((_WORD *)HeapHandle + 4) = NtGlobalFlag >> 4;
  *((_BYTE *)HeapHandle + 10) = 1;
  *((_BYTE *)HeapHandle + 15) = 1;
  *((_DWORD *)HeapHandle + 38) = -285217025;
  *((_DWORD *)HeapHandle + 28) = v24 & 0xEFFFFFFF;
  *((_DWORD *)HeapHandle + 36) = 0;
  memset((char *)HeapHandle + 568, 0, 0x78uLL);
  RtlpCreateHeapEncoding(HeapHandle);
  *((_DWORD *)HeapHandle + 162) = 1;
  v34 = HeapHandle;
  if ( (*((_DWORD *)HeapHandle + 28) & 0x8000000) != 0 )
  {
    HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
    *(_DWORD *)(v64 + 144) = HeapInterceptorIndex;
    *((_DWORD *)HeapHandle + 28) &= ~0x40u;
    v34 = HeapHandle;
  }
  v34[29] = v24 & 0x6001007D;
  *((_WORD *)HeapHandle + 105) = v31 - (_WORD)HeapHandle;
  *((_QWORD *)HeapHandle + 27) = 0LL;
  v35 = (char *)HeapHandle + 336;
  *((_QWORD *)HeapHandle + 43) = (char *)HeapHandle + 336;
  *v35 = v35;
  v36 = (char *)HeapHandle + 272;
  *((_QWORD *)HeapHandle + 35) = (char *)HeapHandle + 272;
  *v36 = v36;
  v37 = (char *)HeapHandle + 288;
  *((_QWORD *)HeapHandle + 37) = (char *)HeapHandle + 288;
  *v37 = v37;
  v38 = (char *)HeapHandle + 240;
  *((_QWORD *)HeapHandle + 31) = (char *)HeapHandle + 240;
  *v38 = v38;
  if ( !v67 && (v24 & 1) == 0 )
  {
    v67 = v31;
    if ( RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)v31, 0, 0x10000000u) >= 0 )
    {
      v31 += 40LL;
      goto LABEL_67;
    }
    goto LABEL_205;
  }
LABEL_67:
  *((_QWORD *)HeapHandle + 44) = v67;
  *((_DWORD *)HeapHandle + 30) |= 0x80000000;
  if ( RtlpInitializeHeapSegment(
         (unsigned __int64)HeapHandle,
         (__int64)HeapHandle,
         NtGlobalFlag + 1104,
         v33,
         v70,
         (__int64)BaseAddress,
         v26,
         (unsigned __int64)BaseAddress + v69 - v73) )
  {
    if ( HeapBase )
      memset((void *)v31, 0, 0x80uLL);
    *(_DWORD *)(v31 + 8) = 128;
    *(_QWORD *)(v31 + 40) = v31 + 56;
    *(_QWORD *)(v31 + 32) = (char *)HeapHandle + 336;
    *(_QWORD *)(v31 + 48) = v31 + 72;
    RtlpPopulateListIndex((__int64)HeapHandle, v31);
    *((_WORD *)HeapHandle + 104) = 0;
    *((_QWORD *)HeapHandle + 20) = *((_QWORD *)&v87[0] + 1);
    *((_QWORD *)HeapHandle + 21) = *(_QWORD *)&v87[1];
    *((_QWORD *)HeapHandle + 22) = *((_QWORD *)&v87[1] + 1) >> 4;
    *((_QWORD *)HeapHandle + 23) = *(_QWORD *)&v87[2] >> 4;
    *((_QWORD *)HeapHandle + 25) = *((_QWORD *)&v87[2] + 1);
    *((_DWORD *)HeapHandle + 37) = (unsigned __int64)(*(_QWORD *)&v87[3] + 15LL) >> 4;
    *((_QWORD *)HeapHandle + 45) = RtlpHeapKey ^ *((_QWORD *)&v87[4] + 1);
    *((_DWORD *)HeapHandle + 172) = 4;
    *((_QWORD *)HeapHandle + 87) = 2088960LL;
    if ( (RtlpDisableHeapLookaside & 1) != 0 )
      *((_DWORD *)HeapHandle + 30) = 1;
    *((_QWORD *)HeapHandle + 32) = 31LL;
    *((_QWORD *)HeapHandle + 33) = -16LL;
    v39 = HeapHandle;
    if ( (*((_BYTE *)HeapHandle + 112) & 0x20) != 0 )
    {
      *((_QWORD *)HeapHandle + 32) += 16LL;
      v39 = HeapHandle;
    }
    v39[51] = 0LL;
    *((_WORD *)HeapHandle + 208) = 0;
    *((_BYTE *)HeapHandle + 418) = 0;
    *((_BYTE *)HeapHandle + 419) = 0;
    *((_QWORD *)HeapHandle + 40) = 0LL;
    if ( (v24 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
    {
LABEL_75:
      RtlpMoveHeapBetweenLists((__int64)HeapHandle, 0, 1, 0);
      if ( *((_WORD *)HeapHandle + 104) )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v40 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v40 = 2147353472LL;
        if ( *(_BYTE *)v40 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v30 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v24, v69, RegionSize, *(unsigned __int8 *)v30);
        }
        v41 = 2147353482LL;
        if ( RtlGetCurrentServiceSessionId() )
          v42 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v42 = 2147353482LL;
        if ( *(_BYTE *)v42 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v41 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v24, v69, RegionSize, *(unsigned __int8 *)v41);
        }
        if ( RtlGetCurrentServiceSessionId() )
          v43 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v43 = 2147353480LL;
        if ( *(_BYTE *)v43 )
          RtlpHeapLogRangeCreate(HeapHandle, v69, v24);
        *((_DWORD *)HeapHandle + 30) &= ~0x80000000;
        *((_QWORD *)HeapHandle + 46) = 0LL;
        v10 = HeapHandle;
        HeapHandle = 0LL;
        v25 = (_RTL_CRITICAL_SECTION *)v66;
        goto LABEL_87;
      }
      goto LABEL_188;
    }
    *((_QWORD *)HeapHandle + 53) = RtlAllocateHeap(HeapHandle, 0x80000Au, 0x100uLL);
    v46 = *((_QWORD *)HeapHandle + 53);
    if ( v46 )
    {
      *(_BYTE *)(v46 - 1) = 1;
      *((_WORD *)HeapHandle + 216) = 128;
      goto LABEL_75;
    }
  }
LABEL_188:
  v10 = 0LL;
  v44 = (_RTL_CRITICAL_SECTION *)v67;
  v25 = (_RTL_CRITICAL_SECTION *)v66;
LABEL_88:
  if ( v44 && v44 != v25 )
    RtlDeleteCriticalSection(v44);
  if ( HeapHandle )
  {
    if ( !HeapBase )
    {
      v69 = 0LL;
      RtlpSecMemFreeVirtualMemory((__int64)v44, &HeapHandle, &v69, 0x8000u);
    }
  }
  return v10;
}
