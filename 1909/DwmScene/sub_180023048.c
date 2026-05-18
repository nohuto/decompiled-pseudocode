/*
 * XREFs of sub_180023048 @ 0x180023048
 * Callers:
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 *     sub_180024A20 @ 0x180024A20 (sub_180024A20.c)
 *     sub_1800298EC @ 0x1800298EC (sub_1800298EC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180023048(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 4272);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
