/*
 * XREFs of ZwGetNlsSectionPtr @ 0x18009ED00
 * Callers:
 *     RtlpGetNormalization @ 0x18007E30C (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  NTSTATUS result; // eax

  result = 244;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
