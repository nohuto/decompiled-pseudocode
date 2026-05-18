/*
 * XREFs of sub_1800161C4 @ 0x1800161C4
 * Callers:
 *     sub_1800199B8 @ 0x1800199B8 (sub_1800199B8.c)
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 *     sub_180028A70 @ 0x180028A70 (sub_180028A70.c)
 *     sub_180028E70 @ 0x180028E70 (sub_180028E70.c)
 *     sub_18002AA60 @ 0x18002AA60 (sub_18002AA60.c)
 *     sub_18003C848 @ 0x18003C848 (sub_18003C848.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800161C4(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return a1;
}
