/*
 * XREFs of sub_180103AC0 @ 0x180103AC0
 * Callers:
 *     sub_1800BCA50 @ 0x1800BCA50 (sub_1800BCA50.c)
 * Callees:
 *     sub_1800F0940 @ 0x1800F0940 (sub_1800F0940.c)
 *     sub_18010456C @ 0x18010456C (sub_18010456C.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180103AC0(__int64 a1, _QWORD *a2)
{
  void **v4; // rcx
  void **v6; // [rsp+20h] [rbp-60h] BYREF
  char v7; // [rsp+2Eh] [rbp-52h]
  __int64 v8; // [rsp+30h] [rbp-50h]
  unsigned __int64 v9; // [rsp+38h] [rbp-48h]
  void ***v10; // [rsp+58h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]

  v11 = -2LL;
  v12 = a1;
  v9 = 15LL;
  LOBYTE(v6) = 0;
  v8 = 14LL;
  memmove(&v6, "ColorTransform", 0xEuLL);
  v7 = 0;
  sub_1800F0940(a1, (__int64)&v6, a2);
  if ( v9 >= 0x10 )
  {
    v4 = v6;
    if ( v9 + 1 >= 0x1000 )
    {
      v4 = (void **)*(v6 - 1);
      if ( (unsigned __int64)((char *)v6 - (char *)v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, v9 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  *(_QWORD *)a1 = &Spectre::Engine::ColorTransform::`vftable';
  *(_BYTE *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 1065353216;
  v6 = &std::_Func_impl_no_alloc<_lambda_132e9e93f2d2907a3ba4f3c09dda8621_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
  v10 = &v6;
  sub_18010456C(a1, 8LL, &v6);
  return a1;
}
