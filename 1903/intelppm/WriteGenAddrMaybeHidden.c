/*
 * XREFs of WriteGenAddrMaybeHidden @ 0x1C00086A0
 * Callers:
 *     CpcReinitializeHandler @ 0x1C0008AF0 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0008B40 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C0008B90 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C0008BC0 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C002005C (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0032738 (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddr @ 0x1C0008574 (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C00085F8 (WriteGenAddrHidden.c)
 */

void __fastcall WriteGenAddrMaybeHidden(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( *(_BYTE *)(a1 + 78) )
    WriteGenAddrHidden(*(_DWORD *)(a1 + 80), a2, a3);
  else
    WriteGenAddr(a2, a3);
}
