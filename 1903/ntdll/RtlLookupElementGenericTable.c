/*
 * XREFs of RtlLookupElementGenericTable @ 0x180064880
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800648C8 @ 0x1800648C8 (sub_1800648C8.c)
 *     RtlSplay @ 0x180064960 (RtlSplay.c)
 */

__int64 __fastcall RtlLookupElementGenericTable(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)sub_1800648C8(a1, a2, &v5) != 1 )
    return 0LL;
  v3 = v5;
  *a1 = RtlSplay(v5);
  return v3 + 40;
}
