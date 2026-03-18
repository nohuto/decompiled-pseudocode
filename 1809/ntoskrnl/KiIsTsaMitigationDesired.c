/*
 * XREFs of KiIsTsaMitigationDesired @ 0x1401B4720
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EDD0 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForTsa @ 0x1401B455C (KiIsKvaShadowNeededForTsa.c)
 * Callees:
 *     <none>
 */

__int64 KiIsTsaMitigationDesired()
{
  if ( (KiFeatureSettings & 5) != 0 )
    return 0LL;
  else
    return ((unsigned int)KiFeatureSettings >> 30) & 1;
}
