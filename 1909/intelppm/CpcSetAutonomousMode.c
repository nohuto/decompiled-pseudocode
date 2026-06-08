/*
 * XREFs of CpcSetAutonomousMode @ 0x1C0008B90
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHidden @ 0x1C00086A0 (WriteGenAddrMaybeHidden.c)
 */

void __fastcall CpcSetAutonomousMode(__int64 *a1, int a2)
{
  WriteGenAddrMaybeHidden(*a1, (_BYTE *)(a1[14] + 188), a2 != 0);
}
