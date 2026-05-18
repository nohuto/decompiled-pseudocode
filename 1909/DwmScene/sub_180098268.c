/*
 * XREFs of sub_180098268 @ 0x180098268
 * Callers:
 *     sub_180099250 @ 0x180099250 (sub_180099250.c)
 *     sub_1800F0C60 @ 0x1800F0C60 (sub_1800F0C60.c)
 *     sub_180103E70 @ 0x180103E70 (sub_180103E70.c)
 *     sub_1801041DC @ 0x1801041DC (sub_1801041DC.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180098268(_QWORD *a1, __int64 *a2, int a3, __int64 a4, char a5)
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
  sub_180065920(a1, v16, a3, 2147500033LL, a4, a5);
  *a1 = &Spectre::Engine::EngineNotImplException::`vftable';
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
        JUMPOUT(0x18009834ELL);
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
