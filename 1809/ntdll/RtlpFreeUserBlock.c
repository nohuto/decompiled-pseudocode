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
 *     RtlpInterlockedPopEntrySList @ 0x1800A3D90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3DD0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18010621C (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x1801062CC (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x18010637C (RtlpLogHeapSubSegmentFreeCached.c)
 */

struct _PEB *__fastcall RtlpFreeUserBlock(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  _DWORD *SharedData; // rax
  __int64 v11; // rdi
  struct _PEB *result; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  struct _PEB *v16; // rbp
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // [rsp+50h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *a2;
  v6 = (volatile signed __int32 *)(a1 + 48 * (*((unsigned __int8 *)a2 + 16) - 5LL));
  if ( *(_WORD *)(v3 + 416) && (*(_BYTE *)(v3 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(v3 + 352));
    RtlLeaveCriticalSection(*(_QWORD *)(v3 + 352));
  }
  v7 = *(unsigned __int16 *)v6;
  if ( v7 <= *((_DWORD *)v6 + 5) || v7 <= *((_DWORD *)v6 + 4) >> *((_DWORD *)v6 + 6) )
  {
    v8 = 1LL << *((_BYTE *)a2 + 16);
    if ( v8 > 0xF0000 )
      v8 = 983040LL;
    v9 = v8 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v9);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v11 = 2147353472LL;
    if ( *(_BYTE *)v11 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentFreeCached(*(_QWORD *)(a1 + 24), a2, v9, 16LL * *(unsigned __int16 *)(v4 + 36));
    }
    result = (struct _PEB *)RtlpInterlockedPushEntrySList(v6);
    ++*((_WORD *)v6 + 15);
  }
  else
  {
    v13 = 1LL << *((_BYTE *)a2 + 16);
    if ( v13 > 0xF0000 )
      v13 = 983040LL;
    v19 = v13 + *((unsigned __int16 *)a2 + 9);
    RtlpFreeUserBlockToHeap(*(_QWORD *)(a1 + 24), a2);
    result = (struct _PEB *)RtlGetCurrentServiceSessionId();
    v14 = 2147353472LL;
    if ( (_DWORD)result )
    {
      result = NtCurrentPeb();
      v15 = (__int64)result->SharedData + 550;
    }
    else
    {
      v15 = 2147353472LL;
    }
    if ( *(_BYTE *)v15 )
    {
      result = NtCurrentPeb();
      if ( (result->TracingFlags & 1) != 0 )
        result = (struct _PEB *)RtlpLogHeapSubSegmentFree(
                                  *(_QWORD *)(a1 + 24),
                                  a2,
                                  v19,
                                  16LL * *(unsigned __int16 *)(v4 + 36));
    }
    _InterlockedDecrement(v6 + 4);
    if ( v7 )
    {
      result = (struct _PEB *)RtlpInterlockedPopEntrySList((PSLIST_HEADER)v6);
      v16 = result;
      if ( result )
      {
        v17 = 1LL << LOBYTE(result->ImageBaseAddress);
        if ( v17 > 0xF0000 )
          v17 = 983040LL;
        v18 = v17 + WORD1(result->ImageBaseAddress);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v18);
        RtlpFreeUserBlockToHeap(*(_QWORD *)(a1 + 24), result);
        result = (struct _PEB *)RtlGetCurrentServiceSessionId();
        if ( (_DWORD)result )
        {
          result = NtCurrentPeb();
          v14 = (__int64)result->SharedData + 550;
        }
        if ( *(_BYTE *)v14 )
        {
          result = NtCurrentPeb();
          if ( (result->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v16, v18, 0LL);
            result = (struct _PEB *)RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v16, v18, 0LL);
          }
        }
        _InterlockedDecrement(v6 + 4);
      }
    }
  }
  return result;
}
