/*
 * XREFs of MmIsVerifierEnabled @ 0x140960530
 * Callers:
 *     PopVerifierFlushMemoryBeforeSleep @ 0x140596190 (PopVerifierFlushMemoryBeforeSleep.c)
 *     MiInitializeBootDefaults @ 0x140A1F230 (MiInitializeBootDefaults.c)
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
