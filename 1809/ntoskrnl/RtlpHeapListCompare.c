/*
 * XREFs of RtlpHeapListCompare @ 0x1402FC4CC
 * Callers:
 *     RtlpHeapAddListEntry @ 0x1402FC27C (RtlpHeapAddListEntry.c)
 *     RtlpHeapFindListLookupEntry @ 0x1402FC328 (RtlpHeapFindListLookupEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1402FC548 (RtlpHeapRemoveListEntry.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHeapListCompare(ULONG_PTR a1, __int64 a2, int a3, char a4)
{
  int v7; // [rsp+38h] [rbp-10h]

  if ( a4 )
  {
    v7 = *(_DWORD *)(a2 - 16 + 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v7 = *(_DWORD *)(a2 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v7) != ((unsigned __int8)v7 ^ (unsigned __int8)(BYTE1(v7) ^ BYTE2(v7))) )
        RtlpLogHeapFailure(3, a1, a2 - 16, 0LL, 0LL, 0LL);
    }
    return (unsigned int)(a3 - (unsigned __int16)v7);
  }
  else
  {
    return (unsigned int)(a3 - *(_DWORD *)(a2 + 40));
  }
}
