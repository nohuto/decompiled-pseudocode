/*
 * XREFs of sub_1800644E4 @ 0x1800644E4
 * Callers:
 *     sub_18000E9D0 @ 0x18000E9D0 (sub_18000E9D0.c)
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 *     sub_18002C1D0 @ 0x18002C1D0 (sub_18002C1D0.c)
 *     sub_18002CA10 @ 0x18002CA10 (sub_18002CA10.c)
 *     sub_18002CFB8 @ 0x18002CFB8 (sub_18002CFB8.c)
 *     sub_180039C30 @ 0x180039C30 (sub_180039C30.c)
 *     sub_180039FB0 @ 0x180039FB0 (sub_180039FB0.c)
 *     sub_18003BFB0 @ 0x18003BFB0 (sub_18003BFB0.c)
 *     sub_1800646C8 @ 0x1800646C8 (sub_1800646C8.c)
 *     sub_180064C9C @ 0x180064C9C (sub_180064C9C.c)
 *     sub_180065114 @ 0x180065114 (sub_180065114.c)
 *     sub_18006C87C @ 0x18006C87C (sub_18006C87C.c)
 *     sub_18009E7AC @ 0x18009E7AC (sub_18009E7AC.c)
 *     sub_18009F280 @ 0x18009F280 (sub_18009F280.c)
 *     sub_1800AC9E0 @ 0x1800AC9E0 (sub_1800AC9E0.c)
 *     sub_1800B87A0 @ 0x1800B87A0 (sub_1800B87A0.c)
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 *     sub_1800CD128 @ 0x1800CD128 (sub_1800CD128.c)
 *     sub_1800CD224 @ 0x1800CD224 (sub_1800CD224.c)
 *     sub_1800CD320 @ 0x1800CD320 (sub_1800CD320.c)
 *     sub_1800CD41C @ 0x1800CD41C (sub_1800CD41C.c)
 *     sub_1800CD518 @ 0x1800CD518 (sub_1800CD518.c)
 *     sub_1800CE858 @ 0x1800CE858 (sub_1800CE858.c)
 *     sub_1800CF9D8 @ 0x1800CF9D8 (sub_1800CF9D8.c)
 *     sub_1800D0190 @ 0x1800D0190 (sub_1800D0190.c)
 *     sub_1800D0348 @ 0x1800D0348 (sub_1800D0348.c)
 *     sub_1800DC25C @ 0x1800DC25C (sub_1800DC25C.c)
 *     sub_1800DCAC0 @ 0x1800DCAC0 (sub_1800DCAC0.c)
 *     sub_1800DD73C @ 0x1800DD73C (sub_1800DD73C.c)
 *     sub_1800FAA20 @ 0x1800FAA20 (sub_1800FAA20.c)
 *     sub_1800FAEC0 @ 0x1800FAEC0 (sub_1800FAEC0.c)
 *     sub_1800FB150 @ 0x1800FB150 (sub_1800FB150.c)
 *     sub_1800FB3B0 @ 0x1800FB3B0 (sub_1800FB3B0.c)
 *     sub_180100330 @ 0x180100330 (sub_180100330.c)
 *     sub_180100E30 @ 0x180100E30 (sub_180100E30.c)
 *     sub_180100F88 @ 0x180100F88 (sub_180100F88.c)
 *     sub_180101060 @ 0x180101060 (sub_180101060.c)
 *     sub_1801040CC @ 0x1801040CC (sub_1801040CC.c)
 *     sub_18010FED4 @ 0x18010FED4 (sub_18010FED4.c)
 *     sub_180113630 @ 0x180113630 (sub_180113630.c)
 *     sub_180114560 @ 0x180114560 (sub_180114560.c)
 * Callees:
 *     sub_180011714 @ 0x180011714 (sub_180011714.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800644E4(__int64 a1, __int64 *a2)
{
  __int64 *result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx

  result = sub_180011714((__int64 *)(a1 + 8), a2);
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
        JUMPOUT(0x180064573LL);
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
