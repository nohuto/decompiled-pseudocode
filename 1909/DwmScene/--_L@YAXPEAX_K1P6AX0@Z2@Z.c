/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126650
 * Callers:
 *     sub_180020160 @ 0x180020160 (sub_180020160.c)
 *     sub_1800201A0 @ 0x1800201A0 (sub_1800201A0.c)
 *     sub_1800203B8 @ 0x1800203B8 (sub_1800203B8.c)
 *     sub_1800357C0 @ 0x1800357C0 (sub_1800357C0.c)
 *     sub_18003ECE0 @ 0x18003ECE0 (sub_18003ECE0.c)
 *     sub_18006E544 @ 0x18006E544 (sub_18006E544.c)
 *     sub_1800A27EC @ 0x1800A27EC (sub_1800A27EC.c)
 *     sub_1800A7764 @ 0x1800A7764 (sub_1800A7764.c)
 *     sub_1800BD230 @ 0x1800BD230 (sub_1800BD230.c)
 *     sub_1800CFAE8 @ 0x1800CFAE8 (sub_1800CFAE8.c)
 *     sub_1800D4EA0 @ 0x1800D4EA0 (sub_1800D4EA0.c)
 *     sub_1800DB22C @ 0x1800DB22C (sub_1800DB22C.c)
 *     sub_1800DEAC8 @ 0x1800DEAC8 (sub_1800DEAC8.c)
 *     sub_1800DEF18 @ 0x1800DEF18 (sub_1800DEF18.c)
 *     sub_1800DF270 @ 0x1800DF270 (sub_1800DF270.c)
 *     sub_1800DF5BC @ 0x1800DF5BC (sub_1800DF5BC.c)
 *     sub_1800DFF58 @ 0x1800DFF58 (sub_1800DFF58.c)
 *     sub_1800E17A8 @ 0x1800E17A8 (sub_1800E17A8.c)
 *     sub_1800EB7F0 @ 0x1800EB7F0 (sub_1800EB7F0.c)
 *     sub_1800EF730 @ 0x1800EF730 (sub_1800EF730.c)
 *     sub_1800F6FB8 @ 0x1800F6FB8 (sub_1800F6FB8.c)
 *     sub_18010C798 @ 0x18010C798 (sub_18010C798.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180125C44 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_dispatch_icall_fptr();
    a1 += a2;
  }
}
