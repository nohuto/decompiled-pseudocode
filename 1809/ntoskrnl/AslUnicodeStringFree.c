/*
 * XREFs of AslUnicodeStringFree @ 0x1408EA788
 * Callers:
 *     SdbResolveDatabaseEx @ 0x1408E9770 (SdbResolveDatabaseEx.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslUnicodeStringFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 )
    {
      memset(v2, 66, *(unsigned __int16 *)(a1 + 2));
      v3 = *(void **)(a1 + 8);
      if ( v3 )
        ExFreePoolWithTag(v3, 0x74705041u);
    }
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
