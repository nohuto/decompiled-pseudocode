/*
 * XREFs of RtlInitializeResource @ 0x1800338D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 *     sub_180035DD0 @ 0x180035DD0 (sub_180035DD0.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlCaptureStackBackTrace @ 0x180074820 (RtlCaptureStackBackTrace.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwAlertThreadByThreadId @ 0x18009D4B0 (ZwAlertThreadByThreadId.c)
 *     ZwCreateSemaphore @ 0x18009DE30 (ZwCreateSemaphore.c)
 *     RtlInterlockedPopEntrySList @ 0x1800A01B0 (RtlInterlockedPopEntrySList.c)
 *     RtlCompareMemory @ 0x1800A0E80 (RtlCompareMemory.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800FAE20 @ 0x1800FAE20 (sub_1800FAE20.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

_WORD *__fastcall RtlInitializeResource(__int64 a1)
{
  PSLIST_ENTRY Heap; // rdi
  void *ProcessHeap; // rcx
  volatile signed __int32 *v4; // r12
  __int64 v5; // r14
  __int64 v6; // rsi
  int v7; // esi
  int v8; // esi
  _WORD *result; // rax
  USHORT v10; // ax
  SIZE_T v11; // r12
  __int64 v12; // r13
  PSLIST_ENTRY v13; // r15
  unsigned int v14; // esi
  PSLIST_ENTRY v15; // rax
  unsigned __int64 v16; // rax
  struct _SLIST_ENTRY *v17; // r12
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  __int16 v21; // cx
  signed __int64 v22; // rax
  __int64 v23; // rdx
  signed __int64 v24; // rcx
  signed __int64 v25; // rdx
  signed __int64 v26; // rtt
  bool v27; // zf
  signed __int64 v28; // rax
  _QWORD *v29; // r9
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rax
  bool v33; // sf
  signed __int64 v34; // rax
  __int64 v35; // rdx
  signed __int64 v36; // rcx
  signed __int64 v37; // rdx
  signed __int64 v38; // rtt
  signed __int64 v39; // rax
  _QWORD *v40; // r9
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rax
  signed __int64 v44; // rax
  __int64 v45; // rsi
  unsigned int v46; // eax
  signed __int64 v47; // rax
  __int64 v48; // rsi
  unsigned __int16 v49; // dx
  unsigned int v50; // eax
  struct _SLIST_ENTRY *v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r13
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rsi
  signed __int64 v56; // rax
  __int64 v57; // rdx
  signed __int64 v58; // rcx
  signed __int64 v59; // rdx
  signed __int64 v60; // rtt
  signed __int64 v61; // rax
  _QWORD *v62; // r9
  __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rax
  signed __int64 v66; // rax
  __int64 v67; // rsi
  signed __int64 v68; // rax
  __int64 v69; // rdx
  signed __int64 v70; // rcx
  signed __int64 v71; // rdx
  signed __int64 v72; // rtt
  signed __int64 v73; // rax
  _QWORD *v74; // r9
  volatile signed __int32 *v75; // rcx
  _QWORD *v76; // rax
  __int64 v77; // rax
  signed __int64 v78; // rax
  unsigned __int64 v79; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v80; // [rsp+38h] [rbp-C8h] BYREF
  SIZE_T v81; // [rsp+40h] [rbp-C0h]
  __int64 v82; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v83; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v84; // [rsp+58h] [rbp-A8h] BYREF
  USHORT v85; // [rsp+6Eh] [rbp-92h]
  PVOID BackTrace[32]; // [rsp+70h] [rbp-90h] BYREF
  ULONG BackTraceHash; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned __int64 v88; // [rsp+1C0h] [rbp+C0h]
  unsigned __int64 v89; // [rsp+1C8h] [rbp+C8h] BYREF

  Heap = RtlInterlockedPopEntrySList(&stru_180166180);
  if ( !Heap )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap || (Heap = (PSLIST_ENTRY)RtlAllocateHeap(ProcessHeap, 0LL, 48LL)) == 0LL )
      RtlRaiseStatus(3221225495LL);
  }
  v4 = 0LL;
  HIDWORD(Heap[2].Next) = 0;
  v5 = qword_180163B78;
  if ( !qword_180163B78 )
  {
    LODWORD(v6) = 0;
    goto LABEL_6;
  }
  v10 = RtlCaptureStackBackTrace(2u, 0x20u, BackTrace, &BackTraceHash);
  v85 = v10;
  if ( !v10 )
    goto LABEL_152;
  v11 = 8LL * v10;
  v12 = 16LL * (BackTraceHash % *(_DWORD *)(v5 + 720)) + v5 + 728;
  v81 = v11;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 176));
  if ( !byte_180165408 )
    RtlAcquireSRWLockExclusive(v12 + 8);
  v13 = *(PSLIST_ENTRY *)v12;
  if ( *(_QWORD *)v12 )
  {
    while ( *((_WORD *)&v13->Next + 7) != v85 || RtlCompareMemory(&v13[1], BackTrace, v11) != v11 )
    {
      v13 = v13->Next;
      if ( !v13 )
        goto LABEL_19;
    }
    goto LABEL_32;
  }
LABEL_19:
  if ( !v85 )
  {
    v4 = 0LL;
    v13 = 0LL;
LABEL_83:
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 200));
    goto LABEL_35;
  }
  v14 = v85 - 1;
  if ( v14 >= 0x20 )
  {
LABEL_24:
    v13 = 0LL;
    v16 = (8LL * v85 + 31) & 0xFFFFFFFFFFFFFFF0uLL;
    v88 = v16;
    if ( !byte_180165408 )
    {
      RtlAcquireSRWLockExclusive(v5);
      v16 = v88;
    }
    v17 = *(struct _SLIST_ENTRY **)(v5 + 160);
    v18 = *(_QWORD *)(v5 + 144);
    v79 = v18;
    v19 = (unsigned __int64)v17 + v16;
    if ( *(_BYTE *)(v5 + 128) )
    {
      if ( v19 > *(_QWORD *)(v5 + 168) )
      {
LABEL_57:
        if ( !byte_180165408 )
        {
          v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
          if ( v34 != 1 )
          {
            do
            {
              v35 = 3LL;
              v36 = v34 & 6;
              if ( v36 != 2 )
                v35 = -1LL;
              v37 = v34 + v35;
              v38 = v34;
              v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v37, v34);
            }
            while ( v38 != v34 );
            if ( v36 == 2 )
            {
              while ( (v37 & 1) == 0 )
              {
LABEL_66:
                v40 = (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0uLL);
                v41 = *(_QWORD *)((v37 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                if ( !v41 )
                {
                  do
                  {
                    v42 = v40;
                    v40 = (_QWORD *)*v40;
                    v40[2] = v42;
                    v41 = v40[1];
                  }
                  while ( !v41 );
                  if ( v40 != (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0uLL) )
                    *(_QWORD *)((v37 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v41;
                }
                if ( (*(_DWORD *)(v41 + 36) & 1) != 0 )
                {
                  v43 = *(_QWORD *)(v41 + 16);
                  if ( v43 )
                  {
                    *(_QWORD *)((v37 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v43;
                    *(_QWORD *)(v41 + 16) = 0LL;
                    _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
                    do
                    {
LABEL_74:
                      v45 = *(_QWORD *)(v41 + 16);
                      _interlockedbittestandset((volatile signed __int32 *)(v41 + 36), 2u);
                      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v41 + 36), 1u) )
                        ZwAlertThreadByThreadId(*(_QWORD *)(v41 + 24));
                      v41 = v45;
                    }
                    while ( v45 );
                    goto LABEL_77;
                  }
                }
                v44 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v37);
                v27 = v37 == v44;
                v37 = v44;
                if ( v27 )
                  goto LABEL_74;
              }
              while ( 1 )
              {
                v39 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v37 - 4, v37);
                v27 = v37 == v39;
                v37 = v39;
                if ( v27 )
                  break;
                if ( (v39 & 1) == 0 )
                  goto LABEL_66;
              }
            }
          }
LABEL_77:
          LODWORD(v16) = v88;
        }
        v11 = v81;
        if ( v13 )
        {
          v46 = ((unsigned int)(v16 - 16) >> 3) - 1;
          if ( v46 > 0x1F )
            LOWORD(v46) = 31;
          *((_WORD *)&v13->Next + 4) &= 0x7FFu;
          *((_WORD *)&v13->Next + 4) |= (_WORD)v46 << 11;
        }
        goto LABEL_30;
      }
    }
    else if ( v19 > v18 )
    {
      v80 = (v16 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v18 + v80 >= *(_QWORD *)(v5 + 152) )
      {
        LODWORD(v16) = v88;
        goto LABEL_57;
      }
      v33 = (int)ZwAllocateVirtualMemory(-1LL, &v79, 0LL, &v80, 4096, 4) < 0;
      LODWORD(v16) = v88;
      if ( v33 )
        goto LABEL_57;
      *(_QWORD *)(v5 + 144) = v80 + v79;
    }
    ++*(_DWORD *)(v5 + 192);
    v13 = v17;
    *(_QWORD *)(v5 + 160) = v19;
    goto LABEL_57;
  }
  while ( 1 )
  {
    v15 = RtlInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 16 * (v14 + 13LL)));
    if ( v15 )
      break;
    if ( ++v14 >= 0x20 )
      goto LABEL_24;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 196));
  v13 = v15 - 1;
LABEL_30:
  if ( !v13 )
  {
    v4 = 0LL;
    goto LABEL_83;
  }
  memmove(&v13[1], BackTrace, v11);
  *((_WORD *)&v13->Next + 7) = v85;
  *((_WORD *)&v13->Next + 4) &= 0xF800u;
  v20 = 16LL * (BackTraceHash % *(_DWORD *)(v5 + 720));
  v13->Next = *(struct _SLIST_ENTRY **)(v20 + v5 + 728);
  *(_QWORD *)(v20 + v5 + 728) = v13;
LABEL_32:
  v21 = *((_WORD *)&v13->Next + 4);
  if ( (v21 & 0x7FF) != 0x7FF )
    *((_WORD *)&v13->Next + 4) = v21 ^ (v21 ^ (v21 + 1)) & 0x7FF;
  v4 = 0LL;
LABEL_35:
  if ( !byte_180165408 )
  {
    v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), 0LL, 1LL);
    if ( v22 != 1 )
    {
      do
      {
        v23 = 3LL;
        v24 = v22 & 6;
        if ( v24 != 2 )
          v23 = -1LL;
        v25 = v22 + v23;
        v26 = v22;
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), v25, v22);
      }
      while ( v26 != v22 );
      if ( v24 == 2 )
      {
        while ( (v25 & 1) == 0 )
        {
LABEL_44:
          v29 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0uLL);
          v30 = *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
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
            if ( v29 != (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v30;
          }
          if ( (*(_DWORD *)(v30 + 36) & 1) != 0 )
          {
            v32 = *(_QWORD *)(v30 + 16);
            if ( v32 )
            {
              *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v32;
              *(_QWORD *)(v30 + 16) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)(v12 + 8), 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_85:
                v48 = *(_QWORD *)(v30 + 16);
                _interlockedbittestandset((volatile signed __int32 *)(v30 + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(v30 + 36), 1u) )
                  ZwAlertThreadByThreadId(*(_QWORD *)(v30 + 24));
                v30 = v48;
              }
              while ( v48 );
              goto LABEL_88;
            }
          }
          v47 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), 0LL, v25);
          v27 = v25 == v47;
          v25 = v47;
          if ( v27 )
            goto LABEL_85;
        }
        while ( 1 )
        {
          v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), v25 - 4, v25);
          v27 = v25 == v28;
          v25 = v28;
          if ( v27 )
            break;
          if ( (v28 & 1) == 0 )
            goto LABEL_44;
        }
      }
    }
  }
LABEL_88:
  if ( !v13 )
  {
LABEL_152:
    LODWORD(v6) = 0;
    goto LABEL_6;
  }
  v49 = *((_WORD *)&v13->Next + 7);
  v50 = 0;
  if ( v49 )
  {
    v51 = v13 + 1;
    v52 = v49;
    do
    {
      v50 += LODWORD(v51->Next);
      v51 = (struct _SLIST_ENTRY *)((char *)v51 + 8);
      --v52;
    }
    while ( v52 );
  }
  v53 = v5 + 16LL * (v50 % *(_DWORD *)(v5 + 720));
  if ( !byte_180165408 )
    RtlAcquireSRWLockExclusive(v53 + 736);
  if ( !*(_DWORD *)((char *)&v13->Next + 10) )
  {
    if ( !byte_180165408 )
      RtlAcquireSRWLockExclusive(v5);
    v54 = *(_QWORD *)(v5 + 152);
    v55 = *(_QWORD *)(v5 + 168) - 8LL;
    v27 = *(_BYTE *)(v5 + 128) == 0;
    v89 = v54;
    if ( v27 )
    {
      if ( v55 < v54 )
      {
        v83 = 4096LL;
        if ( v54 - 4096 <= *(_QWORD *)(v5 + 144)
          || (v89 = v54 - 4096, (int)ZwAllocateVirtualMemory(-1LL, &v89, 0LL, &v83, 4096, 4) < 0) )
        {
LABEL_105:
          if ( !byte_180165408 )
          {
            v56 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 1LL);
            if ( v56 != 1 )
            {
              do
              {
                v57 = 3LL;
                v58 = v56 & 6;
                if ( v58 != 2 )
                  v57 = -1LL;
                v59 = v56 + v57;
                v60 = v56;
                v56 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v59, v56);
              }
              while ( v60 != v56 );
              if ( v58 == 2 )
              {
                while ( (v59 & 1) == 0 )
                {
LABEL_114:
                  v62 = (_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0uLL);
                  v63 = *(_QWORD *)((v59 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
                  if ( !v63 )
                  {
                    do
                    {
                      v64 = v62;
                      v62 = (_QWORD *)*v62;
                      v62[2] = v64;
                      v63 = v62[1];
                    }
                    while ( !v63 );
                    if ( v62 != (_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0uLL) )
                      *(_QWORD *)((v59 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v63;
                  }
                  if ( (*(_DWORD *)(v63 + 36) & 1) != 0 )
                  {
                    v65 = *(_QWORD *)(v63 + 16);
                    if ( v65 )
                    {
                      *(_QWORD *)((v59 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v65;
                      *(_QWORD *)(v63 + 16) = 0LL;
                      _InterlockedAnd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFBuLL);
                      do
                      {
LABEL_122:
                        v67 = *(_QWORD *)(v63 + 16);
                        _interlockedbittestandset((volatile signed __int32 *)(v63 + 36), 2u);
                        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v63 + 36), 1u) )
                          ZwAlertThreadByThreadId(*(_QWORD *)(v63 + 24));
                        v63 = v67;
                      }
                      while ( v67 );
                      goto LABEL_125;
                    }
                  }
                  v66 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, v59);
                  v27 = v59 == v66;
                  v59 = v66;
                  if ( v27 )
                    goto LABEL_122;
                }
                while ( 1 )
                {
                  v61 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v59 - 4, v59);
                  v27 = v59 == v61;
                  v59 = v61;
                  if ( v27 )
                    break;
                  if ( (v61 & 1) == 0 )
                    goto LABEL_114;
                }
              }
            }
          }
LABEL_125:
          if ( v4 )
          {
            *(_QWORD *)v4 = v13;
            v6 = (__int64)(*(_QWORD *)(v5 + 184) - (_QWORD)v4) >> 3;
            *((_WORD *)&v13->Next + 6) = v6;
            *((_WORD *)&v13->Next + 5) = WORD1(v6);
            v4 = 0LL;
          }
          else
          {
            LODWORD(v6) = 0;
          }
          goto LABEL_129;
        }
        *(_QWORD *)(v5 + 152) = v89;
      }
    }
    else if ( v55 < *(_QWORD *)(v5 + 160) )
    {
      goto LABEL_105;
    }
    ++*(_DWORD *)(v5 + 180);
    v4 = (volatile signed __int32 *)v55;
    *(_QWORD *)(v5 + 168) = v55;
    goto LABEL_105;
  }
  LODWORD(v6) = *((unsigned __int16 *)&v13->Next + 6) + (*((unsigned __int16 *)&v13->Next + 5) << 16);
LABEL_129:
  if ( !byte_180165408 )
  {
    v68 = _InterlockedCompareExchange64((volatile signed __int64 *)(v53 + 736), 0LL, 1LL);
    if ( v68 != 1 )
    {
      do
      {
        v69 = 3LL;
        v70 = v68 & 6;
        if ( v70 != 2 )
          v69 = -1LL;
        v71 = v68 + v69;
        v72 = v68;
        v68 = _InterlockedCompareExchange64((volatile signed __int64 *)(v53 + 736), v71, v68);
      }
      while ( v72 != v68 );
      if ( v70 == 2 )
      {
        while ( (v71 & 1) == 0 )
        {
LABEL_138:
          v74 = (_QWORD *)(v71 & 0xFFFFFFFFFFFFFFF0uLL);
          v75 = *(volatile signed __int32 **)((v71 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v75 )
          {
            do
            {
              v76 = v74;
              v74 = (_QWORD *)*v74;
              v74[2] = v76;
              v75 = (volatile signed __int32 *)v74[1];
            }
            while ( !v75 );
            if ( v74 != (_QWORD *)(v71 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v71 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v75;
          }
          if ( (v75[9] & 1) != 0 )
          {
            v77 = *((_QWORD *)v75 + 2);
            if ( v77 )
            {
              *(_QWORD *)((v71 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v77;
              *((_QWORD *)v75 + 2) = 0LL;
              _InterlockedAnd64((volatile signed __int64 *)(v53 + 736), 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_146:
                v4 = (volatile signed __int32 *)*((_QWORD *)v75 + 2);
                _interlockedbittestandset(v75 + 9, 2u);
                if ( !_interlockedbittestandreset(v75 + 9, 1u) )
                  ZwAlertThreadByThreadId(*((_QWORD *)v75 + 3));
                v75 = v4;
              }
              while ( v4 );
              goto LABEL_149;
            }
          }
          v78 = _InterlockedCompareExchange64((volatile signed __int64 *)(v53 + 736), 0LL, v71);
          v27 = v71 == v78;
          v71 = v78;
          if ( v27 )
            goto LABEL_146;
        }
        while ( 1 )
        {
          v73 = _InterlockedCompareExchange64((volatile signed __int64 *)(v53 + 736), v71 - 4, v71);
          v27 = v71 == v73;
          v71 = v73;
          if ( v27 )
            break;
          if ( (v73 & 1) == 0 )
            goto LABEL_138;
        }
      }
    }
  }
LABEL_149:
  if ( !(_DWORD)v6 )
    sub_1800FAE20(v5, v13);
LABEL_6:
  WORD1(Heap->Next) = v6;
  *((_WORD *)&Heap[2].Next + 6) = WORD1(v6);
  v7 = ZwCreateSemaphore(&v82, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    sub_180035DD0(Heap);
    RtlRaiseStatus((unsigned int)v7);
  }
  v8 = ZwCreateSemaphore(&v84, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v8 < 0 )
  {
    ZwClose(v82);
    sub_180035DD0(Heap);
    RtlRaiseStatus((unsigned int)v8);
  }
  *(_QWORD *)(a1 + 40) = v82;
  *(_QWORD *)(a1 + 56) = v84;
  *(_DWORD *)(a1 + 48) = (_DWORD)v4;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = v4;
  *(_DWORD *)(a1 + 80) = (_DWORD)v4;
  *(_QWORD *)(a1 + 88) = Heap;
  RtlInitializeCriticalSectionEx(a1, 0LL, 0x8000000LL);
  sub_180033A40(a1);
  result = *(_WORD **)a1;
  if ( *(_QWORD *)a1 != -1LL )
    *result = 1;
  return result;
}
