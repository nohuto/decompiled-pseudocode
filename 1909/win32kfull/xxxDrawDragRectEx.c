/*
 * XREFs of xxxDrawDragRectEx @ 0x1C02006D0
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01FF9E4 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C02005C0 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRect @ 0x1C02006B4 (xxxDrawDragRect.c)
 * Callees:
 *     _ScreenToClient @ 0x1C001B03C (_ScreenToClient.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _SetSystemTimer @ 0x1C00EA334 (_SetSystemTimer.c)
 *     bSetDevDragRect @ 0x1C0139C20 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     DetectNewMonitor @ 0x1C01E6780 (DetectNewMonitor.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C01F9E8C (-DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x1C01F9EEC (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01FE088 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxUpdateThreadsWindows @ 0x1C0202278 (xxxUpdateThreadsWindows.c)
 *     FindSpb @ 0x1C0208BF4 (FindSpb.c)
 *     FreeSpb @ 0x1C0208C24 (FreeSpb.c)
 *     ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023C488 (-ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     GreWindowResizeComplete @ 0x1C026D404 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026D63C (GreWindowResizeStarted.c)
 *     bMoveDevDragRect @ 0x1C02823B8 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0282688 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C028286C (bSetDevPreviewRect.c)
 */

__int64 __fastcall xxxDrawDragRectEx(struct _MOVESIZEDATA *a1, __int64 a2, __int64 a3, struct tagRECT *a4)
{
  int v6; // r14d
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  __int64 result; // rax
  signed int v13; // esi
  unsigned int v14; // r14d
  __int64 v15; // rcx
  struct tagRECT *v16; // r13
  int v17; // edx
  struct tagRECT v18; // xmm0
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r15
  struct tagRECT *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // r9
  LONG left; // ecx
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 Spb; // rax
  __int64 RectRgnIndirect; // rax
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v38; // r13
  LONG bottom; // r8d
  _DWORD *v40; // rdx
  int v41; // eax
  struct tagWND *v42; // r14
  int v43; // r13d
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r9
  __int128 v50; // xmm0
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // r8
  __int64 v54; // r14
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r14
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // r8
  BOOL v65; // r13d
  __int64 v66; // rax
  const struct tagWND *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rax
  BOOL v75; // [rsp+40h] [rbp-C0h]
  int v76; // [rsp+44h] [rbp-BCh]
  unsigned int v77; // [rsp+44h] [rbp-BCh]
  int v78; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v79; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT *v80; // [rsp+60h] [rbp-A0h]
  int v81; // [rsp+68h] [rbp-98h]
  int v82[2]; // [rsp+70h] [rbp-90h] BYREF
  int v83; // [rsp+78h] [rbp-88h]
  unsigned int v84; // [rsp+7Ch] [rbp-84h] BYREF
  int v85; // [rsp+80h] [rbp-80h]
  __int64 v86; // [rsp+88h] [rbp-78h]
  __int64 v87; // [rsp+90h] [rbp-70h] BYREF
  __int64 v88; // [rsp+98h] [rbp-68h]
  __int64 v89; // [rsp+A0h] [rbp-60h]
  struct tagRECT v90; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v91; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v92; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v93; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v94[3]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v95; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v96; // [rsp+100h] [rbp+0h] BYREF

  v80 = a4;
  v6 = a3;
  v10 = 1;
  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 448)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9) + 448) + 8LL)
                  + 64LL) & 1) != 0 )
  {
    v76 = 1;
    v11 = 5;
  }
  else
  {
    v76 = 0;
    v11 = 4;
  }
  result = *((unsigned int *)a1 + 49);
  v13 = v6 & 0xF0000000;
  v14 = v6 & 0xFFFFFFF;
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
  v15 = *((_QWORD *)a1 + 3) - *(_QWORD *)a2;
  if ( !v15 )
    v15 = *((_QWORD *)a1 + 4) - *(_QWORD *)(a2 + 8);
  if ( v15 )
  {
LABEL_13:
    v16 = (struct tagRECT *)a2;
    if ( !a2 )
      v16 = v80;
    v75 = 0;
    v90 = *v16;
    if ( v13 >= 0 && v14 == 3 && (unsigned int)DetectNewMonitor((struct tagWND **)a1, &v90) )
    {
      v17 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF;
      v75 = v17 != 2;
      if ( a2 && (v17 != 2 || (*((_DWORD *)a1 + 49) & 0x20) == 0) )
      {
        v18 = v90;
        *v80 = v90;
        *(struct tagRECT *)a2 = v18;
      }
      if ( v17 != 2 )
      {
        xxxMS_FlushWigglies();
        GenerateMouseMove(0LL);
      }
    }
    v19 = *((_DWORD *)a1 + 49);
    if ( (v19 & 0x20) != 0 && ((v19 & 0x4000000) == 0 || v14 >= 2) )
    {
      v20 = *((_QWORD *)a1 + 2);
      v83 = 0;
      v81 = 0;
      v77 = 0;
      v21 = *(_QWORD *)(v20 + 16);
      v78 = 0;
      v87 = 0LL;
      v88 = 0LL;
      v86 = gptiCurrent;
      v89 = 0LL;
      memset(v94, 0, sizeof(v94));
      if ( v21 != gptiCurrent )
        LockW32Thread(v21, v94, v9);
      *(_DWORD *)(v21 + 480) |= 0x8000u;
      v22 = v80;
      if ( a2 )
        *v80 = *(struct tagRECT *)a2;
      v23 = *((_QWORD *)a1 + 2);
      v24 = *(_QWORD *)(v23 + 104);
      v79 = *v22;
      if ( v24 )
      {
        if ( !(unsigned int)IsTopLevelWindow(v23) )
        {
          ScreenToClient(v25, &v79);
          ScreenToClient(v26, &v79.right);
          if ( (*(_BYTE *)(*(_QWORD *)(v27 + 40) + 26LL) & 0x40) != 0 )
          {
            left = v79.left;
            v79.left = v79.right;
            v79.right = left;
          }
        }
      }
      v29 = *(_QWORD *)(v23 + 40);
      v30 = v23;
      if ( *(char *)(v29 + 16) < 0 )
      {
        v95 = *(_OWORD *)(v29 + 88);
        if ( a2 )
        {
          if ( (unsigned int)IntersectRect(&v95, (int *)&v95, (int *)a2) )
          {
            Spb = FindSpb(v23);
            FreeSpb(Spb);
            v30 = *((_QWORD *)a1 + 2);
          }
        }
      }
      RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(v30 + 40) + 88LL);
      v34 = *((_QWORD *)a1 + 2);
      v35 = RectRgnIndirect;
      v36 = *(_QWORD *)(*(_QWORD *)(v34 + 40) + 168LL);
      if ( v36 )
      {
        GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v36, 1LL);
        v34 = *((_QWORD *)a1 + 2);
      }
      v85 = (*((_DWORD *)a1 + 49) & 0x300) != 0 ? 1049108 : 532;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v36);
      v87 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v87;
      v88 = v34;
      if ( v34 )
        HMLockObject(v34);
      v38 = (struct tagWND *)*((_QWORD *)a1 + 2);
      bottom = v79.bottom;
      v40 = (_DWORD *)*((_QWORD *)v38 + 5);
      v82[0] = v79.right - v79.left;
      if ( v40[24] - v40[22] == v79.right - v79.left && v40[25] - v40[23] == v79.bottom - v79.top )
        v41 = v83;
      else
        v41 = 1;
      v42 = v38;
      if ( v41 )
      {
        if ( (unsigned int)DoesQualifyForResizeOptimization(a1) )
        {
          v77 = DoesRequireResizeLayoutSynchronization(v38);
          if ( (unsigned int)GreWindowResizeStarted(&v84, *(_QWORD *)v38, v77, &v78, &v84) && v78 )
            SetSystemTimer(*((_QWORD *)a1 + 2), 65522LL, v84, (__int64)ResizeTimerFunc, 1);
          v42 = (struct tagWND *)*((_QWORD *)a1 + 2);
          v43 = 1;
          bottom = v79.bottom;
          goto LABEL_55;
        }
        bottom = v79.bottom;
      }
      v43 = v81;
LABEL_55:
      xxxSetWindowPos(v42, 0LL, (unsigned int)v79.left, (unsigned int)v79.top, v82[0], bottom - v79.top, v85);
      if ( (*((_DWORD *)a1 + 49) & 0x20000000) != 0 )
      {
        v47 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL));
        v48 = *((_QWORD *)a1 + 2);
        *((_QWORD *)a1 + 26) = v47;
        if ( (unsigned int)IsTopLevelWindow(v48) )
        {
          v44 = *(_QWORD *)(v49 + 40);
          if ( (*(_DWORD *)(v44 + 288) & 0xF) == 2 && (*(_DWORD *)(*(_QWORD *)(v49 + 16) + 640LL) & 0x2000000) == 0 )
          {
            if ( a2 )
            {
              *(_OWORD *)a2 = *(_OWORD *)(v44 + 88);
              v49 = *((_QWORD *)a1 + 2);
            }
            *v80 = *(struct tagRECT *)(*(_QWORD *)(v49 + 40) + 88LL);
            v50 = *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL);
            *(_QWORD *)((char *)a1 + 292) = *(_QWORD *)((char *)a1 + 300);
            *(_OWORD *)((char *)a1 + 120) = v50;
            *((_DWORD *)a1 + 73) -= *((_DWORD *)a1 + 30);
            *((_DWORD *)a1 + 74) -= *((_DWORD *)a1 + 31);
          }
        }
        *((_DWORD *)a1 + 49) &= ~0x20000000u;
      }
      ThreadUnlock1(v45, v44, v46);
      if ( *(struct _MOVESIZEDATA **)(v21 + 664) == a1 )
      {
        v51 = GreCreateRectRgnIndirect(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL);
        v52 = v51;
        v53 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 168LL);
        if ( v53 )
          GreCombineRgn(v51, v51, v53, 1LL);
        if ( v35 )
        {
          if ( v52 )
          {
            GreCombineRgn(v35, v35, v52, 4LL);
          }
          else
          {
            GreDeleteObject(v35);
            v35 = 0LL;
          }
        }
        v54 = *(_QWORD *)(GetDesktopWindow(*((_QWORD *)a1 + 2)) + 112);
        v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56);
        v87 = *(_QWORD *)(v57 + 408);
        *(_QWORD *)(v57 + 408) = &v87;
        v88 = v54;
        if ( v54 )
          HMLockObject(v54);
        v58 = v54;
        v59 = v86;
        xxxUpdateThreadsWindows(v86, v58, v35);
        ThreadUnlock1(v61, v60, v62);
        if ( v43 )
        {
          GreWindowResizeComplete(*(_QWORD *)(gpDispInfo + 40LL), **((_QWORD **)a1 + 2));
          if ( v78 )
          {
            if ( !v77 )
              FindTimer(*((_QWORD *)a1 + 2), 65522LL, 2u, 1, 0LL);
          }
        }
        GreDeleteObject(v52);
      }
      else
      {
        v59 = v86;
      }
      result = GreDeleteObject(v35);
      *(_DWORD *)(v21 + 480) &= ~0x8000u;
      if ( v21 != v59 )
        result = PopAndFreeW32ThreadLock((__int64)v94, v63, v64);
      v65 = v75;
      goto LABEL_81;
    }
    v96 = *v16;
    v67 = (const struct tagWND *)*((_QWORD *)a1 + 2);
    v93 = *(_OWORD *)(*gpDispInfo + 24LL);
    ReduceRectByWindowMargin(v67, &v96, &v96);
    if ( v13 >= 0 )
      v68 = *((_QWORD *)a1 + 26);
    else
      v68 = *((_QWORD *)a1 + 29);
    v91 = v68;
    result = LogicalToPhysicalDPIRect(
               &v96,
               &v96,
               *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
               &v91);
    v65 = v75;
    if ( (*((_DWORD *)a1 + 49) & 0x4000000) == 0 )
      v11 = v76;
    if ( v75 )
      result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v96, (__int64)&v93, v11);
    if ( a2 )
    {
      if ( (*((_BYTE *)a1 + 196) & 0x20) != 0 && v13 < 0 )
      {
        bMoveDevPreviewRect(
          *(_QWORD *)(gpDispInfo + 40LL),
          &v96,
          v11,
          **((_QWORD **)a1 + 2),
          *(_QWORD *)(gpsi + 4960LL));
      }
      else
      {
        if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v69, v70) + 448)
          || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71, v72)
                                                  + 448)
                                      + 8LL)
                        + 64LL) & 1) == 0 )
        {
          v10 = 0;
        }
        bMoveDevDragRect(*(_QWORD *)(gpDispInfo + 40LL), &v96, &v93, v10);
      }
      result = (__int64)v80;
      *v80 = *(struct tagRECT *)a2;
      goto LABEL_81;
    }
    if ( v14 )
    {
      if ( v14 != 1 || v13 >= 0 )
      {
LABEL_81:
        if ( v65 && *((_DWORD *)a1 + 44) == 9 )
        {
          v66 = *((_QWORD *)a1 + 26);
          *(_QWORD *)v82 = 0LL;
          v92 = v66;
          PhysicalToLogicalDPIPoint(
            v82,
            (char *)a1 + 308,
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
            &v92);
          *((_DWORD *)a1 + 42) = v90.left - v82[0];
          result = (unsigned int)(v90.top - v82[1]);
          *((_DWORD *)a1 + 43) = result;
        }
        return result;
      }
      v73 = gpDispInfo;
      v74 = *(_QWORD *)(gpsi + 4960LL);
    }
    else
    {
      if ( v13 >= 0 )
      {
        result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v96, (__int64)&v93, v11);
        goto LABEL_81;
      }
      v73 = gpDispInfo;
      v74 = *(_QWORD *)(gpsi + 4960LL);
    }
    result = bSetDevPreviewRect(*(HDEV *)(v73 + 40), v74);
    goto LABEL_81;
  }
  return result;
}
