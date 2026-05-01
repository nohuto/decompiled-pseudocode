/*
 * XREFs of CrmRegistrationReadyQueueAdd @ 0x180034A90
 * Callers:
 *     CrmActivityListenerCallback @ 0x180033AE0 (CrmActivityListenerCallback.c)
 * Callees:
 *     CrmRegistrationNotify @ 0x180034BE0 (CrmRegistrationNotify.c)
 */

__int64 __fastcall CrmRegistrationReadyQueueAdd(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  DWORD CurrentThreadId; // eax
  _QWORD *v6; // r8
  _QWORD *v7; // rax

  v2 = *(_QWORD *)(a1 + 16);
  RtlAcquireSRWLockExclusive(&qword_18009BC78);
  CurrentThreadId = GetCurrentThreadId();
  v6 = (_QWORD *)qword_18009BC90;
  LODWORD(qword_18009BC80) = CurrentThreadId;
  v7 = (_QWORD *)(a2 + 16);
  if ( *(__int64 **)qword_18009BC90 != &qword_18009BC88 )
    __fastfail(3u);
  *v7 = &qword_18009BC88;
  *(_QWORD *)(a2 + 24) = v6;
  *v6 = v7;
  LODWORD(qword_18009BC80) = 0;
  qword_18009BC90 = a2 + 16;
  RtlConvertSRWLockExclusiveToShared(&qword_18009BC78);
  CrmRegistrationNotify(a1, a2, 0LL);
  RtlReleaseSRWLockShared(&qword_18009BC78);
  return CrmLogRegistrationReadyQueueAdd(v2);
}
