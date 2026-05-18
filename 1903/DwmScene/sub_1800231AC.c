/*
 * XREFs of sub_1800231AC @ 0x1800231AC
 * Callers:
 *     sub_1800303E0 @ 0x1800303E0 (sub_1800303E0.c)
 *     sub_18003FC70 @ 0x18003FC70 (sub_18003FC70.c)
 *     sub_180045004 @ 0x180045004 (sub_180045004.c)
 * Callees:
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800231AC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_1800634AC(a1 + 24);
  v4 = *(_QWORD *)(a1 + 4264);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
