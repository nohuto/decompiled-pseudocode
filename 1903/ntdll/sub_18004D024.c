/*
 * XREFs of sub_18004D024 @ 0x18004D024
 * Callers:
 *     sub_18004F06C @ 0x18004F06C (sub_18004F06C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180043114 @ 0x180043114 (sub_180043114.c)
 *     sub_18004733C @ 0x18004733C (sub_18004733C.c)
 *     sub_18004AC64 @ 0x18004AC64 (sub_18004AC64.c)
 *     sub_18004AE3C @ 0x18004AE3C (sub_18004AE3C.c)
 *     sub_18004D730 @ 0x18004D730 (sub_18004D730.c)
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A01F0 (RtlInterlockedPushEntrySList_0.c)
 *     RtlInterlockedFlushSList_0 @ 0x1800A0230 (RtlInterlockedFlushSList_0.c)
 *     sub_180103470 @ 0x180103470 (sub_180103470.c)
 *     sub_180103814 @ 0x180103814 (sub_180103814.c)
 *     sub_1801038C4 @ 0x1801038C4 (sub_1801038C4.c)
 *     sub_180107708 @ 0x180107708 (sub_180107708.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

int __fastcall sub_18004D024(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // r12
  unsigned int v5; // ebp
  _DWORD *v6; // rbx
  _SLIST_HEADER *v7; // rdi
  __int64 v8; // r15
  int v9; // ebx
  PSLIST_ENTRY v10; // rax
  ULONG v11; // r8d
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  _QWORD **v16; // rdi
  _QWORD *v17; // r14
  int v18; // r15d
  unsigned __int64 v19; // rbp
  __int64 v20; // rbx
  unsigned int v21; // ecx
  __int64 UserModeGlobalLogger; // rcx
  unsigned int v23; // edx
  unsigned int v24; // r8d
  signed __int32 v25; // ebx
  _QWORD *p_Next; // r8
  signed __int32 v27; // eax
  unsigned __int16 *v28; // r8
  int v29; // r9d
  __int64 v30; // rcx
  _QWORD **v31; // rdx
  _SLIST_HEADER *v32; // rcx
  _SLIST_ENTRY *v33; // rdx
  PSLIST_ENTRY v34; // rax
  unsigned int v35; // edx
  __int64 v36; // r9
  signed __int64 v37; // rdx
  __int64 *v38; // rsi
  _SLIST_ENTRY *v39; // rbx
  _SLIST_HEADER *Next; // rcx
  _SLIST_ENTRY *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rbx
  int v45; // edx
  signed __int64 v46; // rax
  _QWORD *v47; // rbp
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r14
  __int64 v50; // rcx
  unsigned __int16 v51; // ax
  _DWORD *v52; // rcx
  ULONG v53; // eax
  signed __int32 v54; // eax
  __int64 v55; // rcx
  signed __int32 v56; // eax
  signed __int32 v57; // ett
  __int64 v59; // [rsp+30h] [rbp-68h]
  signed __int64 v60; // [rsp+38h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v63; // [rsp+A0h] [rbp+8h]
  _SLIST_HEADER *v64; // [rsp+A0h] [rbp+8h]
  unsigned int v65; // [rsp+A8h] [rbp+10h]
  __int64 v66; // [rsp+A8h] [rbp+10h]
  unsigned int v67; // [rsp+B0h] [rbp+18h]
  ULONG OldProtect; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v67 = 0;
  v59 = 0LL;
  do
  {
    if ( (*(_BYTE *)(a1 + 4 * v3 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v65 = 1;
LABEL_4:
      v5 = 0;
      v63 = 0;
LABEL_5:
      if ( v5 )
        v6 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v3 + 2224) + 192LL * v5 - 192);
      else
        v6 = *(_DWORD **)(a1 + 8 * v3 + 1192);
      if ( !v6 || v6[41] != 1 )
        goto LABEL_8;
      v13 = sub_18004D730(v6, v5);
      v14 = v13;
      if ( !v13 )
        goto LABEL_36;
      *(_DWORD *)(*(_QWORD *)v6 + 36LL) = 0;
      v15 = *(_QWORD *)(a1 + 24);
      if ( (unsigned __int16)v15 ^ (unsigned __int16)(qword_180166580 ^ *(_WORD *)(v13 + 8) ^ (v13 >> 4))
        || (v16 = *(_QWORD ***)(v13
                              - ((unsigned __int64)((unsigned int)v15 ^ (unsigned int)qword_180166580 ^ *(_DWORD *)(v13 + 8) ^ (unsigned int)(v13 >> 4)) >> 12))) == 0LL )
      {
        sub_18010A694(3, v15, v13, 0, 0LL, 0LL);
        goto LABEL_36;
      }
      _m_prefetchw(v16);
      v17 = v16[1];
      v18 = 0;
      v19 = (unsigned __int16)(*(_DWORD *)(v13 + 12) >> 8);
      v20 = *(_QWORD *)(**v16 + 24LL);
      v21 = (unsigned int)v17 ^ qword_180166580 ^ v20 ^ *((_DWORD *)v17 + 6);
      if ( (_QWORD *)((char *)v17 + (unsigned int)v19 * HIWORD(v21) + (unsigned __int16)v21) != (_QWORD *)v13 )
      {
        sub_18010A694(3, *(_QWORD *)(v20 + 24), v13, 0, 0LL, 0LL);
        goto LABEL_35;
      }
      if ( RtlGetCurrentServiceSessionId() )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_180103470(*(_QWORD *)(v20 + 24), v14 + 16, 2LL);
      v23 = 0;
      v24 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      do
      {
        v25 = *((_DWORD *)v16 + 8);
        if ( v25 >= 0 && v25 == _InterlockedCompareExchange((volatile signed __int32 *)v16 + 8, v25 | 0x80000000, v25) )
          goto LABEL_30;
        ++v23;
      }
      while ( v23 <= v24 );
      v25 = -1;
LABEL_30:
      *(_BYTE *)(v14 + 15) = 0x80;
      if ( v25 == -1 )
      {
        RtlInterlockedPushEntrySList_0((PSLIST_HEADER)v16 + 1, (PSLIST_ENTRY)(v14 + 16));
        goto LABEL_35;
      }
      _bittestandreset64((signed __int64 *)v17[5], v19);
      if ( *((_WORD *)v16 + 8) )
      {
        v34 = RtlInterlockedFlushSList_0((PSLIST_HEADER)v16 + 1);
        while ( v34 )
        {
          v35 = *((_DWORD *)&v34[-1].Next + 3);
          ++v18;
          v34 = v34->Next;
          v19 = (unsigned __int16)(v35 >> 8);
          _bittestandreset64((signed __int64 *)v17[5], v19);
        }
      }
      p_Next = *v16;
      if ( (_WORD)v18 + (_WORD)v25 + 1 != *((_WORD *)v16 + 20)
        || (v36 = *((unsigned int *)p_Next + 42), v37 = *(unsigned int *)(*p_Next + 32LL), *((_DWORD *)p_Next + 41) == 1)
        && (unsigned int)v37 >= (unsigned int)v36
        && (v37 = (unsigned int)(v37 - v36), (unsigned int)v37 < *(_DWORD *)(*p_Next + 36LL)) )
      {
        *((_DWORD *)v16 + 8) = ((_DWORD)v19 << 16) | (v18 + (unsigned __int16)v25 + 1);
        if ( (*((_DWORD *)v16 + 11) & 2) != 0 || !sub_180043114((__int64)p_Next, (__int64)v16) )
          goto LABEL_35;
        do
        {
          v27 = *((_DWORD *)v16 + 11);
          if ( !v27 || (v27 & 2) != 0 )
            goto LABEL_35;
        }
        while ( v27 != _InterlockedCompareExchange((volatile signed __int32 *)v16 + 11, v27 | 2, v27) );
        v28 = (unsigned __int16 *)*v16;
        v29 = 0;
        while ( 1 )
        {
          v30 = ((_BYTE)v29 + (unsigned __int8)v28[87]) & 0xF;
          v31 = *(_QWORD ***)&v28[4 * v30 + 8];
          if ( v31 )
          {
            if ( (*((_DWORD *)v31 + 11) & 1) == 0
              && v31 == (_QWORD **)_InterlockedCompareExchange64(
                                     (volatile signed __int64 *)&v28[4 * v30 + 8],
                                     (signed __int64)v16,
                                     (signed __int64)v31) )
            {
              _m_prefetchw((char *)v31 + 44);
              if ( _InterlockedAnd((volatile signed __int32 *)v31 + 11, 0xFFFFFFFD) != 2 )
                goto LABEL_35;
              v32 = (_SLIST_HEADER *)**v31;
              *v31 = 0LL;
              v33 = (_SLIST_ENTRY *)(v31 + 6);
              goto LABEL_73;
            }
          }
          else if ( !_InterlockedCompareExchange64(
                       (volatile signed __int64 *)&v28[4 * v30 + 8],
                       (signed __int64)v16,
                       0LL) )
          {
            goto LABEL_35;
          }
          if ( (unsigned int)++v29 >= 0x10 )
          {
            v32 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(**v16 + 24LL) + 8LL * *((unsigned __int16 *)*v16 + 86) + 1192)
                                  + 144LL);
LABEL_72:
            v33 = (_SLIST_ENTRY *)(v16 + 6);
LABEL_73:
            RtlInterlockedPushEntrySList_0(v32, v33);
            goto LABEL_35;
          }
        }
      }
      v38 = *v16;
      v39 = (_SLIST_ENTRY *)_InterlockedExchange64(*v16 + 1, 0LL);
      if ( !v39 )
        goto LABEL_66;
      _m_prefetchw((char *)&v39[2].Next + 12);
      if ( _InterlockedAnd((volatile signed __int32 *)&v39[2].Next + 3, 0xFFFFFFF9) == 6 )
      {
        Next = (_SLIST_HEADER *)v39->Next->Next;
        v39->Next = 0LL;
LABEL_64:
        v41 = v39 + 3;
LABEL_65:
        RtlInterlockedPushEntrySList_0(Next, v41);
        goto LABEL_66;
      }
      if ( !sub_180043114((__int64)v38, (__int64)v39) )
        goto LABEL_66;
      do
      {
        v54 = *((_DWORD *)&v39[2].Next + 3);
        if ( !v54 || (v54 & 2) != 0 )
          goto LABEL_66;
      }
      while ( v54 != _InterlockedCompareExchange((volatile signed __int32 *)&v39[2].Next + 3, v54 | 2, v54) );
      p_Next = &v39->Next->Next;
      v36 = 0LL;
      while ( 1 )
      {
        v55 = ((_BYTE)v36 + (unsigned __int8)*((_WORD *)p_Next + 87)) & 0xF;
        v37 = p_Next[v55 + 2];
        if ( v37 )
        {
          if ( (*(_DWORD *)(v37 + 44) & 1) == 0
            && v37 == _InterlockedCompareExchange64(&p_Next[v55 + 2], (signed __int64)v39, v37) )
          {
            _m_prefetchw((const void *)(v37 + 44));
            v56 = *(_DWORD *)(v37 + 44);
            do
            {
              v57 = v56;
              v56 = _InterlockedCompareExchange((volatile signed __int32 *)(v37 + 44), v56 & 0xFFFFFFFD, v56);
            }
            while ( v57 != v56 );
            if ( v56 == 2 )
            {
              Next = **(_SLIST_HEADER ***)v37;
              *(_QWORD *)v37 = 0LL;
              v41 = (_SLIST_ENTRY *)(v37 + 48);
              goto LABEL_65;
            }
LABEL_66:
            v42 = *v38;
            v43 = (__int64)*v16;
            v44 = *(_QWORD *)(v42 + 24);
            if ( (*((_BYTE *)v16 + 38) & 3) != 0 )
            {
              BaseAddress = (PVOID)(((unsigned __int64)v16[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
              v51 = sub_180107708(v16, v37, p_Next, v36);
              v52 = *(_DWORD **)(v44 + 24);
              RegionSize = 16 * v51 * (unsigned __int64)*((unsigned __int16 *)v16 + 20);
              v53 = sub_18004733C(v52, 1);
              ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, v53, &OldProtect);
            }
            *((_DWORD *)v16[1] + 5) = 0;
            sub_18004AC64(v44, v16[1]);
            v45 = -*((unsigned __int16 *)v16 + 20);
            do
            {
              v46 = *(_QWORD *)(v43 + 160);
              LODWORD(v60) = v46 + v45;
              HIDWORD(v60) = HIDWORD(v46) - 1;
            }
            while ( v46 != _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 160), v60, v46) );
            v16[1] = 0LL;
            _InterlockedAdd((volatile signed __int32 *)(v44 + 60), 1u);
            *((_DWORD *)v16 + 8) = 0;
            _m_prefetchw((char *)v16 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v16 + 11, 0xFFFFFFFE) == 1 )
            {
              v32 = (_SLIST_HEADER *)**v16;
              *v16 = 0LL;
              goto LABEL_72;
            }
LABEL_35:
            v5 = v63;
LABEL_36:
            v3 = v59;
LABEL_8:
            v63 = ++v5;
            if ( v5 >= v65 )
            {
              v2 = v67;
              goto LABEL_10;
            }
            goto LABEL_5;
          }
        }
        else if ( !_InterlockedCompareExchange64(&p_Next[v55 + 2], (signed __int64)v39, 0LL) )
        {
          goto LABEL_66;
        }
        v36 = (unsigned int)(v36 + 1);
        if ( (unsigned int)v36 >= 0x10 )
        {
          Next = (_SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&v39->Next->Next[1].Next + 1)
                                             + 8LL * *((unsigned __int16 *)&v39->Next[10].Next + 6)
                                             + 1192)
                                 + 144LL);
          goto LABEL_64;
        }
      }
    }
    v65 = qword_1801636A0[0];
    if ( LODWORD(qword_1801636A0[0]) )
      goto LABEL_4;
LABEL_10:
    ++v2;
    ++v3;
    v67 = v2;
    v59 = v3;
  }
  while ( v2 < 0x81 );
  v7 = (_SLIST_HEADER *)(a1 + 96);
  v8 = 12LL;
  v64 = (_SLIST_HEADER *)(a1 + 96);
  v66 = 12LL;
  do
  {
    v9 = 0;
    v10 = RtlInterlockedFlushSList_0(v7);
    v12 = &v10->Next;
    if ( v10 )
    {
      do
      {
        v47 = v12;
        v12 = (_QWORD *)*v12;
        v48 = 1LL << *((_BYTE *)v47 + 16);
        if ( v48 > 0xF0000 )
          v48 = 983040LL;
        v49 = v48 + *((unsigned __int16 *)v47 + 9);
        v4 += v49;
        sub_18004AE3C(*(_DWORD **)(a1 + 24), v47, v11);
        ++v9;
        LODWORD(v10) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v10 )
        {
          v10 = (PSLIST_ENTRY)NtCurrentPeb();
          v50 = (__int64)&v10[9].Next[34].Next + 6;
        }
        else
        {
          v50 = 2147353472LL;
        }
        if ( *(_BYTE *)v50 )
        {
          v10 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v10[55].Next + 1) & 1) != 0 )
          {
            sub_180103814(*(_QWORD *)(a1 + 24), v47, v49, 0LL);
            LODWORD(v10) = sub_1801038C4(*(_QWORD *)(a1 + 24), v47, v49, 0LL);
          }
        }
      }
      while ( v12 );
      v7 = v64;
      v8 = v66;
      if ( v9 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v64[1], -v9);
    }
    v7 += 3;
    --v8;
    v64 = v7;
    v66 = v8;
  }
  while ( v8 );
  if ( v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v4);
  return (int)v10;
}
