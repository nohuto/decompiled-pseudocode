/*
 * XREFs of DwmpNotifyUserLogon @ 0x180003150
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001420 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x18000375C (-DoStackCapture@@YAXJI@Z.c)
 *     DwmpUpdateUserSettings @ 0x180003EE4 (DwmpUpdateUserSettings.c)
 */

__int64 __fastcall DwmpNotifyUserLogon(HANDLE hToken)
{
  signed int v1; // ebx
  BOOL v3; // edi
  REGSAM v4; // ebx
  HKEY v5; // rsi
  HANDLE v6; // rax
  signed int LastError; // eax
  unsigned int v8; // edx
  int v9; // ecx
  HKEY v10; // rbx
  HANDLE CurrentProcess; // rax
  int updated; // eax
  HANDLE v14; // [rsp+40h] [rbp-10h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-8h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp+28h] BYREF
  HKEY v17; // [rsp+80h] [rbp+30h] BYREF
  HKEY v18; // [rsp+88h] [rbp+38h] BYREF

  v1 = 0;
  v17 = 0LL;
  TargetHandle = 0LL;
  v18 = 0LL;
  v14 = 0LL;
  AcquireSRWLockShared(&gDwmStateLock);
  if ( ghDwmProcess )
  {
    phkResult = 0LL;
    v3 = 0;
    v4 = 131097;
    if ( hToken )
    {
      v3 = ImpersonateLoggedOnUser(hToken);
      if ( v3 )
        v4 = 131103;
    }
    if ( !RegOpenCurrentUser(v4, &phkResult) )
    {
      RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Windows\\DWM", 0, v4, &v17);
      RegOpenKeyExW(phkResult, L"Software\\Policies\\Microsoft\\Windows\\DWM", 0, 0x20019u, &v18);
      CloseHandle(phkResult);
    }
    if ( v3 )
      RevertToSelf();
    v5 = v17;
    if ( !v17
      || (v17 = 0LL,
          SetLastError(0),
          v6 = GetCurrentProcess(),
          DuplicateHandle(v6, v5, ghDwmProcess, &TargetHandle, v4, 0, 1u)) )
    {
      v10 = v18;
      if ( !v18
        || (v18 = 0LL,
            SetLastError(0),
            CurrentProcess = GetCurrentProcess(),
            DuplicateHandle(CurrentProcess, v10, ghDwmProcess, &v14, 0x20019u, 0, 1u)) )
      {
        updated = DwmpUpdateUserSettings(!v3, TargetHandle, v14);
        v1 = updated;
        if ( updated >= 0 )
          goto LABEL_23;
        v8 = 1613;
        v9 = updated;
        goto LABEL_22;
      }
      LastError = GetLastError();
      v8 = 1610;
    }
    else
    {
      LastError = GetLastError();
      v8 = 1592;
    }
    v1 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v1 = LastError;
    if ( v1 >= 0 )
      v1 = -2003304445;
    v9 = v1;
LABEL_22:
    DoStackCapture(v9, v8);
  }
LABEL_23:
  TraceLoggingWriteEtw((const struct _TlgProvider_t *)7, v1, 0LL);
  ReleaseSRWLockShared(&gDwmStateLock);
  if ( v17 )
    CloseHandle(v17);
  if ( v18 )
    CloseHandle(v18);
  return (unsigned int)v1;
}
