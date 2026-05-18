/*
 * XREFs of sub_18010C4D8 @ 0x18010C4D8
 * Callers:
 *     sub_1800EB6E0 @ 0x1800EB6E0 (sub_1800EB6E0.c)
 *     sub_1800EF620 @ 0x1800EF620 (sub_1800EF620.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_1800BC5A0 @ 0x1800BC5A0 (sub_1800BC5A0.c)
 *     sub_1800DAF10 @ 0x1800DAF10 (sub_1800DAF10.c)
 *     sub_18010C3BC @ 0x18010C3BC (sub_18010C3BC.c)
 *     sub_18010C688 @ 0x18010C688 (sub_18010C688.c)
 *     sub_18010D080 @ 0x18010D080 (sub_18010D080.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18010C4D8(char **a1, char **a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v8; // rdi
  unsigned __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 *v12; // rax
  volatile signed __int32 *v13; // rbx
  char v15[8]; // [rsp+38h] [rbp-51h] BYREF
  volatile signed __int32 *v16; // [rsp+40h] [rbp-49h]
  _BYTE v17[48]; // [rsp+48h] [rbp-41h] BYREF
  __int128 v18; // [rsp+78h] [rbp-11h] BYREF
  __int64 v19; // [rsp+88h] [rbp-1h]
  __int128 v20; // [rsp+90h] [rbp+7h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+17h]

  v8 = a5;
  v21 = 0LL;
  v20 = 0LL;
  sub_1800BC5A0(&v20, *a1, a1[1]);
  v19 = 0LL;
  v18 = 0LL;
  sub_1800BC5A0(&v18, *a2, a2[1]);
  v9 = (__int64)(*((_QWORD *)&v20 + 1) - v20) >> 4;
  if ( v9 > 3 )
    sub_1800DAF10((__int64 *)v20, *((char **)&v20 + 1), v9, (__int64 (__fastcall *)(__int64 *, __int64 *))sub_18010C4A0);
  if ( (unsigned __int64)((__int64)(*((_QWORD *)&v18 + 1) - v18) >> 4) > 1 )
    sub_18010C3BC((__int64 *)v18, (char *)(v18 + 16), *((char **)&v18 + 1));
  v10 = sub_18010C688(v17) - (_QWORD)a5;
  v11 = 3LL;
  do
  {
    std::shared_ptr<__ExceptionPtr>::operator=(v8, (_QWORD *)((char *)v8 + v10));
    v8 += 2;
    --v11;
  }
  while ( v11 );
  `eh vector destructor iterator'(v17, 0x10uLL, 3uLL, (void (*)(void *))unknown_libname_110);
  v12 = (__int64 *)sub_18010D080(v15, &v18, a3);
  std::shared_ptr<__ExceptionPtr>::operator=(a4, v12);
  v13 = v16;
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  sub_180011388((__int64 *)&v18);
  return sub_180011388((__int64 *)&v20);
}
