/*
 * XREFs of sub_18008AB14 @ 0x18008AB14
 * Callers:
 *     sub_18008976C @ 0x18008976C (sub_18008976C.c)
 *     sub_18008AA80 @ 0x18008AA80 (sub_18008AA80.c)
 * Callees:
 *     sub_180063540 @ 0x180063540 (sub_180063540.c)
 *     sub_18008A904 @ 0x18008A904 (sub_18008A904.c)
 *     sub_18008B530 @ 0x18008B530 (sub_18008B530.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008AB14(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  volatile signed __int32 *v8; // rdi

  sub_180063540(a1 + 16);
  if ( a4 )
    sub_18008A904(a1, a2, a4);
  else
    sub_18008B530(*a3, a2);
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
