/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x14075FA20
 * Callers:
 *     PopDiagInitialize @ 0x140A06520 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
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
