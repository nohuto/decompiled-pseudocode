/*
 * XREFs of sub_180064BC0 @ 0x180064BC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006443C @ 0x18006443C (sub_18006443C.c)
 *     sub_180065224 @ 0x180065224 (sub_180065224.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 */

char __fastcall sub_180064BC0(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // eax
  char result; // al

  v4 = sub_18006CEC8(*a2);
  result = sub_18006443C(a1, v4);
  if ( !result )
    return sub_180065224(a1, *a2);
  return result;
}
