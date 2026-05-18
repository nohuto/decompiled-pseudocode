/*
 * XREFs of sub_180096250 @ 0x180096250
 * Callers:
 *     sub_1800955C0 @ 0x1800955C0 (sub_1800955C0.c)
 * Callees:
 *     sub_1800641F0 @ 0x1800641F0 (sub_1800641F0.c)
 *     sub_1800656A8 @ 0x1800656A8 (sub_1800656A8.c)
 *     sub_180096310 @ 0x180096310 (sub_180096310.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180096250(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  unsigned int v7[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v8[72]; // [rsp+30h] [rbp-78h] BYREF
  char v9; // [rsp+78h] [rbp-30h] BYREF

  v7[0] = a2;
  sub_1800656A8((__int64 *)(a1 + 128), v7);
  sub_180096310(a1, v8);
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
  return sub_1800641F0(a1, a2);
}
