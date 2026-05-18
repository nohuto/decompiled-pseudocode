/*
 * XREFs of sub_18007E340 @ 0x18007E340
 * Callers:
 *     sub_180079100 @ 0x180079100 (sub_180079100.c)
 *     sub_18007E340 @ 0x18007E340 (sub_18007E340.c)
 *     sub_18007F064 @ 0x18007F064 (sub_18007F064.c)
 * Callees:
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_18007E340 @ 0x18007E340 (sub_18007E340.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007E340(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  volatile signed __int32 *v5; // rcx
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18007E340(a1, i[2]);
    i = (__int64 *)*i;
    sub_180011388(v2 + 6);
    v5 = (volatile signed __int32 *)v2[5];
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    result = j_j__o_free(v2);
  }
  return result;
}
