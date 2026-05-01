/*
 * XREFs of ?_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z @ 0x18029375C
 * Callers:
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_95195f8b8985acc6876e34aaa42f7180___ @ 0x180292EF8 (CCrashDetector--StartMonitoringThreadOfWindow__lambda_95195f8b8985acc6876e34aaa42f7180___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x18013F25C (-_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z.c)
 */

__int64 __fastcall CCrashDetector::_StartMonitoringThreadOfWindow(
        PVOID pv,
        HWND hWnd,
        struct CCrashDetector::CHandler *a3)
{
  signed int Error; // ebx
  DWORD WindowThreadProcessId; // ebp
  char *v7; // rax
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)pv + 2) )
  {
    Error = -2147418113;
  }
  else
  {
    WindowThreadProcessId = GetWindowThreadProcessId(hWnd, &dwProcessId);
    if ( WindowThreadProcessId || (Error = ResultFromKnownLastError(), Error >= 0) )
    {
      v7 = (char *)OpenThread(0x100000u, 0, WindowThreadProcessId);
      if ( v7 )
        return (unsigned int)CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring(pv, v7, a3);
      Error = ResultFromKnownLastError();
    }
  }
  if ( a3 )
    (**(void (__fastcall ***)(struct CCrashDetector::CHandler *, __int64))a3)(a3, 1LL);
  return (unsigned int)Error;
}
