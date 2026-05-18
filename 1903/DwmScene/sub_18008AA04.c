/*
 * XREFs of sub_18008AA04 @ 0x18008AA04
 * Callers:
 *     sub_18008965C @ 0x18008965C (sub_18008965C.c)
 *     sub_18008A970 @ 0x18008A970 (sub_18008A970.c)
 * Callees:
 *     sub_180063430 @ 0x180063430 (sub_180063430.c)
 *     sub_18008A7F4 @ 0x18008A7F4 (sub_18008A7F4.c)
 *     sub_18008B420 @ 0x18008B420 (sub_18008B420.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008AA04(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  volatile signed __int32 *v8; // rdi

  sub_180063430(a1 + 16);
  if ( a4 )
    sub_18008A7F4(a1, a2, a4);
  else
    sub_18008B420(*a3, a2);
  v8 = (volatile signed __int32 *)a3[1];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a2;
}
