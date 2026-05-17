/*
 * XREFs of ZwQueryAttributesFile @ 0x1800A0A80
 * Callers:
 *     LdrpGetNtPathFromDosPath @ 0x180029D7C (LdrpGetNtPathFromDosPath.c)
 *     RtlDoesFileExists_UstrEx @ 0x18002A404 (RtlDoesFileExists_UstrEx.c)
 *     LdrpIsReparsePoint @ 0x1800347F0 (LdrpIsReparsePoint.c)
 *     LdrAddDllDirectory @ 0x18008F910 (LdrAddDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 *     LdrpResValidateFilePath @ 0x1800E5FC0 (LdrpResValidateFilePath.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryAttributesFile()
{
  __int64 result; // rax

  result = 61LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
