/*
 * XREFs of CrmStateMonitorSystemDiskUsageIdleTimeGet @ 0x180032B34
 * Callers:
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x180032620 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageCSCallback @ 0x1800478C0 (CrmStateMonitorSystemDiskUsageCSCallback.c)
 * Callees:
 *     StringCbPrintfW @ 0x180009684 (StringCbPrintfW.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorSystemDiskUsageIdleTimeGet(__int64 a1, _QWORD *a2)
{
  HANDLE FileW; // rdi
  signed int LastError; // ebx
  signed int v6; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD InBuffer[2]; // [rsp+48h] [rbp-B8h] BYREF
  char OutBuffer[56]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+88h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  UUID *v11; // [rsp+D0h] [rbp-30h]
  int v12; // [rsp+D8h] [rbp-28h]
  int v13; // [rsp+DCh] [rbp-24h]
  signed int *v14; // [rsp+E0h] [rbp-20h]
  int v15; // [rsp+E8h] [rbp-18h]
  int v16; // [rsp+ECh] [rbp-14h]
  wchar_t pszDest[264]; // [rsp+F0h] [rbp-10h] BYREF

  StringCbPrintfW(pszDest, 0x208uLL, L"\\\\.\\PhysicalDrive%u", *(unsigned int *)(a1 + 96));
  FileW = CreateFileW(pszDest, 0, 3u, 0LL, 3u, 0, 0LL);
  if ( FileW == (HANDLE)-1LL
    || (InBuffer[1] = 0, InBuffer[0] = 8, !DeviceIoControl(FileW, 0x70224u, InBuffer, 8u, OutBuffer, 0x58u, 0LL, 0LL)) )
  {
    if ( (int)GetLastError() > 0 )
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
    else
      LastError = GetLastError();
  }
  else
  {
    *a2 = v9;
    LastError = 0;
  }
  if ( LastError < 0 && dword_18009B128 > 5u )
  {
    v13 = 0;
    v16 = 0;
    v11 = &Uuid;
    v14 = &v6;
    v6 = LastError;
    v12 = 16;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008D5C2, 0LL, 0LL, 4u, &pData);
  }
  if ( FileW != (HANDLE)-1LL )
    CloseHandle(FileW);
  return (unsigned int)LastError;
}
