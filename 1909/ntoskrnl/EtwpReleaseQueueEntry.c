/*
 * XREFs of EtwpReleaseQueueEntry @ 0x1406942E8
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1405D4330 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1405D4C04 (EtwpRundownNotifications.c)
 *     EtwpQueueNotification @ 0x140693858 (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x140694158 (EtwpReceiveNotification.c)
 *     EtwpSendReplyDataBlock @ 0x1406AA8FC (EtwpSendReplyDataBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x140658D40 (PsReleaseProcessWakeCounter.c)
 */

void __fastcall EtwpReleaseQueueEntry(char *P, int a2)
{
  __int64 v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    ObfDereferenceObject(*((PVOID *)P + 4));
    v4 = *((_QWORD *)P + 5);
    if ( v4 )
      PsReleaseProcessWakeCounter(v4, *((_QWORD *)P + 3));
  }
  _m_prefetchw(P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}
