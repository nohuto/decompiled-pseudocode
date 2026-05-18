/*
 * XREFs of sub_18006F17C @ 0x18006F17C
 * Callers:
 *     sub_18007392C @ 0x18007392C (sub_18007392C.c)
 *     sub_180080788 @ 0x180080788 (sub_180080788.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18007DEA0 @ 0x18007DEA0 (sub_18007DEA0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006F17C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  v3 = sub_18007DEA0(a1);
  *(_WORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  try
  {
    sub_18000F444((_QWORD *)(v3 + 32), a2);
    v4 = a2 + 32;
    v5 = (_QWORD *)(v3 + 64);
    *(_QWORD *)(v3 + 80) = 0LL;
    *(_QWORD *)(v3 + 88) = 0LL;
  }
  catch ( ... )
  {
    sub_18007E58C(a1, v3);
    throw;
  }
  sub_18000F444(v5, v4);
  return v3;
}
