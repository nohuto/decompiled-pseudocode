/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01E7350
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E69FC (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E9430 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     CkptRestore @ 0x1C00B6EB0 (CkptRestore.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01E5338 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C01E53B0 (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAU_MOVESIZEDATA@@@Z @ 0x1C01E5CD0 (-ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C01E5FC4 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01E85DC (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 */

void __fastcall xxxCommitMoveSize(struct tagWND *a1, struct _MOVESIZEDATA *a2)
{
  int v4; // r14d
  int v5; // edi
  struct _MOVESIZEDATA *v6; // rdx
  unsigned __int8 v7; // al
  int v8; // r15d
  __int64 v9; // rdx
  struct tagRECT *v10; // rdi
  int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // r8d
  LONG v16; // ecx
  __int64 v17; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // r8
  char v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // edx
  struct tagRECT *Prop; // rax
  struct tagRECT *v32; // rbp
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // r10d
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  __int64 v41; // rdx
  char v42; // al
  __int64 v43; // rdx
  _QWORD v44[3]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v45[3]; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v46; // [rsp+70h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *((_QWORD *)a1 + 10) != GetDesktopWindow((__int64)a1) )
  {
LABEL_63:
    v30 = *((_DWORD *)a2 + 49);
    if ( (v30 & 0x7000) == 0x1000 && (v30 & 0x20) == 0
      || (((v30 & 0x100000) == 0) & *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL)) != 0 )
    {
      Prop = (struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
      v32 = Prop;
      if ( Prop )
      {
        v46 = *(struct tagRECT *)((char *)a2 + 24);
        SwapRect(Prop, &v46);
        xxxMinMaximizeEx(*((struct tagWND **)a2 + 2), 9u, 4, 0LL, 0LL, 0LL);
        SwapRect(&v46, v32);
        MakeArrangedStateObservable(a2);
      }
    }
    v33 = *((_DWORD *)a2 + 44);
    v34 = 516;
    if ( (v33 == 9 && !v5 || v33 == 10) && !v4 )
      v34 = 517;
    v35 = v34 | 0x10;
    if ( (*((_DWORD *)a2 + 85) & 0x20) == 0 )
      v35 = v34;
    v36 = v35;
    if ( (v35 & 1) == 0 && (*((_DWORD *)a2 + 49) & 0x300) != 0 )
      v36 = v35 | 0x100000;
    v37 = *((_DWORD *)a2 + 70);
    v38 = *((_DWORD *)a2 + 9);
    v39 = v36 | 0x200000;
    *((_DWORD *)a2 + 49) |= 0x80000000;
    if ( (v37 & 8) == 0 )
      v39 = v36;
    xxxSetWindowPos(
      a1,
      0LL,
      *((unsigned int *)a2 + 6),
      *((unsigned int *)a2 + 7),
      *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
      v38 - *((_DWORD *)a2 + 7),
      v39);
    v40 = *((_DWORD *)a2 + 49);
    if ( (v40 & 0x100000) == 0 || !gSqmIsOptedIn )
      goto LABEL_94;
    v41 = *((_QWORD *)a1 + 5);
    v42 = *(_BYTE *)(v41 + 233) & 3;
    if ( v42 == 3 )
    {
      v43 = 3537LL;
    }
    else if ( v42 )
    {
      v43 = 3529LL;
    }
    else
    {
      if ( (*(_BYTE *)(v41 + 31) & 0x20) != 0 )
        goto LABEL_94;
      if ( (*((_DWORD *)a2 + 49) & 0x6000) == 0x6000 )
      {
        v43 = 3535LL;
      }
      else if ( (*((_DWORD *)a2 + 49) & 0x7000) == 0x1000 )
      {
        v43 = 3530LL;
      }
      else
      {
        if ( (v40 & 0x6000) == 0 )
          goto LABEL_94;
        v43 = 5882LL;
      }
    }
    WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v43, 1LL);
LABEL_94:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      CkptRestore((__int64)a1, (struct _MOVESIZEDATA *)((char *)a2 + 24));
    goto LABEL_96;
  }
  v7 = ShouldGoMonitorMaximizedMoveSizeData(v6);
  v8 = v7;
  if ( (*((_DWORD *)a2 + 49) & 0x300) != 0 || v7 )
    v4 = 1;
  v10 = (struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
  if ( v10 )
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 44) - 1) <= 1
      && (v11 = *((_DWORD *)a2 + 49), (v11 & 0x6000) == 0x6000)
      && (v11 & 0x300) == 0x300 )
    {
      v10->left = *((_DWORD *)a2 + 6);
      v10->right = *((_DWORD *)a2 + 8);
    }
    else
    {
      v12 = *((_QWORD *)a2 + 27);
      if ( v12 == *((_QWORD *)a2 + 29) )
      {
        if ( (*((_DWORD *)a2 + 49) & 0x1000) == 0
          && v4
          && ((*((_DWORD *)a2 + 70) & 8) == 0 || *((_DWORD *)a2 + 30) != -32000 || *((_DWORD *)a2 + 31) != -32000) )
        {
          *v10 = *(struct tagRECT *)((char *)a2 + 120);
        }
      }
      else if ( v8 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 )
      {
        if ( (*((_DWORD *)a2 + 49) & 0x1000000) != 0 )
        {
          v13 = *(_QWORD *)&v10->left - *((_QWORD *)a2 + 19);
          if ( *(_QWORD *)&v10->left == *((_QWORD *)a2 + 19) )
            v13 = *(_QWORD *)&v10->right - *((_QWORD *)a2 + 20);
          if ( v13 )
          {
            *v10 = *(struct tagRECT *)((char *)a2 + 152);
            v12 = *((_QWORD *)a2 + 27);
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 3 )
          v12 = MonitorFromRect(v10, 2u, 0);
        v14 = *((_QWORD *)a2 + 29);
        v15 = *((_DWORD *)a2 + 49);
        if ( (v15 & 0x300) == 0x300 )
        {
          v16 = *((_DWORD *)a2 + 75);
          if ( v10->left <= v16 && v16 < v10->right )
          {
            v17 = MonitorFromRect(v10, 2u, 0);
            v15 = *((_DWORD *)a2 + 49);
            v14 = v17;
          }
        }
        LOBYTE(v9) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3;
        if ( (_BYTE)v9 == 3 && (v15 & 0x300) == 0x300 )
          *((_DWORD *)a2 + 49) = v15 | 0x80000;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
        v44[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v44;
        v44[1] = v12;
        if ( v12 )
          _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
        v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19);
        v45[0] = *(_QWORD *)(v20 + 416);
        *(_QWORD *)(v20 + 416) = v45;
        v45[1] = v14;
        if ( v14 )
          _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
        if ( *(_WORD *)(*(_QWORD *)(v12 + 40) + 64LL) != *(_WORD *)(*(_QWORD *)(v14 + 40) + 64LL)
          && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        {
          xxxGetMinMaxTrackInfo(a2, 0);
        }
        if ( MonitorFromRect(v10, 2u, 0) != v14 )
        {
          v23 = (_DWORD *)*((_QWORD *)a1 + 5);
          v24 = 32;
          if ( (v23[72] & 0xF) == 2
            && (v10->right - v10->left != v23[24] - v23[22] || v10->bottom - v10->top != v23[25] - v23[23]) )
          {
            v24 = 48;
          }
          if ( MigrateRectMonitors(
                 a1,
                 (__m128i *)v10,
                 (struct tagMONITOR *)v12,
                 &v46,
                 (struct tagMONITOR *)v14,
                 0LL,
                 a2,
                 v24) )
          {
            *v10 = v46;
          }
        }
        ThreadUnlock1(v22, v21);
        ThreadUnlock1(v26, v25);
      }
    }
  }
  v27 = *((_DWORD *)a2 + 49);
  if ( ((v27 ^ (v27 >> 5)) & 0x300) != 0 || (v27 & 0x80000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v28 = *((_QWORD *)a1 + 5);
    v4 = 0;
    v29 = *((_QWORD *)a2 + 3) - *(_QWORD *)(v28 + 88);
    if ( !v29 )
      v29 = *((_QWORD *)a2 + 4) - *(_QWORD *)(v28 + 96);
    if ( v29 )
    {
      v5 = 1;
      goto LABEL_56;
    }
  }
  v5 = 0;
LABEL_56:
  MakeArrangedStateObservable(a2);
  if ( !v8 )
    goto LABEL_63;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 || *((_QWORD *)a2 + 27) != *((_QWORD *)a2 + 29) )
    xxxMinMaximizeEx(a1, 3u, *((_WORD *)a2 + 99) & 0x10 | gdwPUDFlags & 0x10000 | 6, *((_QWORD *)a2 + 29), 0LL, 0LL);
  if ( (*((_DWORD *)a2 + 49) & 0x100000) != 0 )
  {
    if ( gSqmIsOptedIn )
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3532LL, 1LL);
LABEL_96:
    if ( (*((_DWORD *)a2 + 49) & 0x100000) != 0 )
    {
      if ( gSqmIsOptedIn )
      {
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3531LL, *((unsigned int *)a2 + 79));
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3528LL, *((unsigned int *)a2 + 80));
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3536LL, *((unsigned int *)a2 + 81));
      }
    }
  }
}
