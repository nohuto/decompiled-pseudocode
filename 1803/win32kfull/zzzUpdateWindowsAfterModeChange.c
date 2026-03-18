/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1C00E7FA8
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C00E79D0 (zzzResetSharedDesktops.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     GetNewMonitor @ 0x1C002D640 (GetNewMonitor.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     IsDesktopWindow @ 0x1C0076580 (IsDesktopWindow.c)
 *     GetRedirectionBitmap @ 0x1C007BA20 (GetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C4EA8 (DeleteOrSetRedirectionBitmap.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00DCEC8 (--1EPALOBJ@@QEAA@XZ.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00E8258 (UpdateMonitorForWindowAndChildren.c)
 *     RecreateRedirectionBitmap @ 0x1C00E8330 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01B1338 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C026E3C8 (GreGetBitmapDpiScaleValue.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzUpdateWindowsAfterModeChange(int a1, int a2)
{
  int v2; // ebx
  int v3; // ebp
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r14
  __int64 *v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 NewMonitor; // rax
  __int64 v11; // rcx
  int v12; // r15d
  __int64 RedirectionBitmap; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ebx
  int v17; // eax
  int v18; // r9d
  HBITMAP v19; // rdx
  int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // ecx
  HBITMAP v24; // rbp
  __int16 v25; // bx
  _BYTE v26[88]; // [rsp+30h] [rbp-58h] BYREF
  int v28; // [rsp+98h] [rbp+10h]
  HBITMAP v29; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+20h] BYREF

  v28 = a2;
  v2 = a1;
  v3 = a2;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v4 = gSharedInfo[1];
  v5 = v4 + 32LL * giheLast;
  v6 = (__int64 *)gpKernelHandleTable;
  while ( v4 <= v5 )
  {
    v29 = 0LL;
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
        RedirectionBitmap = GetRedirectionBitmap(v7);
        LOBYTE(v14) = 5;
        v15 = HmgShareLockCheck(RedirectionBitmap, v14);
        v30 = v15;
        if ( v15 )
        {
          v16 = *(_DWORD *)(v15 + 116);
          DEC_SHARE_REF_CNT(v15);
          if ( (v16 & 0x2000) != 0 )
            v3 = 1;
          v28 = v3;
        }
        else
        {
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v30);
        }
        RecreateRedirectionBitmap((struct tagWND *)v7, 0, (__int64)&v29);
        LOBYTE(v17) = IsDesktopWindow(v7);
        v19 = v29;
        v20 = v17;
        if ( !v29 )
        {
LABEL_21:
          if ( !v20 )
            goto LABEL_22;
          goto LABEL_31;
        }
        if ( v17
          || v18 >= 0
          || (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) & 0x20) == 0
          || !(unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v7, v29) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v19)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21) + 448)
            && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22) + 448)
                                        + 8LL)
                          + 52LL) & 1) != 0
            && (v23 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL), (v23 & 0xF) == 0)
            && (v23 & 0x40000000) != 0 )
          {
            v24 = v29;
            v25 = 96 * GreGetBitmapDpiScaleValue(v29);
            v12 |= v25 != (__int16)GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 284LL));
          }
          else
          {
            v24 = v29;
          }
          DeleteOrSetRedirectionBitmap(v7, (HSURF)v24, 1);
          v3 = v28;
          goto LABEL_21;
        }
LABEL_22:
        if ( v12 )
        {
LABEL_31:
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
          zzzLockDisplayAreaAndInvalidateDCCache(v7, 0, 0LL);
          if ( v12 )
            xxxInternalInvalidate((struct tagWND *)v7, (HRGN)1, 0x401u);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v26);
        }
        v2 = a1;
      }
    }
    v4 += 32LL;
    v6 += 3;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
}
