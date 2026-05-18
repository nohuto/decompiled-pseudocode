/*
 * XREFs of sub_1800FAB30 @ 0x1800FAB30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180015DF4 @ 0x180015DF4 (sub_180015DF4.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_18009F6C0 @ 0x18009F6C0 (sub_18009F6C0.c)
 *     sub_1800A4B48 @ 0x1800A4B48 (sub_1800A4B48.c)
 *     sub_1800A828C @ 0x1800A828C (sub_1800A828C.c)
 *     sub_1800A9340 @ 0x1800A9340 (sub_1800A9340.c)
 *     sub_1800F9FC8 @ 0x1800F9FC8 (sub_1800F9FC8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FAB30(__int64 a1, __int64 a2)
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

  v4 = sub_18006CE94(a2);
  v24[2] = 0LL;
  v24[3] = 0LL;
  v5 = sub_180078228(v4);
  sub_18000F444(v24, (__int64)&qword_18025E1E8);
  v6 = sub_1800A4B48(v5, &v25, v24);
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
  v9 = sub_1800A9340(*v7, &v27);
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
  v11 = sub_1800A828C((__int128 *)*v7, &v29);
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
  v13 = (_QWORD *)sub_18006CE94(a2);
  sub_180015DF4(v13, &v21, 1u);
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
  sub_18000E168(v23, 0x1EuLL, 0LL, "Image Processing Bloom Sampler");
  sub_1800645F4(*v14, v23);
  v16 = (_QWORD *)*v14;
  v34 = 0;
  v38 = 0;
  v39 = 2139095039;
  v37 = 0LL;
  v35 = 1;
  v36 = 7;
  v33[0] = 0x200000002LL;
  v33[1] = 0x200000002LL;
  sub_18009F6C0(v16, v33, 0LL);
  v17 = *(int *)(a1 + 144);
  v18 = sub_1800F9FC8((__int64 *)a1, &v31);
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
           (unsigned int)dword_18020C5D0[v17],
           dword_18020C5C0[v17]);
}
