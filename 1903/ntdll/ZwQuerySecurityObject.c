/*
 * XREFs of ZwQuerySecurityObject @ 0x18009F170
 * Callers:
 *     sub_180086A04 @ 0x180086A04 (sub_180086A04.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CC690 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlIsUntrustedObject @ 0x1800E4B80 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySecurityObject()
{
  __int64 result; // rax

  result = 341LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
