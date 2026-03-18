/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x14072AE70
 * Callers:
 *     PopPolicyWorkerThread @ 0x140132110 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1400D5B48 (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x14015EE4C (PopSetPowerActionState.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerActionPromote()
{
  char v1; // bl
  int v2; // ecx

  PopAcquirePolicyLock();
  qword_140443170 = (__int64)KeGetCurrentThread();
  if ( !(_BYTE)PopAction )
    goto LABEL_2;
  v1 = PopAction;
  if ( !byte_140442FC1 )
  {
    if ( (PopAction & 2) == 0 )
      goto LABEL_2;
    PopSetPowerActionState(1);
    v2 = 2;
    goto LABEL_12;
  }
  if ( byte_140442FC1 != 2 )
    goto LABEL_2;
  if ( (int)PopIssueActionRequest(1, (POWER_ACTION)qword_140442FC4, SHIDWORD(qword_140442FC4), dword_140442FCC) >= 0 )
  {
    LOBYTE(PopAction) = ~v1 & PopAction;
    goto LABEL_2;
  }
  if ( byte_140442FC1 != 2 )
  {
    v2 = 1;
LABEL_12:
    PopGetPolicyWorker(v2);
  }
LABEL_2:
  qword_140443170 = 0LL;
  PopReleasePolicyLock();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
