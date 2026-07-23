/*
 * XREFs of RtlExitUserThread @ 0x18006D500
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_18006CF40 @ 0x18006CF40 (sub_18006CF40.c)
 *     RtlUserThreadStart @ 0x18006D4B0 (RtlUserThreadStart.c)
 *     RtlUserFiberStart @ 0x18007F580 (RtlUserFiberStart.c)
 *     DbgUiRemoteBreakin @ 0x1800CD280 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D8020 (RtlpQueryProcessDebugInformationRemote.c)
 *     sub_1800D8220 @ 0x1800D8220 (sub_1800D8220.c)
 *     sub_1800F03F0 @ 0x1800F03F0 (sub_1800F03F0.c)
 * Callees:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 *     TpCheckTerminateWorker @ 0x18006D560 (TpCheckTerminateWorker.c)
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 *     ZwTerminateThread @ 0x18009D140 (ZwTerminateThread.c)
 */

void __cdecl __noreturn RtlExitUserThread(NTSTATUS ExitStatus)
{
  int ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  ThreadInformation = 0;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread, &ThreadInformation, 4u, 0LL) >= 0 )
  {
    if ( ThreadInformation )
      RtlExitUserProcess(ExitStatus);
  }
  LdrShutdownThread();
}
