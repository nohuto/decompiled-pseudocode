/*
 * XREFs of CmpEnumerateAllOpenSubKeys @ 0x14069B484
 * Callers:
 *     CmpSearchForOpenSubKeys @ 0x14069A650 (CmpSearchForOpenSubKeys.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14069B44C (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14074779C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140747CBC (CmpInvalidateSubtree.c)
 * Callees:
 *     CmpEnumerateKcbCacheBucket @ 0x14069B548 (CmpEnumerateKcbCacheBucket.c)
 *     CmpCleanUpKCBCacheTable @ 0x14069B610 (CmpCleanUpKCBCacheTable.c)
 */

__int64 __fastcall CmpEnumerateAllOpenSubKeys(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned int v11; // esi

  v4 = *(_QWORD *)(a1 + 32);
  result = CmpCleanUpKCBCacheTable(v4);
  if ( *(_QWORD *)a1 != 1LL && ((*(_DWORD *)(a1 + 184) & 0x40000) == 0 || *(_QWORD *)a1 != 2LL) )
  {
    v10 = 0LL;
    v11 = 0;
    if ( *(_DWORD *)(v4 + 1648) )
    {
      while ( 1 )
      {
        result = CmpEnumerateKcbCacheBucket(a1, *(_QWORD *)(v4 + 1640) + 24LL * v11, a3, a4);
        if ( (_DWORD)result == 1 )
          break;
        if ( (_DWORD)result == 2 )
          --v11;
        if ( ++v11 >= *(_DWORD *)(v4 + 1648) )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( a2 && *(_DWORD *)(v4 + 1664) )
      {
        do
        {
          result = CmpEnumerateKcbCacheBucket(a1, *(_QWORD *)(v4 + 1656) + 24 * v10, a3, a4);
          if ( (_DWORD)result == 1 )
            break;
          if ( (_DWORD)result == 2 )
            LODWORD(v10) = v10 - 1;
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(v4 + 1664) );
      }
    }
  }
  return result;
}
