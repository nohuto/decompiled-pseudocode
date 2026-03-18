/*
 * XREFs of KitInitialize @ 0x140A20314
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 *     KitpInitAitSampleRate @ 0x140A20348 (KitpInitAitSampleRate.c)
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
