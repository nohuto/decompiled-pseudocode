/*
 * XREFs of sub_1800CF9D8 @ 0x1800CF9D8
 * Callers:
 *     sub_1800276D4 @ 0x1800276D4 (sub_1800276D4.c)
 * Callees:
 *     sub_18000E00C @ 0x18000E00C (sub_18000E00C.c)
 *     sub_180041C80 @ 0x180041C80 (sub_180041C80.c)
 *     sub_180056944 @ 0x180056944 (sub_180056944.c)
 *     sub_180063E80 @ 0x180063E80 (sub_180063E80.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126540 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_1800CF9D8(_QWORD *a1)
{
  const void **v2; // rax
  __int64 v3; // rcx
  __int128 v5; // [rsp+38h] [rbp-60h] BYREF
  __int128 v6; // [rsp+48h] [rbp-50h]
  __int64 v7; // [rsp+58h] [rbp-40h]
  _QWORD *v8; // [rsp+60h] [rbp-38h]
  _QWORD v9[3]; // [rsp+68h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+80h] [rbp-18h]

  v7 = -2LL;
  v8 = a1;
  sub_180063E80(a1, 7, 3u);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::DepthBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  `eh vector constructor iterator'(
    a1 + 16,
    0x10uLL,
    4uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_110);
  `eh vector constructor iterator'(
    a1 + 24,
    0x10uLL,
    4uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_110);
  a1[32] = 0LL;
  a1[33] = 0LL;
  a1[32] = sub_180041C80();
  _InterlockedExchangeAdd(&dword_18026A13C, 1u);
  sub_18000E00C(v9, dword_18026A13C);
  v2 = sub_180056944(v9, 0LL, "DepthBuffer", 0xBuLL);
  v6 = 0uLL;
  v5 = *(_OWORD *)v2;
  v6 = *((_OWORD *)v2 + 1);
  v2[2] = 0LL;
  v2[3] = (const void *)15;
  *(_BYTE *)v2 = 0;
  sub_1800644E4((__int64)a1, (__int64 *)&v5);
  if ( v10 >= 0x10 )
  {
    v3 = v9[0];
    if ( v10 + 1 >= 0x1000 )
    {
      v3 = *(_QWORD *)(v9[0] - 8LL);
      if ( (unsigned __int64)(v9[0] - v3 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v3, v10 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v3);
  }
  return a1;
}
