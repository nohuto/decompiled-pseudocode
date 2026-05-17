/*
 * XREFs of ZwDeleteValueKey @ 0x1800A1CF0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180053704 (RtlpQueryRegistryValues.c)
 *     RtlApplyRXact @ 0x18008C520 (RtlApplyRXact.c)
 *     RtlInitializeRXact @ 0x18008DDA0 (RtlInitializeRXact.c)
 *     RtlDeleteRegistryValue @ 0x18008F3B0 (RtlDeleteRegistryValue.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E38F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800F05E0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

__int64 ZwDeleteValueKey()
{
  __int64 result; // rax

  result = 209LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
