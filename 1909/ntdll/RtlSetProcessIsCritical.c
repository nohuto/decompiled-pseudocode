/*
 * XREFs of RtlSetProcessIsCritical @ 0x18008BBC0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D1B0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x18009D210 (NtSetInformationProcess.c)
 */

NTSTATUS __cdecl RtlSetProcessIsCritical(BOOLEAN NewValue, PBOOLEAN OldValue, BOOLEAN CheckFlag)
{
  NTSTATUS result; // eax
  int ProcessInformation; // [rsp+50h] [rbp+18h] BYREF

  if ( OldValue )
    *OldValue = 0;
  if ( CheckFlag && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return -1073741823;
  if ( !OldValue )
  {
LABEL_8:
    ProcessInformation = NewValue;
    return NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
  }
  result = NtQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessBreakOnTermination,
             &ProcessInformation,
             4u,
             0LL);
  if ( result >= 0 )
  {
    *OldValue = ProcessInformation;
    goto LABEL_8;
  }
  return result;
}
