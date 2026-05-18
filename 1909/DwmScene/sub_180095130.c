/*
 * XREFs of sub_180095130 @ 0x180095130
 * Callers:
 *     sub_180096A58 @ 0x180096A58 (sub_180096A58.c)
 *     sub_180096CBC @ 0x180096CBC (sub_180096CBC.c)
 *     sub_180096E00 @ 0x180096E00 (sub_180096E00.c)
 *     sub_180096ED0 @ 0x180096ED0 (sub_180096ED0.c)
 *     sub_1800971B8 @ 0x1800971B8 (sub_1800971B8.c)
 *     sub_180097330 @ 0x180097330 (sub_180097330.c)
 *     sub_180097474 @ 0x180097474 (sub_180097474.c)
 *     sub_1800975A4 @ 0x1800975A4 (sub_1800975A4.c)
 *     sub_1800977FC @ 0x1800977FC (sub_1800977FC.c)
 *     sub_180097930 @ 0x180097930 (sub_180097930.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180095130(_QWORD *a1, __int64 *a2, int a3, __int64 a4, char a5)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v16[7]; // [rsp+30h] [rbp-68h] BYREF

  v16[4] = -2LL;
  v16[6] = (__int64)a2;
  v16[2] = 0LL;
  v16[3] = 0LL;
  sub_18000F444(v16, (__int64)a2);
  sub_180065920(a1, v16, a3, 2147500035LL, a4, a5);
  *a1 = &Spectre::Engine::EngineInvalidPointerException::`vftable';
  v9 = a2[3];
  if ( v9 >= 0x10 )
  {
    v10 = v9 + 1;
    v11 = *a2;
    if ( v10 >= 0x1000 )
    {
      v12 = v10 + 39;
      v13 = *(_QWORD *)(v11 - 8);
      v14 = v11 - v13;
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v14, v12);
        JUMPOUT(0x180095216LL);
      }
      v11 = v13;
    }
    j_j__o_free(v11);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
