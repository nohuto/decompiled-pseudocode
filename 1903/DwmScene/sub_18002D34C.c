/*
 * XREFs of sub_18002D34C @ 0x18002D34C
 * Callers:
 *     sub_180033480 @ 0x180033480 (sub_180033480.c)
 *     sub_1800354E0 @ 0x1800354E0 (sub_1800354E0.c)
 *     sub_1800356B0 @ 0x1800356B0 (sub_1800356B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18002D34C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 128);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
