/*
 * XREFs of sub_180127858 @ 0x180127858
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BD54 @ 0x18000BD54 (sub_18000BD54.c)
 */

void *__fastcall sub_180127858(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = sub_18000BD54(*(_QWORD *)(a2 + 96));
  *(_DWORD *)(a2 + 96) = v3;
  if ( v3 >= 0 )
    return &loc_18000C2B9;
  else
    return &loc_18000C2B3;
}
