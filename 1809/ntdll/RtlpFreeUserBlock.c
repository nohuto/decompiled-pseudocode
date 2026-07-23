/*
 * XREFs of RtlpFreeUserBlock @ 0x18001B65C
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18000FEB0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180018460 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x180068C90 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpFreeUserBlockToHeap @ 0x18001D58C (RtlpFreeUserBlockToHeap.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A3DB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3DF0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18010621C (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x1801062CC (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x18010637C (RtlpLogHeapSubSegmentFreeCached.c)
 */

int __fastcall RtlpFreeUserBlock(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  _DWORD *SharedData; // rax
  __int64 v11; // rdi
  PSLIST_ENTRY v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  PSLIST_ENTRY v16; // rbp
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  unsigned __int64 v20; // [rsp+50h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)a2;
  v6 = (volatile signed __int32 *)(a1 + 48 * (a2[16] - 5LL));
  if ( *(_WORD *)(v3 + 416) && (*(_BYTE *)(v3 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v3 + 352));
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v3 + 352));
  }
  v7 = *(unsigned __int16 *)v6;
  if ( v7 <= *((_DWORD *)v6 + 5) || v7 <= *((_DWORD *)v6 + 4) >> *((_DWORD *)v6 + 6) )
  {
    v8 = 1LL << a2[16];
    if ( v8 > 0xF0000 )
      v8 = 983040LL;
    v9 = v8 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v9);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v11 = 2147353472LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentFreeCached(*(_QWORD *)(a1 + 24), a2, v9, 16LL * *(unsigned __int16 *)(v4 + 36));
    LODWORD(v12) = RtlpInterlockedPushEntrySList(v6);
    ++*((_WORD *)v6 + 15);
  }
  else
  {
    v13 = 1LL << a2[16];
    if ( v13 > 0xF0000 )
      v13 = 983040LL;
    v20 = v13 + *((unsigned __int16 *)a2 + 9);
    RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), a2);
    LODWORD(v12) = RtlGetCurrentServiceSessionId();
    v14 = 2147353472LL;
    if ( (_DWORD)v12 )
    {
      v12 = (PSLIST_ENTRY)NtCurrentPeb();
      v15 = (__int64)&v12[9].Next[34].Next + 6;
    }
    else
    {
      v15 = 2147353472LL;
    }
    if ( *(_BYTE *)v15 )
    {
      v12 = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&v12[55].Next + 1) & 1) != 0 )
        LODWORD(v12) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), a2, v20, 16LL * *(unsigned __int16 *)(v4 + 36));
    }
    _InterlockedDecrement(v6 + 4);
    if ( v7 )
    {
      v12 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v6);
      v16 = v12;
      if ( v12 )
      {
        v17 = 1LL << LOBYTE(v12[1].Next);
        if ( v17 > 0xF0000 )
          v17 = 983040LL;
        v18 = v17 + WORD1(v12[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v18);
        RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v12);
        LODWORD(v12) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v12 )
        {
          v12 = (PSLIST_ENTRY)NtCurrentPeb();
          v14 = (__int64)&v12[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v14 )
        {
          v12 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v12[55].Next + 1) & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v16, v18, 0LL);
            LODWORD(v12) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v16, v18, 0LL);
          }
        }
        _InterlockedDecrement(v6 + 4);
      }
    }
  }
  return (int)v12;
}
