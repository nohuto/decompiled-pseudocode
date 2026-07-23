/*
 * XREFs of WmipReferenceEntry @ 0x140613C30
 * Callers:
 *     WmipFindGEByGuid @ 0x1406137A0 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x140613888 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1406BF364 (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x1406CF574 (WmipSendEnableRequest.c)
 *     WmipGenerateRegistrationNotification @ 0x1407090E8 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x140709798 (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x14070BB0C (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x140752D24 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x140752DA4 (WmipFindMRByNames.c)
 *     WmipLegacyEtwWorker @ 0x140757650 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x140759C6C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x140759CFC (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x1408B45F8 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1408B4998 (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1408B56D0 (WmipLegacyEtwCallback.c)
 *     WmipFindISInDSByGuid @ 0x1408B591C (WmipFindISInDSByGuid.c)
 *     WmipUpdateDataSource @ 0x1408B5B08 (WmipUpdateDataSource.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall WmipReferenceEntry(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(BugCheckParameter2 + 24));
  if ( result <= 1 )
  {
    if ( result == 1 )
      KeBugCheckEx(0x14Au, 0LL, BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x14Au, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
