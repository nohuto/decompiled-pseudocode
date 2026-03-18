/*
 * XREFs of GreGetDCOrg @ 0x1C003E570
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDCPoint @ 0x1C003DB70 (GreGetDCPoint.c)
 */

__int64 __fastcall GreGetDCOrg(HDC a1, __int64 a2)
{
  return GreGetDCPoint(a1, 32, a2);
}
