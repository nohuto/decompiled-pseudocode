/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x140666F2C
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1405D3E30 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1405D4704 (EtwpRundownNotifications.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140665E24 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpReceiveNotification @ 0x140666D3C (EtwpReceiveNotification.c)
 *     EtwpNotifyGuid @ 0x1406B63E0 (EtwpNotifyGuid.c)
 *     EtwpQueueReply @ 0x1406D8780 (EtwpQueueReply.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406EB2C8 (EtwpReceiveReplyDataBlock.c)
 *     EtwpDisallowedGuidAddition @ 0x1408F1F54 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408F2208 (EtwpDisallowedGuidRemoval.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408FD480 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
