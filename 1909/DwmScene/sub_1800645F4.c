/*
 * XREFs of sub_1800645F4 @ 0x1800645F4
 * Callers:
 *     sub_18000EA20 @ 0x18000EA20 (sub_18000EA20.c)
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 *     sub_18002C2E0 @ 0x18002C2E0 (sub_18002C2E0.c)
 *     sub_18002CB20 @ 0x18002CB20 (sub_18002CB20.c)
 *     sub_18002D0C8 @ 0x18002D0C8 (sub_18002D0C8.c)
 *     sub_180039D40 @ 0x180039D40 (sub_180039D40.c)
 *     sub_18003A0C0 @ 0x18003A0C0 (sub_18003A0C0.c)
 *     sub_18003C0C0 @ 0x18003C0C0 (sub_18003C0C0.c)
 *     sub_1800647D8 @ 0x1800647D8 (sub_1800647D8.c)
 *     sub_180064DAC @ 0x180064DAC (sub_180064DAC.c)
 *     sub_180065224 @ 0x180065224 (sub_180065224.c)
 *     sub_18006C98C @ 0x18006C98C (sub_18006C98C.c)
 *     sub_18009E8BC @ 0x18009E8BC (sub_18009E8BC.c)
 *     sub_18009F390 @ 0x18009F390 (sub_18009F390.c)
 *     sub_1800ACAF0 @ 0x1800ACAF0 (sub_1800ACAF0.c)
 *     sub_1800B88B0 @ 0x1800B88B0 (sub_1800B88B0.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800CD238 @ 0x1800CD238 (sub_1800CD238.c)
 *     sub_1800CD334 @ 0x1800CD334 (sub_1800CD334.c)
 *     sub_1800CD430 @ 0x1800CD430 (sub_1800CD430.c)
 *     sub_1800CD52C @ 0x1800CD52C (sub_1800CD52C.c)
 *     sub_1800CD628 @ 0x1800CD628 (sub_1800CD628.c)
 *     sub_1800CE968 @ 0x1800CE968 (sub_1800CE968.c)
 *     sub_1800CFAE8 @ 0x1800CFAE8 (sub_1800CFAE8.c)
 *     sub_1800D02A0 @ 0x1800D02A0 (sub_1800D02A0.c)
 *     sub_1800D0458 @ 0x1800D0458 (sub_1800D0458.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 *     sub_1800DCBD0 @ 0x1800DCBD0 (sub_1800DCBD0.c)
 *     sub_1800DD84C @ 0x1800DD84C (sub_1800DD84C.c)
 *     sub_1800FAB30 @ 0x1800FAB30 (sub_1800FAB30.c)
 *     sub_1800FAFD0 @ 0x1800FAFD0 (sub_1800FAFD0.c)
 *     sub_1800FB260 @ 0x1800FB260 (sub_1800FB260.c)
 *     sub_1800FB4C0 @ 0x1800FB4C0 (sub_1800FB4C0.c)
 *     sub_180100440 @ 0x180100440 (sub_180100440.c)
 *     sub_180100F40 @ 0x180100F40 (sub_180100F40.c)
 *     sub_180101098 @ 0x180101098 (sub_180101098.c)
 *     sub_180101170 @ 0x180101170 (sub_180101170.c)
 *     sub_1801041DC @ 0x1801041DC (sub_1801041DC.c)
 *     sub_18010FFE4 @ 0x18010FFE4 (sub_18010FFE4.c)
 *     sub_180113740 @ 0x180113740 (sub_180113740.c)
 *     sub_180114670 @ 0x180114670 (sub_180114670.c)
 * Callees:
 *     sub_180011764 @ 0x180011764 (sub_180011764.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800645F4(__int64 a1, __int64 *a2)
{
  __int64 *result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx

  result = sub_180011764((__int64 *)(a1 + 8), a2);
  v4 = a2[3];
  if ( v4 >= 0x10 )
  {
    v5 = v4 + 1;
    v6 = *a2;
    if ( v5 >= 0x1000 )
    {
      v7 = v5 + 39;
      v8 = *(_QWORD *)(v6 - 8);
      v9 = v6 - v8;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v7);
        JUMPOUT(0x180064683LL);
      }
      v6 = v8;
    }
    result = (__int64 *)j_j__o_free(v6);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
