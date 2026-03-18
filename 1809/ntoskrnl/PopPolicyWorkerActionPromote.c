/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x1406E2690
 * Callers:
 *     PopPolicyWorkerThread @ 0x140130580 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1400106A8 (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x140143404 (PopSetPowerActionState.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopIssueActionRequest @ 0x1406DE870 (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerActionPromote()
{
  char v1; // bl
  int v2; // ecx

  PopAcquirePolicyLock();
  if ( !PopAction )
    goto LABEL_2;
  v1 = PopAction;
  if ( !byte_140417701 )
  {
    if ( (PopAction & 2) == 0 )
      goto LABEL_2;
    PopSetPowerActionState(1);
    v2 = 2;
    goto LABEL_12;
  }
  if ( byte_140417701 != 2 )
    goto LABEL_2;
  if ( (int)PopIssueActionRequest(1, (POWER_ACTION)qword_140417704, SHIDWORD(qword_140417704), dword_14041770C) >= 0 )
  {
    PopAction &= ~v1;
    goto LABEL_2;
  }
  if ( byte_140417701 != 2 )
  {
    v2 = 1;
LABEL_12:
    PopGetPolicyWorker(v2);
  }
LABEL_2:
  PopReleasePolicyLock();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
