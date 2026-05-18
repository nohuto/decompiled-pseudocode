/*
 * XREFs of sub_180098158 @ 0x180098158
 * Callers:
 *     sub_180099140 @ 0x180099140 (sub_180099140.c)
 *     sub_1800F0B50 @ 0x1800F0B50 (sub_1800F0B50.c)
 *     sub_180103D60 @ 0x180103D60 (sub_180103D60.c)
 *     sub_1801040CC @ 0x1801040CC (sub_1801040CC.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180098158(_QWORD *a1, __int64 *a2, int a3, __int64 a4, char a5)
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
  sub_180065810(a1, v16, a3, 2147500033LL, a4, a5);
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
        JUMPOUT(0x18009823ELL);
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
