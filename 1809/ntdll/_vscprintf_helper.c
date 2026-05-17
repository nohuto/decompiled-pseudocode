/*
 * XREFs of _vscprintf_helper @ 0x18009153C
 * Callers:
 *     _vscprintf @ 0x180091520 (_vscprintf.c)
 *     _vscwprintf @ 0x180091630 (_vscwprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDE8 (_invalid_parameter.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall vscprintf_helper(__int64 (__fastcall *a1)(__int64 *), __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  __int64 v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]

  if ( a2 )
  {
    v5 = 0LL;
    v3 = 0LL;
    v4 = 0x7FFFFFFF;
    v6 = 66;
    return a1(&v3);
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
