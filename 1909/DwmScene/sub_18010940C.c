/*
 * XREFs of sub_18010940C @ 0x18010940C
 * Callers:
 *     sub_1801094DC @ 0x1801094DC (sub_1801094DC.c)
 * Callees:
 *     sub_1800E0F38 @ 0x1800E0F38 (sub_1800E0F38.c)
 *     sub_1800E0FAC @ 0x1800E0FAC (sub_1800E0FAC.c)
 *     sub_1800E10CC @ 0x1800E10CC (sub_1800E10CC.c)
 *     sub_1800E1248 @ 0x1800E1248 (sub_1800E1248.c)
 *     sub_1800E14B0 @ 0x1800E14B0 (sub_1800E14B0.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18010940C(__int64 a1, __int64 a2, _QWORD *a3)
{
  char result; // al
  __int64 v6[22]; // [rsp+28h] [rbp-E0h] BYREF
  int v7; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+E0h] [rbp-28h]

  result = sub_1800E1248();
  if ( result )
  {
    result = sub_1800E14B0(a2, (__int64)&v7);
    if ( v7 == 2 )
    {
      *a3 = v8;
      sub_1800E0F38((__int64)v6);
      sub_1800E10CC(a2, v6);
    }
    else
    {
      if ( v7 != 5 )
        return result;
      sub_1800E0F38((__int64)v6);
      sub_1800E10CC(a2, v6);
    }
    return sub_1800E0FAC(v6);
  }
  return result;
}
