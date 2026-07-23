/*
 * XREFs of EtwpReleaseQueueEntry @ 0x1405C1D9C
 * Callers:
 *     EtwpQueueNotification @ 0x1405C154C (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x1405C1E00 (EtwpReceiveNotification.c)
 *     EtwpDeleteRegistrationObject @ 0x1405C4E20 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1405C5714 (EtwpRundownNotifications.c)
 *     EtwpSendReplyDataBlock @ 0x14065A070 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x14061D390 (PsReleaseProcessWakeCounter.c)
 */

void __fastcall EtwpReleaseQueueEntry(PVOID *P, int a2)
{
  PVOID v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    ObfDereferenceObject(P[4]);
    v4 = P[5];
    if ( v4 )
      PsReleaseProcessWakeCounter(v4, P[3]);
  }
  _m_prefetchw((char *)P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}
