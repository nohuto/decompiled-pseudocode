/*
 * XREFs of sub_18008DE2C @ 0x18008DE2C
 * Callers:
 *     _vscprintf @ 0x18008DE10 (_vscprintf.c)
 *     _vscwprintf @ 0x18008DF20 (_vscwprintf.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18008DE2C(__int64 (__fastcall *a1)(__int64 *), __int64 a2)
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
    sub_18008C6D8();
    return 0xFFFFFFFFLL;
  }
}
