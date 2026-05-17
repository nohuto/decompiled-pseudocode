/*
 * XREFs of RtlpPopulateListIndex @ 0x18006161C
 * Callers:
 *     RtlpExtendListLookup @ 0x18005F224 (RtlpExtendListLookup.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x1800141C0 (RtlpHeapRemoveListEntry.c)
 *     RtlpHeapAddListEntry @ 0x18002070C (RtlpHeapAddListEntry.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180103D1C (RtlpHeapHandleError.c)
 */

__int64 __fastcall RtlpPopulateListIndex(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *i; // rsi
  unsigned int v6; // eax
  int v7; // edx
  unsigned __int64 v8; // rdx
  __int64 v9; // r15
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  int v12; // r14d
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *(_QWORD *)a2 )
  {
    v13 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1;
    v14 = 2 * v13;
    if ( !*(_DWORD *)(a2 + 12) )
      v14 = v13;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v14) = 0LL;
    v15 = (unsigned __int64)(unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1) >> 5;
    result = (unsigned int)~(1 << ((*(_BYTE *)(a2 + 8) - *(_BYTE *)(a2 + 24) - 1) & 0x1F));
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + 4 * v15) &= result;
  }
  for ( i = *(__int64 **)(a1 + 344); (__int64 *)(a1 + 336) != i; i = (__int64 *)i[1] )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v7 = *((_DWORD *)i - 2) ^ *(_DWORD *)(a1 + 136);
      *((_DWORD *)i - 2) = v7;
      if ( HIBYTE(v7) != ((unsigned __int8)v7 ^ (unsigned __int8)(BYTE1(v7) ^ BYTE2(v7))) )
        RtlpAnalyzeHeapFailure(a1, i - 2);
    }
    v8 = *((unsigned __int16 *)i - 4);
    v9 = a2;
    v10 = *(unsigned int *)(a2 + 8);
    if ( v8 < v10 )
    {
LABEL_21:
      v12 = *((unsigned __int16 *)i - 4);
    }
    else
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)v9;
        if ( !*(_QWORD *)v9 )
          break;
        v9 = *(_QWORD *)v9;
        if ( v8 < *(unsigned int *)(v11 + 8) )
          goto LABEL_21;
      }
      v12 = *(_DWORD *)(v9 + 8) - 1;
    }
    if ( *(_QWORD *)a2 )
    {
      v6 = v10 - 1;
      if ( (unsigned int)v8 < (unsigned int)v10 )
        v6 = *((unsigned __int16 *)i - 4);
      RtlpHeapRemoveListEntry(a1, a2, 1, i, v6, *((unsigned __int16 *)i - 4));
    }
    result = RtlpHeapAddListEntry(a1, v9, 1, (__int64)i, v12, *((unsigned __int16 *)i - 4));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      result = *(unsigned int *)(*(_QWORD *)(v9 + 40)
                               + 4 * ((unsigned __int64)(unsigned int)(v12 - *(_DWORD *)(v9 + 24)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v12 - *(_BYTE *)(v9 + 24)) & 0x1F) )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        result = RtlpHeapHandleError(1LL);
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)i - 5) = *((_BYTE *)i - 8) ^ *((_BYTE *)i - 7) ^ *((_BYTE *)i - 6);
      result = *(unsigned int *)(a1 + 136);
      *((_DWORD *)i - 2) ^= result;
    }
  }
  return result;
}
