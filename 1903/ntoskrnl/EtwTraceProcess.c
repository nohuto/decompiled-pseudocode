/*
 * XREFs of EtwTraceProcess @ 0x140690330
 * Callers:
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     PspExitProcess @ 0x140671BFC (PspExitProcess.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x14008A644 (TraceLoggingProviderEnabled.c)
 *     IoSetThreadHardErrorMode @ 0x1400E50E0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpEnumerateAddressSpace @ 0x1405E9F34 (EtwpEnumerateAddressSpace.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140634D1C (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessStarted @ 0x14063531C (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x14063FB6C (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessEvent @ 0x140690504 (EtwpWriteProcessEvent.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406D5A64 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChange @ 0x1406E64C4 (EtwpWriteAppStateChange.c)
 *     EtwpLogProcessPerfCtrs @ 0x1408F4F00 (EtwpLogProcessPerfCtrs.c)
 */

void __fastcall EtwTraceProcess(ULONG_PTR BugCheckParameter1, __int16 a2)
{
  PVOID v4; // rbx
  BOOLEAN v5; // bl
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  PVOID v9; // [rsp+48h] [rbp-B8h] BYREF
  char v10[112]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[416]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v11, 0, 0x198uLL);
  v7 = 0LL;
  P = 0LL;
  v6 = 0LL;
  if ( a2 == 770 )
  {
    if ( (PerfGlobalGroupMask & 0xC004) != 0 )
    {
      v5 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace(BugCheckParameter1, 0LL, (int *)&PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v5);
    }
    if ( (PerfGlobalGroupMask & 8) != 0 )
      EtwpLogProcessPerfCtrs(BugCheckParameter1);
  }
  EtwpWriteProcessEvent(BugCheckParameter1, (__int64)&v7, (__int64)&v9);
  v4 = v9;
  if ( a2 == 769 && TraceLoggingProviderEnabled(&stru_140426650, 0, 0x600000000003uLL) )
  {
    memset(v10, 0, 0x62uLL);
    EtwpWriteProcessStarted(BugCheckParameter1, (int *)&v6, (__int64)v11, (unsigned __int16 *)&v7);
    EtwpInitStateChangeInfo(BugCheckParameter1, (__int64)v10);
    *(_WORD *)v10 = 0;
    EtwpWriteAppStateChange(v10);
    if ( !(unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
      LOWORD(v7) = 0;
    EtwpWriteAppStateChangeSummary(BugCheckParameter1, v10, 0LL, (__int64)v11, &v6, (unsigned __int16 *)&v7);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
