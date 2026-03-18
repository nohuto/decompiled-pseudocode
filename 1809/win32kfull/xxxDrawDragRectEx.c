/*
 * XREFs of xxxDrawDragRectEx @ 0x1C01EAC18
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01EA210 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01EAB00 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRect @ 0x1C01EABFC (xxxDrawDragRect.c)
 * Callees:
 *     _ScreenToClient @ 0x1C000CE40 (_ScreenToClient.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     _SetSystemTimer @ 0x1C00DC7D4 (_SetSystemTimer.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     bSetDevDragRect @ 0x1C0125040 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     DetectNewMonitor @ 0x1C01D1CDC (DetectNewMonitor.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C01E48A4 (-DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x1C01E4904 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01E89B0 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxUpdateThreadsWindows @ 0x1C01EC6DC (xxxUpdateThreadsWindows.c)
 *     FindSpb @ 0x1C01F2BF4 (FindSpb.c)
 *     FreeSpb @ 0x1C01F2C24 (FreeSpb.c)
 *     ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C0224620 (-ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     GreWindowResizeComplete @ 0x1C025450C (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C025470C (GreWindowResizeStarted.c)
 *     bMoveDevDragRect @ 0x1C02698C8 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0269B94 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0269D68 (bSetDevPreviewRect.c)
 */

__int64 __fastcall xxxDrawDragRectEx(struct _MOVESIZEDATA *a1, __int64 a2, int a3, struct tagRECT *a4)
{
  __int64 v8; // rdx
  char v9; // r12
  __int64 result; // rax
  signed int v11; // esi
  unsigned int v12; // r14d
  __int64 v13; // rcx
  struct tagRECT *v14; // r13
  int v15; // edx
  struct tagRECT v16; // xmm0
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r12
  struct tagRECT *v20; // rax
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r9
  LONG left; // ecx
  __int64 v27; // rsi
  __int64 Spb; // r14
  __int64 v29; // r8
  __int64 RectRgnIndirect; // rax
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v36; // r13
  LONG bottom; // r8d
  _DWORD *v38; // rdx
  int v39; // eax
  struct tagWND *v40; // r14
  int v41; // r13d
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r9
  __int64 v47; // rax
  __int128 v48; // xmm0
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  BOOL v60; // r13d
  struct tagRECT v61; // xmm0
  const struct tagWND *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  struct tagRECT *v68; // rdx
  BOOL v69; // [rsp+40h] [rbp-C0h]
  char v70; // [rsp+44h] [rbp-BCh]
  unsigned int v71; // [rsp+44h] [rbp-BCh]
  int v72; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v73; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT *v74; // [rsp+60h] [rbp-A0h]
  int v75; // [rsp+68h] [rbp-98h]
  int v76; // [rsp+6Ch] [rbp-94h]
  unsigned int v77; // [rsp+70h] [rbp-90h] BYREF
  int v78; // [rsp+74h] [rbp-8Ch]
  int v79; // [rsp+78h] [rbp-88h]
  __int64 v80; // [rsp+80h] [rbp-80h]
  __int64 v81; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v82[2]; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v83; // [rsp+98h] [rbp-68h] BYREF
  __int64 v84; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v85; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v86; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v87; // [rsp+C8h] [rbp-38h]
  __int128 v88; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v89[3]; // [rsp+E8h] [rbp-18h] BYREF
  struct tagRECT v90; // [rsp+100h] [rbp+0h] BYREF

  v74 = a4;
  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8) + 456) + 8LL)
                  + 64LL) & 1) != 0 )
  {
    v70 = 1;
    v9 = 5;
  }
  else
  {
    v70 = 0;
    v9 = 4;
  }
  result = *((unsigned int *)a1 + 49);
  v11 = a3 & 0xF0000000;
  v12 = a3 & 0xFFFFFFF;
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
  v13 = *((_QWORD *)a1 + 3) - *(_QWORD *)a2;
  if ( !v13 )
    v13 = *((_QWORD *)a1 + 4) - *(_QWORD *)(a2 + 8);
  if ( v13 )
  {
LABEL_13:
    v14 = (struct tagRECT *)a2;
    if ( !a2 )
      v14 = v74;
    v69 = 0;
    v83 = *v14;
    if ( v11 >= 0 && v12 == 3 && (unsigned int)DetectNewMonitor((struct tagWND **)a1, &v83) )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF;
      v69 = v15 != 2;
      if ( a2 && (v15 != 2 || (*((_DWORD *)a1 + 49) & 0x20) == 0) )
      {
        v16 = v83;
        *v74 = v83;
        *(struct tagRECT *)a2 = v16;
      }
      if ( v15 != 2 )
      {
        xxxMS_FlushWigglies();
        GenerateMouseMove(0LL);
      }
    }
    v17 = *((_DWORD *)a1 + 49);
    if ( (v17 & 0x20) != 0 && ((v17 & 0x4000000) == 0 || v12 >= 2) )
    {
      v18 = *((_QWORD *)a1 + 2);
      v76 = 0;
      v75 = 0;
      v71 = 0;
      v19 = *(_QWORD *)(v18 + 16);
      v72 = 0;
      v80 = gptiCurrent;
      if ( v19 != gptiCurrent )
        LockW32Thread(v19, v89);
      *(_DWORD *)(v19 + 488) |= 0x8000u;
      v20 = v74;
      if ( a2 )
        *v74 = *(struct tagRECT *)a2;
      v21 = *((_QWORD *)a1 + 2);
      v22 = *(_QWORD *)(v21 + 80);
      v73 = *v20;
      if ( v22 )
      {
        if ( !(unsigned int)IsTopLevelWindow(v21) )
        {
          ScreenToClient(v23, &v73);
          ScreenToClient(v24, &v73.right);
          if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 26LL) & 0x40) != 0 )
          {
            left = v73.left;
            v73.left = v73.right;
            v73.right = left;
          }
        }
      }
      v27 = v21;
      if ( *(char *)(*(_QWORD *)(v21 + 40) + 16LL) < 0 )
      {
        Spb = FindSpb(v21);
        v88 = *(_OWORD *)(v29 + 88);
        if ( a2 )
        {
          if ( (unsigned int)IntersectRect(&v88, (int *)&v88, (int *)a2) )
          {
            FreeSpb(Spb);
            v27 = *((_QWORD *)a1 + 2);
          }
        }
      }
      RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(v27 + 40) + 88LL);
      v32 = *((_QWORD *)a1 + 2);
      v33 = RectRgnIndirect;
      v34 = *(_QWORD *)(*(_QWORD *)(v32 + 40) + 168LL);
      if ( v34 )
      {
        GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v34, 1LL);
        v32 = *((_QWORD *)a1 + 2);
      }
      v78 = (*((_DWORD *)a1 + 49) & 0x300) != 0 ? 1049108 : 532;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31);
      v86 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v86;
      v87 = v32;
      if ( v32 )
        _InterlockedAdd((volatile signed __int32 *)(v32 + 8), 1u);
      v36 = (struct tagWND *)*((_QWORD *)a1 + 2);
      bottom = v73.bottom;
      v38 = (_DWORD *)*((_QWORD *)v36 + 5);
      v79 = v73.right - v73.left;
      if ( v38[24] - v38[22] == v73.right - v73.left && v38[25] - v38[23] == v73.bottom - v73.top )
        v39 = v76;
      else
        v39 = 1;
      v40 = v36;
      if ( v39 )
      {
        if ( (unsigned int)DoesQualifyForResizeOptimization(a1) )
        {
          v71 = DoesRequireResizeLayoutSynchronization(v36);
          if ( (unsigned int)GreWindowResizeStarted(&v77, *(_QWORD *)v36, v71, &v72, &v77) && v72 )
            SetSystemTimer(*((_QWORD *)a1 + 2), 65522LL, v77, (__int64)ResizeTimerFunc, 1);
          v40 = (struct tagWND *)*((_QWORD *)a1 + 2);
          v41 = 1;
          bottom = v73.bottom;
          goto LABEL_55;
        }
        bottom = v73.bottom;
      }
      v41 = v75;
LABEL_55:
      xxxSetWindowPos(v40, 0LL, (unsigned int)v73.left, (unsigned int)v73.top, v79, bottom - v73.top, v78);
      if ( (*((_DWORD *)a1 + 49) & 0x20000000) != 0 )
      {
        v44 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL));
        v45 = *((_QWORD *)a1 + 2);
        *((_QWORD *)a1 + 26) = v44;
        if ( (unsigned int)IsTopLevelWindow(v45) )
        {
          v42 = *(_QWORD *)(v46 + 40);
          if ( (*(_DWORD *)(v42 + 288) & 0xF) == 2 && (*(_DWORD *)(*(_QWORD *)(v46 + 16) + 648LL) & 0x2000000) == 0 )
          {
            if ( a2 )
            {
              *(_OWORD *)a2 = *(_OWORD *)(v42 + 88);
              v46 = *((_QWORD *)a1 + 2);
            }
            *v74 = *(struct tagRECT *)(*(_QWORD *)(v46 + 40) + 88LL);
            v43 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL);
            v47 = *(_QWORD *)((char *)a1 + 300);
            v48 = *(_OWORD *)(v43 + 88);
            *(_QWORD *)((char *)a1 + 292) = v47;
            *(_OWORD *)((char *)a1 + 120) = v48;
            *((_DWORD *)a1 + 73) = v47 - *((_DWORD *)a1 + 30);
            *((_DWORD *)a1 + 74) -= *((_DWORD *)a1 + 31);
          }
        }
        *((_DWORD *)a1 + 49) &= ~0x20000000u;
      }
      ThreadUnlock1(v43, v42);
      if ( *(struct _MOVESIZEDATA **)(v19 + 672) == a1 )
      {
        v49 = GreCreateRectRgnIndirect(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL);
        v50 = v49;
        v51 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 168LL);
        if ( v51 )
          GreCombineRgn(v49, v49, v51, 1LL);
        if ( v50 )
        {
          if ( v33 )
            GreCombineRgn(v33, v33, v50, 4LL);
        }
        else if ( v33 )
        {
          GreDeleteObject(v33);
          v33 = 0LL;
        }
        v52 = *(_QWORD *)(GetDesktopWindow(*((_QWORD *)a1 + 2)) + 88);
        v54 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53);
        v86 = *(_QWORD *)(v54 + 416);
        *(_QWORD *)(v54 + 416) = &v86;
        v87 = v52;
        if ( v52 )
          _InterlockedAdd((volatile signed __int32 *)(v52 + 8), 1u);
        v55 = v52;
        v56 = v80;
        xxxUpdateThreadsWindows(v80, v55, v33);
        ThreadUnlock1(v58, v57);
        if ( v41 )
        {
          GreWindowResizeComplete(*(_QWORD *)(gpDispInfo + 40LL), **((_QWORD **)a1 + 2));
          if ( v72 )
          {
            if ( !v71 )
              FindTimer(*((_QWORD *)a1 + 2), 65522LL, 2u, 1, 0LL);
          }
        }
        GreDeleteObject(v50);
      }
      else
      {
        v56 = v80;
      }
      result = GreDeleteObject(v33);
      *(_DWORD *)(v19 + 488) &= ~0x8000u;
      if ( v19 != v56 )
        result = PopAndFreeW32ThreadLock((__int64)v89, v59);
      v60 = v69;
      goto LABEL_82;
    }
    v61 = *v14;
    v81 = 0LL;
    v90 = v61;
    v62 = (const struct tagWND *)*((_QWORD *)a1 + 2);
    v85 = *(_OWORD *)(*gpDispInfo + 24LL);
    ReduceRectByWindowMargin(v62, &v90, &v90);
    if ( v11 >= 0 )
      v63 = *((_QWORD *)a1 + 26);
    else
      v63 = *((_QWORD *)a1 + 29);
    v81 = v63;
    result = LogicalToPhysicalDPIRect(
               &v90,
               &v90,
               *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
               &v81);
    v60 = v69;
    if ( (*((_DWORD *)a1 + 49) & 0x4000000) == 0 )
      v9 = v70;
    if ( v69 )
      result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v90, (__int64)&v85, v9);
    if ( a2 )
    {
      if ( (*((_BYTE *)a1 + 196) & 0x20) != 0 && v11 < 0 )
      {
        bMoveDevPreviewRect(*(HDEV *)(gpDispInfo + 40LL), (struct _RECTL *)&v90, *(_QWORD *)(gpsi + 4960LL));
      }
      else
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64) + 456) )
          W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65);
        bMoveDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
      }
      result = (__int64)v74;
      *v74 = *(struct tagRECT *)a2;
      goto LABEL_82;
    }
    if ( v12 )
    {
      if ( v12 != 1 || v11 >= 0 )
      {
LABEL_82:
        if ( v60 && *((_DWORD *)a1 + 44) == 9 )
        {
          v84 = *((_QWORD *)a1 + 26);
          PhysicalToLogicalDPIPoint(
            v82,
            (char *)a1 + 308,
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
            &v84);
          *((_DWORD *)a1 + 42) = v83.left - v82[0];
          result = (unsigned int)(v83.top - v82[1]);
          *((_DWORD *)a1 + 43) = result;
        }
        return result;
      }
      v66 = gpDispInfo;
      v67 = *(_QWORD *)(gpsi + 4960LL);
      v68 = 0LL;
    }
    else
    {
      if ( v11 >= 0 )
      {
        result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v90, (__int64)&v85, v9);
        goto LABEL_82;
      }
      v66 = gpDispInfo;
      v67 = *(_QWORD *)(gpsi + 4960LL);
      v68 = &v90;
    }
    result = bSetDevPreviewRect(*(HDEV *)(v66 + 40), (struct _RECTL *)v68, v67);
    goto LABEL_82;
  }
  return result;
}
