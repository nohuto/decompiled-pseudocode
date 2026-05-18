/*
 * XREFs of sub_1800232BC @ 0x1800232BC
 * Callers:
 *     sub_1800304F0 @ 0x1800304F0 (sub_1800304F0.c)
 *     sub_18003FD80 @ 0x18003FD80 (sub_18003FD80.c)
 *     sub_180045114 @ 0x180045114 (sub_180045114.c)
 * Callees:
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800232BC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_1800635BC(a1 + 24);
  v4 = *(_QWORD *)(a1 + 4264);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
