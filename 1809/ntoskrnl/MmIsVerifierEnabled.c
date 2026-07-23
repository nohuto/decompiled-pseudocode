/*
 * XREFs of MmIsVerifierEnabled @ 0x140922490
 * Callers:
 *     PopVerifierFlushMemoryBeforeSleep @ 0x1405662FC (PopVerifierFlushMemoryBeforeSleep.c)
 *     InitializePagedPool @ 0x1409B8280 (InitializePagedPool.c)
 *     MiInitializeBootDefaults @ 0x1409DCEF0 (MiInitializeBootDefaults.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmIsVerifierEnabled(PULONG VerifierFlags)
{
  if ( !VerifierFlags )
    return -1073741637;
  if ( !ViVerifierDriverAddedThunkListHead )
  {
    *VerifierFlags = 0;
    return -1073741637;
  }
  *VerifierFlags = MmVerifierData;
  return 0;
}
