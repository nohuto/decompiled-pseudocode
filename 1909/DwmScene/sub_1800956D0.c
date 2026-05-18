/*
 * XREFs of sub_1800956D0 @ 0x1800956D0
 * Callers:
 *     sub_1800966F0 @ 0x1800966F0 (sub_1800966F0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800642C0 @ 0x1800642C0 (sub_1800642C0.c)
 *     sub_180064400 @ 0x180064400 (sub_180064400.c)
 *     sub_180064430 @ 0x180064430 (sub_180064430.c)
 *     sub_1800644BC @ 0x1800644BC (sub_1800644BC.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_1800781A8 @ 0x1800781A8 (sub_1800781A8.c)
 *     sub_180094F68 @ 0x180094F68 (sub_180094F68.c)
 *     sub_180096360 @ 0x180096360 (sub_180096360.c)
 *     sub_180096420 @ 0x180096420 (sub_180096420.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800956D0(__int64 a1, __int64 *a2)
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

  sub_1800642C0(a1, a2);
  v10[0] = sub_18006CEC8(*a2);
  v4 = v10[0];
  sub_180094F68((__int64 **)(a1 + 128), (__int64)&v9, v10);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v9 + 40), a2);
  sub_180096420(a1, v11);
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
    sub_1800644BC(a1, v4);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !result && *(_DWORD *)(a1 + 304) != 2 )
  {
    if ( sub_180064430(a1, 8) )
      return sub_180096360(a1, 0LL);
    v8 = sub_180064400(a1);
    result = sub_1800781A8(v8, 5, 8);
    if ( result )
      return sub_180096360(a1, 0LL);
  }
  return result;
}
