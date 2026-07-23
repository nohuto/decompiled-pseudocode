/*
 * XREFs of EtwTraceProcess @ 0x14066D6E8
 * Callers:
 *     PspExitProcess @ 0x140609E0C (PspExitProcess.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1400129D8 (TraceLoggingProviderEnabled.c)
 *     IoSetThreadHardErrorMode @ 0x1400EEDD0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpWriteAppStateChange @ 0x1405B28E4 (EtwpWriteAppStateChange.c)
 *     EtwpWriteProcessStarted @ 0x1405B3408 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405B3694 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1405B48C0 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpEnumerateAddressSpace @ 0x1405F6E18 (EtwpEnumerateAddressSpace.c)
 *     EtwpInitStateChangeInfo @ 0x14060EB80 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessEvent @ 0x14066D884 (EtwpWriteProcessEvent.c)
 *     EtwpLogProcessPerfCtrs @ 0x1408B96AC (EtwpLogProcessPerfCtrs.c)
 */

void __fastcall EtwTraceProcess(PEPROCESS Process, __int16 a2)
{
  PVOID v4; // rbx
  BOOLEAN v5; // bl
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  PVOID v9; // [rsp+48h] [rbp-B8h] BYREF
  char v10[112]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[416]; // [rsp+C0h] [rbp-40h] BYREF

  if ( a2 == 770 )
  {
    if ( (PerfGlobalGroupMask & 0xC004) != 0 )
    {
      v5 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace((ULONG_PTR)Process, 0LL, (int *)&PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v5);
    }
    if ( (PerfGlobalGroupMask & 8) != 0 )
      EtwpLogProcessPerfCtrs(Process);
  }
  EtwpWriteProcessEvent(Process, (__int64)&v7, (__int64)&v9);
  v4 = v9;
  if ( a2 == 769 && TraceLoggingProviderEnabled(&stru_1404012D0, 0, 0x600000000003uLL) )
  {
    EtwpWriteProcessStarted((__int64)Process, (int *)&v6, (__int64)v11, (unsigned __int16 *)&v7);
    EtwpInitStateChangeInfo((__int64)Process, (__int64)v10);
    *(_WORD *)v10 = 0;
    EtwpWriteAppStateChange();
    if ( !EtwpAppStateChangeSummaryShouldLogCommandLine((__int64)Process) )
      LOWORD(v7) = 0;
    EtwpWriteAppStateChangeSummary((__int64)Process, v10, 0LL, (__int64)v11, &v6, (unsigned __int16 *)&v7);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
