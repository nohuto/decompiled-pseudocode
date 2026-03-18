/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1C00ED094
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C00EC900 (zzzResetSharedDesktops.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002477C (IsDesktopWindow.c)
 *     GetRedirectionBitmap @ 0x1C002B520 (GetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00446B4 (DeleteOrSetRedirectionBitmap.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00AD814 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     GetNewMonitor @ 0x1C00CA150 (GetNewMonitor.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00ED36C (UpdateMonitorForWindowAndChildren.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E8FFC (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C02990A8 (GreGetBitmapDpiScaleValue.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzUpdateWindowsAfterModeChange(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // ebp
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  __int64 *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 NewMonitor; // rax
  __int64 v13; // rcx
  int v14; // r15d
  __int64 RedirectionBitmap; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ebx
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  HBITMAP v22; // rdx
  int v23; // r12d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ecx
  HBITMAP v31; // rbp
  __int16 v32; // bx
  _BYTE v33[88]; // [rsp+30h] [rbp-58h] BYREF
  int v35; // [rsp+98h] [rbp+10h]
  HBITMAP v36; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v37; // [rsp+A8h] [rbp+20h] BYREF

  v35 = a2;
  v4 = a1;
  v5 = a2;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), a2, a3, a4);
  v6 = gSharedInfo[1];
  v7 = v6 + 32LL * giheLast;
  v8 = (__int64 *)gpKernelHandleTable;
  while ( v6 <= v7 )
  {
    v36 = 0LL;
    if ( *(_BYTE *)(v6 + 24) == 1 )
    {
      v9 = *v8;
      if ( (unsigned int)IsTopLevelWindow(*v8) )
        goto LABEL_9;
      v10 = *(_QWORD *)(v9 + 24);
      v11 = 0LL;
      if ( v10 )
        v11 = *(_QWORD *)(v10 + 104);
      if ( *(_QWORD *)(v9 + 104) == v11 )
      {
LABEL_9:
        NewMonitor = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 256LL));
        if ( !NewMonitor )
          NewMonitor = GetNewMonitor((struct tagWND *)v9, 0LL, 0LL);
        UpdateMonitorForWindowAndChildren(v9, NewMonitor, 0LL, 0LL);
      }
      v13 = *(_QWORD *)(v9 + 40);
      if ( (*(_BYTE *)(v13 + 27) & 0x20) != 0
        && (*(_BYTE *)(v13 + 26) & 0x20) == 0
        && (v4 || (unsigned int)IsWindowDesktopComposed(v9)) )
      {
        *(_DWORD *)(*(_QWORD *)(v9 + 40) + 232LL) &= ~0x80000u;
        v14 = GetRedirectionBitmap(v9) == 0;
        RedirectionBitmap = GetRedirectionBitmap(v9);
        LOBYTE(v16) = 5;
        v17 = HmgShareLockCheck(RedirectionBitmap, v16);
        v37 = v17;
        if ( v17 )
        {
          v18 = *(_DWORD *)(v17 + 116);
          DEC_SHARE_REF_CNT(v17);
          if ( (v18 & 0x2000) != 0 )
            v5 = 1;
          v35 = v5;
        }
        else
        {
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v37);
        }
        RecreateRedirectionBitmap((struct tagWND *)v9, 0, (__int64)&v36);
        LOBYTE(v19) = IsDesktopWindow(v9);
        v22 = v36;
        v23 = v19;
        if ( !v36 )
        {
LABEL_21:
          if ( !v23 )
            goto LABEL_22;
          goto LABEL_31;
        }
        if ( v19
          || (int)v21 >= 0
          || (v20 = *(unsigned int *)(*(_QWORD *)(v9 + 40) + 232LL), (v20 & 0x20) == 0)
          || !(unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v9, v36) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v22, v20, v21)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 448)
            && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v27,
                                                        v28,
                                                        v29)
                                                    + 448)
                                        + 8LL)
                          + 64LL) & 1) != 0
            && (v30 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL), (v30 & 0xF) == 0)
            && (v30 & 0x40000000) != 0 )
          {
            v31 = v36;
            v32 = 96 * GreGetBitmapDpiScaleValue(v36);
            v14 |= v32 != (__int16)GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 284LL));
          }
          else
          {
            v31 = v36;
          }
          DeleteOrSetRedirectionBitmap(v9, (HSURF)v31, 1);
          v5 = v35;
          goto LABEL_21;
        }
LABEL_22:
        if ( v14 )
        {
LABEL_31:
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v33);
          zzzLockDisplayAreaAndInvalidateDCCache(v9, 0, 0LL);
          if ( v14 )
            xxxInternalInvalidate((struct tagWND *)v9, (HRGN)1, 0x401u);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v33);
        }
        v4 = a1;
      }
    }
    v6 += 32LL;
    v8 += 3;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
}
