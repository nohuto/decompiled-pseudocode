/*
 * XREFs of sub_1800FAA20 @ 0x1800FAA20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180015D84 @ 0x180015D84 (sub_180015D84.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_180078118 @ 0x180078118 (sub_180078118.c)
 *     sub_18009F5B0 @ 0x18009F5B0 (sub_18009F5B0.c)
 *     sub_1800A4A38 @ 0x1800A4A38 (sub_1800A4A38.c)
 *     sub_1800A817C @ 0x1800A817C (sub_1800A817C.c)
 *     sub_1800A9230 @ 0x1800A9230 (sub_1800A9230.c)
 *     sub_1800F9EB8 @ 0x1800F9EB8 (sub_1800F9EB8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FAA20(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 *v7; // rsi
  volatile signed __int32 *v8; // rbx
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rbx
  _QWORD *v13; // rax
  __int64 *v14; // rsi
  volatile signed __int32 *v15; // rbx
  _QWORD *v16; // rcx
  __int64 v17; // rsi
  __int64 *v18; // rax
  volatile signed __int32 *v19; // rbx
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v22; // [rsp+40h] [rbp-C0h]
  __int64 v23[4]; // [rsp+48h] [rbp-B8h] BYREF
  size_t v24[4]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v32; // [rsp+C0h] [rbp-40h]
  _QWORD v33[2]; // [rsp+C8h] [rbp-38h] BYREF
  int v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+DCh] [rbp-24h]
  int v36; // [rsp+E0h] [rbp-20h]
  __int128 v37; // [rsp+E4h] [rbp-1Ch]
  int v38; // [rsp+F4h] [rbp-Ch]
  int v39; // [rsp+F8h] [rbp-8h]

  v4 = sub_18006CD84(a2);
  v24[2] = 0LL;
  v24[3] = 0LL;
  v5 = sub_180078118(v4);
  sub_18000F3F4(v24, (__int64)&qword_18025D1E8);
  v6 = sub_1800A4A38(v5, &v25, v24);
  v7 = (__int64 *)(a1 + 216);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 216), v6);
  v8 = v26;
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = sub_1800A9230(*v7, &v27);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 200), v9);
  v10 = v28;
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = sub_1800A817C((__int128 *)*v7, &v29);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 248), v11);
  v12 = v30;
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v13 = (_QWORD *)sub_18006CD84(a2);
  sub_180015D84(v13, &v21, 1u);
  v14 = (__int64 *)(a1 + 264);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 264), &v21);
  v15 = v22;
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  v23[2] = 0LL;
  v23[3] = 15LL;
  LOBYTE(v23[0]) = 0;
  sub_18000E118(v23, 0x1EuLL, 0LL, "Image Processing Bloom Sampler");
  sub_1800644E4(*v14, v23);
  v16 = (_QWORD *)*v14;
  v34 = 0;
  v38 = 0;
  v39 = 2139095039;
  v37 = 0LL;
  v35 = 1;
  v36 = 7;
  v33[0] = 0x200000002LL;
  v33[1] = 0x200000002LL;
  sub_18009F5B0(v16, v33, 0LL);
  v17 = *(int *)(a1 + 144);
  v18 = sub_1800F9EB8((__int64 *)a1, &v31);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 184), v18);
  v19 = v32;
  if ( v32 )
  {
    if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 + 184) + 40LL))(
           *(_QWORD *)(a1 + 184),
           a2,
           2LL,
           (unsigned int)dword_18020B5D0[v17],
           dword_18020B5C0[v17]);
}
