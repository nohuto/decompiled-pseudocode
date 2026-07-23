/*
 * XREFs of RtlCreateHeap @ 0x18005F7E0
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     CsrpConnectToServer @ 0x18005D994 (CsrpConnectToServer.c)
 *     RtlDetectHeapLeaks @ 0x180084DF0 (RtlDetectHeapLeaks.c)
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
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A0600 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A0760 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1800A09C0 (NtQuerySystemInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
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
  unsigned int v16; // edi
  struct _PEB *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  ULONG_PTR v20; // r9
  ULONG_PTR v21; // r8
  unsigned __int64 v22; // rcx
  int v23; // r15d
  unsigned int v24; // esi
  _RTL_CRITICAL_SECTION *v25; // rdx
  int v26; // r15d
  __int64 v27; // rcx
  char *v28; // rdi
  char *v29; // rdx
  char *v30; // r12
  __int64 v31; // r15
  __int64 v32; // rcx
  char *v33; // rdi
  unsigned int v34; // eax
  int v35; // r9d
  _DWORD *v36; // r10
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rcx
  _RTL_CRITICAL_SECTION *v47; // rcx
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
  unsigned __int64 v62; // rdi
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v64; // r10
  PVOID HeapHandle; // [rsp+40h] [rbp-228h] BYREF
  unsigned __int64 v66; // [rsp+48h] [rbp-220h]
  __int64 v67; // [rsp+50h] [rbp-218h]
  unsigned int NtGlobalFlag; // [rsp+58h] [rbp-210h]
  ULONG_PTR v69; // [rsp+60h] [rbp-208h] BYREF
  int v70; // [rsp+68h] [rbp-200h]
  ULONG_PTR v71; // [rsp+70h] [rbp-1F8h] BYREF
  PVOID v72; // [rsp+78h] [rbp-1F0h] BYREF
  SIZE_T v73; // [rsp+80h] [rbp-1E8h]
  unsigned __int64 v74; // [rsp+88h] [rbp-1E0h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp-1D8h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp-1D0h] BYREF
  SIZE_T v77; // [rsp+A0h] [rbp-1C8h]
  __int128 v78; // [rsp+B0h] [rbp-1B8h]
  PVOID v79; // [rsp+C8h] [rbp-1A0h]
  PVOID MemoryInformation[3]; // [rsp+D0h] [rbp-198h] BYREF
  ULONG_PTR v81; // [rsp+E8h] [rbp-180h]
  int v82; // [rsp+F0h] [rbp-178h]
  char v83; // [rsp+F4h] [rbp-174h]
  __int128 v84; // [rsp+100h] [rbp-168h] BYREF
  char v85[16]; // [rsp+110h] [rbp-158h] BYREF
  ULONG_PTR v86; // [rsp+120h] [rbp-148h]
  _OWORD v87[6]; // [rsp+130h] [rbp-138h] BYREF
  _BYTE v88[80]; // [rsp+190h] [rbp-D8h] BYREF
  char SystemInformation[40]; // [rsp+1E0h] [rbp-88h] BYREF
  __int64 v90; // [rsp+208h] [rbp-60h]

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
  if ( dword_18015F3E8 && !HeapBase && !Lock )
  {
    v10 = (_DWORD *)_guard_dispatch_icall_fptr();
    if ( v10 )
      goto LABEL_145;
    if ( Parameters != (PVOID)-1LL )
      goto LABEL_165;
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
        goto LABEL_4;
      }
      v10 = v8;
      if ( (unsigned int)RtlpHpParametersVerify(v8) )
        goto LABEL_4;
LABEL_165:
      v25 = 0LL;
      goto LABEL_166;
    }
LABEL_145:
    v25 = (_RTL_CRITICAL_SECTION *)Lock;
LABEL_96:
    v47 = 0LL;
    goto LABEL_97;
  }
  if ( (RtlpHpHeapFeatures & 1) != 0 && (v9 & 2) != 0 && !HeapBase )
  {
    if ( !v8 )
      goto LABEL_119;
    if ( *((_QWORD *)v8 + 1) || *((_QWORD *)v8 + 2) || *((_QWORD *)v8 + 6) || (v61 = 1, *((_QWORD *)v8 + 9)) )
      v61 = 0;
    if ( v61 )
    {
LABEL_119:
      v10 = v88;
      if ( Lock )
        v10 = 0LL;
    }
  }
LABEL_4:
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
      BYTE2(v78) = v10[4] + 1;
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
      RtlpMoveHeapBetweenLists(v59, 0LL, 1LL);
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
  v18 = qword_180166088;
  if ( !qword_180166088 )
  {
    qword_180166090 = 0x10000LL;
    if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
    {
LABEL_159:
      v25 = (_RTL_CRITICAL_SECTION *)v66;
LABEL_166:
      v10 = 0LL;
      goto LABEL_96;
    }
    v18 = v90;
    qword_180166088 = v90;
  }
  if ( !*((_QWORD *)&v87[2] + 1) )
    *((_QWORD *)&v87[2] + 1) = v18 - qword_180166090 - 4096;
  v19 = *(_QWORD *)&v87[3];
  if ( (unsigned __int64)(*(_QWORD *)&v87[3] - 1LL) > 0xFEFFF )
    v19 = 1044480LL;
  *(_QWORD *)&v87[3] = v19;
  if ( v77 )
    v20 = (v77 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v20 = 0x2000LL;
  v71 = v20;
  if ( v73 )
    v21 = (v73 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v21 = (v20 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v69 = v21;
  v22 = v20;
  if ( v20 > v21 )
  {
    v20 = v21;
    v71 = v21;
    v22 = v21;
  }
  if ( (v16 & 2) == 0 || HeapBase )
  {
    v73 = 0LL;
    v23 = v70;
  }
  else
  {
    v73 = 4096LL;
    v23 = 2;
    v70 = 2;
    if ( v21 - 4096 < v22 )
    {
      v21 = (v21 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v69 = v21;
    }
  }
  if ( !v22 || !v21 )
    goto LABEL_159;
  if ( (v16 & 0x61000000) != 0 && (v16 & 0x10000000) == 0 )
    return (PVOID)RtlDebugCreateHeap(v16, HeapBase, v21, v20, Lock, v87);
  NtGlobalFlag = 704;
  v24 = v16;
  v25 = (_RTL_CRITICAL_SECTION *)v66;
  if ( (v16 & 1) != 0 )
  {
    if ( Lock )
      goto LABEL_166;
  }
  else
  {
    v67 = v66 & -(__int64)(Lock != 0LL);
    v24 = v16 | 0x80000000;
    if ( !v66 )
      v24 = v16;
    NtGlobalFlag = v66 != 0 ? 704 : 744;
  }
  if ( HeapBase )
  {
    if ( *((_QWORD *)&v87[4] + 1) )
    {
      if ( !*((_QWORD *)&v87[3] + 1)
        || !*(_QWORD *)&v87[4]
        || *((_QWORD *)&v87[3] + 1) > *(_QWORD *)&v87[4]
        || (v24 & 2) != 0 )
      {
        goto LABEL_192;
      }
      v72 = HeapBase;
      v30 = (char *)HeapBase + *((_QWORD *)&v87[3] + 1);
      v69 = *(_QWORD *)&v87[4];
      memset(HeapBase, 0, 0x1000uLL);
      v29 = (char *)HeapBase;
    }
    else
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             HeapBase,
             MemoryBasicInformation,
             MemoryInformation,
             0x30uLL,
             0LL) < 0 )
        goto LABEL_193;
      v30 = (char *)MemoryInformation[0];
      if ( MemoryInformation[0] != HeapBase || v82 == 0x10000 )
        goto LABEL_193;
      v29 = (char *)MemoryInformation[0];
      v72 = MemoryInformation[0];
      if ( v82 == 4096 )
      {
        if ( (v24 & 0x40000) != 0 && (v83 & 0x40) == 0 )
          goto LABEL_193;
        memset(MemoryInformation[0], 0, 0x1000uLL);
        if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, v85, 0x20uLL, 0LL) < 0 )
          goto LABEL_193;
        v69 = v86;
        v71 = v81;
        v29 = (char *)v72;
        v30 = (char *)v72 + v81;
      }
      else
      {
        v69 = v81;
        v60 = v71;
        if ( v71 > v81 )
          v60 = v81;
        v71 = v60;
        if ( v60 < 0x2000 )
          goto LABEL_193;
      }
    }
    v70 = v23 | 1;
    v28 = (char *)HeapBase;
    HeapHandle = HeapBase;
    v26 = v24 & 0x40000;
    goto LABEL_60;
  }
  BaseAddress = 0LL;
  v74 = 0LL;
  if ( *((_QWORD *)&v87[4] + 1) )
  {
LABEL_192:
    v10 = 0LL;
    v47 = (_RTL_CRITICAL_SECTION *)v67;
    goto LABEL_97;
  }
  v74 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
  RegionSize = v69 + v74;
  if ( v69 + v74 < v69 )
  {
    RegionSize = v69;
    v74 = 0LL;
  }
  v26 = v24 & 0x40000;
  if ( ZwAllocateVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         &RegionSize,
         0x2000u,
         (v24 & 0x40000) != 0 ? 64 : 4) < 0 )
    goto LABEL_193;
  v28 = (char *)BaseAddress;
  HeapHandle = BaseAddress;
  v69 = RegionSize;
  if ( v74 )
  {
    RtlpSecMemFreeVirtualMemory(v27, &BaseAddress, &v74, 0x8000LL);
    v28 = (char *)BaseAddress + v74;
    HeapHandle = (char *)BaseAddress + v74;
    v69 = RegionSize - v74;
  }
  v29 = v28;
  v72 = v28;
  v30 = v28;
LABEL_60:
  if ( v29 == v30 )
  {
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v72, 0LL, &v71, 0x1000u, v26 != 0 ? 64 : 4) < 0 )
      goto LABEL_193;
    v31 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      v32 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v32 = 2147353472LL;
    if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(HeapHandle, v72, v71, 1LL);
    v30 += v71;
    v28 = (char *)HeapHandle;
  }
  else
  {
    v31 = 2147353472LL;
  }
  v33 = v28 + 704;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v62 = (unsigned __int64)(v33 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)HeapHandle + 41) = v62;
    v34 = NtGlobalFlag + 2064;
    v33 = (char *)(v62 + 2064);
    v24 |= 0x4000000u;
  }
  else
  {
    v34 = NtGlobalFlag;
  }
  NtGlobalFlag = (v34 + 15) & 0xFFFFFFF0;
  *((_WORD *)HeapHandle + 4) = NtGlobalFlag >> 4;
  *((_BYTE *)HeapHandle + 10) = 1;
  *((_BYTE *)HeapHandle + 15) = 1;
  *((_DWORD *)HeapHandle + 38) = -285217025;
  *((_DWORD *)HeapHandle + 28) = v24 & 0xEFFFFFFF;
  *((_DWORD *)HeapHandle + 36) = 0;
  memset((char *)HeapHandle + 568, 0, 0x78uLL);
  RtlpCreateHeapEncoding(HeapHandle);
  *((_DWORD *)HeapHandle + 162) = 1;
  v36 = HeapHandle;
  if ( (*((_DWORD *)HeapHandle + 28) & 0x8000000) != 0 )
  {
    HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
    *(_DWORD *)(v64 + 144) = HeapInterceptorIndex;
    *((_DWORD *)HeapHandle + 28) &= ~0x40u;
    v36 = HeapHandle;
  }
  v36[29] = v24 & 0x6001007D;
  *((_WORD *)HeapHandle + 105) = (_WORD)v33 - (_WORD)HeapHandle;
  *((_QWORD *)HeapHandle + 27) = 0LL;
  v37 = (char *)HeapHandle + 336;
  *((_QWORD *)HeapHandle + 43) = (char *)HeapHandle + 336;
  *v37 = v37;
  v38 = (char *)HeapHandle + 272;
  *((_QWORD *)HeapHandle + 35) = (char *)HeapHandle + 272;
  *v38 = v38;
  v39 = (char *)HeapHandle + 288;
  *((_QWORD *)HeapHandle + 37) = (char *)HeapHandle + 288;
  *v39 = v39;
  v40 = (char *)HeapHandle + 240;
  *((_QWORD *)HeapHandle + 31) = (char *)HeapHandle + 240;
  *v40 = v40;
  if ( !v67 && (v24 & 1) == 0 )
  {
    v67 = (__int64)v33;
    if ( RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)v33, 0, 0x10000000u) >= 0 )
    {
      v33 += 40;
      goto LABEL_74;
    }
    goto LABEL_159;
  }
LABEL_74:
  *((_QWORD *)HeapHandle + 44) = v67;
  *((_DWORD *)HeapHandle + 30) |= 0x80000000;
  if ( (unsigned __int8)RtlpInitializeHeapSegment(
                          (int)HeapHandle,
                          (int)HeapHandle,
                          NtGlobalFlag + 1104,
                          v35,
                          v70,
                          (__int64)v72,
                          v30,
                          (__int64)v72 + v69 - v73) )
  {
    if ( HeapBase )
      memset(v33, 0, 0x80uLL);
    *((_DWORD *)v33 + 2) = 128;
    *((_QWORD *)v33 + 5) = v33 + 56;
    *((_QWORD *)v33 + 4) = (char *)HeapHandle + 336;
    *((_QWORD *)v33 + 6) = v33 + 72;
    RtlpPopulateListIndex(HeapHandle, v33);
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
    v41 = HeapHandle;
    if ( (*((_BYTE *)HeapHandle + 112) & 0x20) != 0 )
    {
      *((_QWORD *)HeapHandle + 32) += 16LL;
      v41 = HeapHandle;
    }
    v41[51] = 0LL;
    *((_WORD *)HeapHandle + 208) = 0;
    *((_BYTE *)HeapHandle + 418) = 0;
    *((_BYTE *)HeapHandle + 419) = 0;
    *((_QWORD *)HeapHandle + 40) = 0LL;
    if ( (v24 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
    {
LABEL_84:
      RtlpMoveHeapBetweenLists(HeapHandle, 0LL, 1LL);
      if ( *((_WORD *)HeapHandle + 104) )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v43 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v43 = 2147353472LL;
        if ( *(_BYTE *)v43 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v31 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v24, v69, v71, *(unsigned __int8 *)v31);
        }
        v44 = 2147353482LL;
        if ( RtlGetCurrentServiceSessionId() )
          v45 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v45 = 2147353482LL;
        if ( *(_BYTE *)v45 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v44 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v24, v69, v71, *(unsigned __int8 *)v44);
        }
        if ( RtlGetCurrentServiceSessionId() )
          v46 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v46 = 2147353480LL;
        if ( *(_BYTE *)v46 )
          RtlpHeapLogRangeCreate(HeapHandle, v69, v24);
        *((_DWORD *)HeapHandle + 30) &= ~0x80000000;
        *((_QWORD *)HeapHandle + 46) = 0LL;
        v10 = HeapHandle;
        HeapHandle = 0LL;
        v25 = (_RTL_CRITICAL_SECTION *)v66;
        goto LABEL_96;
      }
      goto LABEL_193;
    }
    *((_QWORD *)HeapHandle + 53) = RtlAllocateHeap(HeapHandle, 0x80000Au, 0x100uLL);
    v42 = *((_QWORD *)HeapHandle + 53);
    if ( v42 )
    {
      *(_BYTE *)(v42 - 1) = 1;
      *((_WORD *)HeapHandle + 216) = 128;
      goto LABEL_84;
    }
  }
LABEL_193:
  v10 = 0LL;
  v47 = (_RTL_CRITICAL_SECTION *)v67;
  v25 = (_RTL_CRITICAL_SECTION *)v66;
LABEL_97:
  if ( v47 && v47 != v25 )
    RtlDeleteCriticalSection(v47);
  if ( HeapHandle )
  {
    if ( !HeapBase )
    {
      v69 = 0LL;
      RtlpSecMemFreeVirtualMemory(v47, &HeapHandle, &v69, 0x8000LL);
    }
  }
  return v10;
}
