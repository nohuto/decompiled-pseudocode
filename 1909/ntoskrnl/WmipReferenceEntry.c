/*
 * XREFs of WmipReferenceEntry @ 0x140695CE4
 * Callers:
 *     WmipFindGEByGuid @ 0x1405C0B60 (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x140695ADC (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x1406D1A40 (WmipSendEnableRequest.c)
 *     WmipPrepareWnodeSI @ 0x140713800 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140734FA8 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x140735640 (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x140738420 (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x14077A184 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x14077A208 (WmipFindMRByNames.c)
 *     WmipUpdateDataSource @ 0x14077DAB4 (WmipUpdateDataSource.c)
 *     WmipFindISInDSByGuid @ 0x14077DD68 (WmipFindISInDSByGuid.c)
 *     WmipLegacyEtwWorker @ 0x14077F0F0 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x14078130C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x14078139C (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x1408F0184 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1408F052C (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1408F1210 (WmipLegacyEtwCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
