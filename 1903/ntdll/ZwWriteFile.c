/*
 * XREFs of ZwWriteFile @ 0x18009C7E0
 * Callers:
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 *     sub_18006D2E4 @ 0x18006D2E4 (sub_18006D2E4.c)
 *     sub_180087200 @ 0x180087200 (sub_180087200.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EAAE0 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EADE0 (RtlRestoreBootStatusDefaults.c)
 *     sub_1800EB12C @ 0x1800EB12C (sub_1800EB12C.c)
 *     sub_18010E4F4 @ 0x18010E4F4 (sub_18010E4F4.c)
 *     sub_18010E724 @ 0x18010E724 (sub_18010E724.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  NTSTATUS result; // eax

  result = 8;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
