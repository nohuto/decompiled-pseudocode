/*
 * XREFs of NtGetCachedSigningLevel @ 0x18009EBE0
 * Callers:
 *     LdrpSetModuleSigningLevel @ 0x18008C170 (LdrpSetModuleSigningLevel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtGetCachedSigningLevel(
        HANDLE File,
        PULONG Flags,
        PSE_SIGNING_LEVEL SigningLevel,
        PUCHAR Thumbprint,
        PULONG ThumbprintSize,
        PULONG ThumbprintAlgorithm)
{
  NTSTATUS result; // eax

  result = 235;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
