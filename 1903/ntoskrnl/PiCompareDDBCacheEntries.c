/*
 * XREFs of PiCompareDDBCacheEntries @ 0x140719890
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x140653DF0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PiCompareDDBCacheEntries(_RTL_AVL_TABLE *a1, const UNICODE_STRING *a2, const UNICODE_STRING *a3)
{
  LONG v6; // eax
  unsigned int v8; // eax

  v6 = RtlCompareUnicodeString(a2 + 1, a3 + 1, 1u);
  if ( v6 < 0 )
    return 0LL;
  if ( v6 > 0 )
    return 1LL;
  if ( a1->TableContext )
    return 2LL;
  v8 = *(_DWORD *)&a2[2].Length;
  if ( v8 < *(_DWORD *)&a3[2].Length )
    return 0LL;
  if ( v8 <= *(_DWORD *)&a3[2].Length )
    return 2LL;
  else
    return 1LL;
}
