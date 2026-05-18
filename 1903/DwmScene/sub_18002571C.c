/*
 * XREFs of sub_18002571C @ 0x18002571C
 * Callers:
 *     sub_18001E9F0 @ 0x18001E9F0 (sub_18001E9F0.c)
 *     sub_1801284AC @ 0x1801284AC (sub_1801284AC.c)
 *     sub_1801284D0 @ 0x1801284D0 (sub_1801284D0.c)
 *     sub_18013458F @ 0x18013458F (sub_18013458F.c)
 *     sub_1801345D7 @ 0x1801345D7 (sub_1801345D7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002571C(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx

  v2 = a2 + 40;
  v3 = a2;
  v4 = *(_QWORD *)(a2 + 96);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return j_j__o_free(v3);
}
