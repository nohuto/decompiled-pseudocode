/*
 * XREFs of xxxDrawDragRectEx @ 0x1C0200980
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01FFC94 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0200870 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRect @ 0x1C0200964 (xxxDrawDragRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     bSetDevDragRect @ 0x1C00816E0 (bSetDevDragRect.c)
 *     _SetSystemTimer @ 0x1C008C7D4 (_SetSystemTimer.c)
 *     _ScreenToClient @ 0x1C008F834 (_ScreenToClient.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C00D0E60 (LockW32Thread.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     DetectNewMonitor @ 0x1C01E6900 (DetectNewMonitor.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C01FA13C (-DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x1C01FA19C (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01FE338 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxUpdateThreadsWindows @ 0x1C0202528 (xxxUpdateThreadsWindows.c)
 *     FindSpb @ 0x1C0208EA4 (FindSpb.c)
 *     FreeSpb @ 0x1C0208ED4 (FreeSpb.c)
 *     ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023CAA8 (-ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     GreWindowResizeComplete @ 0x1C026DB34 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026DD6C (GreWindowResizeStarted.c)
 *     bMoveDevDragRect @ 0x1C0282A78 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0282D48 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0282F2C (bSetDevPreviewRect.c)
 */

__int64 __fastcall xxxDrawDragRectEx(struct _MOVESIZEDATA *a1, __int64 a2, __int64 a3, struct tagRECT *a4)
{
  int v6; // r14d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  __int64 result; // rax
  signed int v14; // esi
  unsigned int v15; // r14d
  __int64 v16; // rcx
  struct tagRECT *v17; // r13
  int v18; // edx
  struct tagRECT v19; // xmm0
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r15
  struct tagRECT *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r9
  LONG left; // ecx
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 Spb; // rax
  __int64 RectRgnIndirect; // rax
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // r14
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v40; // r13
  LONG bottom; // r8d
  _DWORD *v42; // rdx
  int v43; // eax
  struct tagWND *v44; // r14
  int v45; // r13d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r9
  __int128 v52; // xmm0
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r14
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  BOOL v69; // r13d
  __int64 v70; // rax
  const struct tagWND *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rcx
  __int64 v80; // rax
  BOOL v81; // [rsp+40h] [rbp-C0h]
  int v82; // [rsp+44h] [rbp-BCh]
  unsigned int v83; // [rsp+44h] [rbp-BCh]
  int v84; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v85; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT *v86; // [rsp+60h] [rbp-A0h]
  int v87; // [rsp+68h] [rbp-98h]
  int v88[2]; // [rsp+70h] [rbp-90h] BYREF
  int v89; // [rsp+78h] [rbp-88h]
  int v90; // [rsp+7Ch] [rbp-84h] BYREF
  int v91; // [rsp+80h] [rbp-80h]
  __int64 v92; // [rsp+88h] [rbp-78h]
  __int64 v93; // [rsp+90h] [rbp-70h] BYREF
  __int64 v94; // [rsp+98h] [rbp-68h]
  __int64 v95; // [rsp+A0h] [rbp-60h]
  struct tagRECT v96; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v97; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v98; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v99; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v100[3]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v101; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v102; // [rsp+100h] [rbp+0h] BYREF

  v86 = a4;
  v6 = a3;
  v11 = 1;
  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4) + 448)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10) + 448)
                                + 8LL)
                  + 64LL) & 1) != 0 )
  {
    v82 = 1;
    v12 = 5;
  }
  else
  {
    v82 = 0;
    v12 = 4;
  }
  result = *((unsigned int *)a1 + 49);
  v14 = v6 & 0xF0000000;
  v15 = v6 & 0xFFFFFFF;
  if ( (result & 0x10) == 0 )
  {
    result = *((_QWORD *)a1 + 2);
    if ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 27LL) & 8) == 0 )
    {
      if ( a2 )
        *a4 = *(struct tagRECT *)a2;
      return result;
    }
  }
  if ( !a2 )
    goto LABEL_13;
  v16 = *((_QWORD *)a1 + 3) - *(_QWORD *)a2;
  if ( !v16 )
    v16 = *((_QWORD *)a1 + 4) - *(_QWORD *)(a2 + 8);
  if ( v16 )
  {
LABEL_13:
    v17 = (struct tagRECT *)a2;
    if ( !a2 )
      v17 = v86;
    v81 = 0;
    v96 = *v17;
    if ( v14 >= 0 && v15 == 3 && (unsigned int)DetectNewMonitor((struct tagWND **)a1, &v96) )
    {
      v18 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF;
      v81 = v18 != 2;
      if ( a2 && (v18 != 2 || (*((_DWORD *)a1 + 49) & 0x20) == 0) )
      {
        v19 = v96;
        *v86 = v96;
        *(struct tagRECT *)a2 = v19;
      }
      if ( v18 != 2 )
      {
        xxxMS_FlushWigglies();
        GenerateMouseMove(0LL);
      }
    }
    v20 = *((_DWORD *)a1 + 49);
    if ( (v20 & 0x20) != 0 && ((v20 & 0x4000000) == 0 || v15 >= 2) )
    {
      v21 = *((_QWORD *)a1 + 2);
      v89 = 0;
      v87 = 0;
      v83 = 0;
      v22 = *(_QWORD *)(v21 + 16);
      v84 = 0;
      v93 = 0LL;
      v94 = 0LL;
      v92 = gptiCurrent;
      v95 = 0LL;
      memset(v100, 0, sizeof(v100));
      if ( v22 != gptiCurrent )
        LockW32Thread(v22, v100, v9, v10);
      *(_DWORD *)(v22 + 480) |= 0x8000u;
      v23 = v86;
      if ( a2 )
        *v86 = *(struct tagRECT *)a2;
      v24 = *((_QWORD *)a1 + 2);
      v25 = *(_QWORD *)(v24 + 104);
      v85 = *v23;
      if ( v25 )
      {
        if ( !(unsigned int)IsTopLevelWindow(v24) )
        {
          ScreenToClient(v26, &v85);
          ScreenToClient(v27, &v85.right);
          if ( (*(_BYTE *)(*(_QWORD *)(v28 + 40) + 26LL) & 0x40) != 0 )
          {
            left = v85.left;
            v85.left = v85.right;
            v85.right = left;
          }
        }
      }
      v30 = *(_QWORD *)(v24 + 40);
      v31 = v24;
      if ( *(char *)(v30 + 16) < 0 )
      {
        v101 = *(_OWORD *)(v30 + 88);
        if ( a2 )
        {
          if ( (unsigned int)IntersectRect(&v101, (int *)&v101, (int *)a2) )
          {
            Spb = FindSpb(v24);
            FreeSpb(Spb);
            v31 = *((_QWORD *)a1 + 2);
          }
        }
      }
      RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(v31 + 40) + 88LL);
      v36 = *((_QWORD *)a1 + 2);
      v37 = RectRgnIndirect;
      v38 = *(_QWORD *)(*(_QWORD *)(v36 + 40) + 168LL);
      if ( v38 )
      {
        GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v38, 1LL);
        v36 = *((_QWORD *)a1 + 2);
      }
      v91 = (*((_DWORD *)a1 + 49) & 0x300) != 0 ? 1049108 : 532;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v38, v35);
      v93 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v93;
      v94 = v36;
      if ( v36 )
        HMLockObject(v36);
      v40 = (struct tagWND *)*((_QWORD *)a1 + 2);
      bottom = v85.bottom;
      v42 = (_DWORD *)*((_QWORD *)v40 + 5);
      v88[0] = v85.right - v85.left;
      if ( v42[24] - v42[22] == v85.right - v85.left && v42[25] - v42[23] == v85.bottom - v85.top )
        v43 = v89;
      else
        v43 = 1;
      v44 = v40;
      if ( v43 )
      {
        if ( (unsigned int)DoesQualifyForResizeOptimization(a1) )
        {
          v83 = DoesRequireResizeLayoutSynchronization(v40);
          if ( (unsigned int)GreWindowResizeStarted(&v90, *(_QWORD *)v40, v83, &v84, &v90) && v84 )
            SetSystemTimer(*((_QWORD *)a1 + 2), 65522, v90, (int)ResizeTimerFunc, 1);
          v44 = (struct tagWND *)*((_QWORD *)a1 + 2);
          v45 = 1;
          bottom = v85.bottom;
          goto LABEL_55;
        }
        bottom = v85.bottom;
      }
      v45 = v87;
LABEL_55:
      xxxSetWindowPos(v44, 0LL, (unsigned int)v85.left, (unsigned int)v85.top, v88[0], bottom - v85.top, v91);
      if ( (*((_DWORD *)a1 + 49) & 0x20000000) != 0 )
      {
        v49 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL));
        v50 = *((_QWORD *)a1 + 2);
        *((_QWORD *)a1 + 26) = v49;
        if ( (unsigned int)IsTopLevelWindow(v50) )
        {
          v46 = *(_QWORD *)(v51 + 40);
          if ( (*(_DWORD *)(v46 + 288) & 0xF) == 2 && (*(_DWORD *)(*(_QWORD *)(v51 + 16) + 640LL) & 0x2000000) == 0 )
          {
            if ( a2 )
            {
              *(_OWORD *)a2 = *(_OWORD *)(v46 + 88);
              v51 = *((_QWORD *)a1 + 2);
            }
            *v86 = *(struct tagRECT *)(*(_QWORD *)(v51 + 40) + 88LL);
            v52 = *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL);
            *(_QWORD *)((char *)a1 + 292) = *(_QWORD *)((char *)a1 + 300);
            *(_OWORD *)((char *)a1 + 120) = v52;
            *((_DWORD *)a1 + 73) -= *((_DWORD *)a1 + 30);
            *((_DWORD *)a1 + 74) -= *((_DWORD *)a1 + 31);
          }
        }
        *((_DWORD *)a1 + 49) &= ~0x20000000u;
      }
      ThreadUnlock1(v47, v46, v48);
      if ( *(struct _MOVESIZEDATA **)(v22 + 664) == a1 )
      {
        v53 = GreCreateRectRgnIndirect(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL);
        v54 = v53;
        v55 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 168LL);
        if ( v55 )
          GreCombineRgn(v53, v53, v55, 1LL);
        if ( v37 )
        {
          if ( v54 )
          {
            GreCombineRgn(v37, v37, v54, 4LL);
          }
          else
          {
            GreDeleteObject(v37);
            v37 = 0LL;
          }
        }
        v56 = *(_QWORD *)(GetDesktopWindow(*((_QWORD *)a1 + 2)) + 112);
        v60 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59);
        v93 = *(_QWORD *)(v60 + 408);
        *(_QWORD *)(v60 + 408) = &v93;
        v94 = v56;
        if ( v56 )
          HMLockObject(v56);
        v61 = v56;
        v62 = v92;
        xxxUpdateThreadsWindows(v92, v61, v37);
        ThreadUnlock1(v64, v63, v65);
        if ( v45 )
        {
          GreWindowResizeComplete(*(_QWORD *)(gpDispInfo + 40LL), **((_QWORD **)a1 + 2));
          if ( v84 )
          {
            if ( !v83 )
              FindTimer(*((_QWORD *)a1 + 2), 65522LL, 2u, 1, 0LL);
          }
        }
        GreDeleteObject(v54);
      }
      else
      {
        v62 = v92;
      }
      result = GreDeleteObject(v37);
      *(_DWORD *)(v22 + 480) &= ~0x8000u;
      if ( v22 != v62 )
        result = PopAndFreeW32ThreadLock((__int64)v100, v66, v67, v68);
      v69 = v81;
      goto LABEL_81;
    }
    v102 = *v17;
    v71 = (const struct tagWND *)*((_QWORD *)a1 + 2);
    v99 = *(_OWORD *)(*gpDispInfo + 24LL);
    ReduceRectByWindowMargin(v71, &v102, &v102);
    if ( v14 >= 0 )
      v72 = *((_QWORD *)a1 + 26);
    else
      v72 = *((_QWORD *)a1 + 29);
    v97 = v72;
    result = LogicalToPhysicalDPIRect(
               &v102,
               &v102,
               *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
               &v97);
    v69 = v81;
    if ( (*((_DWORD *)a1 + 49) & 0x4000000) == 0 )
      v12 = v82;
    if ( v81 )
      result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v102, (__int64)&v99, v12);
    if ( a2 )
    {
      if ( (*((_BYTE *)a1 + 196) & 0x20) != 0 && v14 < 0 )
      {
        bMoveDevPreviewRect(
          *(_QWORD *)(gpDispInfo + 40LL),
          &v102,
          v12,
          **((_QWORD **)a1 + 2),
          *(_QWORD *)(gpsi + 4960LL));
      }
      else
      {
        if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v74, v75) + 448)
          || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v76,
                                                      v77,
                                                      v78)
                                                  + 448)
                                      + 8LL)
                        + 64LL) & 1) == 0 )
        {
          v11 = 0;
        }
        bMoveDevDragRect(*(_QWORD *)(gpDispInfo + 40LL), &v102, &v99, v11);
      }
      result = (__int64)v86;
      *v86 = *(struct tagRECT *)a2;
      goto LABEL_81;
    }
    if ( v15 )
    {
      if ( v15 != 1 || v14 >= 0 )
      {
LABEL_81:
        if ( v69 && *((_DWORD *)a1 + 44) == 9 )
        {
          v70 = *((_QWORD *)a1 + 26);
          *(_QWORD *)v88 = 0LL;
          v98 = v70;
          PhysicalToLogicalDPIPoint(
            v88,
            (char *)a1 + 308,
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
            &v98);
          *((_DWORD *)a1 + 42) = v96.left - v88[0];
          result = (unsigned int)(v96.top - v88[1]);
          *((_DWORD *)a1 + 43) = result;
        }
        return result;
      }
      v79 = gpDispInfo;
      v80 = *(_QWORD *)(gpsi + 4960LL);
    }
    else
    {
      if ( v14 >= 0 )
      {
        result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v102, (__int64)&v99, v12);
        goto LABEL_81;
      }
      v79 = gpDispInfo;
      v80 = *(_QWORD *)(gpsi + 4960LL);
    }
    result = bSetDevPreviewRect(*(HDEV *)(v79 + 40), v80);
    goto LABEL_81;
  }
  return result;
}
