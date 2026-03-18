/*
 * XREFs of WmipReferenceEntry @ 0x140612C30
 * Callers:
 *     WmipFindGEByGuid @ 0x1406127A0 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x140612888 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1406BE0E4 (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x1406CE2F4 (WmipSendEnableRequest.c)
 *     WmipGenerateRegistrationNotification @ 0x140707E68 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x140708518 (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x14070A88C (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x140751B54 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x140751BD4 (WmipFindMRByNames.c)
 *     WmipLegacyEtwWorker @ 0x140756480 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x140758A9C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x140758B2C (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x1408B33B8 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1408B3758 (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1408B4430 (WmipLegacyEtwCallback.c)
 *     WmipFindISInDSByGuid @ 0x1408B467C (WmipFindISInDSByGuid.c)
 *     WmipUpdateDataSource @ 0x1408B4868 (WmipUpdateDataSource.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
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
