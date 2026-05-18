/*
 * XREFs of sub_18000F9B8 @ 0x18000F9B8
 * Callers:
 *     sub_18000F7B8 @ 0x18000F7B8 (sub_18000F7B8.c)
 *     sub_180011200 @ 0x180011200 (sub_180011200.c)
 *     sub_1800B9EA8 @ 0x1800B9EA8 (sub_1800B9EA8.c)
 *     sub_1801011A0 @ 0x1801011A0 (sub_1801011A0.c)
 * Callees:
 *     sub_18000FE60 @ 0x18000FE60 (sub_18000FE60.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18000F9B8(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r15
  _QWORD *i; // rdi
  volatile signed __int32 *v6; // rsi
  bool v7; // r12
  volatile signed __int32 *v8; // rbx
  _QWORD *v10; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-40h]
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF

  v10 = a2;
  sub_180087340(a1);
  v4 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v4; i += 2 )
  {
    v6 = (volatile signed __int32 *)i[1];
    if ( v6 )
    {
      _InterlockedIncrement(v6 + 2);
      v6 = (volatile signed __int32 *)i[1];
    }
    v12[0] = *i;
    v12[1] = v6;
    v10 = 0LL;
    v11 = 0LL;
    sub_18000FE60(&v10, v12);
    v7 = v10 != 0LL;
    if ( v11 )
    {
      if ( !_InterlockedDecrement(v11 + 2) )
      {
        v8 = v11;
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    if ( v6 )
    {
      if ( !_InterlockedDecrement(v6 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        if ( !_InterlockedDecrement(v6 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
    if ( v7 )
      break;
  }
  if ( i == *(_QWORD **)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_18000FE60(a2, i);
  }
  return a2;
}
