/*
 * XREFs of CpcSetTimeWindow @ 0x1C0008BC0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHidden @ 0x1C00086A0 (WriteGenAddrMaybeHidden.c)
 */

void __fastcall CpcSetTimeWindow(__int64 *a1, unsigned int a2)
{
  WriteGenAddrMaybeHidden(*a1, (_BYTE *)(a1[14] + 116), a2);
}
