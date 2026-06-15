/*
 * XREFs of ?s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180102060
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ @ 0x180101F40 (-WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ.c)
 */

void __fastcall CConstraintModelResourceManager::s_WorkerThreadProc(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  BOOL v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v6 = CoInitializeEx(0LL, 0) >= 0;
  CConstraintModelResourceManager::WorkItemThreadProc((CConstraintModelResourceManager *)Context);
  if ( v6 )
    CoUninitialize();
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(Context + 232));
  if ( !*((_DWORD *)Context + 80) )
    SetThreadpoolWait(Wait, *((HANDLE *)Context + 28), 0LL);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
