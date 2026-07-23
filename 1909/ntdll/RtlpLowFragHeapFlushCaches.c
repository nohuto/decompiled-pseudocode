/*
 * XREFs of RtlpLowFragHeapFlushCaches @ 0x18004D0C4
 * Callers:
 *     RtlpFlushHeap @ 0x18004F10C (RtlpFlushHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpIsSubSegmentReuseable @ 0x180043114 (RtlpIsSubSegmentReuseable.c)
 *     RtlpGetHeapProtection @ 0x18004733C (RtlpGetHeapProtection.c)
 *     RtlpFreeUserBlock @ 0x18004AD04 (RtlpFreeUserBlock.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004AEDC (RtlpFreeUserBlockToHeap.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004D7D0 (RtlpLocalInfoAllocFromCache.c)
 *     ZwProtectVirtualMemory @ 0x18009D890 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A09A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A09E0 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFreeEvent @ 0x180103550 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1801038F4 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x1801039A4 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpGetReservedBlockSize @ 0x180107840 (RtlpGetReservedBlockSize.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

int __fastcall RtlpLowFragHeapFlushCaches(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned int v8; // ebp
  _DWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r15
  int v12; // ebx
  struct _PEB *v13; // rax
  struct _PEB *v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  _QWORD **v18; // rdi
  _QWORD *v19; // r14
  int v20; // r15d
  unsigned __int64 v21; // rbp
  __int64 v22; // rbx
  unsigned int v23; // ecx
  ULONG CurrentServiceSessionId; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // r8d
  signed __int32 v28; // ebx
  _WORD *v29; // r8
  signed __int32 v30; // eax
  __int64 v31; // rcx
  volatile signed __int32 *v32; // rdx
  __int64 v33; // rcx
  _QWORD **v34; // rdx
  _QWORD *v35; // rax
  unsigned int v36; // edx
  signed __int64 v37; // rdx
  __int64 *v38; // rsi
  _DWORD *v39; // rbx
  __int64 v40; // rcx
  _DWORD *v41; // rdx
  __int64 v42; // rax
  unsigned __int16 *v43; // rsi
  __int64 v44; // rbx
  int v45; // edx
  signed __int64 v46; // rax
  struct _PEB *v47; // rbp
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r14
  __int64 v50; // rcx
  unsigned __int16 ReservedBlockSize; // ax
  _DWORD *v52; // rcx
  ULONG HeapProtection; // eax
  signed __int32 v54; // eax
  __int64 v55; // rcx
  signed __int32 v56; // eax
  signed __int32 v57; // ett
  __int64 v59; // [rsp+30h] [rbp-68h]
  signed __int64 v60; // [rsp+38h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v63; // [rsp+A0h] [rbp+8h]
  __int64 v64; // [rsp+A0h] [rbp+8h]
  unsigned int v65; // [rsp+A8h] [rbp+10h]
  __int64 v66; // [rsp+A8h] [rbp+10h]
  unsigned int v67; // [rsp+B0h] [rbp+18h]
  ULONG OldProtect; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v67 = 0;
  v59 = 0LL;
  do
  {
    if ( (*(_BYTE *)(a1 + 4 * v6 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v65 = 1;
LABEL_4:
      v8 = 0;
      v63 = 0;
LABEL_5:
      if ( v8 )
        v9 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v6 + 2224) + 192LL * v8 - 192);
      else
        v9 = *(_DWORD **)(a1 + 8 * v6 + 1192);
      if ( !v9 || v9[41] != 1 )
        goto LABEL_8;
      v15 = RtlpLocalInfoAllocFromCache(v9, v8);
      v16 = v15;
      if ( !v15 )
        goto LABEL_36;
      *(_DWORD *)(*(_QWORD *)v9 + 36LL) = 0;
      v17 = *(_QWORD *)(a1 + 24);
      if ( (unsigned __int16)v17 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v15 + 8) ^ (v15 >> 4))
        || (v18 = *(_QWORD ***)(v15
                              - ((unsigned __int64)((unsigned int)v17 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v15 + 8) ^ (unsigned int)(v15 >> 4)) >> 12))) == 0LL )
      {
        RtlpLogHeapFailure(3, v17, v15, 0, 0LL, 0LL);
        goto LABEL_36;
      }
      _m_prefetchw(v18);
      v19 = v18[1];
      v20 = 0;
      v21 = (unsigned __int16)(*(_DWORD *)(v15 + 12) >> 8);
      v22 = *(_QWORD *)(**v18 + 24LL);
      v23 = (unsigned int)v19 ^ RtlpLFHKey ^ v22 ^ *((_DWORD *)v19 + 6);
      if ( (_QWORD *)((char *)v19 + (unsigned int)v21 * HIWORD(v23) + (unsigned __int16)v23) != (_QWORD *)v15 )
      {
        RtlpLogHeapFailure(3, *(_QWORD *)(v22 + 24), v15, 0, 0LL, 0LL);
        goto LABEL_35;
      }
      CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
      a4 = 0LL;
      if ( CurrentServiceSessionId )
        v25 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v25 = 2147353472LL;
      if ( *(_BYTE *)v25 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        RtlpLogHeapFreeEvent(*(_QWORD *)(v22 + 24), v16 + 16, 2LL);
        a4 = 0LL;
      }
      v26 = 0LL;
      v27 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      do
      {
        v28 = *((_DWORD *)v18 + 8);
        if ( v28 >= 0 && v28 == _InterlockedCompareExchange((volatile signed __int32 *)v18 + 8, v28 | 0x80000000, v28) )
          goto LABEL_30;
        v26 = (unsigned int)(v26 + 1);
      }
      while ( (unsigned int)v26 <= v27 );
      v28 = -1;
LABEL_30:
      *(_BYTE *)(v16 + 15) = 0x80;
      v29 = v18 + 2;
      if ( v28 == -1 )
      {
        RtlpInterlockedPushEntrySList(v18 + 2, v16 + 16);
        goto LABEL_35;
      }
      _bittestandreset64((signed __int64 *)v19[5], v21);
      if ( *v29 )
      {
        v35 = (_QWORD *)RtlpInterlockedFlushSList(v18 + 2, v26, v29, 0LL);
        while ( v35 )
        {
          v36 = *((_DWORD *)v35 - 1);
          ++v20;
          v35 = (_QWORD *)*v35;
          v21 = (unsigned __int16)(v36 >> 8);
          _bittestandreset64((signed __int64 *)v19[5], v21);
        }
      }
      a3 = *v18;
      if ( (_WORD)v20 + (_WORD)v28 + 1 != *((_WORD *)v18 + 20)
        || (a4 = *((unsigned int *)a3 + 42), v37 = *(unsigned int *)(*a3 + 32LL), *((_DWORD *)a3 + 41) == 1)
        && (unsigned int)v37 >= (unsigned int)a4
        && (v37 = (unsigned int)(v37 - a4), (unsigned int)v37 < *(_DWORD *)(*a3 + 36LL)) )
      {
        *((_DWORD *)v18 + 8) = ((_DWORD)v21 << 16) | (v20 + (unsigned __int16)v28 + 1);
        if ( (*((_DWORD *)v18 + 11) & 2) != 0 || !RtlpIsSubSegmentReuseable((__int64)a3, (__int64)v18) )
          goto LABEL_35;
        do
        {
          v30 = *((_DWORD *)v18 + 11);
          if ( !v30 || (v30 & 2) != 0 )
            goto LABEL_35;
        }
        while ( v30 != _InterlockedCompareExchange((volatile signed __int32 *)v18 + 11, v30 | 2, v30) );
        a3 = *v18;
        a4 = 0LL;
        while ( 1 )
        {
          v31 = ((_BYTE)a4 + (unsigned __int8)*((_WORD *)a3 + 87)) & 0xF;
          v32 = (volatile signed __int32 *)a3[v31 + 2];
          if ( v32 )
          {
            if ( (v32[11] & 1) == 0
              && v32 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                     &a3[v31 + 2],
                                                     (signed __int64)v18,
                                                     (signed __int64)v32) )
            {
              _m_prefetchw((const void *)(v32 + 11));
              if ( _InterlockedAnd(v32 + 11, 0xFFFFFFFD) != 2 )
                goto LABEL_35;
              v33 = **(_QWORD **)v32;
              *(_QWORD *)v32 = 0LL;
              v34 = (_QWORD **)(v32 + 12);
              goto LABEL_73;
            }
          }
          else if ( !_InterlockedCompareExchange64(&a3[v31 + 2], (signed __int64)v18, 0LL) )
          {
            goto LABEL_35;
          }
          a4 = (unsigned int)(a4 + 1);
          if ( (unsigned int)a4 >= 0x10 )
          {
            v33 = *(_QWORD *)(*(_QWORD *)(**v18 + 24LL) + 8LL * *((unsigned __int16 *)*v18 + 86) + 1192) + 144LL;
LABEL_72:
            v34 = v18 + 6;
LABEL_73:
            RtlpInterlockedPushEntrySList(v33, v34);
            goto LABEL_35;
          }
        }
      }
      v38 = *v18;
      v39 = (_DWORD *)_InterlockedExchange64(*v18 + 1, 0LL);
      if ( !v39 )
        goto LABEL_66;
      _m_prefetchw(v39 + 11);
      if ( _InterlockedAnd(v39 + 11, 0xFFFFFFF9) == 6 )
      {
        v40 = **(_QWORD **)v39;
        *(_QWORD *)v39 = 0LL;
LABEL_64:
        v41 = v39 + 12;
LABEL_65:
        RtlpInterlockedPushEntrySList(v40, v41);
        goto LABEL_66;
      }
      if ( !RtlpIsSubSegmentReuseable((__int64)v38, (__int64)v39) )
        goto LABEL_66;
      do
      {
        v54 = v39[11];
        if ( !v54 || (v54 & 2) != 0 )
          goto LABEL_66;
      }
      while ( v54 != _InterlockedCompareExchange(v39 + 11, v54 | 2, v54) );
      a3 = *(_QWORD **)v39;
      a4 = 0LL;
      while ( 1 )
      {
        v55 = ((_BYTE)a4 + (unsigned __int8)*((_WORD *)a3 + 87)) & 0xF;
        v37 = a3[v55 + 2];
        if ( v37 )
        {
          if ( (*(_DWORD *)(v37 + 44) & 1) == 0
            && v37 == _InterlockedCompareExchange64(&a3[v55 + 2], (signed __int64)v39, v37) )
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
              v40 = **(_QWORD **)v37;
              *(_QWORD *)v37 = 0LL;
              v41 = (_DWORD *)(v37 + 48);
              goto LABEL_65;
            }
LABEL_66:
            v42 = *v38;
            v43 = (unsigned __int16 *)*v18;
            v44 = *(_QWORD *)(v42 + 24);
            if ( (*((_BYTE *)v18 + 38) & 3) != 0 )
            {
              BaseAddress = (PVOID)(((unsigned __int64)v18[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
              ReservedBlockSize = RtlpGetReservedBlockSize(v18, v37, a3, a4);
              v52 = *(_DWORD **)(v44 + 24);
              RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v18 + 20);
              HeapProtection = RtlpGetHeapProtection(v52, 1);
              ZwProtectVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                &RegionSize,
                HeapProtection,
                &OldProtect);
            }
            *((_DWORD *)v18[1] + 5) = 0;
            RtlpFreeUserBlock(v44, (unsigned __int8 *)v18[1]);
            v45 = -*((unsigned __int16 *)v18 + 20);
            do
            {
              v46 = *((_QWORD *)v43 + 20);
              LODWORD(v60) = v46 + v45;
              HIDWORD(v60) = HIDWORD(v46) - 1;
            }
            while ( v46 != _InterlockedCompareExchange64((volatile signed __int64 *)v43 + 20, v60, v46) );
            v18[1] = 0LL;
            _InterlockedAdd((volatile signed __int32 *)(v44 + 60), 1u);
            *((_DWORD *)v18 + 8) = 0;
            _m_prefetchw((char *)v18 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v18 + 11, 0xFFFFFFFE) == 1 )
            {
              v33 = **v18;
              *v18 = 0LL;
              goto LABEL_72;
            }
LABEL_35:
            v8 = v63;
LABEL_36:
            v6 = v59;
LABEL_8:
            v63 = ++v8;
            if ( v8 >= v65 )
            {
              v5 = v67;
              goto LABEL_10;
            }
            goto LABEL_5;
          }
        }
        else if ( !_InterlockedCompareExchange64(&a3[v55 + 2], (signed __int64)v39, 0LL) )
        {
          goto LABEL_66;
        }
        a4 = (unsigned int)(a4 + 1);
        if ( (unsigned int)a4 >= 0x10 )
        {
          v40 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v39 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v39 + 172LL)
                          + 1192)
              + 144LL;
          goto LABEL_64;
        }
      }
    }
    v65 = RtlpAffinityState[0];
    if ( LODWORD(RtlpAffinityState[0]) )
      goto LABEL_4;
LABEL_10:
    ++v5;
    ++v6;
    v67 = v5;
    v59 = v6;
  }
  while ( v5 < 0x81 );
  v10 = a1 + 96;
  v11 = 12LL;
  v64 = a1 + 96;
  v66 = 12LL;
  do
  {
    v12 = 0;
    v13 = (struct _PEB *)RtlpInterlockedFlushSList(v10, v6, a3, a4);
    v14 = v13;
    if ( v13 )
    {
      do
      {
        v47 = v14;
        v14 = *(struct _PEB **)&v14->InheritedAddressSpace;
        v48 = 1LL << LOBYTE(v47->ImageBaseAddress);
        if ( v48 > 0xF0000 )
          v48 = 983040LL;
        v49 = v48 + WORD1(v47->ImageBaseAddress);
        v7 += v49;
        RtlpFreeUserBlockToHeap(*(_DWORD **)(a1 + 24), v47, (ULONG)a3);
        ++v12;
        LODWORD(v13) = RtlGetCurrentServiceSessionId();
        a4 = 0LL;
        if ( (_DWORD)v13 )
        {
          v13 = NtCurrentPeb();
          v50 = (__int64)v13->SharedData + 550;
        }
        else
        {
          v50 = 2147353472LL;
        }
        if ( *(_BYTE *)v50 )
        {
          v13 = NtCurrentPeb();
          if ( (v13->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v47, v49, 0LL);
            LODWORD(v13) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v47, v49, 0LL);
          }
        }
      }
      while ( v14 );
      v10 = v64;
      v11 = v66;
      if ( v12 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v64 + 16), -v12);
    }
    v10 += 48LL;
    --v11;
    v64 = v10;
    v66 = v11;
  }
  while ( v11 );
  if ( v7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v7);
  return (int)v13;
}
