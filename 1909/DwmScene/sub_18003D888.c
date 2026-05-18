/*
 * XREFs of sub_18003D888 @ 0x18003D888
 * Callers:
 *     sub_18003C538 @ 0x18003C538 (sub_18003C538.c)
 *     sub_18012941B @ 0x18012941B (sub_18012941B.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D888(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 40);
  if ( v2 )
  {
    *(_QWORD *)(a2 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return j_j__o_free(a2);
}
