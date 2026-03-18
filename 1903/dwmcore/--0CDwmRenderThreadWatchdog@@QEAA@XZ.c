/*
 * XREFs of ??0CDwmRenderThreadWatchdog@@QEAA@XZ @ 0x1800DF08C
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1800DE88C (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800DF1A8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

CDwmRenderThreadWatchdog *__fastcall CDwmRenderThreadWatchdog::CDwmRenderThreadWatchdog(CDwmRenderThreadWatchdog *this)
{
  char *v1; // rbx
  char *WaitableTimerW; // rax
  unsigned int v4; // eax
  HANDLE CurrentProcess; // rdi
  HANDLE CurrentThread; // rbx
  HANDLE v7; // rax
  BOOL v8; // ebx
  signed int LastError; // eax
  __int64 v11; // r8
  bool v12; // sf
  HANDLE TargetHandle; // [rsp+48h] [rbp-20h] BYREF
  char v14; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  char v16; // [rsp+70h] [rbp+8h] BYREF

  v1 = (char *)this + 16;
  *(_QWORD *)this = &CWatchdogTimer::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 12) = 0;
  *((_BYTE *)this + 26) = 0;
  WaitableTimerW = (char *)CreateWaitableTimerW(0LL, 0, 0LL);
  if ( v1 != &v16 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v1,
      WaitableTimerW);
    WaitableTimerW = 0LL;
  }
  if ( (unsigned __int64)(WaitableTimerW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(WaitableTimerW);
  TargetHandle = 0LL;
  *(_QWORD *)this = &CDwmRenderThreadWatchdog::`vftable';
  v4 = CCommonRegistryData::m_initialWatchdogTelemetryTimeoutMilliseconds;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = v4;
  *((_DWORD *)this + 13) = CCommonRegistryData::m_recurringWatchdogTelemetryTimeoutMilliseconds;
  v14 = 1;
  CurrentProcess = GetCurrentProcess();
  CurrentThread = GetCurrentThread();
  v7 = GetCurrentProcess();
  v8 = DuplicateHandle(v7, CurrentThread, CurrentProcess, &TargetHandle, 0, 0, 2u);
  if ( v14 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 32,
      TargetHandle);
  if ( !v8 )
  {
    LastError = GetLastError();
    v12 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v12 = LastError < 0;
    }
    if ( v12 )
      ModuleFailFastForHRESULT((unsigned int)LastError, retaddr, v11);
  }
  return this;
}
