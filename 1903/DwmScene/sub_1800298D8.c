/*
 * XREFs of sub_1800298D8 @ 0x1800298D8
 * Callers:
 *     sub_18002AA60 @ 0x18002AA60 (sub_18002AA60.c)
 *     sub_18002B0C0 @ 0x18002B0C0 (sub_18002B0C0.c)
 * Callees:
 *     sub_18002317C @ 0x18002317C (sub_18002317C.c)
 *     sub_180029B04 @ 0x180029B04 (sub_180029B04.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800298D8(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  sub_180029B04(a1, &v6);
  if ( v6 )
  {
    sub_18002317C(v6, a2);
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
