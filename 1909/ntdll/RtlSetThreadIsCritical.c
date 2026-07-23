/*
 * XREFs of RtlSetThreadIsCritical @ 0x18008AD20
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     ZwQueryInformationThread @ 0x18009D330 (ZwQueryInformationThread.c)
 */

NTSTATUS __cdecl RtlSetThreadIsCritical(BOOLEAN NewValue, PBOOLEAN OldValue, BOOLEAN CheckFlag)
{
  NTSTATUS result; // eax
  int ThreadInformation; // [rsp+50h] [rbp+18h] BYREF

  if ( OldValue )
    *OldValue = 0;
  if ( CheckFlag && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return -1073741823;
  if ( !OldValue )
  {
LABEL_8:
    ThreadInformation = NewValue;
    return NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination, &ThreadInformation, 4u);
  }
  result = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination, &ThreadInformation, 4u, 0LL);
  if ( result >= 0 )
  {
    *OldValue = ThreadInformation;
    goto LABEL_8;
  }
  return result;
}
