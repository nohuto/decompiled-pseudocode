/*
 * XREFs of sub_180122E20 @ 0x180122E20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180122E20(__int64 a1, __int64 a2, float *a3)
{
  __int64 result; // rax
  double v5; // [rsp+20h] [rbp-18h] BYREF

  result = (*(__int64 (__fastcall **)(__int64, __int64, double *))(*(_QWORD *)a1 + 120LL))(a1, a2, &v5);
  if ( !(_DWORD)result )
    *a3 = v5;
  return result;
}
