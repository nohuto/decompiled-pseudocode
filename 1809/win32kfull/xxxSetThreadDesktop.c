/*
 * XREFs of xxxSetThreadDesktop @ 0x1C00B0F18
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00097E0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00BB8C0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00BC5C0 (xxxSetCsrssThreadDesktop.c)
 *     NtUserSetThreadDesktop @ 0x1C01235E0 (NtUserSetThreadDesktop.c)
 *     xxxNextWindow @ 0x1C01DF29C (xxxNextWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     zzzSetDesktop @ 0x1C00B11B0 (zzzSetDesktop.c)
 *     MapDesktop @ 0x1C00B24C0 (MapDesktop.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     zzzAttachToQueue @ 0x1C00D6E7C (zzzAttachToQueue.c)
 *     MagContextThreadCallout @ 0x1C01BC190 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  __int64 v23; // [rsp+30h] [rbp-18h]
  int v24; // [rsp+38h] [rbp-10h]
  int v25; // [rsp+3Ch] [rbp-Ch]

  v6 = *(__int64 **)(gptiCurrent + 424LL);
  if ( !a2 || (v7 = *v6, v21 = 1, v22 = v7, v23 = a2, v24 = 0, v25 = 1, result = MapDesktop(&v21), (int)result >= 0) )
  {
    if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    {
      if ( *(_DWORD *)(gptiCurrent + 892LL)
        || *(_DWORD *)(gptiCurrent + 680LL)
        || (v15 = *(_QWORD *)(gptiCurrent + 456LL)) != 0
        && (v16 = *(_QWORD *)(v15 + 216)) != 0
        && *(_QWORD *)(v16 + 32) == gptiCurrent )
      {
        UserSetLastError(170LL, v9, v10, v11);
        return 2147483665LL;
      }
      if ( !v6[43] && a1 )
      {
        LockObjectAssignment(v6 + 43, a2);
        v6[50] = a1;
      }
    }
    v12 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v12 != a2 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 8) != 0 )
      {
        MagContextThreadCallout(*(_QWORD *)&gMagnContext, gptiCurrent, 0LL, 1LL);
        v12 = *(_QWORD *)(gptiCurrent + 456LL);
      }
      if ( v12 != a2 )
      {
        v13 = *(_QWORD *)(gptiCurrent + 432LL);
        if ( *(_DWORD *)(v13 + 392) > 1u )
        {
          v17 = AllocQueue(0LL, 0LL);
          if ( !v17 )
          {
            UserSetLastError(8LL, v18, v19, v20);
            return 3221225495LL;
          }
          ++*(_DWORD *)(v17 + 392);
          zzzAttachToQueue(gptiCurrent, (struct tagQ *)v17);
        }
        else if ( v13 == gpqForeground )
        {
          xxxSetForegroundWindow2(0LL, gptiCurrent, 0);
        }
        else if ( !v12 )
        {
          v14 = (gdwGTERMFlags & 1) - 1;
          *(_DWORD *)(gptiCurrent + 760LL) = v14;
          *(_DWORD *)(v13 + 384) = v14;
        }
      }
    }
    return zzzSetDesktop(gptiCurrent);
  }
  return result;
}
