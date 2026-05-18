/*
 * XREFs of sub_180096360 @ 0x180096360
 * Callers:
 *     sub_1800956D0 @ 0x1800956D0 (sub_1800956D0.c)
 * Callees:
 *     sub_180064300 @ 0x180064300 (sub_180064300.c)
 *     sub_1800657B8 @ 0x1800657B8 (sub_1800657B8.c)
 *     sub_180096420 @ 0x180096420 (sub_180096420.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180096360(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  unsigned int v7[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v8[72]; // [rsp+30h] [rbp-78h] BYREF
  char v9; // [rsp+78h] [rbp-30h] BYREF

  v7[0] = a2;
  sub_1800657B8((__int64 *)(a1 + 128), v7);
  sub_180096420(a1, v8);
  v4 = 0LL;
  v5 = v8;
  do
  {
    if ( *v5 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(*v5, a2);
    ++v5;
    ++v4;
  }
  while ( v4 != (&v9 < v8 ? 0 : 9) );
  return sub_180064300(a1, a2);
}
