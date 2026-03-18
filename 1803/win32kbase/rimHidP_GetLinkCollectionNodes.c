/*
 * XREFs of rimHidP_GetLinkCollectionNodes @ 0x1C00F0D7C
 * Callers:
 *     RIMIsParallelDevice @ 0x1C00ED2E8 (RIMIsParallelDevice.c)
 *     RIMRetrieveLinkCollection @ 0x1C00EDB24 (RIMRetrieveLinkCollection.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C0108B30 (RIMDiscoverCustomPTPSettings.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetLinkCollectionNodes(
        struct _HIDP_LINK_COLLECTION_NODE *a1,
        unsigned int *a2,
        struct _HIDP_PREPARSED_DATA *a3)
{
  if ( gpfnHidP_GetLinkCollectionNodes )
    return gpfnHidP_GetLinkCollectionNodes(a1, a2, a3);
  else
    return -1073741637;
}
