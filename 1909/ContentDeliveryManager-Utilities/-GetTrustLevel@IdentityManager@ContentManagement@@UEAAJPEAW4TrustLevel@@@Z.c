/*
 * XREFs of ?GetTrustLevel@IdentityManager@ContentManagement@@UEAAJPEAW4TrustLevel@@@Z @ 0x18000C050
 * Callers:
 *     ?GetTrustLevel@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x18001E420 (-GetTrustLevel@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDA@.c)
 *     ?GetTrustLevel@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x180023910 (-GetTrustLevel@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@WCI@EAAJPE.c)
 *     ?GetTrustLevel@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180044E90 (-GetTrustLevel@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAW4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::IdentityManager::GetTrustLevel(
        ContentManagement::IdentityManager *this,
        enum TrustLevel *a2)
{
  *a2 = PartialTrust;
  return 0LL;
}
