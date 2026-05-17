/*
 * XREFs of RtlExitUserThread @ 0x18005A8F0
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     EtwpLogger @ 0x180059EE0 (EtwpLogger.c)
 *     RtlUserThreadStart @ 0x18005A8A0 (RtlUserThreadStart.c)
 *     RtlUserFiberStart @ 0x180081BC0 (RtlUserFiberStart.c)
 *     DbgUiRemoteBreakin @ 0x1800CEAD0 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800DA190 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800DA390 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3320 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     LdrShutdownThread @ 0x1800232A0 (LdrShutdownThread.c)
 *     TpCheckTerminateWorker @ 0x18005A950 (TpCheckTerminateWorker.c)
 *     RtlExitUserProcess @ 0x18006CF90 (RtlExitUserProcess.c)
 *     ZwQueryInformationThread @ 0x1800A0780 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x1800A0D40 (NtTerminateThread.c)
 */

void __fastcall __noreturn RtlExitUserThread(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( (int)ZwQueryInformationThread(-2LL, 12LL, &v6) < 0 || !v6 )
  {
    LdrShutdownThread(v3, v2, v4, v5);
    TpCheckTerminateWorker(0LL);
    NtTerminateThread(0LL, a1);
  }
  RtlExitUserProcess(a1);
  JUMPOUT(0x18005A945LL);
}
