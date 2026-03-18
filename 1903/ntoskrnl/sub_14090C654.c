/*
 * XREFs of sub_14090C654 @ 0x14090C654
 * Callers:
 *     ExpTimeRefreshWork @ 0x14059D9F0 (ExpTimeRefreshWork.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwRegister @ 0x140718540 (EtwRegister.c)
 *     EtwUnregister @ 0x140748060 (EtwUnregister.c)
 */

int sub_14090C654()
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
