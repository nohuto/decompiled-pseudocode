/*
 * XREFs of CrmStateMonitorTestCleanup @ 0x18007E718
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180003718 (CrmStateMonitorCleanup.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall CrmStateMonitorTestCleanup(__int64 a1)
{
  BOOL result; // eax

  if ( *(_QWORD *)(a1 + 56) )
  {
    SetEvent(*(HANDLE *)(a1 + 64));
    WaitForSingleObject(*(HANDLE *)(a1 + 56), 0xFFFFFFFF);
    CloseHandle(*(HANDLE *)(a1 + 56));
    return CloseHandle(*(HANDLE *)(a1 + 64));
  }
  return result;
}
