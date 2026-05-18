/*
 * XREFs of sub_18011CF88 @ 0x18011CF88
 * Callers:
 *     sub_18011D4A4 @ 0x18011D4A4 (sub_18011D4A4.c)
 * Callees:
 *     sub_18006DF58 @ 0x18006DF58 (sub_18006DF58.c)
 *     sub_18011CB94 @ 0x18011CB94 (sub_18011CB94.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18011CF88(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  char v7; // [rsp+20h] [rbp-18h]

  if ( a1 != a2 )
  {
    v4 = *a1;
    sub_18006DF58((__int64)a1, *(__int64 **)(*a1 + 8LL));
    *(_QWORD *)(*a1 + 8LL) = v4;
    *(_QWORD *)*a1 = v4;
    *(_QWORD *)(*a1 + 16LL) = v4;
    a1[1] = 0LL;
    sub_18011CB94(a1, a2, v7, v5);
  }
  return a1;
}
