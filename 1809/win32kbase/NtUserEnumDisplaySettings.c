/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1C0080600
 * Callers:
 *     <none>
 * Callees:
 *     DrvEnumDisplaySettings @ 0x1C00144F0 (DrvEnumDisplaySettings.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0028BA8 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C002BCB0 (UserSessionSwitchEnterCrit.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(struct _UNICODE_STRING *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v14; // rbx
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+30h] [rbp-88h] BYREF
  __int128 v18; // [rsp+38h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-48h] BYREF
  int *v21; // [rsp+80h] [rbp-38h]
  int v22; // [rsp+88h] [rbp-30h]
  int v23; // [rsp+8Ch] [rbp-2Ch]

  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
    v11 = DrvEnumDisplaySettings(a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL), a2, a3, a4);
  else
    v11 = -1073741823;
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v9, v8, v10);
    v14 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v15 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      v16 = *(_DWORD *)(v14 + 44) == 0;
      v17 = v15;
      if ( (!v16 || *(_DWORD *)(v14 + 48) || v15 > 0)
        && dword_1C01C7F10 > 6u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x2000uLL) )
      {
        TlgCreateWsz(&pDesc, L"LeaveCrit");
        v23 = 0;
        v21 = &v17;
        v22 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019D471, (LPCGUID)(v14 + 28), 0LL, 4u, &pData);
      }
      *(_DWORD *)(v14 + 44) = 0;
      v18 = 0uLL;
      *(_OWORD *)(v14 + 28) = 0uLL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v11;
}
