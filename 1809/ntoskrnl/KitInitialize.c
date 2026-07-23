/*
 * XREFs of KitInitialize @ 0x1409DE5B4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     KitpInitAitSampleRate @ 0x1409DE5E8 (KitpInitAitSampleRate.c)
 */

NTSTATUS KitInitialize()
{
  NTSTATUS result; // eax

  KitpInitAitSampleRate();
  result = EtwRegister(&MS_Windows_AIT_Provider, 0LL, 0LL, &KitEtwHandle);
  if ( result < 0 )
    KitEtwHandle = 0LL;
  return result;
}
