/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x14069434C
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1405D4330 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1405D4C04 (EtwpRundownNotifications.c)
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140693238 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpReceiveNotification @ 0x140694158 (EtwpReceiveNotification.c)
 *     EtwpNotifyGuid @ 0x1406A9BCC (EtwpNotifyGuid.c)
 *     EtwpQueueReply @ 0x1406AA9DC (EtwpQueueReply.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406EC588 (EtwpReceiveReplyDataBlock.c)
 *     EtwpDisallowedGuidAddition @ 0x1408F1864 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408F1B18 (EtwpDisallowedGuidRemoval.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408FCE40 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
