/*
 * XREFs of WriteGenAddrMaybeHidden @ 0x1C000447C
 * Callers:
 *     CpcReinitializeHandler @ 0x1C00088E0 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0008930 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C0008980 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C00089B0 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C0020470 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002FF1C (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrHidden @ 0x1C00043D4 (WriteGenAddrHidden.c)
 *     WriteGenAddr @ 0x1C00084D0 (WriteGenAddr.c)
 */

__int64 __fastcall WriteGenAddrMaybeHidden(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( *(_BYTE *)(a1 + 78) )
    return WriteGenAddrHidden(*(_DWORD *)(a1 + 80), a2, a3);
  else
    return WriteGenAddr(a2, a3);
}
