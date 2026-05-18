/*
 * XREFs of sub_1800B4E64 @ 0x1800B4E64
 * Callers:
 *     sub_1800B4E64 @ 0x1800B4E64 (sub_1800B4E64.c)
 *     sub_1800B4F74 @ 0x1800B4F74 (sub_1800B4F74.c)
 * Callees:
 *     sub_1800B4E64 @ 0x1800B4E64 (sub_1800B4E64.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B4E64(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 *i; // rbx
  volatile signed __int32 *v5; // rcx
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_1800B4E64(a1, i[2]);
    v5 = (volatile signed __int32 *)v2[5];
    i = (__int64 *)*i;
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    result = j_j__o_free(v2);
  }
  return result;
}
