/*
 * XREFs of ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x18013F25C
 * Callers:
 *     CCrashDetector::TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818___ @ 0x18013B0D4 (CCrashDetector--TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818.c)
 *     ?_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z @ 0x18029375C (-_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring(
        PVOID pv,
        char *hObject,
        struct CCrashDetector::CHandler *a3)
{
  char *v6; // rdi
  struct CCrashDetector::CHandler *v7; // rbx
  signed int Error; // esi
  char *v9; // rcx
  PTP_WAIT ThreadpoolWait; // rax
  void (__fastcall ***v11)(_QWORD, __int64); // rcx

  v6 = hObject;
  v7 = a3;
  if ( !a3 )
    goto LABEL_7;
  if ( *((_QWORD *)pv + 2) )
  {
    Error = -2147418113;
    goto LABEL_14;
  }
  v9 = (char *)*((_QWORD *)pv + 1);
  v6 = 0LL;
  *((_QWORD *)pv + 1) = 0LL;
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
  *((_QWORD *)pv + 1) = hObject;
  if ( !hObject )
  {
LABEL_7:
    Error = -2147024809;
    goto LABEL_14;
  }
  ThreadpoolWait = CreateThreadpoolWait(CCrashDetector::s_ObjectSignaledHandler, pv, 0LL);
  *((_QWORD *)pv + 2) = ThreadpoolWait;
  if ( ThreadpoolWait )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      goto LABEL_14;
  }
  v11 = *(void (__fastcall ****)(_QWORD, __int64))pv;
  v7 = 0LL;
  *(_QWORD *)pv = 0LL;
  if ( v11 )
    (**v11)(v11, 1LL);
  *(_QWORD *)pv = a3;
  SetThreadpoolWait(*((PTP_WAIT *)pv + 2), *((HANDLE *)pv + 1), 0LL);
LABEL_14:
  if ( v7 )
    (**(void (__fastcall ***)(struct CCrashDetector::CHandler *, __int64))v7)(v7, 1LL);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  return (unsigned int)Error;
}
