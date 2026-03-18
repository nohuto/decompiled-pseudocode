/*
 * XREFs of ??0CWatchdogTimer@@QEAA@XZ @ 0x180063974
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@@Z @ 0x18006318C (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180063A40 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

CWatchdogTimer *__fastcall CWatchdogTimer::CWatchdogTimer(CWatchdogTimer *this)
{
  char *v1; // rdi
  char *WaitableTimerW; // rax
  char *Thread; // rax
  signed int LastError; // eax
  char v7; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  v1 = (char *)this + 8;
  *((_QWORD *)this + 1) = 0LL;
  *((_WORD *)this + 8) = 0;
  WaitableTimerW = (char *)CreateWaitableTimerW(0LL, 1, 0LL);
  if ( v1 != &v7 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v1,
      WaitableTimerW);
    WaitableTimerW = 0LL;
  }
  if ( (unsigned __int64)(WaitableTimerW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(WaitableTimerW);
  Thread = (char *)CreateThread(0LL, 0LL, CWatchdogTimer::ThreadEntryPoint, this, 4u, 0LL);
  if ( this != (CWatchdogTimer *)&v8 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this,
      Thread);
    Thread = 0LL;
  }
  if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(Thread);
  if ( !SetThreadPriority(*(HANDLE *)this, 15) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
  }
  ResumeThread(*(HANDLE *)this);
  return this;
}
