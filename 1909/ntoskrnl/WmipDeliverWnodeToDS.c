/*
 * XREFs of WmipDeliverWnodeToDS @ 0x1408F1530
 * Callers:
 *     WmipEnableCollectionForNewGuid @ 0x140735154 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140735738 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     WmipSendWmiIrp @ 0x140713718 (WmipSendWmiIrp.c)
 */

__int64 __fastcall WmipDeliverWnodeToDS(UCHAR a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  return WmipSendWmiIrp(a1, *(_DWORD *)(a2 + 56), (UNICODE_STRING *)(a3 + 24), a4, a3, &v5);
}
