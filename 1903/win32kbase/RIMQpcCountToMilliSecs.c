/*
 * XREFs of RIMQpcCountToMilliSecs @ 0x1C0098DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMQpcCountToMilliSecs(__int64 a1)
{
  return 1000 * a1 / gliQpcFreq.QuadPart;
}
