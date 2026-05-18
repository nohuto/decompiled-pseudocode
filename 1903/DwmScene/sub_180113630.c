/*
 * XREFs of sub_180113630 @ 0x180113630
 * Callers:
 *     sub_180113610 @ 0x180113610 (sub_180113610.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180011714 @ 0x180011714 (sub_180011714.c)
 *     sub_180015D84 @ 0x180015D84 (sub_180015D84.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_180078118 @ 0x180078118 (sub_180078118.c)
 *     sub_18009F5B0 @ 0x18009F5B0 (sub_18009F5B0.c)
 *     sub_1800A4A38 @ 0x1800A4A38 (sub_1800A4A38.c)
 *     sub_1800A817C @ 0x1800A817C (sub_1800A817C.c)
 *     sub_1800A9230 @ 0x1800A9230 (sub_1800A9230.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180113630(__int64 a1, __int64 a2)
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
  __int64 *v13; // rcx
  _BYTE *v14; // rax
  int v15; // eax
  __int64 *v16; // rdx
  _QWORD *v17; // rax
  volatile signed __int32 *v18; // rbx
  _QWORD *v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-89h] BYREF
  volatile signed __int32 *v22; // [rsp+28h] [rbp-81h]
  __int64 v23[4]; // [rsp+30h] [rbp-79h] BYREF
  size_t v24[4]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v25; // [rsp+70h] [rbp-39h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp-31h]
  __int64 v27; // [rsp+80h] [rbp-29h] BYREF
  volatile signed __int32 *v28; // [rsp+88h] [rbp-21h]
  __int64 v29; // [rsp+90h] [rbp-19h] BYREF
  volatile signed __int32 *v30; // [rsp+98h] [rbp-11h]
  _QWORD v31[2]; // [rsp+A0h] [rbp-9h] BYREF
  int v32; // [rsp+B0h] [rbp+7h]
  int v33; // [rsp+B4h] [rbp+Bh]
  int v34; // [rsp+B8h] [rbp+Fh]
  __int128 v35; // [rsp+BCh] [rbp+13h]
  int v36; // [rsp+CCh] [rbp+23h]
  int v37; // [rsp+D0h] [rbp+27h]

  v4 = sub_18006CD84(a2);
  v24[2] = 0LL;
  v24[3] = 0LL;
  v5 = sub_180078118(v4);
  sub_18000F3F4(v24, (__int64)&qword_18025D1E8);
  v6 = sub_1800A4A38(v5, &v25, v24);
  v7 = (__int64 *)(a1 + 304);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 304), v6);
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
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 288), v9);
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
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 272), v11);
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
  v13 = (__int64 *)(a1 + 336);
  v14 = (_BYTE *)(a1 + 336);
  if ( *(_QWORD *)(a1 + 360) >= 0x10uLL )
    v14 = (_BYTE *)*v13;
  *(_QWORD *)(a1 + 352) = 0LL;
  *v14 = 0;
  v15 = *(_DWORD *)(a1 + 372);
  switch ( v15 )
  {
    case 8:
      v16 = &qword_18025D228;
      goto LABEL_21;
    case 16:
      v16 = &qword_18025D248;
      goto LABEL_21;
    case 32:
      v16 = &qword_18025D268;
LABEL_21:
      sub_180011714(v13, v16);
      break;
  }
  v17 = (_QWORD *)sub_18006CD84(a2);
  sub_180015D84(v17, &v21, 1u);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 320), &v21);
  v18 = v22;
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  v23[2] = 0LL;
  v23[3] = 15LL;
  LOBYTE(v23[0]) = 0;
  sub_18000E118(v23, 0x1DuLL, 0LL, "Image Processing Blur Sampler");
  sub_1800644E4(*(_QWORD *)(a1 + 320), v23);
  v32 = 0;
  v36 = 0;
  v19 = *(_QWORD **)(a1 + 320);
  v37 = 2139095039;
  v35 = 0LL;
  v33 = 1;
  v34 = 7;
  v31[0] = 0x200000002LL;
  v31[1] = 0x200000002LL;
  return sub_18009F5B0(v19, v31, 0LL);
}
