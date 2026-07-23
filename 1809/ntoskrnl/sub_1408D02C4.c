/*
 * XREFs of sub_1408D02C4 @ 0x1408D02C4
 * Callers:
 *     ExpTimeRefreshWork @ 0x14056F0E0 (ExpTimeRefreshWork.c)
 * Callees:
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     EtwUnregister @ 0x140708610 (EtwUnregister.c)
 */

int sub_1408D02C4()
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
