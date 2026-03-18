/*
 * XREFs of FastGetProfileDword @ 0x1C005FC00
 * Callers:
 *     <none>
 * Callees:
 *     FastGetProfileDwordEx @ 0x1C005FC30 (FastGetProfileDwordEx.c)
 */

__int64 __fastcall FastGetProfileDword(__int64 a1, __int64 a2, __int64 a3)
{
  return FastGetProfileDwordEx(a1, a2, a3);
}
