/*
 * XREFs of sub_1800127D4 @ 0x1800127D4
 * Callers:
 *     sub_180012480 @ 0x180012480 (sub_180012480.c)
 *     sub_180012E10 @ 0x180012E10 (sub_180012E10.c)
 *     sub_180013130 @ 0x180013130 (sub_180013130.c)
 *     sub_1800133E4 @ 0x1800133E4 (sub_1800133E4.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 *     sub_1801008C0 @ 0x1801008C0 (sub_1801008C0.c)
 * Callees:
 *     sub_180012994 @ 0x180012994 (sub_180012994.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800127D4(__int64 a1, _QWORD *a2)
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
  sub_180087450(a1);
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
    sub_180012994(&v10, v12);
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
    sub_180012994(a2, i);
  }
  return a2;
}
