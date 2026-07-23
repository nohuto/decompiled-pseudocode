/*
 * XREFs of RtlpLowFragHeapFlushCaches @ 0x180068C90
 * Callers:
 *     RtlpFlushHeap @ 0x18006896C (RtlpFlushHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpIsSubSegmentReuseable @ 0x18001B588 (RtlpIsSubSegmentReuseable.c)
 *     RtlpFreeUserBlock @ 0x18001B65C (RtlpFreeUserBlock.c)
 *     RtlpFreeUserBlockToHeap @ 0x18001D58C (RtlpFreeUserBlockToHeap.c)
 *     RtlpGetHeapProtection @ 0x180060908 (RtlpGetHeapProtection.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18006915C (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A0D00 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3DF0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A3E30 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFreeEvent @ 0x180105E78 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18010621C (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x1801062CC (RtlpLogHeapSubSegmentFree.c)
 *     RtlpGetReservedBlockSize @ 0x18010A39C (RtlpGetReservedBlockSize.c)
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
  _DWORD *v18; // rdi
  __int64 v19; // r14
  int v20; // r15d
  unsigned __int64 v21; // rbp
  __int64 v22; // rbx
  ULONG CurrentServiceSessionId; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // r8d
  signed __int32 v27; // ebx
  _WORD *v28; // r8
  signed __int64 v29; // rdx
  __int64 *v30; // rsi
  _DWORD *v31; // rbx
  signed __int32 v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rbx
  int v38; // edx
  signed __int64 v39; // rax
  struct _PEB *v40; // rbp
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r14
  __int64 v43; // rcx
  _QWORD *v44; // rax
  unsigned int v45; // edx
  unsigned __int16 ReservedBlockSize; // ax
  _DWORD *v47; // rcx
  ULONG HeapProtection; // eax
  __int64 v49; // rcx
  signed __int32 v50; // eax
  __int64 v51; // rcx
  __int64 **v52; // rdx
  __int64 v54; // [rsp+30h] [rbp-68h]
  signed __int64 v55; // [rsp+38h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v58; // [rsp+A0h] [rbp+8h]
  __int64 v59; // [rsp+A0h] [rbp+8h]
  unsigned int v60; // [rsp+A8h] [rbp+10h]
  __int64 v61; // [rsp+A8h] [rbp+10h]
  unsigned int v62; // [rsp+B0h] [rbp+18h]
  ULONG OldProtect; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v62 = 0;
  v54 = 0LL;
  do
  {
    if ( (*(_BYTE *)(a1 + 4 * v6 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v60 = 1;
LABEL_4:
      v8 = 0;
      v58 = 0;
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
        goto LABEL_33;
      *(_DWORD *)(*(_QWORD *)v9 + 36LL) = 0;
      v17 = *(_QWORD *)(a1 + 24);
      if ( (unsigned __int16)v17 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v15 + 8) ^ (v15 >> 4))
        || (v18 = *(_DWORD **)(v15
                             - ((unsigned __int64)((unsigned int)v17 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v15 + 8) ^ (unsigned int)(v15 >> 4)) >> 12))) == 0LL )
      {
        RtlpLogHeapFailure(3, v17, v15, 0, 0LL, 0LL);
        goto LABEL_33;
      }
      _m_prefetchw(v18);
      v19 = *((_QWORD *)v18 + 1);
      v20 = 0;
      v21 = (unsigned __int16)(*(_DWORD *)(v15 + 12) >> 8);
      v22 = *(_QWORD *)(**(_QWORD **)v18 + 24LL);
      if ( v19
         + (unsigned int)v21
         * (((unsigned int)v19 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v22 ^ *(_DWORD *)(v19 + 24)) >> 16)
         + (unsigned __int16)(v19 ^ RtlpLFHKey ^ v22 ^ *(_WORD *)(v19 + 24)) != v15 )
      {
        RtlpLogHeapFailure(3, *(_QWORD *)(v22 + 24), v15, 0, 0LL, 0LL);
        goto LABEL_32;
      }
      CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
      a4 = 0LL;
      if ( CurrentServiceSessionId )
        v24 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v24 = 2147353472LL;
      if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        RtlpLogHeapFreeEvent(*(_QWORD *)(v22 + 24), v16 + 16, 2LL);
        a4 = 0LL;
      }
      v25 = 0LL;
      v26 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      do
      {
        v27 = v18[8];
        if ( v27 >= 0 && v27 == _InterlockedCompareExchange(v18 + 8, v27 | 0x80000000, v27) )
          goto LABEL_28;
        v25 = (unsigned int)(v25 + 1);
      }
      while ( (unsigned int)v25 <= v26 );
      v27 = -1;
LABEL_28:
      *(_BYTE *)(v16 + 15) = 0x80;
      v28 = v18 + 4;
      if ( v27 == -1 )
      {
        RtlpInterlockedPushEntrySList(v18 + 4);
        goto LABEL_32;
      }
      _bittestandreset64(*(signed __int64 **)(v19 + 40), v21);
      if ( *v28 )
      {
        v44 = (_QWORD *)RtlpInterlockedFlushSList(v18 + 4, v25, v28, 0LL);
        while ( v44 )
        {
          v45 = *((_DWORD *)v44 - 1);
          ++v20;
          v44 = (_QWORD *)*v44;
          v21 = (unsigned __int16)(v45 >> 8);
          _bittestandreset64(*(signed __int64 **)(v19 + 40), v21);
        }
      }
      a3 = *(_QWORD **)v18;
      if ( (_WORD)v20 + (_WORD)v27 + 1 == *((_WORD *)v18 + 20) )
      {
        a4 = *((unsigned int *)a3 + 42);
        v29 = *(unsigned int *)(*a3 + 32LL);
        if ( *((_DWORD *)a3 + 41) != 1
          || (unsigned int)v29 < (unsigned int)a4
          || (v29 = (unsigned int)(v29 - a4), (unsigned int)v29 >= *(_DWORD *)(*a3 + 36LL)) )
        {
          v30 = *(__int64 **)v18;
          v31 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v18 + 8LL), 0LL);
          if ( v31 )
          {
            _m_prefetchw(v31 + 11);
            if ( _InterlockedAnd(v31 + 11, 0xFFFFFFF9) == 6 )
            {
              v34 = **(_QWORD **)v31;
              *(_QWORD *)v31 = 0LL;
              goto LABEL_53;
            }
            if ( RtlpIsSubSegmentReuseable((__int64)v30, (__int64)v31) )
            {
              do
              {
                v32 = v31[11];
                if ( !v32 || (v32 & 2) != 0 )
                  goto LABEL_54;
              }
              while ( v32 != _InterlockedCompareExchange(v31 + 11, v32 | 2, v32) );
              a3 = *(_QWORD **)v31;
              a4 = 0LL;
              while ( 1 )
              {
                v33 = ((_BYTE)a4 + (unsigned __int8)*((_WORD *)a3 + 87)) & 0xF;
                v29 = a3[v33 + 2];
                if ( v29 )
                {
                  if ( (*(_DWORD *)(v29 + 44) & 1) == 0
                    && v29 == _InterlockedCompareExchange64(&a3[v33 + 2], (signed __int64)v31, v29) )
                  {
                    _m_prefetchw((const void *)(v29 + 44));
                    if ( _InterlockedAnd((volatile signed __int32 *)(v29 + 44), 0xFFFFFFFD) != 2 )
                      break;
                    v34 = **(_QWORD **)v29;
                    *(_QWORD *)v29 = 0LL;
LABEL_53:
                    RtlpInterlockedPushEntrySList(v34);
                    break;
                  }
                }
                else if ( !_InterlockedCompareExchange64(&a3[v33 + 2], (signed __int64)v31, 0LL) )
                {
                  break;
                }
                a4 = (unsigned int)(a4 + 1);
                if ( (unsigned int)a4 >= 0x10 )
                {
                  v34 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v31 + 24LL)
                                  + 8LL * *(unsigned __int16 *)(*(_QWORD *)v31 + 172LL)
                                  + 1192)
                      + 144LL;
                  goto LABEL_53;
                }
              }
            }
          }
LABEL_54:
          v35 = *v30;
          v36 = *(_QWORD *)v18;
          v37 = *(_QWORD *)(v35 + 24);
          if ( (*((_BYTE *)v18 + 38) & 3) != 0 )
          {
            BaseAddress = (PVOID)((*((_QWORD *)v18 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
            ReservedBlockSize = RtlpGetReservedBlockSize(v18, v29, a3, a4);
            v47 = *(_DWORD **)(v37 + 24);
            RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v18 + 20);
            HeapProtection = RtlpGetHeapProtection(v47, 1);
            ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, HeapProtection, &OldProtect);
          }
          *(_DWORD *)(*((_QWORD *)v18 + 1) + 20LL) = 0;
          RtlpFreeUserBlock(v37, *((unsigned __int8 **)v18 + 1));
          v38 = -*((unsigned __int16 *)v18 + 20);
          do
          {
            v39 = *(_QWORD *)(v36 + 160);
            LODWORD(v55) = v39 + v38;
            HIDWORD(v55) = HIDWORD(v39) - 1;
          }
          while ( v39 != _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 160), v55, v39) );
          *((_QWORD *)v18 + 1) = 0LL;
          _InterlockedAdd((volatile signed __int32 *)(v37 + 60), 1u);
          v18[8] = 0;
          _m_prefetchw(v18 + 11);
          if ( _InterlockedAnd(v18 + 11, 0xFFFFFFFE) == 1 )
          {
            v49 = **(_QWORD **)v18;
            *(_QWORD *)v18 = 0LL;
            goto LABEL_83;
          }
          goto LABEL_32;
        }
      }
      v18[8] = ((_DWORD)v21 << 16) | (v20 + (unsigned __int16)v27 + 1);
      if ( (v18[11] & 2) != 0 || !RtlpIsSubSegmentReuseable((__int64)a3, (__int64)v18) )
        goto LABEL_32;
      do
      {
        v50 = v18[11];
        if ( !v50 || (v50 & 2) != 0 )
          goto LABEL_32;
      }
      while ( v50 != _InterlockedCompareExchange(v18 + 11, v50 | 2, v50) );
      a3 = *(_QWORD **)v18;
      a4 = 0LL;
      while ( 1 )
      {
        v51 = ((_BYTE)a4 + (unsigned __int8)*((_WORD *)a3 + 87)) & 0xF;
        v52 = (__int64 **)a3[v51 + 2];
        if ( v52 )
        {
          if ( (*((_DWORD *)v52 + 11) & 1) == 0
            && v52 == (__int64 **)_InterlockedCompareExchange64(&a3[v51 + 2], (signed __int64)v18, (signed __int64)v52) )
          {
            _m_prefetchw((char *)v52 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v52 + 11, 0xFFFFFFFD) == 2 )
            {
              v49 = **v52;
              *v52 = 0LL;
LABEL_83:
              RtlpInterlockedPushEntrySList(v49);
            }
LABEL_32:
            v8 = v58;
LABEL_33:
            v6 = v54;
LABEL_8:
            v58 = ++v8;
            if ( v8 >= v60 )
            {
              v5 = v62;
              goto LABEL_10;
            }
            goto LABEL_5;
          }
        }
        else if ( !_InterlockedCompareExchange64(&a3[v51 + 2], (signed __int64)v18, 0LL) )
        {
          goto LABEL_32;
        }
        a4 = (unsigned int)(a4 + 1);
        if ( (unsigned int)a4 >= 0x10 )
        {
          v49 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v18 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v18 + 172LL)
                          + 1192)
              + 144LL;
          goto LABEL_83;
        }
      }
    }
    v60 = RtlpAffinityState[0];
    if ( LODWORD(RtlpAffinityState[0]) )
      goto LABEL_4;
LABEL_10:
    ++v5;
    ++v6;
    v62 = v5;
    v54 = v6;
  }
  while ( v5 < 0x81 );
  v10 = a1 + 96;
  v11 = 12LL;
  v59 = a1 + 96;
  v61 = 12LL;
  do
  {
    v12 = 0;
    v13 = (struct _PEB *)RtlpInterlockedFlushSList(v10, v6, a3, a4);
    v14 = v13;
    if ( v13 )
    {
      do
      {
        v40 = v14;
        v14 = *(struct _PEB **)&v14->InheritedAddressSpace;
        v41 = 1LL << LOBYTE(v40->ImageBaseAddress);
        if ( v41 > 0xF0000 )
          v41 = 983040LL;
        v42 = v41 + WORD1(v40->ImageBaseAddress);
        v7 += v42;
        RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v40, (ULONG)a3);
        ++v12;
        LODWORD(v13) = RtlGetCurrentServiceSessionId();
        a4 = 0LL;
        if ( (_DWORD)v13 )
        {
          v13 = NtCurrentPeb();
          v43 = (__int64)v13->SharedData + 550;
        }
        else
        {
          v43 = 2147353472LL;
        }
        if ( *(_BYTE *)v43 )
        {
          v13 = NtCurrentPeb();
          if ( (v13->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v40, v42, 0LL);
            LODWORD(v13) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v40, v42, 0LL);
          }
        }
      }
      while ( v14 );
      v10 = v59;
      v11 = v61;
      if ( v12 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v59 + 16), -v12);
    }
    v10 += 48LL;
    --v11;
    v59 = v10;
    v61 = v11;
  }
  while ( v11 );
  if ( v7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v7);
  return (int)v13;
}
