/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FCC84
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC310 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FEE04 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     CkptRestore @ 0x1C0090C80 (CkptRestore.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01FAC2C (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C01FACA4 (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAU_MOVESIZEDATA@@@Z @ 0x1C01FB5B0 (-ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C01FB89C (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01FDF48 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     WPP_RECORDER_SF_qdddd @ 0x1C0200730 (WPP_RECORDER_SF_qdddd.c)
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
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _DWORD *v27; // r8
  char v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // edx
  __int64 v36; // rcx
  struct tagRECT *Prop; // rax
  struct tagRECT *v38; // rdi
  int v39; // eax
  int v40; // edi
  int v41; // ecx
  int v42; // r10d
  int v43; // eax
  int v44; // ecx
  int v45; // edx
  int v46; // ecx
  __int64 v47; // rdx
  char v48; // al
  __int64 v49; // rdx
  int v50; // [rsp+20h] [rbp-49h]
  __int64 v51; // [rsp+50h] [rbp-19h] BYREF
  __int64 v52; // [rsp+58h] [rbp-11h]
  __int64 v53; // [rsp+60h] [rbp-9h]
  __int64 v54; // [rsp+68h] [rbp-1h] BYREF
  __int64 v55; // [rsp+70h] [rbp+7h]
  __int64 v56; // [rsp+78h] [rbp+Fh]
  struct tagRECT v57; // [rsp+80h] [rbp+17h] BYREF

  *(_QWORD *)&v57.left = 0LL;
  *(_QWORD *)&v57.right = 0LL;
  v4 = 0;
  v51 = 0LL;
  v5 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  if ( *((_QWORD *)a1 + 13) != GetDesktopWindow((__int64)a1) )
  {
LABEL_63:
    v35 = *((_DWORD *)a2 + 49);
    if ( (v35 & 0x7000) == 0x1000 && (v35 & 0x20) == 0
      || (v36 = *((_QWORD *)a1 + 5), LOBYTE(v36) = ((v35 & 0x100000) == 0) & *(_BYTE *)(v36 + 31), (v36 & 1) != 0) )
    {
      Prop = (struct tagRECT *)GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      v38 = Prop;
      if ( Prop )
      {
        v57 = *(struct tagRECT *)((char *)a2 + 24);
        SwapRect(Prop, &v57);
        xxxMinMaximizeEx(*((struct tagWND **)a2 + 2), 9u, 4, 0LL, 0LL, 0LL);
        SwapRect(&v57, v38);
        MakeArrangedStateObservable(a2);
      }
    }
    v39 = *((_DWORD *)a2 + 44);
    v40 = 516;
    if ( (v39 == 9 && !v5 || v39 == 10) && !v4 )
      v40 = 517;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdddd(
        v36,
        v35,
        v7,
        14,
        v50,
        (char)a1,
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        *((_DWORD *)a2 + 8),
        *((_DWORD *)a2 + 9));
    v41 = v40 | 0x10;
    if ( (*((_DWORD *)a2 + 85) & 0x20) == 0 )
      v41 = v40;
    v42 = v41;
    if ( (v41 & 1) == 0 && (*((_DWORD *)a2 + 49) & 0x300) != 0 )
      v42 = v41 | 0x100000;
    v43 = *((_DWORD *)a2 + 70);
    v44 = *((_DWORD *)a2 + 9);
    v45 = v42 | 0x200000;
    *((_DWORD *)a2 + 49) |= 0x80000000;
    if ( (v43 & 8) == 0 )
      v45 = v42;
    xxxSetWindowPos(
      a1,
      0LL,
      *((unsigned int *)a2 + 6),
      *((unsigned int *)a2 + 7),
      *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
      v44 - *((_DWORD *)a2 + 7),
      v45);
    v46 = *((_DWORD *)a2 + 49);
    if ( (v46 & 0x100000) == 0 || !gSqmIsOptedIn )
      goto LABEL_96;
    v47 = *((_QWORD *)a1 + 5);
    v48 = *(_BYTE *)(v47 + 233) & 3;
    if ( v48 == 3 )
    {
      v49 = 3537LL;
    }
    else if ( v48 )
    {
      v49 = 3529LL;
    }
    else
    {
      if ( (*(_BYTE *)(v47 + 31) & 0x20) != 0 )
        goto LABEL_96;
      if ( (*((_DWORD *)a2 + 49) & 0x6000) == 0x6000 )
      {
        v49 = 3535LL;
      }
      else if ( (*((_DWORD *)a2 + 49) & 0x7000) == 0x1000 )
      {
        v49 = 3530LL;
      }
      else
      {
        if ( (v46 & 0x6000) == 0 )
          goto LABEL_96;
        v49 = 5882LL;
      }
    }
    WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v49, 1LL);
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
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v16, 768LL);
        v51 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v51;
        v52 = v13;
        if ( v13 )
          HMLockObject(v13);
        v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22);
        v54 = *(_QWORD *)(v23 + 408);
        *(_QWORD *)(v23 + 408) = &v54;
        v55 = v15;
        if ( v15 )
          HMLockObject(v15);
        if ( *(_WORD *)(*(_QWORD *)(v13 + 40) + 64LL) != *(_WORD *)(*(_QWORD *)(v15 + 40) + 64LL)
          && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        {
          xxxGetMinMaxTrackInfo(a2, 0);
        }
        if ( MonitorFromRect(v11, 2u, 0) != v15 )
        {
          v27 = (_DWORD *)*((_QWORD *)a1 + 5);
          v28 = 32;
          if ( (v27[72] & 0xF) == 2
            && (v11->right - v11->left != v27[24] - v27[22] || v11->bottom - v11->top != v27[25] - v27[23]) )
          {
            v28 = 48;
          }
          if ( MigrateRectMonitors(
                 a1,
                 (__m128i *)v11,
                 (struct tagMONITOR *)v13,
                 &v57,
                 (struct tagMONITOR *)v15,
                 0LL,
                 a2,
                 v28) )
          {
            *v11 = v57;
          }
        }
        ThreadUnlock1(v25, v24, v26);
        ThreadUnlock1(v30, v29, v31);
      }
    }
  }
  v32 = *((_DWORD *)a2 + 49);
  if ( ((v32 ^ (v32 >> 5)) & 0x300) != 0 || (v32 & 0x80000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v33 = *((_QWORD *)a1 + 5);
    v4 = 0;
    v34 = *((_QWORD *)a2 + 3) - *(_QWORD *)(v33 + 88);
    if ( !v34 )
      v34 = *((_QWORD *)a2 + 4) - *(_QWORD *)(v33 + 96);
    if ( v34 )
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
