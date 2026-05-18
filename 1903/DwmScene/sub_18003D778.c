/*
 * XREFs of sub_18003D778 @ 0x18003D778
 * Callers:
 *     sub_18003C428 @ 0x18003C428 (sub_18003C428.c)
 *     sub_18012930B @ 0x18012930B (sub_18012930B.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D778(__int64 a1, __int64 a2)
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
