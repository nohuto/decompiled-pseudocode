/*
 * XREFs of MmIsVerifierEnabled @ 0x140921490
 * Callers:
 *     PopVerifierFlushMemoryBeforeSleep @ 0x1405652FC (PopVerifierFlushMemoryBeforeSleep.c)
 *     InitializePagedPool @ 0x1409B7280 (InitializePagedPool.c)
 *     MiInitializeBootDefaults @ 0x1409DBEF0 (MiInitializeBootDefaults.c)
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
