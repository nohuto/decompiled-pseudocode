/*
 * XREFs of ZwPowerInformation @ 0x18009D2B0
 * Callers:
 *     sub_1800847C0 @ 0x1800847C0 (sub_1800847C0.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1800EAA80 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1800EAED0 (RtlRestoreSystemBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x1800EAF30 (RtlUnlockBootStatusData.c)
 *     sub_1800EB25C @ 0x1800EB25C (sub_1800EB25C.c)
 *     sub_1801042F4 @ 0x1801042F4 (sub_1801042F4.c)
 *     sub_1801043F4 @ 0x1801043F4 (sub_1801043F4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS result; // eax

  result = 95;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
