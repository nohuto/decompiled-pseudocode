/*
 * XREFs of ZwTerminateProcess @ 0x18009CC60
 * Callers:
 *     sub_180007200 @ 0x180007200 (sub_180007200.c)
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_180022CE8 @ 0x180022CE8 (sub_180022CE8.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180069034 @ 0x180069034 (sub_180069034.c)
 *     sub_1800692D0 @ 0x1800692D0 (sub_1800692D0.c)
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 *     RtlUserThreadStart @ 0x18006D4B0 (RtlUserThreadStart.c)
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 *     sub_18008C4D0 @ 0x18008C4D0 (sub_18008C4D0.c)
 *     sub_18008C7D4 @ 0x18008C7D4 (sub_18008C7D4.c)
 *     __report_gsfailure @ 0x18008C800 (__report_gsfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CBF80 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800D4F38 @ 0x1800D4F38 (sub_1800D4F38.c)
 *     sub_1800D576C @ 0x1800D576C (sub_1800D576C.c)
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 *     sub_1800D6400 @ 0x1800D6400 (sub_1800D6400.c)
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800DC838 @ 0x1800DC838 (sub_1800DC838.c)
 *     RtlAssert @ 0x1800EA470 (RtlAssert.c)
 *     sub_1800F9050 @ 0x1800F9050 (sub_1800F9050.c)
 *     sub_18010F06C @ 0x18010F06C (sub_18010F06C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 44;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
