/*
 * XREFs of sub_180123CC0 @ 0x180123CC0
 * Callers:
 *     sub_1801239E0 @ 0x1801239E0 (sub_1801239E0.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD **__fastcall sub_180123CC0(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD **result; // rax
  volatile signed __int32 *v4; // rcx
  _QWORD *v5; // rsi

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  result = *(_QWORD ***)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v4 = (volatile signed __int32 *)v2[3];
      v5 = (_QWORD *)*v2;
      if ( v4 )
      {
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
      result = (_QWORD **)j_j__o_free(v2);
      v2 = v5;
    }
    while ( v5 != *(_QWORD **)a1 );
  }
  return result;
}
