/*
 * XREFs of sub_18008A058 @ 0x18008A058
 * Callers:
 *     sub_18008B44C @ 0x18008B44C (sub_18008B44C.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_18001D8F4 @ 0x18001D8F4 (sub_18001D8F4.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_1800453AC @ 0x1800453AC (sub_1800453AC.c)
 *     sub_180056944 @ 0x180056944 (sub_180056944.c)
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_1800859FC @ 0x1800859FC (sub_1800859FC.c)
 *     sub_180085AD8 @ 0x180085AD8 (sub_180085AD8.c)
 *     sub_180088398 @ 0x180088398 (sub_180088398.c)
 *     sub_180088C0C @ 0x180088C0C (sub_180088C0C.c)
 *     sub_180088F14 @ 0x180088F14 (sub_180088F14.c)
 *     sub_18008A5C0 @ 0x18008A5C0 (sub_18008A5C0.c)
 *     sub_18008AD88 @ 0x18008AD88 (sub_18008AD88.c)
 *     sub_18008BD5C @ 0x18008BD5C (sub_18008BD5C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall sub_18008A058(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // r15
  volatile signed __int32 *v7; // rbx
  _QWORD *v8; // rax
  const void **v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbx
  _QWORD *v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int128 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v24[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-40h]
  _QWORD *v28; // [rsp+C8h] [rbp-38h]
  _BYTE v29[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v30; // [rsp+D8h] [rbp-28h]
  _BYTE v31[16]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v32[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v33[4]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v34[32]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v35[32]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v37; // [rsp+1B8h] [rbp+B8h] BYREF
  __m128i v38; // [rsp+1C8h] [rbp+C8h]

  v27 = -2LL;
  v28 = a2;
  pExceptionObject[8] = a3;
  sub_1800634AC(a1 + 16, (__int64)a2);
  v24[2] = 0LL;
  v24[3] = 0LL;
  sub_18001110C(v24, (__int64)a3);
  v6 = *(_QWORD *)sub_18008AD88(a1, v29, v24);
  v7 = v30;
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  if ( v6 )
  {
    v17 = sub_18001D8F4(v33);
    v18 = (_QWORD *)sub_1800453AC((__int64)v34, (__int64)"Scene::CreateLayer() - a layer with ID ", (__int64)v17);
    v19 = sub_18002BF78((__int64)v35, v18, " already exists");
    v20 = sub_18000E498(v32);
    sub_180027770(pExceptionObject, v20, 755, v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v21 = 0uLL;
  sub_18008A5C0(a1, &v21, &unk_1801E38B0);
  v8 = sub_18001D8F4(&v25);
  v9 = sub_180056944(v8, 0LL, "LayerRoot:", 0xAuLL);
  v38 = 0LL;
  v37 = *(_OWORD *)v9;
  v38 = *((__m128i *)v9 + 1);
  v9[2] = 0LL;
  v9[3] = (const void *)15;
  *(_BYTE *)v9 = 0;
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v10 = v25;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v10 = *(_QWORD *)(v25 - 8);
      if ( (unsigned __int64)(v25 - v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v10);
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v25) = 0;
  sub_180085AD8(v21, (__int64 *)&v37);
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_180088F14(a2, (__int64)a3, (__int64)&v21);
  v11 = (_QWORD *)sub_180088398(a1 + 88, (__int64)a3, a2);
  sub_180088C0C((__int64 **)(a1 + 88), (__int64)v31, 0, (__int64)(v11 + 4), v11);
  *(_OWORD *)v22 = 0LL;
  v12 = a2[1];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = a2[1];
  }
  v22[0] = *a2;
  v22[1] = v12;
  sub_1800859FC(v21, v22);
  v23 = 0LL;
  v13 = *((_QWORD *)&v21 + 1);
  if ( *((_QWORD *)&v21 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL));
    v13 = *((_QWORD *)&v21 + 1);
  }
  v23 = v21;
  sub_18008BD5C(a1, &v23);
  if ( v38.m128i_i64[1] >= 0x10uLL )
  {
    v14 = v37;
    if ( (unsigned __int64)(v38.m128i_i64[1] + 1) >= 0x1000 )
    {
      v14 = *(_QWORD *)(v37 - 8);
      if ( (unsigned __int64)(v37 - v14 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v14, v38.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v14);
  }
  v38 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v37) = 0;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 0xFFFFFFFF) == 1 )
    {
      v15 = *((_QWORD *)&v21 + 1);
      (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
    }
  }
  unknown_libname_116(a3);
  return a2;
}
