/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x18009D000
 * Callers:
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 *     sub_180076A04 @ 0x180076A04 (sub_180076A04.c)
 *     sub_180087200 @ 0x180087200 (sub_180087200.c)
 *     sub_1800D0D7C @ 0x1800D0D7C (sub_1800D0D7C.c)
 *     sub_180114484 @ 0x180114484 (sub_180114484.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FSINFOCLASS FsInformationClass)
{
  NTSTATUS result; // eax

  result = 73;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
