/*
 * XREFs of ZwDeviceIoControlFile @ 0x18009C7C0
 * Callers:
 *     sub_18008BF8C @ 0x18008BF8C (sub_18008BF8C.c)
 *     sub_1801140B8 @ 0x1801140B8 (sub_1801140B8.c)
 *     sub_1801141DC @ 0x1801141DC (sub_1801141DC.c)
 *     sub_18011459C @ 0x18011459C (sub_18011459C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS result; // eax

  result = 7;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
