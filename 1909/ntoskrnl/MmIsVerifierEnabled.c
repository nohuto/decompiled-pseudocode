/*
 * XREFs of MmIsVerifierEnabled @ 0x140960530
 * Callers:
 *     PopVerifierFlushMemoryBeforeSleep @ 0x140596190 (PopVerifierFlushMemoryBeforeSleep.c)
 *     ExpIsClipSpRunningUnderVrfIrqlCheck @ 0x1405B23A4 (ExpIsClipSpRunningUnderVrfIrqlCheck.c)
 *     MiInitializeBootDefaults @ 0x140A1F410 (MiInitializeBootDefaults.c)
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
