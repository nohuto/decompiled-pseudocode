/*
 * XREFs of CmpSortedValueEnumStackAdvanceInternal @ 0x140801848
 * Callers:
 *     CmpSortedValueEnumStackAdvance @ 0x140801818 (CmpSortedValueEnumStackAdvance.c)
 * Callees:
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140801B7C (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140801D00 (CmpSortedValueEnumStackValueCompareFunction.c)
 */

__int64 __fastcall CmpSortedValueEnumStackAdvanceInternal(__int16 *a1)
{
  __int16 i; // di
  __int64 EntryAtLayerHeight; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int16 v7; // si
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 j; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_BYTE *)a1 + 10) )
  {
    if ( !*(_QWORD *)a1 )
      return 2147483674LL;
    for ( i = 0; i <= a1[4]; ++i )
    {
      EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)i);
      v5 = EntryAtLayerHeight;
      v6 = *(unsigned int *)(EntryAtLayerHeight + 28);
      if ( (unsigned int)v6 < *(_DWORD *)(EntryAtLayerHeight + 24) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(EntryAtLayerHeight + 8) + 8 * v6);
        if ( v12 == *(_QWORD *)a1 || !CmpSortedValueEnumStackValueCompareFunction(&v12, a1) )
          *(_DWORD *)(v5 + 28) = v6 + 1;
      }
    }
  }
  v7 = a1[4];
  v8 = 0LL;
  for ( j = 0LL; v7 >= 0; --v7 )
  {
    v9 = CmpValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v7);
    v10 = *(unsigned int *)(v9 + 28);
    if ( (unsigned int)v10 < *(_DWORD *)(v9 + 24) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * v10);
      v12 = v11;
      if ( !v8 || CmpSortedValueEnumStackValueCompareFunction(&j, &v12) > 0 )
      {
        v8 = v11;
        j = v11;
      }
    }
  }
  *(_QWORD *)a1 = v8;
  *((_BYTE *)a1 + 10) = 1;
  return v8 == 0 ? 0x8000001A : 0;
}
