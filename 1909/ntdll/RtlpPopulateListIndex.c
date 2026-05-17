/*
 * XREFs of RtlpPopulateListIndex @ 0x180048AD4
 * Callers:
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlpExtendListLookup @ 0x18004B4B0 (RtlpExtendListLookup.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x180046B74 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x180047014 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1801014E0 (RtlpHeapHandleError.c)
 */

__int64 __fastcall RtlpPopulateListIndex(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *i; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // r15
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  int v10; // r14d
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *(_QWORD *)a2 )
  {
    v12 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1;
    v13 = 2 * v12;
    if ( !*(_DWORD *)(a2 + 12) )
      v13 = v12;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v13) = 0LL;
    v14 = (unsigned __int64)(unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1) >> 5;
    result = (unsigned int)~(1 << ((*(_BYTE *)(a2 + 8) - *(_BYTE *)(a2 + 24) - 1) & 0x1F));
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + 4 * v14) &= result;
  }
  for ( i = *(__int64 **)(a1 + 344); (__int64 *)(a1 + 336) != i; i = (__int64 *)i[1] )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
      if ( *((_BYTE *)i - 5) != (*((_BYTE *)i - 8) ^ (unsigned __int8)(*((_BYTE *)i - 7) ^ *((_BYTE *)i - 6))) )
        RtlpAnalyzeHeapFailure(a1, i - 2);
    }
    v6 = *((unsigned __int16 *)i - 4);
    v7 = a2;
    v8 = *(unsigned int *)(a2 + 8);
    if ( v6 < v8 )
    {
LABEL_20:
      v10 = *((unsigned __int16 *)i - 4);
    }
    else
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)v7;
        if ( !*(_QWORD *)v7 )
          break;
        v7 = *(_QWORD *)v7;
        if ( v6 < *(unsigned int *)(v9 + 8) )
          goto LABEL_20;
      }
      v10 = *(_DWORD *)(v7 + 8) - 1;
    }
    if ( *(_QWORD *)a2 )
    {
      v11 = v8 - 1;
      if ( (unsigned int)v6 < (unsigned int)v8 )
        v11 = *((unsigned __int16 *)i - 4);
      RtlpHeapRemoveListEntry(a1, a2, 1, i, v11, *((unsigned __int16 *)i - 4));
    }
    result = RtlpHeapAddListEntry(a1, v7, 1, (__int64)i, v10, *((unsigned __int16 *)i - 4));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      result = *(unsigned int *)(*(_QWORD *)(v7 + 40)
                               + 4 * ((unsigned __int64)(unsigned int)(v10 - *(_DWORD *)(v7 + 24)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v10 - *(_BYTE *)(v7 + 24)) & 0x1F) )
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
