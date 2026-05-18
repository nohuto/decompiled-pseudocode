/*
 * XREFs of sub_18002E9A4 @ 0x18002E9A4
 * Callers:
 *     sub_18002C1D0 @ 0x18002C1D0 (sub_18002C1D0.c)
 *     sub_180039C30 @ 0x180039C30 (sub_180039C30.c)
 * Callees:
 *     sub_18002EA0C @ 0x18002EA0C (sub_18002EA0C.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002E9A4(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v6[1] = -2LL;
  v6[0] = 0LL;
  v7 = 0LL;
  if ( &v7 != a2 )
  {
    v7 = *a2;
    *a2 = 0LL;
  }
  result = sub_18002EA0C(a1, &v7, v6, a3);
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
