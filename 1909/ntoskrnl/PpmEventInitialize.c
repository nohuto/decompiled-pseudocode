/*
 * XREFs of PpmEventInitialize @ 0x140A22DE4
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 */

NTSTATUS PpmEventInitialize()
{
  NTSTATUS result; // eax

  result = EtwRegister(&PPM_ETW_PROVIDER, (PETWENABLECALLBACK)PpmEventTraceControlCallback, 0LL, &PpmEtwHandle);
  if ( result >= 0 )
  {
    PpmEtwRegistered = 1;
    return 0;
  }
  return result;
}
