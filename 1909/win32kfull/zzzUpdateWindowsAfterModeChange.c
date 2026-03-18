/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1C00CBC74
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C00CB180 (zzzResetSharedDesktops.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002ABEC (IsDesktopWindow.c)
 *     GetRedirectionBitmap @ 0x1C0031990 (GetRedirectionBitmap.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004E634 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0064CD4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     GetNewMonitor @ 0x1C006B820 (GetNewMonitor.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C0089084 (DeleteOrSetRedirectionBitmap.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00CBF4C (UpdateMonitorForWindowAndChildren.c)
 *     RecreateRedirectionBitmap @ 0x1C00CC328 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E8E7C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C0298AF8 (GreGetBitmapDpiScaleValue.c)
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
  __int64 v18; // r8
  int v19; // r9d
  HBITMAP v20; // rdx
  int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // ecx
  HBITMAP v27; // rbp
  __int16 v28; // bx
  _BYTE v29[88]; // [rsp+30h] [rbp-58h] BYREF
  int v31; // [rsp+98h] [rbp+10h]
  HBITMAP v32; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+20h] BYREF

  v31 = a2;
  v2 = a1;
  v3 = a2;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v4 = gSharedInfo[1];
  v5 = v4 + 32LL * giheLast;
  v6 = (__int64 *)gpKernelHandleTable;
  while ( v4 <= v5 )
  {
    v32 = 0LL;
    if ( *(_BYTE *)(v4 + 24) == 1 )
    {
      v7 = *v6;
      if ( (unsigned int)IsTopLevelWindow(*v6) )
        goto LABEL_9;
      v8 = *(_QWORD *)(v7 + 24);
      v9 = 0LL;
      if ( v8 )
        v9 = *(_QWORD *)(v8 + 104);
      if ( *(_QWORD *)(v7 + 104) == v9 )
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
        v33 = v15;
        if ( v15 )
        {
          v16 = *(_DWORD *)(v15 + 116);
          DEC_SHARE_REF_CNT(v15);
          if ( (v16 & 0x2000) != 0 )
            v3 = 1;
          v31 = v3;
        }
        else
        {
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v33);
        }
        RecreateRedirectionBitmap((struct tagWND *)v7, 0, (__int64)&v32);
        LOBYTE(v17) = IsDesktopWindow(v7);
        v20 = v32;
        v21 = v17;
        if ( !v32 )
        {
LABEL_21:
          if ( !v21 )
            goto LABEL_22;
          goto LABEL_31;
        }
        if ( v17
          || v19 >= 0
          || (v18 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 232LL), (v18 & 0x20) == 0)
          || !(unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v7, v32) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v20, v18)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23) + 448)
            && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25)
                                                    + 448)
                                        + 8LL)
                          + 64LL) & 1) != 0
            && (v26 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL), (v26 & 0xF) == 0)
            && (v26 & 0x40000000) != 0 )
          {
            v27 = v32;
            v28 = 96 * GreGetBitmapDpiScaleValue(v32);
            v12 |= v28 != (__int16)GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 284LL));
          }
          else
          {
            v27 = v32;
          }
          DeleteOrSetRedirectionBitmap(v7, (HSURF)v27, 1);
          v3 = v31;
          goto LABEL_21;
        }
LABEL_22:
        if ( v12 )
        {
LABEL_31:
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v29);
          zzzLockDisplayAreaAndInvalidateDCCache(v7, 0, 0LL);
          if ( v12 )
            xxxInternalInvalidate((struct tagWND *)v7, (HRGN)1, 0x401u);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v29);
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
