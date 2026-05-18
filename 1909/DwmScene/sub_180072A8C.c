/*
 * XREFs of sub_180072A8C @ 0x180072A8C
 * Callers:
 *     sub_180072334 @ 0x180072334 (sub_180072334.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180072A8C(__int64 *a1, __int64 *a2, _QWORD *a3)
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
