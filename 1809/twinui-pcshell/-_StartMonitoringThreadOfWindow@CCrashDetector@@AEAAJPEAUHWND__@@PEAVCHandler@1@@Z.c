/*
 * XREFs of ?_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z @ 0x18023D56C
 * Callers:
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_39295c937e63843bb23ada811bad7673___ @ 0x18023CC88 (CCrashDetector--StartMonitoringThreadOfWindow__lambda_39295c937e63843bb23ada811bad7673___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x1801179BC (-_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z.c)
 */

__int64 __fastcall CCrashDetector::_StartMonitoringThreadOfWindow(
        _QWORD *pv,
        HWND hWnd,
        struct CCrashDetector::CHandler *a3)
{
  HWND v4; // r8
  signed int Error; // ebx
  DWORD WindowThreadProcessId; // esi
  char *v8; // rax
  DWORD v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = hWnd;
  Error = pv[2] != 0LL ? 0x8000FFFF : 0;
  if ( !pv[2] )
  {
    WindowThreadProcessId = GetWindowThreadProcessId(hWnd, &v10);
    if ( WindowThreadProcessId || (Error = ResultFromKnownLastError(), Error >= 0) )
    {
      v8 = (char *)OpenThread(0x100000u, 0, WindowThreadProcessId);
      if ( v8 )
        return (unsigned int)CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring(pv, v8, a3);
      Error = ResultFromKnownLastError();
    }
  }
  if ( a3 )
    (**(void (__fastcall ***)(struct CCrashDetector::CHandler *, __int64, HWND))a3)(a3, 1LL, v4);
  return (unsigned int)Error;
}
