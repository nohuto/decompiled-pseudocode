/*
 * XREFs of xxxSetThreadDesktop @ 0x1C00189F8
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000DD50 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000E920 (xxxSetCsrssThreadDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000ED9C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B387C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetThreadDesktop @ 0x1C012D090 (NtUserSetThreadDesktop.c)
 *     xxxNextWindow @ 0x1C01F5198 (xxxNextWindow.c)
 * Callees:
 *     zzzAttachToQueue @ 0x1C0012DFC (zzzAttachToQueue.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     MapDesktop @ 0x1C0019DE0 (MapDesktop.c)
 *     zzzSetDesktop @ 0x1C00232E0 (zzzSetDesktop.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     MagContextThreadCallout @ 0x1C01CFDD0 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]
  int v18; // [rsp+38h] [rbp-10h]
  int v19; // [rsp+3Ch] [rbp-Ch]

  v6 = *(__int64 **)(gptiCurrent + 416LL);
  if ( !a2 )
    goto LABEL_3;
  v15[1] = 0;
  v7 = *v6;
  v15[0] = 1;
  v16 = v7;
  v17 = a2;
  v18 = 0;
  v19 = 1;
  result = MapDesktop(v15);
  if ( (int)result >= 0 )
  {
LABEL_3:
    if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    {
      if ( *(_DWORD *)(gptiCurrent + 892LL)
        || *(_DWORD *)(gptiCurrent + 672LL)
        || (v12 = *(_QWORD *)(gptiCurrent + 448LL)) != 0
        && (v13 = *(_QWORD *)(v12 + 216)) != 0
        && *(_QWORD *)(v13 + 32) == gptiCurrent )
      {
        UserSetLastError(170LL);
        return 2147483665LL;
      }
      if ( !v6[42] && a1 )
      {
        LockObjectAssignment(v6 + 42, a2);
        v6[49] = a1;
      }
    }
    v9 = *(_QWORD *)(gptiCurrent + 448LL);
    if ( v9 != a2 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 8) != 0 )
      {
        MagContextThreadCallout(*(_QWORD *)&gMagnContext, gptiCurrent, 0LL, 1LL);
        v9 = *(_QWORD *)(gptiCurrent + 448LL);
      }
      if ( v9 != a2 )
      {
        v10 = *(_QWORD *)(gptiCurrent + 424LL);
        if ( *(_DWORD *)(v10 + 400) > 1u )
        {
          v14 = AllocQueue(0LL, 0LL);
          if ( !v14 )
          {
            UserSetLastError(8LL);
            return 3221225495LL;
          }
          ++*(_DWORD *)(v14 + 400);
          zzzAttachToQueue(gptiCurrent, (struct tagQ *)v14, 0LL, 0);
        }
        else if ( v10 == gpqForeground )
        {
          xxxSetForegroundWindow2(0LL, gptiCurrent, 0);
        }
        else if ( !v9 )
        {
          v11 = (gdwGTERMFlags & 1) - 1;
          *(_DWORD *)(gptiCurrent + 752LL) = v11;
          *(_DWORD *)(v10 + 392) = v11;
        }
      }
    }
    return zzzSetDesktop(gptiCurrent);
  }
  return result;
}
