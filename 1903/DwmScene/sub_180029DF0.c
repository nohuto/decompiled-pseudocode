/*
 * XREFs of sub_180029DF0 @ 0x180029DF0
 * Callers:
 *     sub_180029EA0 @ 0x180029EA0 (sub_180029EA0.c)
 * Callees:
 *     sub_180027520 @ 0x180027520 (sub_180027520.c)
 *     sub_1800275C4 @ 0x1800275C4 (sub_1800275C4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180029DF0(_QWORD **a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-28h]

  result = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*a1[63] + 128LL))(a1[63], &v5);
  if ( !(_DWORD)result )
  {
    if ( (_DWORD)v5 )
    {
      sub_1800275C4(a1 + 206, (__int64)v4, (unsigned int *)&v5);
      v3 = v4[0];
      *(_OWORD *)(v4[0] + 40LL) = v5;
      *(_OWORD *)(v3 + 56) = v6;
      sub_180027520(a1 + 208, (__int64)v4, (unsigned int *)&v5 + 2);
      result = v4[0];
      *(_QWORD *)(v4[0] + 40LL) = v6;
    }
  }
  return result;
}
