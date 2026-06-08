/*
 * XREFs of CpcReinitializeHandler @ 0x1C0008AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     WriteGenAddrMaybeHidden @ 0x1C00086A0 (WriteGenAddrMaybeHidden.c)
 */

void __fastcall CpcReinitializeHandler(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 92) )
    WriteGenAddrMaybeHidden(*(_QWORD *)a1, (_BYTE *)(*(_QWORD *)(a1 + 112) + 176LL), 1LL);
  if ( *(_BYTE *)(a1 + 104) )
  {
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 78LL) )
      ((void (*)(void))qword_1C001B558)();
  }
}
