/*
 * XREFs of sub_18006E068 @ 0x18006E068
 * Callers:
 *     sub_18006E068 @ 0x18006E068 (sub_18006E068.c)
 *     sub_18006E354 @ 0x18006E354 (sub_18006E354.c)
 *     sub_18011D098 @ 0x18011D098 (sub_18011D098.c)
 *     sub_180124E80 @ 0x180124E80 (sub_180124E80.c)
 *     sub_1801342C3 @ 0x1801342C3 (sub_1801342C3.c)
 * Callees:
 *     sub_18006E068 @ 0x18006E068 (sub_18006E068.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006E068(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18006E068(a1, i[2]);
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
