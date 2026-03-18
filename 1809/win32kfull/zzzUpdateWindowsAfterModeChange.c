/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1C0104F04
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C0104B90 (zzzResetSharedDesktops.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C000E0AC (DeleteOrSetRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C00107D4 (RecreateRedirectionBitmap.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C003AB88 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GetNewMonitor @ 0x1C004259C (GetNewMonitor.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GetRedirectionBitmap @ 0x1C0077990 (GetRedirectionBitmap.c)
 *     IsDesktopWindow @ 0x1C007A740 (IsDesktopWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C01051A8 (UpdateMonitorForWindowAndChildren.c)
 *     GreIsReusedDeviceDependentBitmap @ 0x1C01053A8 (GreIsReusedDeviceDependentBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01D3E7C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C02823E4 (GreGetBitmapDpiScaleValue.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzUpdateWindowsAfterModeChange(int a1, int a2)
{
  int v2; // ebx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 NewMonitor; // rax
  __int64 v11; // rcx
  int v12; // r15d
  HSURF RedirectionBitmap; // rax
  int v14; // eax
  int v15; // r9d
  HSURF v16; // rdx
  int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // ecx
  HSURF v21; // r14
  __int16 v22; // bx
  bool v23; // zf
  int v25; // [rsp+88h] [rbp+10h]
  HSURF v26; // [rsp+90h] [rbp+18h] BYREF
  char v27; // [rsp+98h] [rbp+20h] BYREF

  v2 = a1;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v4 = gSharedInfo[1];
  v5 = v4 + 32LL * giheLast;
  v6 = (__int64 *)gpKernelHandleTable;
  while ( v4 <= v5 )
  {
    v26 = 0LL;
    if ( *(_BYTE *)(v4 + 24) == 1 )
    {
      v7 = *v6;
      if ( (unsigned int)IsTopLevelWindow(*v6) )
        goto LABEL_9;
      v8 = *(_QWORD *)(v7 + 24);
      v9 = 0LL;
      if ( v8 )
        v9 = *(_QWORD *)(v8 + 104);
      if ( *(_QWORD *)(v7 + 80) == v9 )
      {
LABEL_9:
        NewMonitor = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 256LL));
        if ( !NewMonitor )
          NewMonitor = GetNewMonitor((struct tagWND *)v7, 0LL, 0LL);
        UpdateMonitorForWindowAndChildren(v7, NewMonitor, 0LL, 0LL);
      }
      v11 = *(_QWORD *)(v7 + 40);
      if ( (*(_BYTE *)(v11 + 27) & 0x20) != 0
        && (*(_BYTE *)(v11 + 26) & 0x20) == 0
        && (v2 || (unsigned int)IsWindowDesktopComposed(v7)) )
      {
        *(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) &= ~0x80000u;
        v12 = GetRedirectionBitmap(v7) == 0;
        RedirectionBitmap = (HSURF)GetRedirectionBitmap(v7);
        if ( (unsigned int)GreIsReusedDeviceDependentBitmap(RedirectionBitmap) )
          a2 = 1;
        v25 = a2;
        RecreateRedirectionBitmap((struct tagWND *)v7, 0, 0, a2, 0, &v26);
        LOBYTE(v14) = IsDesktopWindow(v7);
        v16 = v26;
        v17 = v14;
        if ( v26 )
        {
          if ( v14
            || v15 >= 0
            || (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) & 0x20) == 0
            || !(unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v7, (HBITMAP)v26) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v16)
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 456)
              && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19) + 456)
                                          + 8LL)
                            + 64LL) & 1) != 0
              && (v20 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL), (v20 & 0xF) == 0)
              && (v20 & 0x40000000) != 0 )
            {
              v21 = v26;
              v22 = 96 * GreGetBitmapDpiScaleValue(v26);
              v23 = v22 == (__int16)GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 284LL));
              v2 = a1;
              v12 |= !v23;
            }
            else
            {
              v21 = v26;
            }
            DeleteOrSetRedirectionBitmap(v7, v21, 1);
            a2 = v25;
            goto LABEL_19;
          }
LABEL_20:
          if ( !v12 )
            goto LABEL_4;
        }
        else
        {
LABEL_19:
          if ( !v17 )
            goto LABEL_20;
        }
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v27);
        zzzLockDisplayAreaAndInvalidateDCCache(v7, 0, 0LL);
        if ( v12 )
          xxxInternalInvalidate((struct tagWND *)v7, (HRGN)1, 0x401u);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v27);
      }
    }
LABEL_4:
    v4 += 32LL;
    v6 += 3;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
}
