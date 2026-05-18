/*
 * XREFs of sub_18007297C @ 0x18007297C
 * Callers:
 *     sub_180072224 @ 0x180072224 (sub_180072224.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18007297C(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rcx

  if ( a2 != a1 )
  {
    v5 = a2 - 1;
    do
    {
      v6 = *v5;
      a3 -= 2;
      *v5 = 0LL;
      v7 = *(v5 - 1);
      *(v5 - 1) = 0LL;
      *a3 = v7;
      v8 = (volatile signed __int32 *)a3[1];
      a3[1] = v6;
      if ( v8 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      v5 -= 2;
    }
    while ( v5 + 1 != a1 );
  }
  return a3;
}
