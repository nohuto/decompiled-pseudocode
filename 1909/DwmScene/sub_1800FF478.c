/*
 * XREFs of sub_1800FF478 @ 0x1800FF478
 * Callers:
 *     sub_1800BCD38 @ 0x1800BCD38 (sub_1800BCD38.c)
 *     sub_1800FF3E8 @ 0x1800FF3E8 (sub_1800FF3E8.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18006BC58 @ 0x18006BC58 (sub_18006BC58.c)
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_18008F3F8 @ 0x18008F3F8 (sub_18008F3F8.c)
 *     sub_1800A4298 @ 0x1800A4298 (sub_1800A4298.c)
 *     sub_1800A6168 @ 0x1800A6168 (sub_1800A6168.c)
 *     sub_1800A641C @ 0x1800A641C (sub_1800A641C.c)
 *     sub_1800ABB20 @ 0x1800ABB20 (sub_1800ABB20.c)
 *     sub_1800AC648 @ 0x1800AC648 (sub_1800AC648.c)
 *     sub_1800B1128 @ 0x1800B1128 (sub_1800B1128.c)
 *     sub_1800B1144 @ 0x1800B1144 (sub_1800B1144.c)
 *     sub_1800BCEE0 @ 0x1800BCEE0 (sub_1800BCEE0.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall sub_1800FF478(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rbx
  _QWORD *v12; // rcx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  volatile signed __int32 *v16; // rbx
  __m128i v18; // [rsp+48h] [rbp-C0h]
  __int128 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+78h] [rbp-90h] BYREF
  __int128 v22; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v23[2]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v24[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD *v25[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v26[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v27; // [rsp+D8h] [rbp-30h]
  _QWORD v28[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v29; // [rsp+F8h] [rbp-10h]
  _QWORD v30[2]; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v31; // [rsp+118h] [rbp+10h] BYREF
  __int64 *v32; // [rsp+120h] [rbp+18h] BYREF
  __int64 *v33; // [rsp+128h] [rbp+20h] BYREF
  __m128i v34; // [rsp+138h] [rbp+30h] BYREF
  __int64 v35; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v36; // [rsp+150h] [rbp+48h]
  __m128i v37; // [rsp+158h] [rbp+50h] BYREF
  __int64 v38; // [rsp+168h] [rbp+60h] BYREF
  volatile signed __int32 *v39; // [rsp+170h] [rbp+68h]
  __m128i v40; // [rsp+178h] [rbp+70h] BYREF
  __int64 v41; // [rsp+188h] [rbp+80h] BYREF
  volatile signed __int32 *v42; // [rsp+190h] [rbp+88h]
  _QWORD v43[2]; // [rsp+198h] [rbp+90h] BYREF
  __int128 v44; // [rsp+1A8h] [rbp+A0h]
  __int64 v45; // [rsp+1B8h] [rbp+B0h] BYREF
  __int128 v46; // [rsp+1C8h] [rbp+C0h]
  __int64 *v47[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 *v48[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 *v49[2]; // [rsp+1F8h] [rbp+F0h] BYREF

  v30[0] = -2LL;
  v30[1] = a1;
  v19 = 0LL;
  v5 = a2[1];
  if ( v5 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    v5 = a2[1];
  }
  *(_QWORD *)&v19 = *a2;
  *((_QWORD *)&v19 + 1) = v5;
  sub_1800ABB20(a1, (__int64)&v19);
  *(_QWORD *)a1 = &Spectre::Engine::ShadowMapCamera::`vftable';
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 15LL;
  *(_BYTE *)(a1 + 1768) = 0;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_QWORD *)(a1 + 1808) = 0LL;
  *(_QWORD *)(a1 + 1816) = 0LL;
  *(_QWORD *)(a1 + 1824) = 0LL;
  *(_QWORD *)(a1 + 1832) = 0LL;
  *(_QWORD *)(a1 + 1840) = 0LL;
  *(_QWORD *)(a1 + 1864) = 0LL;
  *(_QWORD *)(a1 + 1872) = 15LL;
  *(_BYTE *)(a1 + 1848) = 0;
  *(_QWORD *)(a1 + 1880) = 0LL;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_QWORD *)(a1 + 1896) = 0LL;
  *(_QWORD *)(a1 + 1904) = 0LL;
  *(_QWORD *)(a1 + 1912) = 0LL;
  *(_QWORD *)(a1 + 1920) = 0LL;
  *(_DWORD *)(a1 + 1940) = a3;
  *(_QWORD *)(a1 + 1944) = 0LL;
  *(_WORD *)(a1 + 1952) = 257;
  *(_QWORD *)(a1 + 1956) = 0LL;
  *(_DWORD *)(a1 + 1964) = 1;
  *(_DWORD *)(a1 + 1968) = 1065353216;
  *(_DWORD *)(a1 + 1972) = 6;
  *(_DWORD *)(a1 + 1976) = 21;
  v6 = sub_1800F0EB4(a1);
  v7 = sub_180078228(v6);
  v49[0] = 0LL;
  v49[1] = 0LL;
  v27 = 0LL;
  sub_18000F444(v26, (__int64)&qword_18025D5F8);
  v18.m128i_i64[0] = (__int64)v26;
  v18.m128i_i64[1] = (__int64)v28;
  v34 = v18;
  sub_1800BCEE0(v49, &v34);
  `eh vector destructor iterator'(v26, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_1800A641C((__int64)v23);
  v8 = sub_1800A4298(v7, v23);
  v9 = sub_18006BC58(&v35);
  v20 = 0LL;
  v20 = *(_OWORD *)v9;
  *v9 = 0LL;
  v9[1] = 0LL;
  *(_DWORD *)(a1 + 1928) = sub_1800AC648((_QWORD *)a1, 0x10000LL, 0LL, &v20, v8);
  v10 = v36;
  if ( v36 )
  {
    if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v48[0] = 0LL;
  v48[1] = 0LL;
  v29 = 0LL;
  sub_18000F444(v28, (__int64)&qword_18025D678);
  v18.m128i_i64[0] = (__int64)v28;
  v18.m128i_i64[1] = (__int64)v30;
  v37 = v18;
  sub_1800BCEE0(v48, &v37);
  `eh vector destructor iterator'(v28, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_1800A641C((__int64)v24);
  v11 = sub_1800A4298(v7, v24);
  v12 = sub_18006BC58(&v38);
  v21 = 0LL;
  v21 = *(_OWORD *)v12;
  *v12 = 0LL;
  v12[1] = 0LL;
  *(_DWORD *)(a1 + 1932) = sub_1800AC648((_QWORD *)a1, 0x10000LL, 0LL, &v21, v11);
  v13 = v39;
  if ( v39 )
  {
    if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v47[0] = 0LL;
  v47[1] = 0LL;
  v44 = 0LL;
  sub_18000F444(v43, (__int64)&qword_18025D678);
  v46 = 0LL;
  sub_18000F444(&v45, (__int64)qword_18025D658);
  v18.m128i_i64[0] = (__int64)v43;
  v18.m128i_i64[1] = (__int64)v47;
  v40 = v18;
  sub_1800BCEE0(v47, &v40);
  `eh vector destructor iterator'(v43, 0x20uLL, 2uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_1800A641C((__int64)v25);
  v14 = sub_1800A4298(v7, v25);
  v15 = sub_18006BC58(&v41);
  v22 = 0LL;
  v22 = *(_OWORD *)v15;
  *v15 = 0LL;
  v15[1] = 0LL;
  *(_DWORD *)(a1 + 1936) = sub_1800AC648((_QWORD *)a1, 256LL, 0LL, &v22, v14);
  v16 = v42;
  if ( v42 )
  {
    if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  sub_1800B1144(a1, *(_DWORD *)(a1 + 1928), 1);
  sub_1800B1144(a1, *(_DWORD *)(a1 + 1932), 0);
  sub_1800B1144(a1, *(_DWORD *)(a1 + 1936), 0);
  sub_1800B1128(a1, 1024, 1);
  *(_OWORD *)(a1 + 296) = xmmword_18025F040;
  sub_18008F3F8(a1, 1);
  sub_1800A6168((__int64 ***)v47, &v31, *(__int64 **)v47[0], v47[0]);
  j_j__o_free(v47[0]);
  sub_1800A6168((__int64 ***)v48, &v32, *(__int64 **)v48[0], v48[0]);
  j_j__o_free(v48[0]);
  sub_1800A6168((__int64 ***)v49, &v33, *(__int64 **)v49[0], v49[0]);
  j_j__o_free(v49[0]);
  return a1;
}
