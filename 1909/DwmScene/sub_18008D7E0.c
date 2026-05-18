/*
 * XREFs of sub_18008D7E0 @ 0x18008D7E0
 * Callers:
 *     sub_1800893F0 @ 0x1800893F0 (sub_1800893F0.c)
 *     sub_180089468 @ 0x180089468 (sub_180089468.c)
 *     sub_18008DA9C @ 0x18008DA9C (sub_18008DA9C.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD **__fastcall sub_18008D7E0(__int64 a1)
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
      v4 = (volatile signed __int32 *)v2[4];
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
