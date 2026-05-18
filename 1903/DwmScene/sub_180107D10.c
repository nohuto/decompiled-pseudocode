/*
 * XREFs of sub_180107D10 @ 0x180107D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801079F4 @ 0x1801079F4 (sub_1801079F4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180107D10(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_1801079F4(v8, (int *)(a1 + 8));
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  v5 = v3[1];
  v3[1] = 0LL;
  v6 = (volatile signed __int32 *)v8[1];
  a2[1] = v5;
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
