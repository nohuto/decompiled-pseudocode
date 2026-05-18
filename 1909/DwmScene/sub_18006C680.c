/*
 * XREFs of sub_18006C680 @ 0x18006C680
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006E224 @ 0x18006E224 (sub_18006E224.c)
 *     sub_18011E1A0 @ 0x18011E1A0 (sub_18011E1A0.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_18006C680(_QWORD *a1, char a2)
{
  _QWORD *v2; // rbx
  char v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 + 3;
  sub_18006E224(a1 + 3, v6, *(_QWORD *)a1[3]);
  j_j__o_free(*v2);
  sub_18011E1A0(a1 + 1);
  *a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
