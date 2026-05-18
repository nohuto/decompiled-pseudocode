/*
 * XREFs of sub_18002D45C @ 0x18002D45C
 * Callers:
 *     sub_180033590 @ 0x180033590 (sub_180033590.c)
 *     sub_1800355F0 @ 0x1800355F0 (sub_1800355F0.c)
 *     sub_1800357C0 @ 0x1800357C0 (sub_1800357C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18002D45C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 128);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
