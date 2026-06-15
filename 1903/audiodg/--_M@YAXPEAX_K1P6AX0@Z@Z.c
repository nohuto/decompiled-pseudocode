/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x140015DA4
 * Callers:
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x140026454 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x140015E18 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
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
