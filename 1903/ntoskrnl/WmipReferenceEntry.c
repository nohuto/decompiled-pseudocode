/*
 * XREFs of WmipReferenceEntry @ 0x1406688C4
 * Callers:
 *     WmipFindGEByGuid @ 0x1405C0690 (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x1406686BC (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x1406D26E0 (WmipSendEnableRequest.c)
 *     WmipPrepareWnodeSI @ 0x140711A20 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140732D48 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x1407333E0 (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x1407361C0 (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x140776BA4 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x140776C28 (WmipFindMRByNames.c)
 *     WmipUpdateDataSource @ 0x14077B1E4 (WmipUpdateDataSource.c)
 *     WmipFindISInDSByGuid @ 0x14077B498 (WmipFindISInDSByGuid.c)
 *     WmipLegacyEtwWorker @ 0x14077C7D0 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x14077E8EC (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x14077E97C (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x1408F0874 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1408F0C1C (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1408F1900 (WmipLegacyEtwCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
