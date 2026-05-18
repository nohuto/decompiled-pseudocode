/*
 * XREFs of sub_18003D7B0 @ 0x18003D7B0
 * Callers:
 *     sub_18003D7B0 @ 0x18003D7B0 (sub_18003D7B0.c)
 *     sub_18003D864 @ 0x18003D864 (sub_18003D864.c)
 * Callees:
 *     sub_18003D7B0 @ 0x18003D7B0 (sub_18003D7B0.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D7B0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18003D7B0(a1, i[2]);
    v5 = v2[5];
    i = (__int64 *)*i;
    if ( v5 )
    {
      v2[5] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    result = j_j__o_free(v2);
  }
  return result;
}
