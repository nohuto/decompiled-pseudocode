/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FC9D4
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC060 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FEB54 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     CkptRestore @ 0x1C0014440 (CkptRestore.c)
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01FA97C (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C01FA9F4 (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAU_MOVESIZEDATA@@@Z @ 0x1C01FB300 (-ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C01FB5EC (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01FDC98 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     WPP_RECORDER_SF_qdddd @ 0x1C0200480 (WPP_RECORDER_SF_qdddd.c)
 */

void __fastcall xxxCommitMoveSize(struct tagWND *a1, struct _MOVESIZEDATA *a2)
{
  int v4; // r15d
  int v5; // r14d
  struct _MOVESIZEDATA *v6; // rdx
  int v7; // r8d
  unsigned __int8 v8; // al
  int v9; // r12d
  __int64 v10; // rdx
  struct tagRECT *v11; // rdi
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // r8
  LONG v17; // ecx
  __int64 v18; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _DWORD *v26; // r8
  char v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // edx
  __int64 v35; // rcx
  struct tagRECT *Prop; // rax
  struct tagRECT *v37; // rdi
  int v38; // eax
  int v39; // edi
  int v40; // ecx
  int v41; // r10d
  int v42; // eax
  int v43; // ecx
  int v44; // edx
  int v45; // ecx
  __int64 v46; // rdx
  char v47; // al
  __int64 v48; // rdx
  int v49; // [rsp+20h] [rbp-49h]
  __int64 v50; // [rsp+50h] [rbp-19h] BYREF
  __int64 v51; // [rsp+58h] [rbp-11h]
  __int64 v52; // [rsp+60h] [rbp-9h]
  __int64 v53; // [rsp+68h] [rbp-1h] BYREF
  __int64 v54; // [rsp+70h] [rbp+7h]
  __int64 v55; // [rsp+78h] [rbp+Fh]
  struct tagRECT v56; // [rsp+80h] [rbp+17h] BYREF

  *(_QWORD *)&v56.left = 0LL;
  *(_QWORD *)&v56.right = 0LL;
  v4 = 0;
  v50 = 0LL;
  v5 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  if ( *((_QWORD *)a1 + 13) != GetDesktopWindow((__int64)a1) )
  {
LABEL_63:
    v34 = *((_DWORD *)a2 + 49);
    if ( (v34 & 0x7000) == 0x1000 && (v34 & 0x20) == 0
      || (v35 = *((_QWORD *)a1 + 5), LOBYTE(v35) = ((v34 & 0x100000) == 0) & *(_BYTE *)(v35 + 31), (v35 & 1) != 0) )
    {
      Prop = (struct tagRECT *)GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      v37 = Prop;
      if ( Prop )
      {
        v56 = *(struct tagRECT *)((char *)a2 + 24);
        SwapRect(Prop, &v56);
        xxxMinMaximizeEx(*((struct tagWND **)a2 + 2), 9u, 4, 0LL, 0LL, 0LL);
        SwapRect(&v56, v37);
        MakeArrangedStateObservable(a2);
      }
    }
    v38 = *((_DWORD *)a2 + 44);
    v39 = 516;
    if ( (v38 == 9 && !v5 || v38 == 10) && !v4 )
      v39 = 517;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdddd(
        v35,
        v34,
        v7,
        14,
        v49,
        (char)a1,
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        *((_DWORD *)a2 + 8),
        *((_DWORD *)a2 + 9));
    v40 = v39 | 0x10;
    if ( (*((_DWORD *)a2 + 85) & 0x20) == 0 )
      v40 = v39;
    v41 = v40;
    if ( (v40 & 1) == 0 && (*((_DWORD *)a2 + 49) & 0x300) != 0 )
      v41 = v40 | 0x100000;
    v42 = *((_DWORD *)a2 + 70);
    v43 = *((_DWORD *)a2 + 9);
    v44 = v41 | 0x200000;
    *((_DWORD *)a2 + 49) |= 0x80000000;
    if ( (v42 & 8) == 0 )
      v44 = v41;
    xxxSetWindowPos(
      a1,
      0LL,
      *((unsigned int *)a2 + 6),
      *((unsigned int *)a2 + 7),
      *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
      v43 - *((_DWORD *)a2 + 7),
      v44);
    v45 = *((_DWORD *)a2 + 49);
    if ( (v45 & 0x100000) == 0 || !gSqmIsOptedIn )
      goto LABEL_96;
    v46 = *((_QWORD *)a1 + 5);
    v47 = *(_BYTE *)(v46 + 233) & 3;
    if ( v47 == 3 )
    {
      v48 = 3537LL;
    }
    else if ( v47 )
    {
      v48 = 3529LL;
    }
    else
    {
      if ( (*(_BYTE *)(v46 + 31) & 0x20) != 0 )
        goto LABEL_96;
      if ( (*((_DWORD *)a2 + 49) & 0x6000) == 0x6000 )
      {
        v48 = 3535LL;
      }
      else if ( (*((_DWORD *)a2 + 49) & 0x7000) == 0x1000 )
      {
        v48 = 3530LL;
      }
      else
      {
        if ( (v45 & 0x6000) == 0 )
          goto LABEL_96;
        v48 = 5882LL;
      }
    }
    WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v48, 1LL);
LABEL_96:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      CkptRestore((__int64)a1, (struct _MOVESIZEDATA *)((char *)a2 + 24));
    goto LABEL_98;
  }
  v8 = ShouldGoMonitorMaximizedMoveSizeData(v6);
  v9 = v8;
  if ( (*((_DWORD *)a2 + 49) & 0x300) != 0 || v8 )
    v4 = 1;
  v11 = (struct tagRECT *)GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
  if ( v11 )
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 44) - 1) <= 1
      && (v12 = *((_DWORD *)a2 + 49), v10 = 24576LL, (v12 & 0x6000) == 0x6000)
      && (v12 & 0x300) == 0x300 )
    {
      v11->left = *((_DWORD *)a2 + 6);
      v11->right = *((_DWORD *)a2 + 8);
    }
    else
    {
      v13 = *((_QWORD *)a2 + 27);
      if ( v13 == *((_QWORD *)a2 + 29) )
      {
        if ( (*((_DWORD *)a2 + 49) & 0x1000) == 0
          && v4
          && ((*((_DWORD *)a2 + 70) & 8) == 0 || *((_DWORD *)a2 + 30) != -32000 || *((_DWORD *)a2 + 31) != -32000) )
        {
          *v11 = *(struct tagRECT *)((char *)a2 + 120);
        }
      }
      else if ( v9 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 )
      {
        if ( (*((_DWORD *)a2 + 49) & 0x1000000) != 0 )
        {
          v14 = *(_QWORD *)&v11->left - *((_QWORD *)a2 + 19);
          if ( *(_QWORD *)&v11->left == *((_QWORD *)a2 + 19) )
            v14 = *(_QWORD *)&v11->right - *((_QWORD *)a2 + 20);
          if ( v14 )
          {
            *v11 = *(struct tagRECT *)((char *)a2 + 152);
            v13 = *((_QWORD *)a2 + 27);
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 3 )
          v13 = MonitorFromRect(v11, 2u, 0);
        v15 = *((_QWORD *)a2 + 29);
        v16 = *((unsigned int *)a2 + 49);
        if ( (*((_DWORD *)a2 + 49) & 0x300) == 0x300 )
        {
          v17 = *((_DWORD *)a2 + 75);
          if ( v11->left <= v17 && v17 < v11->right )
          {
            v18 = MonitorFromRect(v11, 2u, 0);
            v16 = *((unsigned int *)a2 + 49);
            v15 = v18;
          }
        }
        LOBYTE(v10) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3;
        if ( (_BYTE)v10 == 3 && (v16 & 0x300) == 0x300 )
        {
          LODWORD(v16) = v16 | 0x80000;
          *((_DWORD *)a2 + 49) = v16;
        }
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v16);
        v50 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v50;
        v51 = v13;
        if ( v13 )
          HMLockObject(v13);
        v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21);
        v53 = *(_QWORD *)(v22 + 408);
        *(_QWORD *)(v22 + 408) = &v53;
        v54 = v15;
        if ( v15 )
          HMLockObject(v15);
        if ( *(_WORD *)(*(_QWORD *)(v13 + 40) + 64LL) != *(_WORD *)(*(_QWORD *)(v15 + 40) + 64LL)
          && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        {
          xxxGetMinMaxTrackInfo(a2, 0);
        }
        if ( MonitorFromRect(v11, 2u, 0) != v15 )
        {
          v26 = (_DWORD *)*((_QWORD *)a1 + 5);
          v27 = 32;
          if ( (v26[72] & 0xF) == 2
            && (v11->right - v11->left != v26[24] - v26[22] || v11->bottom - v11->top != v26[25] - v26[23]) )
          {
            v27 = 48;
          }
          if ( MigrateRectMonitors(
                 a1,
                 (__m128i *)v11,
                 (struct tagMONITOR *)v13,
                 &v56,
                 (struct tagMONITOR *)v15,
                 0LL,
                 a2,
                 v27) )
          {
            *v11 = v56;
          }
        }
        ThreadUnlock1(v24, v23, v25);
        ThreadUnlock1(v29, v28, v30);
      }
    }
  }
  v31 = *((_DWORD *)a2 + 49);
  if ( ((v31 ^ (v31 >> 5)) & 0x300) != 0 || (v31 & 0x80000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v32 = *((_QWORD *)a1 + 5);
    v4 = 0;
    v33 = *((_QWORD *)a2 + 3) - *(_QWORD *)(v32 + 88);
    if ( !v33 )
      v33 = *((_QWORD *)a2 + 4) - *(_QWORD *)(v32 + 96);
    if ( v33 )
    {
      v5 = 1;
      goto LABEL_56;
    }
  }
  v5 = 0;
LABEL_56:
  MakeArrangedStateObservable(a2);
  if ( !v9 )
    goto LABEL_63;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 || *((_QWORD *)a2 + 27) != *((_QWORD *)a2 + 29) )
    xxxMinMaximizeEx(a1, 3u, *((_WORD *)a2 + 99) & 0x10 | gdwPUDFlags & 0x10000 | 6, *((_QWORD *)a2 + 29), 0LL, 0LL);
  if ( (*((_DWORD *)a2 + 49) & 0x100000) != 0 )
  {
    if ( gSqmIsOptedIn )
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3532LL, 1LL);
LABEL_98:
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
