/*
 * XREFs of sub_18001629C @ 0x18001629C
 * Callers:
 *     sub_180018150 @ 0x180018150 (sub_180018150.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001629C(__int64 *a1, int *a2, _QWORD *a3)
{
  __int64 v5; // rcx

  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return sub_1800161F0(a1, a2, a3);
}
