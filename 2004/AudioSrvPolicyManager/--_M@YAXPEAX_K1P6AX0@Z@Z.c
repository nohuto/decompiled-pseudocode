/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800398A0
 * Callers:
 *     sub_180019ECC @ 0x180019ECC (sub_180019ECC.c)
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_180026030 @ 0x180026030 (sub_180026030.c)
 *     sub_18002B054 @ 0x18002B054 (sub_18002B054.c)
 *     sub_18003BBC6 @ 0x18003BBC6 (sub_18003BBC6.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180039914 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
