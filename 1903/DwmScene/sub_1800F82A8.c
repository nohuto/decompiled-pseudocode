/*
 * XREFs of sub_1800F82A8 @ 0x1800F82A8
 * Callers:
 *     sub_1800A88B0 @ 0x1800A88B0 (sub_1800A88B0.c)
 * Callees:
 *     sub_1800656A8 @ 0x1800656A8 (sub_1800656A8.c)
 *     sub_18009F840 @ 0x18009F840 (sub_18009F840.c)
 *     sub_1800D1E70 @ 0x1800D1E70 (sub_1800D1E70.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F82A8(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx
  unsigned int v12; // [rsp+20h] [rbp-18h] BYREF

  v4 = a1[6];
  if ( v4 )
    sub_18009F840(v4, a2);
  v5 = a1[8];
  if ( v5 )
    sub_18009F840(v5, a2);
  v6 = a1[10];
  if ( v6 )
    sub_18009F840(v6, a2);
  v7 = a1[12];
  if ( v7 )
    sub_18009F840(v7, a2);
  v8 = a1[22];
  if ( v8 )
    sub_1800D1E70(v8, a2);
  v12 = a2;
  result = sub_1800656A8(a1 + 60, &v12);
  v10 = a1 + 48;
  v11 = a1 + 60;
  while ( v10 != v11 )
  {
    if ( *v10 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v10 + 24LL))(*v10, a2);
    v10 += 2;
  }
  return result;
}
