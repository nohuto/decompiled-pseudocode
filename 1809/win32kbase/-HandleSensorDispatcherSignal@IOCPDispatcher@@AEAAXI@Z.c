/*
 * XREFs of ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0085B38
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0031710 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C0031A4C (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1C008AE40 (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall IOCPDispatcher::HandleSensorDispatcherSignal(IOCPDispatcher *this, unsigned int a2)
{
  __int64 v3; // rsi
  char *v4; // rbx
  __int64 v5; // rdx
  LPCWSTR *v6; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 642) )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("Did someone removed sensorDispatcher object?");
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v3, *((unsigned int *)this + 642), 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v4 = (char *)this + 40 * a2;
    v5 = *((_QWORD *)v4 + 3);
    if ( v5 )
    {
      if ( IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, v5, *((_QWORD *)v4 + 1), 1, v3) == *((_QWORD *)v4 + 3) )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v6, L"HandleSensorDispatcherSignal", 0LL);
        (*((void (__fastcall **)(_QWORD, _QWORD))v4 + 4))(*((_QWORD *)v4 + 2), *((_QWORD *)v4 + 5));
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v6);
      }
      else
      {
        IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher::SensorIOCPWCP *)(v4 + 8));
      }
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredMsgKM("Did someone cleaned-up sensorDispatcher object under us?");
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v4 + 8, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
}
