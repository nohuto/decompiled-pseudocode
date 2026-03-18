/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x1405C0D74
 * Callers:
 *     EtwpReceiveNotification @ 0x1405C0E00 (EtwpReceiveNotification.c)
 *     EtwpDeleteRegistrationObject @ 0x1405C3E20 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1405C4714 (EtwpRundownNotifications.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405C4D5C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x140655F58 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x1406588A8 (EtwpNotifyGuid.c)
 *     EtwpQueueReply @ 0x140658E44 (EtwpQueueReply.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406CAE0C (EtwpReceiveReplyDataBlock.c)
 *     EtwpDisallowedGuidAddition @ 0x1408B50C4 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408B5378 (EtwpDisallowedGuidRemoval.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408C0640 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
