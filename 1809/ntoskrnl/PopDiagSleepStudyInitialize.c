/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x140746760
 * Callers:
 *     PopDiagInitialize @ 0x1409D1B90 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
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
