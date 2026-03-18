/*
 * XREFs of _RegisterWindowArrangementCallout @ 0x1C00F1C80
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C0012718 (IsShellProcess.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _RegisterHotKey @ 0x1C006A3D4 (_RegisterHotKey.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     _UnregisterHotKey @ 0x1C00B328C (_UnregisterHotKey.c)
 *     SetShellWndManagementWindow @ 0x1C00F1D88 (SetShellWndManagementWindow.c)
 *     IsMessageOnlyWindow @ 0x1C00F1F50 (IsMessageOnlyWindow.c)
 *     IsIAMThread @ 0x1C00F1F8C (IsIAMThread.c)
 */

__int64 __fastcall RegisterWindowArrangementCallout(_QWORD *a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v4 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 12) & 0x88) != 0 || !IAMThreadAccessGranted(gptiCurrent) )
    goto LABEL_3;
  v8 = *(_QWORD *)(v4 + 328);
  if ( a2 )
  {
    if ( v8 )
    {
      v6 = 1242LL;
      goto LABEL_4;
    }
    if ( a1[2] != gptiCurrent
      || !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 416LL))
      || !(unsigned int)IsIAMThread(gptiCurrent) )
    {
      goto LABEL_3;
    }
    if ( !(unsigned int)IsMessageOnlyWindow(a1) || (*(_DWORD *)(a1[5] + 288LL) & 0xF) != 2 )
    {
      v6 = 87LL;
      goto LABEL_4;
    }
    SetShellWndManagementWindow(v4, a1);
    LODWORD(BugCheckParameter2) = 115;
    RegisterHotKey(*(struct tagWND **)(v4 + 328), 0LL, 61536, 28673, BugCheckParameter2);
  }
  else if ( v8 )
  {
    if ( *(_QWORD **)(a1[3] + 328LL) != a1 || *(_QWORD *)(v8 + 16) != gptiCurrent )
    {
LABEL_3:
      v6 = 5LL;
LABEL_4:
      UserSetLastError(v6, v5);
      return 0LL;
    }
    UnregisterHotKey((__int64)a1, 0xF060u);
    SetShellWndManagementWindow(v4, 0LL);
  }
  return 1LL;
}
