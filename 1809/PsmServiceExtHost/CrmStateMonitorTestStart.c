/*
 * XREFs of CrmStateMonitorTestStart @ 0x180070E30
 * Callers:
 *     CrmStateMonitorStart @ 0x180042CE8 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180032AB8 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorTestStart(_QWORD *lpParameter)
{
  unsigned int v1; // ebx
  _DWORD *v2; // rdx
  int v4; // ecx
  unsigned int v5; // eax
  const void *v6; // rdx
  void *v7; // r9
  HANDLE EventW; // rax
  HANDLE Thread; // rax

  v1 = 0;
  v2 = lpParameter + 9;
  lpParameter[5] = lpParameter + 9;
  v4 = *(_DWORD *)lpParameter;
  *v2 = 0;
  v5 = CrmStateMonitorStateSizeGet(v4);
  memcpy_0(v7, v6, v5);
  if ( CrmStateMonitorTestProvideRandomNotifications )
  {
    EventW = CreateEventW(0LL, 1, 0, 0LL);
    lpParameter[8] = EventW;
    if ( !EventW
      || (Thread = CreateThread(0LL, 0LL, CrmStateMonitorWorkerThread, lpParameter, 0, 0LL),
          (lpParameter[7] = Thread) == 0LL) )
    {
      if ( (int)GetLastError() > 0 )
        return (unsigned __int16)GetLastError() | 0xC0070000;
      else
        return GetLastError();
    }
  }
  return v1;
}
