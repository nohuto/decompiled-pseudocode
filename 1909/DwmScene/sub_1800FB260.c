/*
 * XREFs of sub_1800FB260 @ 0x1800FB260
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180015DF4 @ 0x180015DF4 (sub_180015DF4.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     sub_18009F6C0 @ 0x18009F6C0 (sub_18009F6C0.c)
 *     sub_1800F9FC8 @ 0x1800F9FC8 (sub_1800F9FC8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FB260(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 *v5; // rsi
  volatile signed __int32 *v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rsi
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v12; // [rsp+30h] [rbp-59h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp-51h]
  __int64 v14[5]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v15; // [rsp+68h] [rbp-21h] BYREF
  volatile signed __int32 *v16; // [rsp+70h] [rbp-19h]
  _QWORD v17[2]; // [rsp+78h] [rbp-11h] BYREF
  int v18; // [rsp+88h] [rbp-1h]
  int v19; // [rsp+8Ch] [rbp+3h]
  int v20; // [rsp+90h] [rbp+7h]
  __int128 v21; // [rsp+94h] [rbp+Bh]
  int v22; // [rsp+A4h] [rbp+1Bh]
  int v23; // [rsp+A8h] [rbp+1Fh]

  v4 = (_QWORD *)sub_18006CE94(a2);
  sub_180015DF4(v4, &v12, 1u);
  v5 = (__int64 *)(a1 + 216);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 216), &v12);
  v6 = v13;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v14[2] = 0LL;
  v14[3] = 15LL;
  LOBYTE(v14[0]) = 0;
  sub_18000E168(v14, 0x1DuLL, 0LL, "Image Processing Blur Sampler");
  sub_1800645F4(*v5, v14);
  v7 = (_QWORD *)*v5;
  v18 = 0;
  v22 = 0;
  v23 = 2139095039;
  v21 = 0LL;
  v19 = 1;
  v20 = 7;
  v17[0] = 0x200000002LL;
  v17[1] = 0x200000002LL;
  sub_18009F6C0(v7, v17, 0LL);
  v8 = *(int *)(a1 + 144);
  v9 = sub_1800F9FC8((__int64 *)a1, &v15);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 184), v9);
  v10 = v16;
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 + 184) + 40LL))(
           *(_QWORD *)(a1 + 184),
           a2,
           2LL,
           (unsigned int)dword_18020C768[v8],
           dword_18020C758[v8]);
}
