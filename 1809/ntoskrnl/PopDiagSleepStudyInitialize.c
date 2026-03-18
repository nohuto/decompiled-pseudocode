/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x140745590
 * Callers:
 *     PopDiagInitialize @ 0x1409D0B90 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1406BE560 (EtwRegister.c)
 */

NTSTATUS PopDiagSleepStudyInitialize()
{
  NTSTATUS result; // eax

  if ( PopDiagSleepStudyHandleRegistered )
    return -1073740008;
  result = EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &PopDiagSleepStudyHandle);
  if ( result >= 0 )
    PopDiagSleepStudyHandleRegistered = 1;
  return result;
}
