/*
 * XREFs of sub_18006DF58 @ 0x18006DF58
 * Callers:
 *     sub_18006DF58 @ 0x18006DF58 (sub_18006DF58.c)
 *     sub_18006E244 @ 0x18006E244 (sub_18006E244.c)
 *     sub_18011CF88 @ 0x18011CF88 (sub_18011CF88.c)
 *     sub_180124D70 @ 0x180124D70 (sub_180124D70.c)
 *     sub_1801341B3 @ 0x1801341B3 (sub_1801341B3.c)
 * Callees:
 *     sub_18006DF58 @ 0x18006DF58 (sub_18006DF58.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006DF58(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18006DF58(a1, i[2]);
    i = (__int64 *)*i;
    v6 = (__int64 *)v2[12];
    if ( v6 )
    {
      LOBYTE(v5) = v6 != v2 + 5;
      (*(void (__fastcall **)(__int64 *, __int64))(*v6 + 32))(v6, v5);
      v2[12] = 0LL;
    }
    result = j_j__o_free(v2);
  }
  return result;
}
