/*
 * XREFs of ?s_WorkerThreadProc@PhoneTopology@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180149810
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800522DC (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?WorkItemThreadProc@PhoneTopology@@AEAAXXZ @ 0x1801496EC (-WorkItemThreadProc@PhoneTopology@@AEAAXXZ.c)
 */

void __fastcall PhoneTopology::s_WorkerThreadProc(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  BOOL v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  if ( Context )
  {
    v6 = CoInitializeEx(0LL, 0) >= 0;
    PhoneTopology::WorkItemThreadProc((PhoneTopology *)Context);
    if ( v6 )
      CoUninitialize();
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)(Context + 48));
    if ( !*((_DWORD *)Context + 44) )
      SetThreadpoolWait(Wait, *((HANDLE *)Context + 5), 0LL);
    if ( v8 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
