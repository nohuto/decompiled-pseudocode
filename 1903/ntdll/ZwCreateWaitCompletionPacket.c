/*
 * XREFs of ZwCreateWaitCompletionPacket @ 0x18009DF70
 * Callers:
 *     sub_18002EBF0 @ 0x18002EBF0 (sub_18002EBF0.c)
 *     TpAllocWait @ 0x180031130 (TpAllocWait.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 197;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
