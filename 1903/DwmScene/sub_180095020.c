/*
 * XREFs of sub_180095020 @ 0x180095020
 * Callers:
 *     sub_180096948 @ 0x180096948 (sub_180096948.c)
 *     sub_180096BAC @ 0x180096BAC (sub_180096BAC.c)
 *     sub_180096CF0 @ 0x180096CF0 (sub_180096CF0.c)
 *     sub_180096DC0 @ 0x180096DC0 (sub_180096DC0.c)
 *     sub_1800970A8 @ 0x1800970A8 (sub_1800970A8.c)
 *     sub_180097220 @ 0x180097220 (sub_180097220.c)
 *     sub_180097364 @ 0x180097364 (sub_180097364.c)
 *     sub_180097494 @ 0x180097494 (sub_180097494.c)
 *     sub_1800976EC @ 0x1800976EC (sub_1800976EC.c)
 *     sub_180097820 @ 0x180097820 (sub_180097820.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180095020(_QWORD *a1, __int64 *a2, int a3, __int64 a4, char a5)
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
  sub_18000F3F4(v16, (__int64)a2);
  sub_180065810(a1, v16, a3, 2147500035LL, a4, a5);
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
        JUMPOUT(0x180095106LL);
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
