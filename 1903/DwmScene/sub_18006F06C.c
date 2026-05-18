/*
 * XREFs of sub_18006F06C @ 0x18006F06C
 * Callers:
 *     sub_18007381C @ 0x18007381C (sub_18007381C.c)
 *     sub_180080678 @ 0x180080678 (sub_180080678.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_18007DD90 @ 0x18007DD90 (sub_18007DD90.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006F06C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  v3 = sub_18007DD90(a1);
  *(_WORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  try
  {
    sub_18000F3F4((_QWORD *)(v3 + 32), a2);
    v4 = a2 + 32;
    v5 = (_QWORD *)(v3 + 64);
    *(_QWORD *)(v3 + 80) = 0LL;
    *(_QWORD *)(v3 + 88) = 0LL;
  }
  catch ( ... )
  {
    sub_18007E47C(a1, v3);
    throw;
  }
  sub_18000F3F4(v5, v4);
  return v3;
}
