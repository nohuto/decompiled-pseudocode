/*
 * XREFs of KitInitialize @ 0x140A20134
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x140718540 (EtwRegister.c)
 *     KitpInitAitSampleRate @ 0x140A20168 (KitpInitAitSampleRate.c)
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
