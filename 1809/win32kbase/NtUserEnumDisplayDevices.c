/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1C00157E0
 * Callers:
 *     <none>
 * Callees:
 *     DrvEnumDisplayDevices @ 0x1C00158D0 (DrvEnumDisplayDevices.c)
 *     UpdateGraphicsDeviceList @ 0x1C0016194 (UpdateGraphicsDeviceList.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0028BA8 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C002BCB0 (UserSessionSwitchEnterCrit.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v6; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  int v14; // [rsp+30h] [rbp-99h] BYREF
  int v15; // [rsp+34h] [rbp-95h] BYREF
  int v16; // [rsp+38h] [rbp-91h] BYREF
  __int128 v17; // [rsp+40h] [rbp-89h]
  __int128 v18; // [rsp+50h] [rbp-79h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-49h] BYREF
  int *v21; // [rsp+90h] [rbp-39h]
  __int64 v22; // [rsp+98h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR v23; // [rsp+A0h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+C0h] [rbp-9h] BYREF
  int *v25; // [rsp+D0h] [rbp+7h]
  __int64 v26; // [rsp+D8h] [rbp+Fh]

  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
  {
    UpdateGraphicsDeviceList(&v14);
    if ( v14 )
    {
      gptiCurrent = 0LL;
      gbValidateHandleForIL = 0;
      if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
      {
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
        v9 = CurrentThreadWin32Thread;
        if ( CurrentThreadWin32Thread )
        {
          v10 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
          v15 = v10;
          if ( (*(_DWORD *)(v9 + 44) || *(_DWORD *)(v9 + 48) || v10 > 0)
            && dword_1C01C7F10 > 6u
            && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
          {
            TlgCreateWsz(&pDesc, L"LeaveCrit");
            v21 = &v15;
            v22 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D471, (LPCGUID)(v9 + 28), 0LL, 4u, &pData);
          }
          *(_DWORD *)(v9 + 44) = 0;
          v17 = 0uLL;
          *(_OWORD *)(v9 + 28) = 0uLL;
        }
      }
      EtwTraceReleaseUserCrit();
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      UserSessionSwitchEnterCrit();
    }
    v6 = DrvEnumDisplayDevices(a1, a4, 1);
  }
  else
  {
    v6 = -1073741823;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
  {
    v11 = PsGetCurrentThreadWin32Thread();
    v12 = v11;
    if ( v11 )
    {
      v13 = *(_DWORD *)(v11 + 24);
      v16 = v13;
      if ( (*(_DWORD *)(v12 + 44) || *(_DWORD *)(v12 + 48) || v13 > 0)
        && dword_1C01C7F10 > 6u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
      {
        TlgCreateWsz(&v24, L"LeaveCrit");
        v25 = &v16;
        v26 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D471, (LPCGUID)(v12 + 28), 0LL, 4u, &v23);
      }
      *(_DWORD *)(v12 + 44) = 0;
      v18 = 0uLL;
      *(_OWORD *)(v12 + 28) = 0uLL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v6;
}
