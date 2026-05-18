/*
 * XREFs of sub_18002328C @ 0x18002328C
 * Callers:
 *     sub_18000EA20 @ 0x18000EA20 (sub_18000EA20.c)
 *     sub_180021ACC @ 0x180021ACC (sub_180021ACC.c)
 *     sub_180023080 @ 0x180023080 (sub_180023080.c)
 *     sub_180023300 @ 0x180023300 (sub_180023300.c)
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 *     sub_1800299E8 @ 0x1800299E8 (sub_1800299E8.c)
 *     sub_18002C760 @ 0x18002C760 (sub_18002C760.c)
 *     sub_18002CB20 @ 0x18002CB20 (sub_18002CB20.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_18002F5BC @ 0x18002F5BC (sub_18002F5BC.c)
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_180030058 @ 0x180030058 (sub_180030058.c)
 *     sub_1800304F0 @ 0x1800304F0 (sub_1800304F0.c)
 *     sub_1800312D4 @ 0x1800312D4 (sub_1800312D4.c)
 *     sub_180033730 @ 0x180033730 (sub_180033730.c)
 *     sub_180033F8C @ 0x180033F8C (sub_180033F8C.c)
 *     sub_180038F50 @ 0x180038F50 (sub_180038F50.c)
 *     sub_18003A0C0 @ 0x18003A0C0 (sub_18003A0C0.c)
 *     sub_18003AA50 @ 0x18003AA50 (sub_18003AA50.c)
 *     sub_18003AF44 @ 0x18003AF44 (sub_18003AF44.c)
 *     sub_18003DE50 @ 0x18003DE50 (sub_18003DE50.c)
 *     sub_18003E400 @ 0x18003E400 (sub_18003E400.c)
 *     sub_18003F830 @ 0x18003F830 (sub_18003F830.c)
 *     sub_18004057C @ 0x18004057C (sub_18004057C.c)
 *     sub_180041E90 @ 0x180041E90 (sub_180041E90.c)
 *     sub_180042724 @ 0x180042724 (sub_180042724.c)
 *     sub_180043510 @ 0x180043510 (sub_180043510.c)
 *     sub_180043900 @ 0x180043900 (sub_180043900.c)
 *     sub_180043CC0 @ 0x180043CC0 (sub_180043CC0.c)
 *     sub_180044080 @ 0x180044080 (sub_180044080.c)
 *     sub_180044550 @ 0x180044550 (sub_180044550.c)
 *     sub_180044F98 @ 0x180044F98 (sub_180044F98.c)
 *     sub_180045114 @ 0x180045114 (sub_180045114.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18002328C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 4256);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
