/*
 * XREFs of sub_1408CF024 @ 0x1408CF024
 * Callers:
 *     ExpTimeRefreshWork @ 0x14056E0E0 (ExpTimeRefreshWork.c)
 * Callees:
 *     EtwWrite @ 0x1400CAD00 (EtwWrite.c)
 *     EtwRegister @ 0x1406BE560 (EtwRegister.c)
 *     EtwUnregister @ 0x140707390 (EtwUnregister.c)
 */

int sub_1408CF024()
{
  int result; // eax
  ULONGLONG RegHandle; // [rsp+40h] [rbp+8h] BYREF

  result = EtwRegister(&MS_Windows_LicensingStartServiceTrigger_Provider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    EtwWrite(RegHandle, &LicensingStartServiceTrigger, 0LL, 0, 0LL);
    return EtwUnregister(RegHandle);
  }
  return result;
}
