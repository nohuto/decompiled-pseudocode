/*
 * XREFs of sub_1800299E8 @ 0x1800299E8
 * Callers:
 *     sub_18002AB70 @ 0x18002AB70 (sub_18002AB70.c)
 *     sub_18002B1D0 @ 0x18002B1D0 (sub_18002B1D0.c)
 * Callees:
 *     sub_18002328C @ 0x18002328C (sub_18002328C.c)
 *     sub_180029C14 @ 0x180029C14 (sub_180029C14.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800299E8(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  sub_180029C14(a1, &v6);
  if ( v6 )
  {
    sub_18002328C(v6, a2);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        v3 = v7;
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  else
  {
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        v4 = v7;
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    *a2 = 0LL;
  }
  return a2;
}
