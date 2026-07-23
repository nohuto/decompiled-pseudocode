/*
 * XREFs of RtlInitializeResource @ 0x1800338D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180033A40 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     RtlpFreeDebugInfo @ 0x180035DD0 (RtlpFreeDebugInfo.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlCaptureStackBackTrace @ 0x180074CA0 (RtlCaptureStackBackTrace.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009D190 (ZwAllocateVirtualMemory.c)
 *     ZwAlertThreadByThreadId @ 0x18009DC60 (ZwAlertThreadByThreadId.c)
 *     NtCreateSemaphore @ 0x18009E5E0 (NtCreateSemaphore.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A0960 (RtlpInterlockedPopEntrySList.c)
 *     RtlCompareMemory @ 0x1800A1630 (RtlCompareMemory.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     RtlStdReleaseStackTrace @ 0x1800FAF00 (RtlStdReleaseStackTrace.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

void __cdecl RtlInitializeResource(PRTL_RESOURCE Resource)
{
  _RTL_CRITICAL_SECTION_DEBUG *Heap; // rdi
  void *ProcessHeap; // rcx
  volatile signed __int32 *v4; // r12
  PRTL_SRWLOCK v5; // r14
  __int64 v6; // rsi
  int v7; // esi
  int v8; // esi
  USHORT v9; // ax
  SIZE_T v10; // r12
  _RTL_SRWLOCK *v11; // r13
  PSLIST_ENTRY Value; // r15
  unsigned int v13; // esi
  PSLIST_ENTRY v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r12
  void *Ptr; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  __int16 v20; // cx
  signed __int64 v21; // rax
  __int64 v22; // rdx
  signed __int64 v23; // rcx
  signed __int64 v24; // rdx
  signed __int64 v25; // rtt
  bool v26; // zf
  signed __int64 v27; // rax
  _QWORD *v28; // r9
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rax
  bool v32; // sf
  signed __int64 v33; // rax
  __int64 v34; // rdx
  signed __int64 v35; // rcx
  signed __int64 v36; // rdx
  signed __int64 v37; // rtt
  signed __int64 v38; // rax
  _QWORD *v39; // r9
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rax
  signed __int64 v43; // rax
  __int64 v44; // rsi
  unsigned int v45; // eax
  signed __int64 v46; // rax
  __int64 v47; // rsi
  unsigned __int16 v48; // dx
  unsigned int v49; // eax
  _SLIST_ENTRY *v50; // rcx
  __int64 v51; // r8
  _RTL_SRWLOCK *v52; // r13
  char *v53; // rcx
  unsigned __int64 v54; // rsi
  signed __int64 v55; // rax
  __int64 v56; // rdx
  signed __int64 v57; // rcx
  signed __int64 v58; // rdx
  signed __int64 v59; // rtt
  signed __int64 v60; // rax
  _QWORD *v61; // r9
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rax
  signed __int64 v65; // rax
  __int64 v66; // rsi
  signed __int64 v67; // rax
  __int64 v68; // rdx
  signed __int64 v69; // rcx
  signed __int64 v70; // rdx
  signed __int64 v71; // rtt
  signed __int64 v72; // rax
  _QWORD *v73; // r9
  volatile signed __int32 *v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // rax
  signed __int64 v77; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-C8h] BYREF
  SIZE_T v80; // [rsp+40h] [rbp-C0h]
  HANDLE SemaphoreHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v82; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v83; // [rsp+58h] [rbp-A8h] BYREF
  USHORT v84; // [rsp+6Eh] [rbp-92h]
  PVOID BackTrace[32]; // [rsp+70h] [rbp-90h] BYREF
  ULONG BackTraceHash; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned __int64 v87; // [rsp+1C0h] [rbp+C0h]
  PVOID v88; // [rsp+1C8h] [rbp+C8h] BYREF

  Heap = (_RTL_CRITICAL_SECTION_DEBUG *)RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !Heap )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap || (Heap = (_RTL_CRITICAL_SECTION_DEBUG *)RtlAllocateHeap(ProcessHeap, 0, 0x30uLL)) == 0LL )
      RtlRaiseStatus(-1073741801);
  }
  v4 = 0LL;
  Heap->ContentionCount = 0;
  v5 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v6) = 0;
    goto LABEL_6;
  }
  v9 = RtlCaptureStackBackTrace(2u, 0x20u, BackTrace, &BackTraceHash);
  v84 = v9;
  if ( !v9 )
    goto LABEL_152;
  v10 = 8LL * v9;
  v11 = &v5[2 * (BackTraceHash % *(_DWORD *)&v5[90].0) + 91];
  v80 = v10;
  _InterlockedIncrement((volatile signed __int32 *)&v5[22]);
  if ( !byte_180165408 )
    RtlAcquireSRWLockExclusive(v11 + 1);
  Value = (PSLIST_ENTRY)v11->Value;
  if ( v11->Value )
  {
    while ( *((_WORD *)&Value->Next + 7) != v84 || RtlCompareMemory(&Value[1], BackTrace, v10) != v10 )
    {
      Value = Value->Next;
      if ( !Value )
        goto LABEL_19;
    }
    goto LABEL_32;
  }
LABEL_19:
  if ( !v84 )
  {
    v4 = 0LL;
    Value = 0LL;
LABEL_83:
    _InterlockedIncrement((volatile signed __int32 *)&v5[25]);
    goto LABEL_35;
  }
  v13 = v84 - 1;
  if ( v13 >= 0x20 )
  {
LABEL_24:
    Value = 0LL;
    v15 = (8LL * v84 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
    v87 = v15;
    if ( !byte_180165408 )
    {
      RtlAcquireSRWLockExclusive(v5);
      v15 = v87;
    }
    v16 = v5[20].Value;
    Ptr = v5[18].Ptr;
    BaseAddress = Ptr;
    v18 = v15 + v16;
    if ( v5[16].0 )
    {
      if ( v18 > v5[21].Value )
      {
LABEL_57:
        if ( !byte_180165408 )
        {
          v33 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
          if ( v33 != 1 )
          {
            do
            {
              v34 = 3LL;
              v35 = v33 & 6;
              if ( v35 != 2 )
                v34 = -1LL;
              v36 = v33 + v34;
              v37 = v33;
              v33 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v36, v33);
            }
            while ( v37 != v33 );
            if ( v35 == 2 )
            {
              while ( (v36 & 1) == 0 )
              {
LABEL_66:
                v39 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0uLL);
                v40 = *(_QWORD *)((v36 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                if ( !v40 )
                {
                  do
                  {
                    v41 = v39;
                    v39 = (_QWORD *)*v39;
                    v39[2] = v41;
                    v40 = v39[1];
                  }
                  while ( !v40 );
                  if ( v39 != (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0uLL) )
                    *(_QWORD *)((v36 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v40;
                }
                if ( (*(_DWORD *)(v40 + 36) & 1) != 0 )
                {
                  v42 = *(_QWORD *)(v40 + 16);
                  if ( v42 )
                  {
                    *(_QWORD *)((v36 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v42;
                    *(_QWORD *)(v40 + 16) = 0LL;
                    _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
                    do
                    {
LABEL_74:
                      v44 = *(_QWORD *)(v40 + 16);
                      _interlockedbittestandset((volatile signed __int32 *)(v40 + 36), 2u);
                      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v40 + 36), 1u) )
                        ZwAlertThreadByThreadId(*(HANDLE *)(v40 + 24));
                      v40 = v44;
                    }
                    while ( v44 );
                    goto LABEL_77;
                  }
                }
                v43 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v36);
                v26 = v36 == v43;
                v36 = v43;
                if ( v26 )
                  goto LABEL_74;
              }
              while ( 1 )
              {
                v38 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v36 - 4, v36);
                v26 = v36 == v38;
                v36 = v38;
                if ( v26 )
                  break;
                if ( (v38 & 1) == 0 )
                  goto LABEL_66;
              }
            }
          }
LABEL_77:
          LODWORD(v15) = v87;
        }
        v10 = v80;
        if ( Value )
        {
          v45 = ((unsigned int)(v15 - 16) >> 3) - 1;
          if ( v45 > 0x1F )
            LOWORD(v45) = 31;
          *((_WORD *)&Value->Next + 4) &= 0x7FFu;
          *((_WORD *)&Value->Next + 4) |= (_WORD)v45 << 11;
        }
        goto LABEL_30;
      }
    }
    else if ( v18 > (unsigned __int64)Ptr )
    {
      RegionSize = (v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)Ptr + RegionSize >= v5[19].Value )
      {
        LODWORD(v15) = v87;
        goto LABEL_57;
      }
      v32 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0;
      LODWORD(v15) = v87;
      if ( v32 )
        goto LABEL_57;
      v5[18].Value = (unsigned __int64)BaseAddress + RegionSize;
    }
    ++*(_DWORD *)&v5[24].0;
    Value = (PSLIST_ENTRY)v16;
    v5[20].Value = v18;
    goto LABEL_57;
  }
  while ( 1 )
  {
    v14 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&v5[2 * v13 + 26]);
    if ( v14 )
      break;
    if ( ++v13 >= 0x20 )
      goto LABEL_24;
  }
  _InterlockedDecrement((volatile signed __int32 *)&v5[24].Ptr + 1);
  Value = v14 - 1;
LABEL_30:
  if ( !Value )
  {
    v4 = 0LL;
    goto LABEL_83;
  }
  memmove(&Value[1], BackTrace, v10);
  *((_WORD *)&Value->Next + 7) = v84;
  *((_WORD *)&Value->Next + 4) &= 0xF800u;
  v19 = 2LL * (BackTraceHash % *(_DWORD *)&v5[90].0);
  Value->Next = (_SLIST_ENTRY *)v5[v19 + 91];
  v5[v19 + 91].Value = (unsigned __int64)Value;
LABEL_32:
  v20 = *((_WORD *)&Value->Next + 4);
  if ( (v20 & 0x7FF) != 0x7FF )
    *((_WORD *)&Value->Next + 4) = v20 ^ (v20 ^ (v20 + 1)) & 0x7FF;
  v4 = 0LL;
LABEL_35:
  if ( !byte_180165408 )
  {
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)&v11[1], 0LL, 1LL);
    if ( v21 != 1 )
    {
      do
      {
        v22 = 3LL;
        v23 = v21 & 6;
        if ( v23 != 2 )
          v22 = -1LL;
        v24 = v21 + v22;
        v25 = v21;
        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)&v11[1], v24, v21);
      }
      while ( v25 != v21 );
      if ( v23 == 2 )
      {
        while ( (v24 & 1) == 0 )
        {
LABEL_44:
          v28 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0uLL);
          v29 = *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v29 )
          {
            do
            {
              v30 = v28;
              v28 = (_QWORD *)*v28;
              v28[2] = v30;
              v29 = v28[1];
            }
            while ( !v29 );
            if ( v28 != (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v29;
          }
          if ( (*(_DWORD *)(v29 + 36) & 1) != 0 )
          {
            v31 = *(_QWORD *)(v29 + 16);
            if ( v31 )
            {
              *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v31;
              *(_QWORD *)(v29 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&v11[1], 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_85:
                v47 = *(_QWORD *)(v29 + 16);
                _interlockedbittestandset((volatile signed __int32 *)(v29 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v29 + 36), 1u) )
                  ZwAlertThreadByThreadId(*(HANDLE *)(v29 + 24));
                v29 = v47;
              }
              while ( v47 );
              goto LABEL_88;
            }
          }
          v46 = _InterlockedCompareExchange64((volatile signed __int64 *)&v11[1], 0LL, v24);
          v26 = v24 == v46;
          v24 = v46;
          if ( v26 )
            goto LABEL_85;
        }
        while ( 1 )
        {
          v27 = _InterlockedCompareExchange64((volatile signed __int64 *)&v11[1], v24 - 4, v24);
          v26 = v24 == v27;
          v24 = v27;
          if ( v26 )
            break;
          if ( (v27 & 1) == 0 )
            goto LABEL_44;
        }
      }
    }
  }
LABEL_88:
  if ( !Value )
  {
LABEL_152:
    LODWORD(v6) = 0;
    goto LABEL_6;
  }
  v48 = *((_WORD *)&Value->Next + 7);
  v49 = 0;
  if ( v48 )
  {
    v50 = Value + 1;
    v51 = v48;
    do
    {
      v49 += LODWORD(v50->Next);
      v50 = (_SLIST_ENTRY *)((char *)v50 + 8);
      --v51;
    }
    while ( v51 );
  }
  v52 = &v5[2 * (v49 % *(_DWORD *)&v5[90].0)];
  if ( !byte_180165408 )
    RtlAcquireSRWLockExclusive(v52 + 92);
  if ( !*(_DWORD *)((char *)&Value->Next + 10) )
  {
    if ( !byte_180165408 )
      RtlAcquireSRWLockExclusive(v5);
    v53 = (char *)v5[19].Value;
    v54 = v5[21].Value - 8;
    v26 = v5[16].0 == 0;
    v88 = v53;
    if ( v26 )
    {
      if ( v54 < (unsigned __int64)v53 )
      {
        v82 = 4096LL;
        if ( (unsigned __int64)(v53 - 4096) <= v5[18].Value
          || (v88 = v53 - 4096, ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v88, 0LL, &v82, 0x1000u, 4u) < 0) )
        {
LABEL_105:
          if ( !byte_180165408 )
          {
            v55 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
            if ( v55 != 1 )
            {
              do
              {
                v56 = 3LL;
                v57 = v55 & 6;
                if ( v57 != 2 )
                  v56 = -1LL;
                v58 = v55 + v56;
                v59 = v55;
                v55 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v58, v55);
              }
              while ( v59 != v55 );
              if ( v57 == 2 )
              {
                while ( (v58 & 1) == 0 )
                {
LABEL_114:
                  v61 = (_QWORD *)(v58 & 0xFFFFFFFFFFFFFFF0uLL);
                  v62 = *(_QWORD *)((v58 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                  if ( !v62 )
                  {
                    do
                    {
                      v63 = v61;
                      v61 = (_QWORD *)*v61;
                      v61[2] = v63;
                      v62 = v61[1];
                    }
                    while ( !v62 );
                    if ( v61 != (_QWORD *)(v58 & 0xFFFFFFFFFFFFFFF0uLL) )
                      *(_QWORD *)((v58 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v62;
                  }
                  if ( (*(_DWORD *)(v62 + 36) & 1) != 0 )
                  {
                    v64 = *(_QWORD *)(v62 + 16);
                    if ( v64 )
                    {
                      *(_QWORD *)((v58 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v64;
                      *(_QWORD *)(v62 + 16) = 0LL;
                      _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
                      do
                      {
LABEL_122:
                        v66 = *(_QWORD *)(v62 + 16);
                        _interlockedbittestandset((volatile signed __int32 *)(v62 + 36), 2u);
                        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v62 + 36), 1u) )
                          ZwAlertThreadByThreadId(*(HANDLE *)(v62 + 24));
                        v62 = v66;
                      }
                      while ( v66 );
                      goto LABEL_125;
                    }
                  }
                  v65 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v58);
                  v26 = v58 == v65;
                  v58 = v65;
                  if ( v26 )
                    goto LABEL_122;
                }
                while ( 1 )
                {
                  v60 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v58 - 4, v58);
                  v26 = v58 == v60;
                  v58 = v60;
                  if ( v26 )
                    break;
                  if ( (v60 & 1) == 0 )
                    goto LABEL_114;
                }
              }
            }
          }
LABEL_125:
          if ( v4 )
          {
            *(_QWORD *)v4 = Value;
            v6 = (__int64)(v5[23].Value - (_QWORD)v4) >> 3;
            *((_WORD *)&Value->Next + 6) = v6;
            *((_WORD *)&Value->Next + 5) = WORD1(v6);
            v4 = 0LL;
          }
          else
          {
            LODWORD(v6) = 0;
          }
          goto LABEL_129;
        }
        v5[19].Value = (unsigned __int64)v88;
      }
    }
    else if ( v54 < v5[20].Value )
    {
      goto LABEL_105;
    }
    ++HIDWORD(v5[22].Ptr);
    v4 = (volatile signed __int32 *)v54;
    v5[21].Value = v54;
    goto LABEL_105;
  }
  LODWORD(v6) = *((unsigned __int16 *)&Value->Next + 6) + (*((unsigned __int16 *)&Value->Next + 5) << 16);
LABEL_129:
  if ( !byte_180165408 )
  {
    v67 = _InterlockedCompareExchange64((volatile signed __int64 *)&v52[92], 0LL, 1LL);
    if ( v67 != 1 )
    {
      do
      {
        v68 = 3LL;
        v69 = v67 & 6;
        if ( v69 != 2 )
          v68 = -1LL;
        v70 = v67 + v68;
        v71 = v67;
        v67 = _InterlockedCompareExchange64((volatile signed __int64 *)&v52[92], v70, v67);
      }
      while ( v71 != v67 );
      if ( v69 == 2 )
      {
        while ( (v70 & 1) == 0 )
        {
LABEL_138:
          v73 = (_QWORD *)(v70 & 0xFFFFFFFFFFFFFFF0uLL);
          v74 = *(volatile signed __int32 **)((v70 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v74 )
          {
            do
            {
              v75 = v73;
              v73 = (_QWORD *)*v73;
              v73[2] = v75;
              v74 = (volatile signed __int32 *)v73[1];
            }
            while ( !v74 );
            if ( v73 != (_QWORD *)(v70 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v70 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v74;
          }
          if ( (v74[9] & 1) != 0 )
          {
            v76 = *((_QWORD *)v74 + 2);
            if ( v76 )
            {
              *(_QWORD *)((v70 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v76;
              *((_QWORD *)v74 + 2) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&v52[92], 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_146:
                v4 = (volatile signed __int32 *)*((_QWORD *)v74 + 2);
                _interlockedbittestandset(v74 + 9, 2u);
                if ( !_interlockedbittestandreset(v74 + 9, 1u) )
                  ZwAlertThreadByThreadId(*((HANDLE *)v74 + 3));
                v74 = v4;
              }
              while ( v4 );
              goto LABEL_149;
            }
          }
          v77 = _InterlockedCompareExchange64((volatile signed __int64 *)&v52[92], 0LL, v70);
          v26 = v70 == v77;
          v70 = v77;
          if ( v26 )
            goto LABEL_146;
        }
        while ( 1 )
        {
          v72 = _InterlockedCompareExchange64((volatile signed __int64 *)&v52[92], v70 - 4, v70);
          v26 = v70 == v72;
          v70 = v72;
          if ( v26 )
            break;
          if ( (v72 & 1) == 0 )
            goto LABEL_138;
        }
      }
    }
  }
LABEL_149:
  if ( !(_DWORD)v6 )
    RtlStdReleaseStackTrace(v5, Value);
LABEL_6:
  Heap->CreatorBackTraceIndex = v6;
  Heap->CreatorBackTraceIndexHigh = WORD1(v6);
  v7 = NtCreateSemaphore(&SemaphoreHandle, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    RtlpFreeDebugInfo(Heap);
    RtlRaiseStatus(v7);
  }
  v8 = NtCreateSemaphore(&v83, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v8 < 0 )
  {
    NtClose(SemaphoreHandle);
    RtlpFreeDebugInfo(Heap);
    RtlRaiseStatus(v8);
  }
  Resource->SharedSemaphore = SemaphoreHandle;
  Resource->ExclusiveSemaphore = v83;
  Resource->NumberOfWaitingShared = (unsigned int)v4;
  *(_QWORD *)&Resource->NumberOfWaitingExclusive = 0LL;
  Resource->ExclusiveOwnerThread = (HANDLE)v4;
  Resource->Flags = (unsigned int)v4;
  Resource->DebugInfo = Heap;
  RtlInitializeCriticalSectionEx(&Resource->CriticalSection, 0, 0x8000000u);
  RtlpAddDebugInfoToCriticalSection(Resource);
  if ( Resource->CriticalSection.DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
    Resource->CriticalSection.DebugInfo->Type = 1;
}
