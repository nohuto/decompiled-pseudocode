/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800F3D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800648C8 @ 0x1800648C8 (sub_1800648C8.c)
 *     RtlSplay @ 0x180064960 (RtlSplay.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFull(__int64 *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v7; // eax

  v7 = sub_1800648C8(a1, a2, a3);
  *a4 = v7;
  if ( v7 != 1 )
    return 0LL;
  *a1 = (__int64)RtlSplay((_QWORD *)*a3);
  return *a3 + 40LL;
}
