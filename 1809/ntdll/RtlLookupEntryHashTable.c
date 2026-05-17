/*
 * XREFs of RtlLookupEntryHashTable @ 0x18006FFF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x18007003C (RtlpPopulateContext.c)
 */

__int64 __fastcall RtlLookupEntryHashTable(__int64 a1, __int64 a2, char *a3)
{
  char *v3; // rbx
  __int64 result; // rax
  char v6; // [rsp+20h] [rbp-28h] BYREF

  v3 = &v6;
  if ( a3 )
    v3 = a3;
  RtlpPopulateContext(a1, v3, a2);
  result = **((_QWORD **)v3 + 1);
  if ( *(_QWORD *)v3 == result || *(_QWORD *)(result + 16) != a2 )
    return 0LL;
  return result;
}
