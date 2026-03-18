/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01C2948
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C2254 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C3FB4 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxMinMaximize @ 0x1C0065638 (xxxMinMaximize.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     CkptRestore @ 0x1C00669FC (CkptRestore.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01C10E8 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C01C1830 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01C316C (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     MigrateRectMonitors @ 0x1C01C57E8 (MigrateRectMonitors.c)
 */

void __fastcall xxxCommitMoveSize(struct tagWND *a1, struct _MOVESIZEDATA *a2)
{
  int v4; // r15d
  int v5; // edi
  __int64 v6; // rdx
  int v7; // r12d
  int v8; // edx
  BOOL v9; // r9d
  __int16 v10; // ax
  int v11; // r14d
  __int64 v12; // rdx
  struct tagRECT *Prop; // rdi
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r14
  int v19; // r8d
  LONG v20; // ecx
  __int64 v21; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // r8d
  int v37; // edx
  struct tagRECT *v38; // rax
  struct tagRECT *v39; // r14
  int v40; // eax
  int v41; // edx
  int v42; // ecx
  int v43; // r10d
  int v44; // eax
  int v45; // ecx
  int v46; // edx
  int v47; // ecx
  __int64 v48; // rdx
  char v49; // al
  __int64 v50; // rdx
  _QWORD v51[3]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v52[3]; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v53; // [rsp+70h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0;
  v7 = 1;
  if ( *((_QWORD *)a1 + 10) != GetDesktopWindow((__int64)a1) )
    goto LABEL_73;
  v8 = *(_DWORD *)(v6 + 196);
  v9 = !*((_DWORD *)a2 + 60) && (v8 & 0x300) == 0;
  v10 = v8;
  if ( !v9 )
    goto LABEL_9;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) == 0 )
  {
    v10 = v8;
    *((_DWORD *)a2 + 49) = v8 | 0x80000;
LABEL_9:
    v7 = 0;
  }
  if ( (v10 & 0x300) != 0 || v7 )
  {
    v4 = 1;
    v11 = 1;
  }
  else
  {
    v11 = 0;
    v4 = 1;
  }
  Prop = (struct tagRECT *)RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomCheckpointProp, 1LL);
  if ( Prop )
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 44) - 1) <= 1
      && (v15 = *((_DWORD *)a2 + 49), (v15 & 0x6000) == 0x6000)
      && (v15 & 0x300) == 0x300 )
    {
      Prop->left = *((_DWORD *)a2 + 6);
      Prop->right = *((_DWORD *)a2 + 8);
    }
    else
    {
      v16 = *((_QWORD *)a2 + 27);
      if ( v16 == *((_QWORD *)a2 + 29) )
      {
        if ( (*((_DWORD *)a2 + 49) & 0x1000) == 0
          && v11
          && ((*((_DWORD *)a2 + 70) & 8) == 0 || *((_DWORD *)a2 + 30) != -32000 || *((_DWORD *)a2 + 31) != -32000) )
        {
          *Prop = *(struct tagRECT *)((char *)a2 + 120);
        }
      }
      else if ( v7 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 )
      {
        if ( (*((_DWORD *)a2 + 49) & 0x1000000) != 0 )
        {
          v17 = *(_QWORD *)&Prop->left - *((_QWORD *)a2 + 19);
          if ( *(_QWORD *)&Prop->left == *((_QWORD *)a2 + 19) )
            v17 = *(_QWORD *)&Prop->right - *((_QWORD *)a2 + 20);
          if ( v17 )
          {
            *Prop = *(struct tagRECT *)((char *)a2 + 152);
            v16 = *((_QWORD *)a2 + 27);
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 3 )
          v16 = MonitorFromRect(Prop, 2LL, 0LL, v14);
        v18 = *((_QWORD *)a2 + 29);
        v19 = *((_DWORD *)a2 + 49);
        if ( (v19 & 0x300) == 0x300 )
        {
          v20 = *((_DWORD *)a2 + 75);
          if ( Prop->left <= v20 && v20 < Prop->right )
          {
            v21 = MonitorFromRect(Prop, 2LL, 0LL, 768LL);
            v19 = *((_DWORD *)a2 + 49);
            v18 = v21;
          }
        }
        LOBYTE(v12) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3;
        if ( (_BYTE)v12 == 3 && (v19 & 0x300) == 0x300 )
          *((_DWORD *)a2 + 49) = v19 | 0x80000;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
        v51[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v51;
        v51[1] = v16;
        if ( v16 )
          _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
        v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23);
        v52[0] = *(_QWORD *)(v24 + 408);
        *(_QWORD *)(v24 + 408) = v52;
        v52[1] = v18;
        if ( v18 )
          _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
        if ( *(_WORD *)(*(_QWORD *)(v16 + 40) + 64LL) != *(_WORD *)(*(_QWORD *)(v18 + 40) + 64LL)
          && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        {
          xxxGetMinMaxTrackInfo(a2, 0);
        }
        v25 = *((_QWORD *)a1 + 5);
        v26 = 32;
        if ( (*(_DWORD *)(v25 + 288) & 0xF) == 2
          && *(_WORD *)(v25 + 284) == *(_WORD *)(*(_QWORD *)(v18 + 40) + 64LL)
          && (Prop->right - Prop->left != *(_DWORD *)(v25 + 96) - *(_DWORD *)(v25 + 88)
           || Prop->bottom - Prop->top != *(_DWORD *)(v25 + 100) - *(_DWORD *)(v25 + 92)) )
        {
          v26 = 48;
        }
        if ( (unsigned int)MigrateRectMonitors(
                             (_DWORD)a1,
                             (_DWORD)Prop,
                             v16,
                             (unsigned int)&v53,
                             v18,
                             0LL,
                             (__int64)a2,
                             v26) )
          *Prop = v53;
        ThreadUnlock1(v28, v27, v29);
        ThreadUnlock1(v31, v30, v32);
      }
    }
  }
  v33 = *((_DWORD *)a2 + 49);
  if ( ((v33 ^ (v33 >> 5)) & 0x300) != 0 || (v33 & 0x80000) != 0 )
    goto LABEL_63;
  v34 = *((_QWORD *)a1 + 5);
  v4 = 0;
  v35 = *((_QWORD *)a2 + 3) - *(_QWORD *)(v34 + 88);
  if ( !v35 )
    v35 = *((_QWORD *)a2 + 4) - *(_QWORD *)(v34 + 96);
  if ( !v35 )
LABEL_63:
    v5 = 0;
  else
    v5 = 1;
  MakeArrangedStateObservable(a2);
  if ( !v7 )
  {
LABEL_73:
    v37 = *((_DWORD *)a2 + 49);
    if ( (v37 & 0x7000) == 0x1000 && (v37 & 0x20) == 0
      || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 && (v37 & 0x100000) == 0 )
    {
      v38 = (struct tagRECT *)RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomCheckpointProp, 1LL);
      v39 = v38;
      if ( v38 )
      {
        v53 = *(struct tagRECT *)((char *)a2 + 24);
        SwapRect(v38, &v53);
        xxxMinMaximize(*((struct tagWND **)a2 + 2), 9LL);
        SwapRect(&v53, v39);
        MakeArrangedStateObservable(a2);
      }
    }
    v40 = *((_DWORD *)a2 + 44);
    v41 = 516;
    if ( (v40 == 9 && !v5 || v40 == 10) && !v4 )
      v41 = 517;
    v42 = v41 | 0x10;
    if ( (*((_DWORD *)a2 + 85) & 0x20) == 0 )
      v42 = v41;
    v43 = v42;
    if ( (v42 & 1) == 0 && (*((_DWORD *)a2 + 49) & 0x300) != 0 )
      v43 = v42 | 0x100000;
    v44 = *((_DWORD *)a2 + 70);
    v45 = *((_DWORD *)a2 + 9);
    v46 = v43 | 0x200000;
    *((_DWORD *)a2 + 49) |= 0x80000000;
    if ( (v44 & 8) == 0 )
      v46 = v43;
    xxxSetWindowPos(
      a1,
      0LL,
      *((unsigned int *)a2 + 6),
      *((unsigned int *)a2 + 7),
      *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
      v45 - *((_DWORD *)a2 + 7),
      v46);
    v47 = *((_DWORD *)a2 + 49);
    if ( (v47 & 0x100000) == 0 || !gSqmIsOptedIn )
      goto LABEL_105;
    v48 = *((_QWORD *)a1 + 5);
    v49 = *(_BYTE *)(v48 + 233) & 3;
    if ( v49 == 3 )
    {
      v50 = 3537LL;
    }
    else if ( v49 )
    {
      v50 = 3529LL;
    }
    else
    {
      if ( (*(_BYTE *)(v48 + 31) & 0x20) != 0 )
        goto LABEL_105;
      if ( (*((_DWORD *)a2 + 49) & 0x6000) == 0x6000 )
      {
        v50 = 3535LL;
      }
      else if ( (*((_DWORD *)a2 + 49) & 0x7000) == 0x1000 )
      {
        v50 = 3530LL;
      }
      else
      {
        if ( (v47 & 0x6000) == 0 )
          goto LABEL_105;
        v50 = 5882LL;
      }
    }
    WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v50, 1LL);
LABEL_105:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      CkptRestore((__int64)a1, (struct _MOVESIZEDATA *)((char *)a2 + 24));
    goto LABEL_107;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 || *((_QWORD *)a2 + 27) != *((_QWORD *)a2 + 29) )
  {
    v36 = gdwPUDFlags & 0x10000 | 0x16;
    if ( (*((_DWORD *)a2 + 49) & 0x100000) == 0 )
      v36 = gdwPUDFlags & 0x10000 | 6;
    xxxMinMaximizeEx(a1, 3u, v36, *((struct tagMONITOR **)a2 + 29), 0LL, 0LL);
  }
  if ( (*((_DWORD *)a2 + 49) & 0x100000) != 0 )
  {
    if ( gSqmIsOptedIn )
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3532LL, 1LL);
LABEL_107:
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
