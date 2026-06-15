/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180039E00
 * Callers:
 *     sub_1800133CC @ 0x1800133CC (sub_1800133CC.c)
 *     sub_180026030 @ 0x180026030 (sub_180026030.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180039914 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
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
