/*
 * XREFs of sub_18001630C @ 0x18001630C
 * Callers:
 *     sub_1800181C0 @ 0x1800181C0 (sub_1800181C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001630C(__int64 *a1, int *a2, _QWORD *a3)
{
  __int64 v5; // rcx

  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return sub_180016260(a1, a2, a3);
}
