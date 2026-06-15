/*
 * XREFs of ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180051DE0
 * Callers:
 *     <none>
 * Callees:
 *     ServiceStart @ 0x180051BF8 (ServiceStart.c)
 *     ReportStatusToSCMgr @ 0x180051CD0 (ReportStatusToSCMgr.c)
 */

__int64 __fastcall AudioSrvStartupThread(PVOID Parameter, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // rdi

  v5 = ServiceStart(*(struct SERVICE_STATUS_HANDLE__ **)Parameter, *((_DWORD *)Parameter + 2), a3, a4);
  v6 = 0LL;
  if ( v5 )
  {
    dwServiceError = v5;
    ReportStatusToSCMgr(3, 0, 5000);
    SetEvent(hEventShutdown);
  }
  if ( *((_DWORD *)Parameter + 2) )
  {
    do
    {
      HeapFree(hHeap, 0, *(LPVOID *)(*((_QWORD *)Parameter + 2) + 8 * v6));
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *((_DWORD *)Parameter + 2) );
  }
  HeapFree(hHeap, 0, *((LPVOID *)Parameter + 2));
  HeapFree(hHeap, 0, Parameter);
  return 0LL;
}
