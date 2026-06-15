/*
 * XREFs of ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180044EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x180044FE0 (--_GSESSION_EVENT@@UEAAPEAXI@Z.c)
 *     ServicePowerEvent @ 0x1800502B0 (ServicePowerEvent.c)
 *     ReportStatusToSCMgr @ 0x180060B78 (ReportStatusToSCMgr.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 */

__int64 __fastcall ServiceCtrl(
        DWORD dwControl,
        __int64 dwEventType,
        struct tagWTSSESSION_NOTIFICATION *lpEventData,
        LPVOID lpContext)
{
  unsigned int v4; // esi
  DWORD v6; // ecx
  DWORD v7; // ecx
  DWORD v8; // ecx
  __int64 v9; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD *v11; // rbx
  void *v12; // rax

  v4 = dwEventType;
  v6 = dwControl - 1;
  if ( !v6 )
    goto LABEL_21;
  v7 = v6 - 3;
  if ( !v7 )
  {
    ReportStatusToSCMgr((unsigned int)dword_1801B74A4, 0LL, 0LL, lpContext);
    return 0LL;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_21:
    dwServiceError = 0;
    ReportStatusToSCMgr(3LL, 0LL, 5000LL, lpContext);
    SetEvent(hEventShutdown);
    return 0LL;
  }
  v9 = v8 - 8;
  if ( !(_DWORD)v9 )
    return ServicePowerEvent((unsigned int)dwEventType, lpEventData, lpEventData, lpContext);
  if ( (_DWORD)v9 == 1 )
  {
    if ( !(unsigned int)IsTSServiceSessionChangeSupported(v9, dwEventType, lpEventData, lpContext) )
      return 0LL;
    TS_SessionChanged(v4, lpEventData);
    ProcessHeap = GetProcessHeap();
    v11 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    if ( v11 )
    {
      *v11 = &SESSION_EVENT::`vftable';
      v11[2] = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    if ( !v11 )
      return 0LL;
    *((_DWORD *)v11 + 2) = v4;
    if ( lpEventData )
    {
      v12 = malloc(lpEventData->cbSize);
      v11[2] = v12;
      if ( !v12 )
      {
        AudSrvTraceLoggingErrorHelper("SESSION_EVENT::Initialize", 61, -2147024882);
        goto LABEL_19;
      }
      memcpy_0(v12, lpEventData, lpEventData->cbSize);
    }
    if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v11, 0LL) )
      return 0LL;
LABEL_19:
    SESSION_EVENT::`scalar deleting destructor'((SESSION_EVENT *)v11, 1u);
    return 0LL;
  }
  return 120LL;
}
