/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x180064110
 * Callers:
 *     <none>
 * Callees:
 *     sub_180064148 @ 0x180064148 (sub_180064148.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFullAvl(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v6; // eax

  v6 = sub_180064148(a1, a2, a3);
  *a4 = v6;
  if ( v6 == 1 )
    return *a3 + 32LL;
  else
    return 0LL;
}
