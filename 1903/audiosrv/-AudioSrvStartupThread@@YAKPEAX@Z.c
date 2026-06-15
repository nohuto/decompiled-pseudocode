/*
 * XREFs of ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180052310
 * Callers:
 *     <none>
 * Callees:
 *     ServiceStart @ 0x180052390 (ServiceStart.c)
 *     ReportStatusToSCMgr @ 0x180052468 (ReportStatusToSCMgr.c)
 */

__int64 __fastcall AudioSrvStartupThread(PVOID Parameter)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  __int64 v4; // rdi

  v2 = ServiceStart(*(struct SERVICE_STATUS_HANDLE__ **)Parameter);
  v4 = 0LL;
  if ( v2 )
  {
    dwServiceError = v2;
    ReportStatusToSCMgr(3LL, 0LL, 5000LL, v3);
    SetEvent(hEventShutdown);
  }
  if ( *((_DWORD *)Parameter + 2) )
  {
    do
    {
      HeapFree(hHeap, 0, *(LPVOID *)(*((_QWORD *)Parameter + 2) + 8 * v4));
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)Parameter + 2) );
  }
  HeapFree(hHeap, 0, *((LPVOID *)Parameter + 2));
  HeapFree(hHeap, 0, Parameter);
  return 0LL;
}
