/*
 * XREFs of ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180112060
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ReportStatusToSCMgr @ 0x180060B78 (ReportStatusToSCMgr.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ?MyServiceTerminate@@YAXXZ @ 0x180112594 (-MyServiceTerminate@@YAXXZ.c)
 */

void __fastcall OnServiceShutdown(void *a1)
{
  HANDLE v1; // rbx
  char *v2; // rcx
  DWORD CurrentProcessId; // eax
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  DWORD ThreadId; // [rsp+30h] [rbp-9h] BYREF
  DWORD v7; // [rsp+34h] [rbp-5h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  DWORD *v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  DWORD *p_ThreadId; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v1 = 0LL;
  hEventShutdownComplete = CreateEventW(0LL, 1, 0, 0LL);
  if ( hEventShutdownComplete )
    v1 = CreateThread(0LL, 0LL, ShutdownKeepaliveThread, 0LL, 0, &ThreadId);
  MyServiceTerminate();
  if ( hEventShutdownWait )
    UnregisterWaitEx(hEventShutdownWait, 0LL);
  if ( hEventShutdown )
    CloseHandle(hEventShutdown);
  v2 = (char *)hEventShutdownComplete;
  if ( hEventShutdownComplete )
  {
    SetEvent(hEventShutdownComplete);
    v2 = (char *)hEventShutdownComplete;
  }
  if ( v1 )
  {
    WaitForSingleObject(v1, 0xFFFFFFFF);
    if ( v1 != (HANDLE)-1LL )
      CloseHandle(v1);
    v2 = (char *)hEventShutdownComplete;
  }
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    hEventShutdownComplete = 0LL;
  }
  if ( (unsigned int)dword_1801B54B8 > 4 )
  {
    CurrentProcessId = GetCurrentProcessId();
    v11 = 0;
    v14 = 0;
    v7 = CurrentProcessId;
    v9 = &v7;
    ThreadId = dwServiceError;
    p_ThreadId = &ThreadId;
    v10 = 4;
    v13 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1801B54B8, &unk_180178CB2, v4, v5, 4u, &pData);
  }
  ReportStatusToSCMgr(1, dwServiceError, 0);
}
