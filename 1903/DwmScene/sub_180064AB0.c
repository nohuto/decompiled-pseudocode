/*
 * XREFs of sub_180064AB0 @ 0x180064AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006432C @ 0x18006432C (sub_18006432C.c)
 *     sub_180065114 @ 0x180065114 (sub_180065114.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 */

char __fastcall sub_180064AB0(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // eax
  char result; // al

  v4 = sub_18006CDB8(*a2);
  result = sub_18006432C(a1, v4);
  if ( !result )
    return sub_180065114(a1, *a2);
  return result;
}
