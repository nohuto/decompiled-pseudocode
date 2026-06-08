/*
 * XREFs of CpcSetAutonomousMode @ 0x1C0008980
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHidden @ 0x1C000447C (WriteGenAddrMaybeHidden.c)
 */

__int64 __fastcall CpcSetAutonomousMode(__int64 *a1, int a2)
{
  return WriteGenAddrMaybeHidden(*a1, (_BYTE *)(a1[14] + 188), a2 != 0);
}
