/*
 * XREFs of ZwQueryAttributesFile @ 0x18009D630
 * Callers:
 *     RtlDoesFileExists_UstrEx @ 0x180025E00 (RtlDoesFileExists_UstrEx.c)
 *     LdrpGetNtPathFromDosPath @ 0x180029C14 (LdrpGetNtPathFromDosPath.c)
 *     LdrpIsReparsePoint @ 0x180054A60 (LdrpIsReparsePoint.c)
 *     LdrAddDllDirectory @ 0x18008C8A0 (LdrAddDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 *     LdrpResValidateFilePath @ 0x1800E332C (LdrpResValidateFilePath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  NTSTATUS result; // eax

  result = 61;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
