/*
 * XREFs of ZwReadFile @ 0x18009C7A0
 * Callers:
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 *     sub_180087200 @ 0x180087200 (sub_180087200.c)
 *     sub_1800E29E8 @ 0x1800E29E8 (sub_1800E29E8.c)
 *     RtlCheckBootStatusIntegrity @ 0x1800EA920 (RtlCheckBootStatusIntegrity.c)
 *     sub_1800EB12C @ 0x1800EB12C (sub_1800EB12C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadFile(
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

  result = 6;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
