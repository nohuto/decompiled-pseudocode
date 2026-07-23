/*
 * XREFs of RtlpPopulateListIndex @ 0x1402FC63C
 * Callers:
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402FBA7C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1402FBDBC (RtlpHeapHandleError.c)
 *     RtlpHeapAddListEntry @ 0x1402FC27C (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1402FC548 (RtlpHeapRemoveListEntry.c)
 */

__int64 __fastcall RtlpPopulateListIndex(ULONG_PTR a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // r8d
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  __int64 *i; // rsi
  int v9; // edx
  unsigned __int64 v10; // rdx
  __int64 v11; // r15
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  int v14; // r14d
  unsigned int v15; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *(_QWORD *)a2 )
  {
    v5 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1;
    v6 = 2 * v5;
    if ( !*(_DWORD *)(a2 + 12) )
      v6 = v5;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v6) = 0LL;
    v7 = (unsigned __int64)(unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1) >> 5;
    result = (unsigned int)~(1 << ((*(_BYTE *)(a2 + 8) - *(_BYTE *)(a2 + 24) - 1) & 0x1F));
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + 4 * v7) &= result;
  }
  for ( i = *(__int64 **)(a1 + 344); (__int64 *)(a1 + 336) != i; i = (__int64 *)i[1] )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v9 = *((_DWORD *)i - 2) ^ *(_DWORD *)(a1 + 136);
      *((_DWORD *)i - 2) = v9;
      if ( HIBYTE(v9) != ((unsigned __int8)v9 ^ (unsigned __int8)(BYTE1(v9) ^ BYTE2(v9))) )
        RtlpAnalyzeHeapFailure(a1, (ULONG_PTR)(i - 2));
    }
    v10 = *((unsigned __int16 *)i - 4);
    v11 = a2;
    v12 = *(unsigned int *)(a2 + 8);
    if ( v10 < v12 )
    {
LABEL_12:
      v14 = *((unsigned __int16 *)i - 4);
    }
    else
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)v11;
        if ( !*(_QWORD *)v11 )
          break;
        v11 = *(_QWORD *)v11;
        if ( v10 < *(unsigned int *)(v13 + 8) )
          goto LABEL_12;
      }
      v14 = *(_DWORD *)(v11 + 8) - 1;
    }
    if ( *(_QWORD *)a2 )
    {
      v15 = v12 - 1;
      if ( (unsigned int)v10 < (unsigned int)v12 )
        v15 = *((unsigned __int16 *)i - 4);
      RtlpHeapRemoveListEntry(a1, a2, v12, i, v15, *((unsigned __int16 *)i - 4));
    }
    result = RtlpHeapAddListEntry(a1, v11, v12, (__int64)i, v14, *((unsigned __int16 *)i - 4));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      result = *(unsigned int *)(*(_QWORD *)(v11 + 40)
                               + 4 * ((unsigned __int64)(unsigned int)(v14 - *(_DWORD *)(v11 + 24)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v14 - *(_BYTE *)(v11 + 24)) & 0x1F) )
      {
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        RtlpHeapHandleError();
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
