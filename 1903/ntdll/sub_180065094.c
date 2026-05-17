/*
 * XREFs of sub_180065094 @ 0x180065094
 * Callers:
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     sub_180065058 @ 0x180065058 (sub_180065058.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180065094(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = a1;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 176);
    if ( v2 )
    {
      if ( (*(_DWORD *)(v2 + 32) & 0x80000) == 0 && *(_QWORD *)(v2 + 56) != a1 )
      {
        result = *(_QWORD *)(v2 + 56);
        *(_QWORD *)(v2 + 56) = a1;
      }
    }
  }
  return result;
}
