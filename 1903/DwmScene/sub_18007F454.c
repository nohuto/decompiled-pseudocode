/*
 * XREFs of sub_18007F454 @ 0x18007F454
 * Callers:
 *     sub_18007A0A4 @ 0x18007A0A4 (sub_18007A0A4.c)
 * Callees:
 *     sub_180072A00 @ 0x180072A00 (sub_180072A00.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall sub_18007F454(__int64 a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // r15
  _QWORD *v9; // r14
  _QWORD *i; // rdi
  volatile signed __int32 *v11; // rcx

  if ( a3 != a4 )
  {
    v7 = sub_180072A00(a4, *(__int64 **)(a1 + 8), a3);
    v8 = *(_QWORD **)(a1 + 8);
    v9 = v7;
    for ( i = v7; i != v8; i += 2 )
    {
      v11 = (volatile signed __int32 *)i[1];
      if ( v11 && _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    *(_QWORD *)(a1 + 8) = v9;
  }
  *a2 = a3;
  return a2;
}
