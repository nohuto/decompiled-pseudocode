/*
 * XREFs of ZwQuerySecurityAttributesToken @ 0x18009F900
 * Callers:
 *     RtlpQueryPackageIdentityAttributes @ 0x18006A0D4 (RtlpQueryPackageIdentityAttributes.c)
 *     RtlQueryTokenHostIdAsUlong64 @ 0x180081E20 (RtlQueryTokenHostIdAsUlong64.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySecurityAttributesToken()
{
  __int64 result; // rax

  result = 340LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
