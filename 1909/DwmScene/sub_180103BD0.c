/*
 * XREFs of sub_180103BD0 @ 0x180103BD0
 * Callers:
 *     sub_1800BCB60 @ 0x1800BCB60 (sub_1800BCB60.c)
 * Callees:
 *     sub_1800F0A50 @ 0x1800F0A50 (sub_1800F0A50.c)
 *     sub_18010467C @ 0x18010467C (sub_18010467C.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180103BD0(__int64 a1, _QWORD *a2)
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
  sub_1800F0A50(a1, (__int64)&v6, a2);
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
  sub_18010467C(a1, 8LL, &v6);
  return a1;
}
