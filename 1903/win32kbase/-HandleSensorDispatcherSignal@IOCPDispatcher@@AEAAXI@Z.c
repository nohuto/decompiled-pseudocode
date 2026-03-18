/*
 * XREFs of ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0099134
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0034660 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C00347B4 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1C009CF14 (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IOCPDispatcher::HandleSensorDispatcherSignal(IOCPDispatcher *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  char *v5; // rdi
  __int64 v6; // rax
  LPCWSTR *v7; // [rsp+60h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 642) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v4, *((unsigned int *)this + 642), 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v5 = (char *)this + 40 * (unsigned int)a2;
    v6 = *((_QWORD *)v5 + 3);
    if ( v6 )
    {
      if ( IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, v6, *((_QWORD *)v5 + 1), 1, a2) == *((_QWORD *)v5 + 3) )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v7, L"HandleSensorDispatcherSignal", 0LL);
        (*((void (__fastcall **)(_QWORD, _QWORD))v5 + 4))(*((_QWORD *)v5 + 2), *((_QWORD *)v5 + 5));
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v7);
      }
      else
      {
        IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher::SensorIOCPWCP *)(v5 + 8));
      }
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, v5 + 8, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
}
