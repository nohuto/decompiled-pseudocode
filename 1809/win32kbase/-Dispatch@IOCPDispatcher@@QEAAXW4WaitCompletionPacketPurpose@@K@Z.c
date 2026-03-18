/*
 * XREFs of ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0031710
 * Callers:
 *     UserDispatchMITCompletion @ 0x1C00316A0 (UserDispatchMITCompletion.c)
 *     UserProcessMITInput @ 0x1C01530AC (UserProcessMITInput.c)
 * Callees:
 *     ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C002F6D0 (-HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0085B38 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 */

void __fastcall IOCPDispatcher::Dispatch(IOCPDispatcher *a1, int a2, unsigned int a3)
{
  if ( a2 == 1 )
  {
    IOCPDispatcher::HandleSensorDispatcherSignal(a1, a3);
  }
  else if ( a2 == 2 )
  {
    IOCPDispatcher::HandleThreadDispatcherSignal(a1, a3);
  }
  else
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, a2, a3, 0LL, 0LL, 0LL, 0LL, 0);
  }
}
