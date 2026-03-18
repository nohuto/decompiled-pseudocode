/*
 * XREFs of xxxDrawDragRectEx @ 0x1C01C6034
 * Callers:
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01C4E74 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxDrawDragRect @ 0x1C01C6018 (xxxDrawDragRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 *     _SetSystemTimer @ 0x1C00647F0 (_SetSystemTimer.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 *     bSetDevDragRect @ 0x1C00BCB00 (bSetDevDragRect.c)
 *     _ScreenToClient @ 0x1C00C1998 (_ScreenToClient.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     DetectNewMonitor @ 0x1C01AEDC4 (DetectNewMonitor.c)
 *     ReduceRectByWindowMargin @ 0x1C01BF6A0 (ReduceRectByWindowMargin.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C01C06AC (-DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x1C01C070C (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01C3548 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxUpdateThreadsWindows @ 0x1C01C83A4 (xxxUpdateThreadsWindows.c)
 *     FindSpb @ 0x1C01CE610 (FindSpb.c)
 *     FreeSpb @ 0x1C01CE640 (FreeSpb.c)
 *     GreWindowResizeComplete @ 0x1C023D070 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C023D234 (GreWindowResizeStarted.c)
 *     bMoveDevDragRect @ 0x1C02568B8 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0256B74 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0256D2C (bSetDevPreviewRect.c)
 */

__int64 __fastcall xxxDrawDragRectEx(struct _MOVESIZEDATA *a1, __int64 a2, int a3, struct tagRECT *a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned int v10; // r15d
  unsigned int v11; // esi
  int v12; // r13d
  __int64 v13; // rdx
  unsigned int v14; // r14d
  __int64 v15; // rcx
  struct tagRECT *v16; // rcx
  int v17; // r12d
  BOOL v18; // r8d
  struct tagRECT *v19; // r13
  struct tagRECT v20; // xmm1
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r10
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r9
  LONG left; // ecx
  __int64 v30; // r8
  __int64 v31; // rsi
  __int64 Spb; // r14
  __int64 RectRgnIndirect; // rax
  __int64 v34; // rdx
  __int64 v35; // r14
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v39; // r13
  LONG bottom; // r8d
  _DWORD *v41; // rdx
  int v42; // eax
  struct tagWND *v43; // r14
  int v44; // r13d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // rax
  __int128 v52; // xmm0
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // r8
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  struct tagRECT v67; // xmm1
  __int64 v68; // rcx
  __int128 v69; // xmm0
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  int v75; // [rsp+40h] [rbp-C0h]
  unsigned int v76; // [rsp+40h] [rbp-C0h]
  BOOL v77; // [rsp+44h] [rbp-BCh]
  int v78; // [rsp+48h] [rbp-B8h] BYREF
  int v79; // [rsp+4Ch] [rbp-B4h] BYREF
  struct tagRECT v80; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT *v81; // [rsp+60h] [rbp-A0h]
  int v82; // [rsp+68h] [rbp-98h]
  int v83[2]; // [rsp+70h] [rbp-90h]
  int v84; // [rsp+78h] [rbp-88h]
  unsigned int v85; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v86; // [rsp+80h] [rbp-80h] BYREF
  __int64 v87; // [rsp+88h] [rbp-78h]
  _DWORD v88[2]; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v89; // [rsp+98h] [rbp-68h] BYREF
  __int64 v90; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v91; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v92; // [rsp+B8h] [rbp-48h]
  __int128 v93; // [rsp+C8h] [rbp-38h] BYREF
  struct tagRECT v94; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v95[32]; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v96; // [rsp+110h] [rbp+10h] BYREF
  __int128 v97; // [rsp+120h] [rbp+20h] BYREF

  v81 = a4;
  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v10 = 1;
  if ( *(_QWORD *)(result + 448)
    && (result = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9)
                                                           + 448)
                                               + 8LL)
                                 + 52LL),
        (result & 1) != 0) )
  {
    v75 = 1;
    v11 = 5;
  }
  else
  {
    v75 = 0;
    v11 = 4;
  }
  v12 = *((_DWORD *)a1 + 49);
  v13 = a3 & 0xF0000000;
  v14 = a3 & 0xFFFFFFF;
  v79 = v13;
  if ( (v12 & 0x10) == 0 )
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
      v16 = a4;
    *(_QWORD *)v83 = v16;
    v77 = 0;
    v89 = *v16;
    v17 = v13 & 0x80000000;
    if ( (int)v13 >= 0 && v14 == 3 )
    {
      if ( (v12 & 0x20) != 0 )
        *((_DWORD *)a1 + 49) = v12 & 0xFDFFFFFF;
      v18 = (unsigned int)DetectNewMonitor((struct tagWND **)a1, &v89)
         && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF) != 2;
      v77 = v18;
      *((_DWORD *)a1 + 49) ^= (v12 ^ *((_DWORD *)a1 + 49)) & 0x2000000;
      if ( v18 )
      {
        xxxMS_FlushWigglies();
        GenerateMouseMove(0LL);
        v19 = v81;
        v16 = *(struct tagRECT **)v83;
        if ( a2 )
        {
          v20 = v89;
          *v81 = v89;
          *(struct tagRECT *)a2 = v20;
        }
LABEL_28:
        v21 = *((_DWORD *)a1 + 49);
        if ( (v21 & 0x20) != 0 && ((v21 & 0x4000000) == 0 || v14 >= 2) )
        {
          v22 = *((_QWORD *)a1 + 2);
          v84 = 0;
          v82 = 0;
          v76 = 0;
          v23 = *(_QWORD *)(v22 + 16);
          v78 = 0;
          v87 = gptiCurrent;
          if ( v23 != gptiCurrent )
            LockW32Thread(v23, (__int64)v95);
          *(_DWORD *)(v23 + 480) |= 0x8000u;
          if ( a2 )
            *v19 = *(struct tagRECT *)a2;
          v24 = *((_QWORD *)a1 + 2);
          v25 = *(_QWORD *)(v24 + 80);
          v80 = *v19;
          if ( v25 )
          {
            if ( !(unsigned int)IsTopLevelWindow(v24) )
            {
              ScreenToClient(v26, &v80);
              ScreenToClient(v27, &v80.right);
              if ( (*(_BYTE *)(*(_QWORD *)(v28 + 40) + 26LL) & 0x40) != 0 )
              {
                left = v80.left;
                v80.left = v80.right;
                v80.right = left;
              }
            }
          }
          v30 = *(_QWORD *)(v24 + 40);
          v31 = v24;
          if ( *(char *)(v30 + 16) < 0 )
          {
            Spb = FindSpb(v24);
            v93 = *(_OWORD *)(v30 + 88);
            if ( a2 )
            {
              if ( (unsigned int)IntersectRect(&v93, (int *)&v93, (int *)a2) )
              {
                FreeSpb(Spb);
                v31 = *((_QWORD *)a1 + 2);
              }
            }
          }
          RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(v31 + 40) + 88LL, v13, v30);
          v35 = *((_QWORD *)a1 + 2);
          v36 = RectRgnIndirect;
          v37 = *(_QWORD *)(*(_QWORD *)(v35 + 40) + 168LL);
          if ( v37 )
          {
            GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v37, 1LL);
            v35 = *((_QWORD *)a1 + 2);
          }
          v83[0] = (*((_DWORD *)a1 + 49) & 0x300) != 0 ? 1049108 : 532;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34);
          v91 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v91;
          v92 = v35;
          if ( v35 )
            _InterlockedAdd((volatile signed __int32 *)(v35 + 8), 1u);
          v39 = (struct tagWND *)*((_QWORD *)a1 + 2);
          bottom = v80.bottom;
          v41 = (_DWORD *)*((_QWORD *)v39 + 5);
          v79 = v80.right - v80.left;
          if ( v41[24] - v41[22] == v80.right - v80.left && v41[25] - v41[23] == v80.bottom - v80.top )
            v42 = v84;
          else
            v42 = 1;
          v43 = v39;
          if ( v42 )
          {
            if ( (unsigned int)DoesQualifyForResizeOptimization(a1) )
            {
              v76 = DoesRequireResizeLayoutSynchronization(v39);
              if ( (unsigned int)GreWindowResizeStarted(&v85, *(_QWORD *)v39, v76, &v78, &v85) && v78 )
                SetSystemTimer(*((_QWORD *)a1 + 2), 65522LL, v85, (__int64)ResizeTimerFunc, 1);
              v43 = (struct tagWND *)*((_QWORD *)a1 + 2);
              v44 = 1;
              bottom = v80.bottom;
              goto LABEL_59;
            }
            bottom = v80.bottom;
          }
          v44 = v82;
LABEL_59:
          xxxSetWindowPos(v43, 0LL, (unsigned int)v80.left, (unsigned int)v80.top, v79, bottom - v80.top, v83[0]);
          if ( (*((_DWORD *)a1 + 49) & 0x20000000) != 0 )
          {
            v48 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL));
            v49 = *((_QWORD *)a1 + 2);
            *((_QWORD *)a1 + 26) = v48;
            if ( (unsigned int)IsTopLevelWindow(v49) )
            {
              v45 = *(_QWORD *)(v50 + 40);
              if ( (*(_DWORD *)(v45 + 288) & 0xF) == 2 && (*(_DWORD *)(*(_QWORD *)(v50 + 16) + 640LL) & 0x2000000) == 0 )
              {
                if ( a2 )
                {
                  *(_OWORD *)a2 = *(_OWORD *)(v45 + 88);
                  v50 = *((_QWORD *)a1 + 2);
                }
                *v81 = *(struct tagRECT *)(*(_QWORD *)(v50 + 40) + 88LL);
                v46 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL);
                v51 = *(_QWORD *)((char *)a1 + 300);
                v52 = *(_OWORD *)(v46 + 88);
                *(_QWORD *)((char *)a1 + 292) = v51;
                *(_OWORD *)((char *)a1 + 120) = v52;
                *((_DWORD *)a1 + 73) = v51 - *((_DWORD *)a1 + 30);
                *((_DWORD *)a1 + 74) -= *((_DWORD *)a1 + 31);
              }
            }
            *((_DWORD *)a1 + 49) &= ~0x20000000u;
          }
          ThreadUnlock1(v46, v45, v47);
          if ( *(struct _MOVESIZEDATA **)(v23 + 664) == a1 )
          {
            v55 = GreCreateRectRgnIndirect(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL, v53, v54);
            v56 = v55;
            v57 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 168LL);
            if ( v57 )
              GreCombineRgn(v55, v55, v57, 1LL);
            if ( v56 )
            {
              if ( v36 )
                GreCombineRgn(v36, v36, v56, 4LL);
            }
            else if ( v36 )
            {
              GreDeleteObject(v36);
              v36 = 0LL;
            }
            v58 = *(_QWORD *)(GetDesktopWindow(*((_QWORD *)a1 + 2)) + 88);
            v60 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59);
            v91 = *(_QWORD *)(v60 + 408);
            *(_QWORD *)(v60 + 408) = &v91;
            v92 = v58;
            if ( v58 )
              _InterlockedAdd((volatile signed __int32 *)(v58 + 8), 1u);
            v61 = v58;
            v62 = v87;
            xxxUpdateThreadsWindows(v87, v61, v36);
            ThreadUnlock1(v64, v63, v65);
            if ( v44 )
            {
              GreWindowResizeComplete(*(_QWORD *)(gpDispInfo + 40LL), **((_QWORD **)a1 + 2));
              if ( v78 )
              {
                if ( !v76 )
                  FindTimer(*((_QWORD *)a1 + 2), 65522LL, 2u, 1, 0LL);
              }
            }
            GreDeleteObject(v56);
          }
          else
          {
            v62 = v87;
          }
          result = GreDeleteObject(v36);
          *(_DWORD *)(v23 + 480) &= ~0x8000u;
          if ( v23 != v62 )
            result = PopAndFreeW32ThreadLock((__int64)v95, v66);
          goto LABEL_110;
        }
        v67 = *v16;
        v68 = *((_QWORD *)a1 + 2);
        v69 = *(_OWORD *)((char *)a1 + 88);
        v86 = 0LL;
        v96 = v67;
        v97 = v69;
        v94 = v67;
        ReduceRectByWindowMargin(v68, &v94, (__int64)&v96);
        if ( v17 )
          v70 = *((_QWORD *)a1 + 29);
        else
          v70 = *((_QWORD *)a1 + 26);
        v86 = v70;
        LogicalToPhysicalDPIRect(&v96, &v96, *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL), &v86);
        result = LogicalToPhysicalDPIRect(
                   &v97,
                   &v97,
                   *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
                   &v86);
        if ( (*((_DWORD *)a1 + 49) & 0x4000000) == 0 )
          v11 = v75;
        if ( v77 )
        {
          if ( v17 )
            result = bSetDevPreviewRect(*(HDEV *)(gpDispInfo + 40LL), *(_QWORD *)(gpsi + 4960LL));
          else
            result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v96, (__int64)&v97, v11);
        }
        if ( a2 )
        {
          if ( (((*((_BYTE *)a1 + 196) & 0x20) != 0) & _bittest(&v79, 0x1Fu)) != 0 )
          {
            result = bMoveDevPreviewRect(
                       *(_QWORD *)(gpDispInfo + 40LL),
                       &v96,
                       v11,
                       **((_QWORD **)a1 + 2),
                       *(_QWORD *)(gpsi + 4960LL));
          }
          else
          {
            if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71) + 448)
              || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v72) + 448)
                                          + 8LL)
                            + 52LL) & 1) == 0 )
            {
              v10 = 0;
            }
            result = bMoveDevDragRect(*(_QWORD *)(gpDispInfo + 40LL), &v96, &v97, v10);
          }
          *v19 = *(struct tagRECT *)a2;
          goto LABEL_110;
        }
        if ( v14 )
        {
          if ( v14 == 1 && v17 )
          {
            v73 = gpDispInfo;
            v74 = *(_QWORD *)(gpsi + 4960LL);
            goto LABEL_109;
          }
        }
        else
        {
          if ( v17 )
          {
            v73 = gpDispInfo;
            v74 = *(_QWORD *)(gpsi + 4960LL);
LABEL_109:
            result = bSetDevPreviewRect(*(HDEV *)(v73 + 40), v74);
            goto LABEL_110;
          }
          result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v96, (__int64)&v97, v11);
        }
LABEL_110:
        if ( v77 && *((_DWORD *)a1 + 44) == 9 )
        {
          v90 = *((_QWORD *)a1 + 26);
          PhysicalToLogicalDPIPoint(
            v88,
            (char *)a1 + 308,
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
            &v90);
          *((_DWORD *)a1 + 42) = v89.left - v88[0];
          result = (unsigned int)(v89.top - v88[1]);
          *((_DWORD *)a1 + 43) = result;
        }
        return result;
      }
      v16 = *(struct tagRECT **)v83;
    }
    v19 = v81;
    goto LABEL_28;
  }
  return result;
}
