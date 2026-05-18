/*
 * XREFs of sub_18011D098 @ 0x18011D098
 * Callers:
 *     sub_18011D5B4 @ 0x18011D5B4 (sub_18011D5B4.c)
 * Callees:
 *     sub_18006E068 @ 0x18006E068 (sub_18006E068.c)
 *     sub_18011CCA4 @ 0x18011CCA4 (sub_18011CCA4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18011D098(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  char v7; // [rsp+20h] [rbp-18h]

  if ( a1 != a2 )
  {
    v4 = *a1;
    sub_18006E068((__int64)a1, *(__int64 **)(*a1 + 8LL));
    *(_QWORD *)(*a1 + 8LL) = v4;
    *(_QWORD *)*a1 = v4;
    *(_QWORD *)(*a1 + 16LL) = v4;
    a1[1] = 0LL;
    sub_18011CCA4(a1, a2, v7, v5);
  }
  return a1;
}
