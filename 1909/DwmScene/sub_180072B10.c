/*
 * XREFs of sub_180072B10 @ 0x180072B10
 * Callers:
 *     sub_180072B8C @ 0x180072B8C (sub_180072B8C.c)
 *     sub_18007F564 @ 0x18007F564 (sub_18007F564.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180072B10(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  volatile signed __int32 *v8; // rcx

  for ( i = a1; i != a2; i += 2 )
  {
    v6 = i[1];
    i[1] = 0LL;
    v7 = *i;
    *i = 0LL;
    *a3 = v7;
    v8 = (volatile signed __int32 *)a3[1];
    a3[1] = v6;
    if ( v8 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    a3 += 2;
  }
  return a3;
}
