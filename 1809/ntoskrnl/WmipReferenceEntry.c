/*
 * XREFs of WmipReferenceEntry @ 0x140612C30
 * Callers:
 *     WmipFindGEByGuid @ 0x1406127A0 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x140612888 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1406BE0C4 (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x1406CE2D4 (WmipSendEnableRequest.c)
 *     WmipGenerateRegistrationNotification @ 0x140707E48 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x1407084F8 (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x14070A86C (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x140751B34 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x140751BB4 (WmipFindMRByNames.c)
 *     WmipLegacyEtwWorker @ 0x140756460 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x140758A7C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x140758B0C (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x1408B3398 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1408B3738 (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1408B4410 (WmipLegacyEtwCallback.c)
 *     WmipFindISInDSByGuid @ 0x1408B465C (WmipFindISInDSByGuid.c)
 *     WmipUpdateDataSource @ 0x1408B4848 (WmipUpdateDataSource.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
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
