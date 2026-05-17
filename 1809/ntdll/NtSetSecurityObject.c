/*
 * XREFs of NtSetSecurityObject @ 0x1800A36D0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008D104 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x18008F800 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

__int64 NtSetSecurityObject()
{
  __int64 result; // rax

  result = 416LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
