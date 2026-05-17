/*
 * XREFs of RtlExitUserThread @ 0x18006D750
 * Callers:
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     EtwpLogger @ 0x18006D190 (EtwpLogger.c)
 *     RtlUserThreadStart @ 0x18006D700 (RtlUserThreadStart.c)
 *     RtlUserFiberStart @ 0x18007FC20 (RtlUserFiberStart.c)
 *     DbgUiRemoteBreakin @ 0x1800CD340 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D80E0 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D82E0 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F04D0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     RtlExitUserProcess @ 0x18006B150 (RtlExitUserProcess.c)
 *     TpCheckTerminateWorker @ 0x18006D7B0 (TpCheckTerminateWorker.c)
 *     ZwQueryInformationThread @ 0x18009D330 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x18009D8F0 (NtTerminateThread.c)
 */

void __fastcall __noreturn RtlExitUserThread(unsigned int a1)
{
  __int64 v2; // rdx
  struct _RTLP_FLS_CONTEXT *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( (int)ZwQueryInformationThread(-2LL, 12LL, &v6, 4LL, 0LL) < 0 || !v6 )
  {
    LdrShutdownThread(v3, v2, v4, v5);
    TpCheckTerminateWorker(0LL);
    NtTerminateThread(0LL, a1);
  }
  RtlExitUserProcess(a1);
  JUMPOUT(0x18006D7A5LL);
}
