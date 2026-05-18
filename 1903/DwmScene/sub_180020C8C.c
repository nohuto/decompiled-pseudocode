/*
 * XREFs of sub_180020C8C @ 0x180020C8C
 * Callers:
 *     sub_1800257B0 @ 0x1800257B0 (sub_1800257B0.c)
 * Callees:
 *     sub_18001F564 @ 0x18001F564 (sub_18001F564.c)
 *     sub_18001F6E4 @ 0x18001F6E4 (sub_18001F6E4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180020C8C(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v3; // rbx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v6; // [rsp+28h] [rbp-20h]

  v5 = 0LL;
  v6 = 0LL;
  sub_18001F6E4(&v5);
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_18001F564(a2, &v5);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      v3 = v6;
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
