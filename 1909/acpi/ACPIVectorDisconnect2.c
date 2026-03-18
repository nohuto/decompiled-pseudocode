/*
 * XREFs of ACPIVectorDisconnect2 @ 0x1C0060AA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorDisconnect @ 0x1C0060980 (ACPIVectorDisconnect.c)
 */

__int64 __fastcall ACPIVectorDisconnect2(__int64 a1, char *a2)
{
  return ACPIVectorDisconnect(a2);
}
