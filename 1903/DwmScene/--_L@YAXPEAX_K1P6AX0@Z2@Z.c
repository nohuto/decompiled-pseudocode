/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126540
 * Callers:
 *     sub_180020050 @ 0x180020050 (sub_180020050.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_1800202A8 @ 0x1800202A8 (sub_1800202A8.c)
 *     sub_1800356B0 @ 0x1800356B0 (sub_1800356B0.c)
 *     sub_18003EBD0 @ 0x18003EBD0 (sub_18003EBD0.c)
 *     sub_18006E434 @ 0x18006E434 (sub_18006E434.c)
 *     sub_1800A26DC @ 0x1800A26DC (sub_1800A26DC.c)
 *     sub_1800A7654 @ 0x1800A7654 (sub_1800A7654.c)
 *     sub_1800BD120 @ 0x1800BD120 (sub_1800BD120.c)
 *     sub_1800CF9D8 @ 0x1800CF9D8 (sub_1800CF9D8.c)
 *     sub_1800D4D90 @ 0x1800D4D90 (sub_1800D4D90.c)
 *     sub_1800DB11C @ 0x1800DB11C (sub_1800DB11C.c)
 *     sub_1800DE9B8 @ 0x1800DE9B8 (sub_1800DE9B8.c)
 *     sub_1800DEE08 @ 0x1800DEE08 (sub_1800DEE08.c)
 *     sub_1800DF160 @ 0x1800DF160 (sub_1800DF160.c)
 *     sub_1800DF4AC @ 0x1800DF4AC (sub_1800DF4AC.c)
 *     sub_1800DFE48 @ 0x1800DFE48 (sub_1800DFE48.c)
 *     sub_1800E1698 @ 0x1800E1698 (sub_1800E1698.c)
 *     sub_1800EB6E0 @ 0x1800EB6E0 (sub_1800EB6E0.c)
 *     sub_1800EF620 @ 0x1800EF620 (sub_1800EF620.c)
 *     sub_1800F6EA8 @ 0x1800F6EA8 (sub_1800F6EA8.c)
 *     sub_18010C688 @ 0x18010C688 (sub_18010C688.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180125B34 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
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
