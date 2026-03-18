/*
 * XREFs of MiDelayFaultingThread @ 0x1402D259C
 * Callers:
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     MiWaitForAvailablePages @ 0x1402E58E8 (MiWaitForAvailablePages.c)
 */

NTSTATUS __fastcall MiDelayFaultingThread(int a1)
{
  _KPROCESS *Process; // rdx
  __int64 v2; // rax
  const LARGE_INTEGER *v3; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a1 == 1 )
  {
    v2 = *(unsigned __int16 *)&Process[1].Spare2[69];
    v3 = &MiHalfSecond;
    return MiWaitForAvailablePages(*(_QWORD *)(qword_140466188 + 8 * v2), v3);
  }
  if ( a1 == 2 )
  {
    v2 = *(unsigned __int16 *)&Process[1].Spare2[69];
    v3 = &Mi30Milliseconds;
    return MiWaitForAvailablePages(*(_QWORD *)(qword_140466188 + 8 * v2), v3);
  }
  return KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
}
