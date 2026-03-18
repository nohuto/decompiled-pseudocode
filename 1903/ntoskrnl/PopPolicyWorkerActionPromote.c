/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x140729B00
 * Callers:
 *     PopPolicyWorkerThread @ 0x140131900 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1400EE3BC (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x14015E7AC (PopSetPowerActionState.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerActionPromote()
{
  char v1; // bl
  int v2; // ecx

  PopAcquirePolicyLock();
  qword_1404431F0 = (__int64)KeGetCurrentThread();
  if ( !(_BYTE)PopAction )
    goto LABEL_2;
  v1 = PopAction;
  if ( !byte_140443041 )
  {
    if ( (PopAction & 2) == 0 )
      goto LABEL_2;
    PopSetPowerActionState(1);
    v2 = 2;
    goto LABEL_12;
  }
  if ( byte_140443041 != 2 )
    goto LABEL_2;
  if ( (int)PopIssueActionRequest(1, (POWER_ACTION)qword_140443044, SHIDWORD(qword_140443044), dword_14044304C) >= 0 )
  {
    LOBYTE(PopAction) = ~v1 & PopAction;
    goto LABEL_2;
  }
  if ( byte_140443041 != 2 )
  {
    v2 = 1;
LABEL_12:
    PopGetPolicyWorker(v2);
  }
LABEL_2:
  qword_1404431F0 = 0LL;
  PopReleasePolicyLock();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
