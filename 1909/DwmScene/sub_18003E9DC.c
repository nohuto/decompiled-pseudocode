/*
 * XREFs of sub_18003E9DC @ 0x18003E9DC
 * Callers:
 *     sub_1800355F0 @ 0x1800355F0 (sub_1800355F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003E9DC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 120);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
