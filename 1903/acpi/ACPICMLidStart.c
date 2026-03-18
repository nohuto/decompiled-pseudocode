/*
 * XREFs of ACPICMLidStart @ 0x1C00ADDE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPICMButtonStart @ 0x1C00A310C (ACPICMButtonStart.c)
 */

__int64 __fastcall ACPICMLidStart(ULONG_PTR a1, __int64 a2)
{
  return ACPICMButtonStart(a1, a2, 4);
}
