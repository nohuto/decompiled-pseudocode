/*
 * XREFs of EtwpReleaseQueueEntry @ 0x140666EC8
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1405D3E30 (EtwpDeleteRegistrationObject.c)
 *     EtwpRundownNotifications @ 0x1405D4704 (EtwpRundownNotifications.c)
 *     EtwpQueueNotification @ 0x140666444 (EtwpQueueNotification.c)
 *     EtwpReceiveNotification @ 0x140666D3C (EtwpReceiveNotification.c)
 *     EtwpSendReplyDataBlock @ 0x1406D86A0 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x1406451F0 (PsReleaseProcessWakeCounter.c)
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
