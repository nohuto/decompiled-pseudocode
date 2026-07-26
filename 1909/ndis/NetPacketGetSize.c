/*
 * XREFs of NetPacketGetSize @ 0x1C0128420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NetPacketGetSize()
{
  ULONG RecommendedSharedDataAlignment; // ecx

  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  if ( RecommendedSharedDataAlignment < 0x10 )
    RecommendedSharedDataAlignment = 16;
  return -RecommendedSharedDataAlignment & (RecommendedSharedDataAlignment + 15);
}
