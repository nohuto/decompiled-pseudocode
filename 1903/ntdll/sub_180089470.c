/*
 * XREFs of sub_180089470 @ 0x180089470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180089470(__int64 a1, __int64 a2, __int64 a3)
{
  return ZwQueryInformationProcess(-1LL, a2, a3);
}
