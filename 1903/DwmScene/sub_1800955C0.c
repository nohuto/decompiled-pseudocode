/*
 * XREFs of sub_1800955C0 @ 0x1800955C0
 * Callers:
 *     sub_1800965E0 @ 0x1800965E0 (sub_1800965E0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800641B0 @ 0x1800641B0 (sub_1800641B0.c)
 *     sub_1800642F0 @ 0x1800642F0 (sub_1800642F0.c)
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 *     sub_1800643AC @ 0x1800643AC (sub_1800643AC.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_180078098 @ 0x180078098 (sub_180078098.c)
 *     sub_180094E58 @ 0x180094E58 (sub_180094E58.c)
 *     sub_180096250 @ 0x180096250 (sub_180096250.c)
 *     sub_180096310 @ 0x180096310 (sub_180096310.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800955C0(__int64 a1, __int64 *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  char result; // al
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v10[4]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v11[72]; // [rsp+40h] [rbp-88h] BYREF
  char v12; // [rsp+88h] [rbp-40h] BYREF

  sub_1800641B0(a1, a2);
  v10[0] = sub_18006CDB8(*a2);
  v4 = v10[0];
  sub_180094E58((__int64 **)(a1 + 128), (__int64)&v9, v10);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v9 + 40), a2);
  sub_180096310(a1, v11);
  v5 = 0LL;
  v6 = v11;
  do
  {
    if ( *v6 )
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v6 + 16LL))(*v6, a2);
    ++v6;
    ++v5;
  }
  while ( v5 != (&v12 < v11 ? 0 : 9) );
  if ( *(_DWORD *)(a1 + 120) || *(_DWORD *)(a1 + 112) )
    sub_1800643AC(a1, v4);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !result && *(_DWORD *)(a1 + 304) != 2 )
  {
    if ( sub_180064320(a1, 8) )
      return sub_180096250(a1, 0LL);
    v8 = sub_1800642F0(a1);
    result = sub_180078098(v8, 5, 8);
    if ( result )
      return sub_180096250(a1, 0LL);
  }
  return result;
}
