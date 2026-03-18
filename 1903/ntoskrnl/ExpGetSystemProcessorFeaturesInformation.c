/*
 * XREFs of ExpGetSystemProcessorFeaturesInformation @ 0x14090934C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetSystemProcessorFeaturesInformation(_QWORD *a1)
{
  *a1 = KeFeatureBits;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  return 0LL;
}
