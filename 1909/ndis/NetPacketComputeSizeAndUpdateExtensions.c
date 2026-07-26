/*
 * XREFs of NetPacketComputeSizeAndUpdateExtensions @ 0x1C00C7960
 * Callers:
 *     <none>
 * Callees:
 *     ?NetPacketAssignLayoutWithArray@@YAXPEAPEAUNET_PACKET_EXTENSION_PRIVATE@@KPEAK@Z @ 0x1C0128450 (-NetPacketAssignLayoutWithArray@@YAXPEAPEAUNET_PACKET_EXTENSION_PRIVATE@@KPEAK@Z.c)
 */

__int64 __fastcall NetPacketComputeSizeAndUpdateExtensions(struct NET_PACKET_EXTENSION_PRIVATE **a1, unsigned int a2)
{
  ULONG RecommendedSharedDataAlignment; // esi
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  if ( RecommendedSharedDataAlignment < 0x10 )
    RecommendedSharedDataAlignment = 16;
  NetPacketAssignLayoutWithArray(a1, a2, &v6);
  return -RecommendedSharedDataAlignment & (RecommendedSharedDataAlignment + v6 - 1);
}
