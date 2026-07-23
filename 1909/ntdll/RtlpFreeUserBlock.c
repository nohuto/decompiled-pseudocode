/*
 * XREFs of RtlpFreeUserBlock @ 0x18004AD04
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003B6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004D0C4 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004AEDC (RtlpFreeUserBlockToHeap.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A0960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A09A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1801038F4 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x1801039A4 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x180103A54 (RtlpLogHeapSubSegmentFreeCached.c)
 */

int __fastcall RtlpFreeUserBlock(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  PSLIST_ENTRY v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  PSLIST_ENTRY v15; // rbp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v19; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)a2;
  v6 = (volatile signed __int32 *)(a1 + 48 * (a2[16] - 5LL));
  if ( *(_WORD *)(v2 + 416) && (*(_BYTE *)(v2 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v2 + 352));
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v2 + 352));
  }
  v7 = *(unsigned __int16 *)v6;
  if ( v7 <= *((_DWORD *)v6 + 5) || v7 <= *((_DWORD *)v6 + 4) >> *((_DWORD *)v6 + 6) )
  {
    v8 = 1LL << a2[16];
    if ( v8 > 0xF0000 )
      v8 = 983040LL;
    v9 = v8 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v9);
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v10 = 2147353472LL;
    if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentFreeCached(*(_QWORD *)(a1 + 24), a2, v9, 16LL * *(unsigned __int16 *)(v3 + 36));
    LODWORD(v11) = RtlpInterlockedPushEntrySList(v6, a2);
    ++*((_WORD *)v6 + 15);
  }
  else
  {
    v12 = 1LL << a2[16];
    if ( v12 > 0xF0000 )
      v12 = 983040LL;
    v19 = v12 + *((unsigned __int16 *)a2 + 9);
    RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), a2);
    LODWORD(v11) = RtlGetCurrentServiceSessionId();
    v13 = 2147353472LL;
    if ( (_DWORD)v11 )
    {
      v11 = (PSLIST_ENTRY)NtCurrentPeb();
      v14 = (__int64)&v11[9].Next[34].Next + 6;
    }
    else
    {
      v14 = 2147353472LL;
    }
    if ( *(_BYTE *)v14 )
    {
      v11 = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&v11[55].Next + 1) & 1) != 0 )
        LODWORD(v11) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), a2, v19, 16LL * *(unsigned __int16 *)(v3 + 36));
    }
    _InterlockedDecrement(v6 + 4);
    if ( v7 )
    {
      v11 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v6);
      v15 = v11;
      if ( v11 )
      {
        v16 = 1LL << LOBYTE(v11[1].Next);
        if ( v16 > 0xF0000 )
          v16 = 983040LL;
        v17 = v16 + WORD1(v11[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v17);
        RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v11);
        LODWORD(v11) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v11 )
        {
          v11 = (PSLIST_ENTRY)NtCurrentPeb();
          v13 = (__int64)&v11[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v13 )
        {
          v11 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v11[55].Next + 1) & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
            LODWORD(v11) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
          }
        }
        _InterlockedDecrement(v6 + 4);
      }
    }
  }
  return (int)v11;
}
