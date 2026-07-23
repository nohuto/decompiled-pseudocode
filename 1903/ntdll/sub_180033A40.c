/*
 * XREFs of sub_180033A40 @ 0x180033A40
 * Callers:
 *     sub_180007200 @ 0x180007200 (sub_180007200.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     RtlInitializeCriticalSection @ 0x1800636A0 (RtlInitializeCriticalSection.c)
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x180064540 (RtlInitializeCriticalSectionAndSpinCount.c)
 * Callees:
 *     sub_180035DD0 @ 0x180035DD0 (sub_180035DD0.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlCaptureStackBackTrace @ 0x180074820 (RtlCaptureStackBackTrace.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwAlertThreadByThreadId @ 0x18009D4B0 (ZwAlertThreadByThreadId.c)
 *     RtlInterlockedPopEntrySList @ 0x1800A01B0 (RtlInterlockedPopEntrySList.c)
 *     RtlCompareMemory @ 0x1800A0E80 (RtlCompareMemory.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800FAE20 @ 0x1800FAE20 (sub_1800FAE20.c)
 */

int __fastcall sub_180033A40(__int64 a1)
{
  PSLIST_ENTRY v2; // rbx
  signed __int64 Heap; // rax
  void *v4; // rcx
  PRTL_SRWLOCK v5; // rbp
  __int64 v6; // rsi
  volatile signed __int64 v7; // rbx
  signed __int64 *v8; // rax
  signed __int64 v9; // rbx
  __int64 v10; // rdx
  signed __int64 v11; // rcx
  signed __int64 v12; // rdx
  signed __int64 v13; // rtt
  _QWORD *v14; // r9
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rbx
  _QWORD *v18; // rax
  USHORT v19; // ax
  __int64 v20; // r15
  _RTL_SRWLOCK *v21; // r12
  PSLIST_ENTRY Ptr; // r14
  signed __int64 v23; // rax
  __int64 v24; // rdx
  signed __int64 v25; // rcx
  signed __int64 v26; // rdx
  signed __int64 v27; // rtt
  signed __int64 v28; // rax
  _QWORD *v29; // r9
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rax
  unsigned int v33; // esi
  PSLIST_ENTRY v34; // rax
  unsigned __int64 v35; // r13
  _SLIST_ENTRY *v36; // r15
  char *v37; // rcx
  char *v38; // rsi
  signed __int64 v39; // rax
  __int64 v40; // rdx
  signed __int64 v41; // rcx
  signed __int64 v42; // rdx
  signed __int64 v43; // rtt
  signed __int64 v44; // rax
  _QWORD *v45; // r9
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rax
  signed __int64 v49; // rax
  __int64 v50; // rsi
  unsigned int v51; // eax
  __int64 v52; // rcx
  __int16 v53; // cx
  signed __int64 v54; // rax
  __int64 v55; // rsi
  unsigned __int16 v56; // dx
  unsigned int v57; // eax
  _SLIST_ENTRY *v58; // rcx
  __int64 v59; // r8
  _RTL_SRWLOCK *v60; // r15
  unsigned __int16 v61; // ax
  _QWORD *v62; // r12
  char *v63; // rcx
  unsigned __int64 v64; // rsi
  signed __int64 v65; // rax
  __int64 v66; // rdx
  signed __int64 v67; // rcx
  signed __int64 v68; // rdx
  signed __int64 v69; // rtt
  signed __int64 v70; // rax
  _QWORD *v71; // r9
  __int64 v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // rax
  signed __int64 v75; // rax
  __int64 v76; // rsi
  signed __int64 v77; // rax
  __int64 v78; // rdx
  signed __int64 v79; // rcx
  signed __int64 v80; // rdx
  signed __int64 v81; // rtt
  signed __int64 v82; // rax
  _QWORD *v83; // r9
  __int64 v84; // rcx
  _QWORD *v85; // rax
  __int64 v86; // rax
  signed __int64 v87; // rax
  __int64 v88; // r15
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-168h] BYREF
  size_t Size; // [rsp+38h] [rbp-160h]
  ULONG_PTR v92[3]; // [rsp+40h] [rbp-158h] BYREF
  USHORT v93; // [rsp+5Eh] [rbp-13Ah]
  PVOID BackTrace[32]; // [rsp+60h] [rbp-138h] BYREF
  ULONG BackTraceHash; // [rsp+1A8h] [rbp+10h] BYREF
  PVOID v96; // [rsp+1B0h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+1B8h] [rbp+20h] BYREF

  v2 = RtlInterlockedPopEntrySList(&stru_180166180);
  if ( !v2 )
  {
    Heap = (signed __int64)NtCurrentPeb();
    v4 = *(void **)(Heap + 48);
    if ( !v4 || (Heap = (signed __int64)RtlAllocateHeap(v4, 0, 0x30uLL), (v2 = (PSLIST_ENTRY)Heap) == 0LL) )
    {
      _InterlockedIncrement(&dword_180164EEC);
      return Heap;
    }
  }
  LOWORD(v2->Next) = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
    LOWORD(v2->Next) = 1;
  v2[2].Next = 0LL;
  *((_QWORD *)&v2->Next + 1) = a1;
  *((_DWORD *)&v2[2].Next + 2) = 0;
  v5 = qword_180163B78;
  if ( !qword_180163B78 )
  {
    LODWORD(v6) = 0;
    goto LABEL_8;
  }
  v19 = RtlCaptureStackBackTrace(3u, 0x20u, BackTrace, &BackTraceHash);
  v93 = v19;
  if ( !v19 )
    goto LABEL_172;
  v20 = 8LL * v19;
  v21 = &v5[2 * (BackTraceHash % LODWORD(v5[90].Ptr)) + 91];
  Size = v20;
  _InterlockedIncrement((volatile signed __int32 *)&v5[22]);
  if ( !byte_180165408 )
    RtlAcquireSRWLockExclusive(v21 + 1);
  Ptr = (PSLIST_ENTRY)v21->Ptr;
  if ( v21->Ptr )
  {
    while ( *((_WORD *)&Ptr->Next + 7) != v93 || RtlCompareMemory(&Ptr[1], BackTrace, v20) != v20 )
    {
      Ptr = Ptr->Next;
      if ( !Ptr )
        goto LABEL_42;
    }
    goto LABEL_101;
  }
LABEL_42:
  if ( !v93 )
  {
    Ptr = 0LL;
LABEL_44:
    _InterlockedIncrement((volatile signed __int32 *)&v5[25]);
    goto LABEL_45;
  }
  v33 = v93 - 1;
  if ( v33 >= 0x20 )
  {
LABEL_64:
    Ptr = 0LL;
    v35 = (8LL * v93 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( !byte_180165408 )
      RtlAcquireSRWLockExclusive(v5);
    v36 = (_SLIST_ENTRY *)v5[20].Ptr;
    v37 = (char *)v5[18].Ptr;
    BaseAddress = v37;
    v38 = (char *)v36 + v35;
    if ( LOBYTE(v5[16].Ptr) )
    {
      if ( v38 <= v5[21].Ptr )
      {
LABEL_68:
        ++LODWORD(v5[24].Ptr);
        Ptr = v36;
        v5[20].Ptr = v38;
      }
    }
    else
    {
      if ( v38 <= v37 )
        goto LABEL_68;
      RegionSize = (v35 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( &v37[RegionSize] < v5[19].Ptr
        && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        v5[18].Ptr = (char *)BaseAddress + RegionSize;
        goto LABEL_68;
      }
    }
    if ( !byte_180165408 )
    {
      v39 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
      if ( v39 != 1 )
      {
        do
        {
          v40 = 3LL;
          v41 = v39 & 6;
          if ( v41 != 2 )
            v40 = -1LL;
          v42 = v39 + v40;
          v43 = v39;
          v39 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v42, v39);
        }
        while ( v43 != v39 );
        if ( v41 == 2 )
        {
          while ( (v42 & 1) == 0 )
          {
LABEL_78:
            v45 = (_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0uLL);
            v46 = *(_QWORD *)((v42 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
            if ( !v46 )
            {
              do
              {
                v47 = v45;
                v45 = (_QWORD *)*v45;
                v45[2] = v47;
                v46 = v45[1];
              }
              while ( !v46 );
              if ( v45 != (_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0uLL) )
                *(_QWORD *)((v42 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v46;
            }
            if ( (*(_DWORD *)(v46 + 36) & 1) != 0 )
            {
              v48 = *(_QWORD *)(v46 + 16);
              if ( v48 )
              {
                *(_QWORD *)((v42 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v48;
                *(_QWORD *)(v46 + 16) = 0LL;
                _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
                do
                {
LABEL_92:
                  v50 = *(_QWORD *)(v46 + 16);
                  _interlockedbittestandset((volatile signed __int32 *)(v46 + 36), 2u);
                  if ( !_interlockedbittestandreset((volatile signed __int32 *)(v46 + 36), 1u) )
                    ZwAlertThreadByThreadId(*(HANDLE *)(v46 + 24));
                  v46 = v50;
                }
                while ( v50 );
                goto LABEL_95;
              }
            }
            v49 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v42);
            v16 = v42 == v49;
            v42 = v49;
            if ( v16 )
              goto LABEL_92;
          }
          while ( 1 )
          {
            v44 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v42 - 4, v42);
            v16 = v42 == v44;
            v42 = v44;
            if ( v16 )
              break;
            if ( (v44 & 1) == 0 )
              goto LABEL_78;
          }
        }
      }
    }
LABEL_95:
    v20 = Size;
    if ( Ptr )
    {
      v51 = ((unsigned int)(v35 - 16) >> 3) - 1;
      if ( v51 > 0x1F )
        LOWORD(v51) = 31;
      *((_WORD *)&Ptr->Next + 4) &= 0x7FFu;
      *((_WORD *)&Ptr->Next + 4) |= (_WORD)v51 << 11;
    }
    goto LABEL_99;
  }
  while ( 1 )
  {
    v34 = RtlInterlockedPopEntrySList((PSLIST_HEADER)&v5[2 * v33 + 26]);
    if ( v34 )
      break;
    if ( ++v33 >= 0x20 )
      goto LABEL_64;
  }
  _InterlockedDecrement((volatile signed __int32 *)&v5[24].Ptr + 1);
  Ptr = v34 - 1;
LABEL_99:
  if ( !Ptr )
    goto LABEL_44;
  memmove(&Ptr[1], BackTrace, v20);
  *((_WORD *)&Ptr->Next + 7) = v93;
  *((_WORD *)&Ptr->Next + 4) &= 0xF800u;
  v52 = 2LL * (BackTraceHash % LODWORD(v5[90].Ptr));
  Ptr->Next = (_SLIST_ENTRY *)v5[v52 + 91];
  v5[v52 + 91].Ptr = Ptr;
LABEL_101:
  v53 = *((_WORD *)&Ptr->Next + 4);
  if ( (v53 & 0x7FF) != 0x7FF )
    *((_WORD *)&Ptr->Next + 4) = v53 ^ (v53 ^ (v53 + 1)) & 0x7FF;
LABEL_45:
  if ( !byte_180165408 )
  {
    v23 = _InterlockedCompareExchange64((volatile signed __int64 *)&v21[1], 0LL, 1LL);
    if ( v23 != 1 )
    {
      do
      {
        v24 = 3LL;
        v25 = v23 & 6;
        if ( v25 != 2 )
          v24 = -1LL;
        v26 = v23 + v24;
        v27 = v23;
        v23 = _InterlockedCompareExchange64((volatile signed __int64 *)&v21[1], v26, v23);
      }
      while ( v27 != v23 );
      if ( v25 == 2 )
      {
        while ( (v26 & 1) == 0 )
        {
LABEL_54:
          v29 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0uLL);
          v30 = *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v30 )
          {
            do
            {
              v31 = v29;
              v29 = (_QWORD *)*v29;
              v29[2] = v31;
              v30 = v29[1];
            }
            while ( !v30 );
            if ( v29 != (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v30;
          }
          if ( (*(_DWORD *)(v30 + 36) & 1) != 0 )
          {
            v32 = *(_QWORD *)(v30 + 16);
            if ( v32 )
            {
              *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v32;
              *(_QWORD *)(v30 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&v21[1], 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_104:
                v55 = *(_QWORD *)(v30 + 16);
                _interlockedbittestandset((volatile signed __int32 *)(v30 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v30 + 36), 1u) )
                  ZwAlertThreadByThreadId(*(HANDLE *)(v30 + 24));
                v30 = v55;
              }
              while ( v55 );
              goto LABEL_107;
            }
          }
          v54 = _InterlockedCompareExchange64((volatile signed __int64 *)&v21[1], 0LL, v26);
          v16 = v26 == v54;
          v26 = v54;
          if ( v16 )
            goto LABEL_104;
        }
        while ( 1 )
        {
          v28 = _InterlockedCompareExchange64((volatile signed __int64 *)&v21[1], v26 - 4, v26);
          v16 = v26 == v28;
          v26 = v28;
          if ( v16 )
            break;
          if ( (v28 & 1) == 0 )
            goto LABEL_54;
        }
      }
    }
  }
LABEL_107:
  if ( Ptr )
  {
    v56 = *((_WORD *)&Ptr->Next + 7);
    v57 = 0;
    if ( v56 )
    {
      v58 = Ptr + 1;
      v59 = v56;
      do
      {
        v57 += LODWORD(v58->Next);
        v58 = (_SLIST_ENTRY *)((char *)v58 + 8);
        --v59;
      }
      while ( v59 );
    }
    v60 = &v5[2 * (v57 % LODWORD(v5[90].Ptr))];
    if ( !byte_180165408 )
      RtlAcquireSRWLockExclusive(v60 + 92);
    v61 = *((_WORD *)&Ptr->Next + 6);
    if ( v61 || *((_WORD *)&Ptr->Next + 5) )
    {
      LODWORD(v6) = v61 + (*((unsigned __int16 *)&Ptr->Next + 5) << 16);
LABEL_149:
      if ( !byte_180165408 )
      {
        v77 = _InterlockedCompareExchange64((volatile signed __int64 *)&v60[92], 0LL, 1LL);
        if ( v77 != 1 )
        {
          do
          {
            v78 = 3LL;
            v79 = v77 & 6;
            if ( v79 != 2 )
              v78 = -1LL;
            v80 = v77 + v78;
            v81 = v77;
            v77 = _InterlockedCompareExchange64((volatile signed __int64 *)&v60[92], v80, v77);
          }
          while ( v81 != v77 );
          if ( v79 == 2 )
          {
            while ( (v80 & 1) == 0 )
            {
LABEL_158:
              v83 = (_QWORD *)(v80 & 0xFFFFFFFFFFFFFFF0uLL);
              v84 = *(_QWORD *)((v80 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
              if ( !v84 )
              {
                do
                {
                  v85 = v83;
                  v83 = (_QWORD *)*v83;
                  v83[2] = v85;
                  v84 = v83[1];
                }
                while ( !v84 );
                if ( v83 != (_QWORD *)(v80 & 0xFFFFFFFFFFFFFFF0uLL) )
                  *(_QWORD *)((v80 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v84;
              }
              if ( (*(_DWORD *)(v84 + 36) & 1) != 0 )
              {
                v86 = *(_QWORD *)(v84 + 16);
                if ( v86 )
                {
                  *(_QWORD *)((v80 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v86;
                  *(_QWORD *)(v84 + 16) = 0LL;
                  _InterlockedAnd64((volatile signed __int64 *)&v60[92], 0xFFFFFFFFFFFFFFFBuLL);
                  do
                  {
LABEL_166:
                    v88 = *(_QWORD *)(v84 + 16);
                    _interlockedbittestandset((volatile signed __int32 *)(v84 + 36), 2u);
                    if ( !_interlockedbittestandreset((volatile signed __int32 *)(v84 + 36), 1u) )
                      ZwAlertThreadByThreadId(*(HANDLE *)(v84 + 24));
                    v84 = v88;
                  }
                  while ( v88 );
                  goto LABEL_169;
                }
              }
              v87 = _InterlockedCompareExchange64((volatile signed __int64 *)&v60[92], 0LL, v80);
              v16 = v80 == v87;
              v80 = v87;
              if ( v16 )
                goto LABEL_166;
            }
            while ( 1 )
            {
              v82 = _InterlockedCompareExchange64((volatile signed __int64 *)&v60[92], v80 - 4, v80);
              v16 = v80 == v82;
              v80 = v82;
              if ( v16 )
                break;
              if ( (v82 & 1) == 0 )
                goto LABEL_158;
            }
          }
        }
      }
LABEL_169:
      if ( !(_DWORD)v6 )
        sub_1800FAE20(v5, Ptr);
      goto LABEL_8;
    }
    v62 = 0LL;
    if ( !byte_180165408 )
      RtlAcquireSRWLockExclusive(v5);
    v63 = (char *)v5[19].Ptr;
    v64 = (unsigned __int64)v5[21].Ptr - 8;
    v16 = LOBYTE(v5[16].Ptr) == 0;
    v96 = v63;
    if ( v16 )
    {
      if ( v64 < (unsigned __int64)v63 )
      {
        v92[0] = 4096LL;
        if ( v63 - 4096 <= v5[18].Ptr
          || (v96 = v63 - 4096, ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v96, 0LL, v92, 0x1000u, 4u) < 0) )
        {
LABEL_125:
          if ( !byte_180165408 )
          {
            v65 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
            if ( v65 != 1 )
            {
              do
              {
                v66 = 3LL;
                v67 = v65 & 6;
                if ( v67 != 2 )
                  v66 = -1LL;
                v68 = v65 + v66;
                v69 = v65;
                v65 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v68, v65);
              }
              while ( v69 != v65 );
              if ( v67 == 2 )
              {
                while ( (v68 & 1) == 0 )
                {
LABEL_134:
                  v71 = (_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0uLL);
                  v72 = *(_QWORD *)((v68 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                  if ( !v72 )
                  {
                    do
                    {
                      v73 = v71;
                      v71 = (_QWORD *)*v71;
                      v71[2] = v73;
                      v72 = v71[1];
                    }
                    while ( !v72 );
                    if ( v71 != (_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0uLL) )
                      *(_QWORD *)((v68 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v72;
                  }
                  if ( (*(_DWORD *)(v72 + 36) & 1) != 0 )
                  {
                    v74 = *(_QWORD *)(v72 + 16);
                    if ( v74 )
                    {
                      *(_QWORD *)((v68 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v74;
                      *(_QWORD *)(v72 + 16) = 0LL;
                      _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
                      do
                      {
LABEL_142:
                        v76 = *(_QWORD *)(v72 + 16);
                        _interlockedbittestandset((volatile signed __int32 *)(v72 + 36), 2u);
                        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v72 + 36), 1u) )
                          ZwAlertThreadByThreadId(*(HANDLE *)(v72 + 24));
                        v72 = v76;
                      }
                      while ( v76 );
                      goto LABEL_145;
                    }
                  }
                  v75 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v68);
                  v16 = v68 == v75;
                  v68 = v75;
                  if ( v16 )
                    goto LABEL_142;
                }
                while ( 1 )
                {
                  v70 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v68 - 4, v68);
                  v16 = v68 == v70;
                  v68 = v70;
                  if ( v16 )
                    break;
                  if ( (v70 & 1) == 0 )
                    goto LABEL_134;
                }
              }
            }
          }
LABEL_145:
          if ( v62 )
          {
            *v62 = Ptr;
            v6 = ((char *)v5[23].Ptr - (char *)v62) >> 3;
            *((_WORD *)&Ptr->Next + 6) = v6;
            *((_WORD *)&Ptr->Next + 5) = WORD1(v6);
          }
          else
          {
            LODWORD(v6) = 0;
          }
          goto LABEL_149;
        }
        v5[19].Ptr = v96;
      }
    }
    else if ( (PVOID)v64 < v5[20].Ptr )
    {
      goto LABEL_125;
    }
    ++HIDWORD(v5[22].Ptr);
    v62 = (_QWORD *)v64;
    v5[21].Ptr = (PVOID)v64;
    goto LABEL_125;
  }
LABEL_172:
  LODWORD(v6) = 0;
LABEL_8:
  WORD1(v2->Next) = v6;
  *((_WORD *)&v2[2].Next + 6) = WORD1(v6);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)v2, -1LL) == -1 )
  {
    v7 = *(_QWORD *)a1;
    RtlAcquireSRWLockExclusive(&stru_1801662F8);
    v8 = (signed __int64 *)off_18015F578[0];
    v9 = v7 + 16;
    if ( *(_UNKNOWN ***)off_18015F578[0] != &off_18015F570 )
      __fastfail(3u);
    *(_UNKNOWN ***)(v9 + 8) = off_18015F578[0];
    *(_QWORD *)v9 = &off_18015F570;
    *v8 = v9;
    off_18015F578[0] = (_UNKNOWN **)v9;
    Heap = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_1801662F8, 0LL, 1LL);
    if ( Heap != 1 )
    {
      do
      {
        v10 = 3LL;
        v11 = Heap & 6;
        if ( v11 != 2 )
          v10 = -1LL;
        v12 = Heap + v10;
        v13 = Heap;
        Heap = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_1801662F8, v12, Heap);
      }
      while ( v13 != Heap );
      if ( v11 == 2 )
      {
        while ( (v12 & 1) == 0 )
        {
LABEL_18:
          v14 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL);
          v15 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v15 )
          {
            do
            {
              v18 = v14;
              v14 = (_QWORD *)*v14;
              v14[2] = v18;
              v15 = v14[1];
            }
            while ( !v15 );
            if ( v14 != (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v15;
          }
          if ( (*(_DWORD *)(v15 + 36) & 1) != 0 )
          {
            Heap = *(_QWORD *)(v15 + 16);
            if ( Heap )
            {
              *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = Heap;
              *(_QWORD *)(v15 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)&stru_1801662F8, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_22:
                v17 = *(_QWORD *)(v15 + 16);
                _interlockedbittestandset((volatile signed __int32 *)(v15 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v15 + 36), 1u) )
                  LODWORD(Heap) = ZwAlertThreadByThreadId(*(HANDLE *)(v15 + 24));
                v15 = v17;
              }
              while ( v17 );
              return Heap;
            }
          }
          Heap = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_1801662F8, 0LL, v12);
          v16 = v12 == Heap;
          v12 = Heap;
          if ( v16 )
            goto LABEL_22;
        }
        while ( 1 )
        {
          Heap = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_1801662F8, v12 - 4, v12);
          v16 = v12 == Heap;
          v12 = Heap;
          if ( v16 )
            break;
          if ( (Heap & 1) == 0 )
            goto LABEL_18;
        }
      }
    }
  }
  else
  {
    LODWORD(Heap) = sub_180035DD0(v2);
  }
  return Heap;
}
