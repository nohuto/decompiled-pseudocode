/*
 * XREFs of xxxSetThreadDesktop @ 0x1C000EEA8
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000E570 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000E7C0 (xxxSetCsrssThreadDesktop.c)
 *     NtUserSetThreadDesktop @ 0x1C000EA20 (NtUserSetThreadDesktop.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C010889C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 * Callees:
 *     zzzSetDesktop @ 0x1C000F360 (zzzSetDesktop.c)
 *     MapDesktop @ 0x1C0011B90 (MapDesktop.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     zzzAttachToQueue @ 0x1C0058B78 (zzzAttachToQueue.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     MagContextThreadCallout @ 0x1C019B120 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(__int64 a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+38h] [rbp-10h]
  int v17; // [rsp+3Ch] [rbp-Ch]

  v4 = *(__int64 **)(gptiCurrent + 416LL);
  if ( !a2 || (v5 = *v4, v13 = 1, v14 = v5, v15 = a2, v16 = 0, v17 = 1, result = MapDesktop(&v13), (int)result >= 0) )
  {
    if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    {
      if ( *(_DWORD *)(gptiCurrent + 884LL)
        || *(_DWORD *)(gptiCurrent + 672LL)
        || (v10 = *(_QWORD *)(gptiCurrent + 448LL)) != 0
        && (v11 = *(_QWORD *)(v10 + 216)) != 0
        && *(_QWORD *)(v11 + 32) == gptiCurrent )
      {
        UserSetLastError(170LL);
        return 2147483665LL;
      }
      if ( !v4[42] && a1 )
      {
        LockObjectAssignment(v4 + 42, a2);
        v4[49] = a1;
      }
    }
    v7 = *(_QWORD *)(gptiCurrent + 448LL);
    if ( v7 != a2 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 1200LL) & 8) != 0 )
      {
        MagContextThreadCallout(*(_QWORD *)&gMagnContext, gptiCurrent, 0LL, 1LL);
        v7 = *(_QWORD *)(gptiCurrent + 448LL);
      }
      if ( v7 != a2 )
      {
        v8 = *(_QWORD *)(gptiCurrent + 424LL);
        if ( *(_DWORD *)(v8 + 392) > 1u )
        {
          v12 = AllocQueue(0LL, 0LL);
          if ( !v12 )
          {
            UserSetLastError(8LL);
            return 3221225495LL;
          }
          ++*(_DWORD *)(v12 + 392);
          zzzAttachToQueue(gptiCurrent, (struct tagQ *)v12);
        }
        else if ( v8 == gpqForeground )
        {
          xxxSetForegroundWindow2(0LL);
        }
        else if ( !v7 )
        {
          v9 = (gdwGTERMFlags & 1) - 1;
          *(_DWORD *)(gptiCurrent + 744LL) = v9;
          *(_DWORD *)(v8 + 384) = v9;
        }
      }
    }
    return zzzSetDesktop(gptiCurrent);
  }
  return result;
}
