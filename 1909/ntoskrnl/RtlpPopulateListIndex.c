/*
 * XREFs of RtlpPopulateListIndex @ 0x14031A7E4
 * Callers:
 *     RtlCreateHeap @ 0x1406E7930 (RtlCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x140126B50 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x140319C20 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x140319F48 (RtlpHeapHandleError.c)
 *     RtlpHeapAddListEntry @ 0x14031A428 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x14031A6F0 (RtlpHeapRemoveListEntry.c)
 */

__int64 __fastcall RtlpPopulateListIndex(ULONG_PTR a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // r8d
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  __int64 *i; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // r15
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  int v13; // r14d
  unsigned int v14; // eax
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
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
      if ( *((_BYTE *)i - 5) != (*((_BYTE *)i - 8) ^ (unsigned __int8)(*((_BYTE *)i - 7) ^ *((_BYTE *)i - 6))) )
        RtlpAnalyzeHeapFailure(a1, (ULONG_PTR)(i - 2));
    }
    v9 = *((unsigned __int16 *)i - 4);
    v10 = a2;
    v11 = *(unsigned int *)(a2 + 8);
    if ( v9 < v11 )
    {
LABEL_12:
      v13 = *((unsigned __int16 *)i - 4);
    }
    else
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)v10;
        if ( !*(_QWORD *)v10 )
          break;
        v10 = *(_QWORD *)v10;
        if ( v9 < *(unsigned int *)(v12 + 8) )
          goto LABEL_12;
      }
      v13 = *(_DWORD *)(v10 + 8) - 1;
    }
    if ( *(_QWORD *)a2 )
    {
      v14 = v11 - 1;
      if ( (unsigned int)v9 < (unsigned int)v11 )
        v14 = *((unsigned __int16 *)i - 4);
      RtlpHeapRemoveListEntry(a1, a2, v11, i, v14, *((unsigned __int16 *)i - 4));
    }
    result = RtlpHeapAddListEntry(a1, v10, v11, (__int64)i, v13, *((unsigned __int16 *)i - 4));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      result = *(unsigned int *)(*(_QWORD *)(v10 + 40)
                               + 4 * ((unsigned __int64)(unsigned int)(v13 - *(_DWORD *)(v10 + 24)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v13 - *(_BYTE *)(v10 + 24)) & 0x1F) )
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
