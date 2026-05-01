/*
 * XREFs of CrmStateMonitorSystemDiskUsageIndexGet @ 0x180043234
 * Callers:
 *     CrmStateMonitorSystemDiskUsageStart @ 0x1800431C4 (CrmStateMonitorSystemDiskUsageStart.c)
 * Callees:
 *     StringCbPrintfW @ 0x180009684 (StringCbPrintfW.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorSystemDiskUsageIndexGet(_DWORD *a1)
{
  unsigned __int16 *NtSystemRoot; // rax
  HANDLE FileW; // rdi
  signed int LastError; // ebx
  signed int v6; // eax
  signed int v7; // [rsp+48h] [rbp-C0h] BYREF
  DWORD BytesReturned; // [rsp+4Ch] [rbp-BCh] BYREF
  _DWORD OutBuffer[10]; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  UUID *v11; // [rsp+98h] [rbp-70h]
  int v12; // [rsp+A0h] [rbp-68h]
  int v13; // [rsp+A4h] [rbp-64h]
  signed int *v14; // [rsp+A8h] [rbp-60h]
  int v15; // [rsp+B0h] [rbp-58h]
  int v16; // [rsp+B4h] [rbp-54h]
  wchar_t pszDest[264]; // [rsp+B8h] [rbp-50h] BYREF

  NtSystemRoot = (unsigned __int16 *)RtlGetNtSystemRoot();
  StringCbPrintfW(pszDest, 0x208uLL, L"\\\\.\\%wc:", *NtSystemRoot);
  FileW = CreateFileW(pszDest, 0x100080u, 7u, 0LL, 3u, 0x80u, 0LL);
  if ( FileW == (HANDLE)-1LL )
  {
    if ( (int)GetLastError() > 0 )
    {
      LOWORD(v6) = GetLastError();
LABEL_11:
      LastError = (unsigned __int16)v6 | 0xC0070000;
      goto LABEL_4;
    }
    LastError = GetLastError();
  }
  else
  {
    if ( !DeviceIoControl(FileW, 0x560000u, 0LL, 0, OutBuffer, 0x20u, &BytesReturned, 0LL) )
    {
      v6 = GetLastError();
      LastError = v6;
      if ( v6 != 234 )
      {
        if ( v6 <= 0 )
          goto LABEL_4;
        goto LABEL_11;
      }
    }
    LastError = 0;
    *a1 = OutBuffer[2];
  }
LABEL_4:
  if ( LastError < 0 && dword_18009B128 > 5u )
  {
    v13 = 0;
    v16 = 0;
    v11 = &Uuid;
    v14 = &v7;
    v7 = LastError;
    v12 = 16;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008D506, 0LL, 0LL, 4u, &pData);
  }
  if ( FileW != (HANDLE)-1LL )
    CloseHandle(FileW);
  return (unsigned int)LastError;
}
