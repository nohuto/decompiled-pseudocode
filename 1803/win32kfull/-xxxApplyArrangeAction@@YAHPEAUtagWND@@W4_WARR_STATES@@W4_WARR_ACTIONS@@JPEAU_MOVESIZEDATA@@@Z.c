/*
 * XREFs of ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C2254
 * Callers:
 *     xxxArrangeWindow @ 0x1C01C5D64 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxMinMaximize @ 0x1C0065638 (xxxMinMaximize.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     UpdateCheckpoint @ 0x1C00669AC (UpdateCheckpoint.c)
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C0EE4 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01C1464 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01C1598 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01C2948 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C3FB4 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C01C6F94 (xxxEvaluateDestRectForMonitorMigration.c)
 */

__int64 __fastcall xxxApplyArrangeAction(struct tagWND *a1, __int64 a2, int a3, int a4, struct _MOVESIZEDATA *a5)
{
  int v5; // r14d
  unsigned int v7; // esi
  int v8; // ecx
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rdx
  struct tagMONITOR **v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rbx
  unsigned int v30; // r12d
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // r15d
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rbx
  struct tagMONITOR *v42; // rsi
  __int64 v43; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int16 v47; // r14
  __int64 v48; // r10
  __int64 v49; // r10
  __int64 v50; // rbx
  bool v51; // zf
  struct tagMONITOR *v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned int v55; // ebx
  int v56; // r12d
  __int64 ThreadWin32Thread; // rax
  _DWORD v59[2]; // [rsp+30h] [rbp-71h] BYREF
  __int64 v60; // [rsp+38h] [rbp-69h] BYREF
  __int64 v61; // [rsp+40h] [rbp-61h] BYREF
  __int64 v62; // [rsp+48h] [rbp-59h]
  struct tagMONITOR *v63; // [rsp+58h] [rbp-49h] BYREF
  __int64 v64; // [rsp+68h] [rbp-39h] BYREF
  __int128 v65; // [rsp+78h] [rbp-29h] BYREF
  __int128 v66; // [rsp+88h] [rbp-19h] BYREF
  __int128 v67; // [rsp+98h] [rbp-9h] BYREF
  __int128 v68; // [rsp+A8h] [rbp+7h] BYREF

  v59[0] = a4;
  v68 = 0uLL;
  v5 = a2;
  v7 = 1;
  if ( !a5 || (v8 = 1, (*((_DWORD *)a5 + 70) & 8) == 0) )
    v8 = 0;
  if ( !a3 )
  {
    v56 = 2;
    if ( (unsigned int)(a2 - 1) <= 2 )
      v56 = 6;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v61 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v61;
    v62 = 0LL;
    v7 = xxxMinMaximizeEx(a1, 3u, v56 | 0x10u, 0LL, &v68, 0LL) != 0;
    goto LABEL_92;
  }
  v9 = a3 - 1;
  if ( !v9 )
    return xxxMinMaximize(a1, 6LL) != 0;
  v10 = v9 - 1;
  if ( !v10 )
  {
    xxxSysCommand((__int64)a1, 61730, 0LL);
    return v7;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v40 = 4LL;
    v60 = 0LL;
    v63 = 0LL;
    if ( v5 == 4 )
    {
      *((_DWORD *)a5 + 60) = 4;
      UpdateCheckpoint((__int64)a1);
    }
    v41 = *((_QWORD *)a5 + 29);
    v42 = v63;
    do
    {
      v43 = *(_QWORD *)(*((_QWORD *)a5 + 2) + 40LL);
      if ( (*(_DWORD *)(v43 + 288) & 0xF) == 2 || v41 == *((_QWORD *)a5 + 26) )
      {
        v67 = *GetMonitorWorkRectForWindow(&v65, v41, a1);
      }
      else
      {
        v67 = *(_OWORD *)(*(_QWORD *)(v41 + 40) + 44LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v43, v40);
        PhysicalToLogicalDPIRect(&v67, &v67, CurrentThreadDpiAwarenessContext, (char *)a5 + 208);
      }
      v47 = v59[0];
      if ( IsDockTargetActive((__int64)a5, v41, 0) && (int)v67 <= SLOWORD(v59[0]) )
      {
        v48 = v60;
        if ( SLOWORD(v59[0]) <= SDWORD2(v67) )
          v48 = v41;
        v60 = v48;
      }
      if ( IsDockTargetActive(v46, v45, 3) && (int)v67 <= SLOWORD(v59[0]) && SLOWORD(v59[0]) <= SDWORD2(v67) )
        v42 = (struct tagMONITOR *)v41;
      v50 = *(_QWORD *)(v41 + 568);
      if ( v50 == gpDispInfo + 144LL )
        v50 = *(_QWORD *)(gpDispInfo + 144LL);
      v41 = v50 - 568;
    }
    while ( v41 != *((_QWORD *)a5 + 29) );
    v63 = v42;
    v51 = v42 == 0LL;
    v7 = 1;
    if ( v51 || !v49 )
      return 0;
    v52 = v63;
    v64 = HIDWORD(*(_QWORD *)GetMonitorWorkRectForWindow(&v66, v41, a1));
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 40LL) + 288LL) & 0xF) != 2 )
    {
      v53 = *((_QWORD *)v63 + 5);
      v54 = *(unsigned __int16 *)(*(_QWORD *)(v60 + 40) + 64LL);
      if ( *(_WORD *)(v53 + 64) != (_WORD)v54 )
      {
        v59[1] = 0;
        v52 = (struct tagMONITOR *)v60;
        v59[0] = SLOWORD(v59[0]);
        v55 = W32GetCurrentThreadDpiAwarenessContext(v54, v53);
        LogicalToPhysicalDPIPoint(v59, v59, v55, (char *)a5 + 208);
        PhysicalToLogicalDPIPoint(v59, v59, v55, &v60);
        v47 = v59[0];
      }
    }
    SizeRect(
      a5,
      (unsigned __int16)(v47 + *((_WORD *)a5 + 84)) | ((unsigned __int16)(v64 + *((_WORD *)a5 + 86)) << 16),
      v52,
      0LL);
    goto LABEL_85;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v29 = *((_QWORD *)a5 + 29);
    v37 = 1;
    if ( (_DWORD)a2 == 2 && !v8 )
    {
      v38 = *(_QWORD *)(v29 + 576);
      if ( v38 == gpDispInfo + 144LL )
        v38 = *(_QWORD *)(gpDispInfo + 152LL);
      v29 = v38 - 568;
      v37 = 2;
    }
    v39 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v61 = *(_QWORD *)(v39 + 408);
    *(_QWORD *)(v39 + 408) = &v61;
    v62 = v29;
    if ( v29 )
      _InterlockedAdd((volatile signed __int32 *)(v29 + 8), 1u);
    v33 = v37;
    goto LABEL_51;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v29 = *((_QWORD *)a5 + 29);
    v30 = 2;
    if ( (_DWORD)a2 == 3 && !v8 )
    {
      v31 = *(_QWORD *)(v29 + 568);
      if ( v31 == gpDispInfo + 144LL )
        v31 = *(_QWORD *)(gpDispInfo + 144LL);
      v30 = 1;
      v29 = v31 - 568;
    }
    v32 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v61 = *(_QWORD *)(v32 + 408);
    *(_QWORD *)(v32 + 408) = &v61;
    v62 = v29;
    if ( v29 )
      _InterlockedAdd((volatile signed __int32 *)(v29 + 8), 1u);
    v33 = v30;
LABEL_51:
    v7 = xxxProgrammaticSemiMaximize(a5, v29, v33);
LABEL_92:
    ThreadUnlock1(v35, v34, v36);
    return v7;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      v15 = *((_QWORD *)a5 + 29);
      v16 = *(_QWORD *)(v15 + 576);
      if ( v16 == gpDispInfo + 144LL )
        v16 = *(_QWORD *)(gpDispInfo + 152LL);
      v17 = v16 - 568;
      if ( v17 != v15 )
      {
        while ( v5 )
        {
          v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
          v61 = *(_QWORD *)(v18 + 408);
          *(_QWORD *)(v18 + 408) = &v61;
          v62 = v17;
          if ( v17 )
            _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
          if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(v5, (_DWORD)a5, (_DWORD)a1, v17, 0) )
          {
            if ( v5 != 1 )
              goto LABEL_39;
            *((_DWORD *)a5 + 44) = 3;
            SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
            v24 = (struct tagMONITOR **)&v64;
            goto LABEL_38;
          }
          v22 = *(_QWORD *)(v17 + 576);
          ThreadUnlock1(v20, v19, v21);
          if ( v22 == gpDispInfo + 144LL )
            v22 = *(_QWORD *)(gpDispInfo + 152LL);
          v17 = v22 - 568;
          if ( v17 == *((_QWORD *)a5 + 29) )
            return 0;
        }
LABEL_42:
        SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
LABEL_85:
        *(_OWORD *)((char *)a5 + 24) = *(_OWORD *)((char *)a5 + 40);
        xxxCommitMoveSize(a1, a5);
        return v7;
      }
    }
  }
  else
  {
    v25 = *((_QWORD *)a5 + 29);
    v26 = *(_QWORD *)(v25 + 568);
    if ( v26 == gpDispInfo + 144LL )
      v26 = *(_QWORD *)(gpDispInfo + 144LL);
    v17 = v26 - 568;
    if ( v17 != v25 )
    {
      while ( v5 )
      {
        v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25);
        v61 = *(_QWORD *)(v27 + 408);
        *(_QWORD *)(v27 + 408) = &v61;
        v62 = v17;
        if ( v17 )
          _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
        if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(v5, (_DWORD)a5, (_DWORD)a1, v17, 0) )
        {
          if ( v5 == 1 )
          {
            *((_DWORD *)a5 + 44) = 3;
            SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
            v24 = &v63;
LABEL_38:
            *((_DWORD *)a5 + 75) = HIDWORD(*(_QWORD *)GetMonitorWorkRectForWindow(v24, v23, a1));
          }
          else
          {
LABEL_39:
            if ( (unsigned int)(v5 - 2) <= 1 )
              SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
          }
          ThreadUnlock1(v20, v19, v21);
          goto LABEL_85;
        }
        v28 = *(_QWORD *)(v17 + 568);
        ThreadUnlock1(v20, v19, v21);
        if ( v28 == gpDispInfo + 144LL )
          v28 = *(_QWORD *)(gpDispInfo + 144LL);
        v17 = v28 - 568;
        if ( v17 == *((_QWORD *)a5 + 29) )
          return 0;
      }
      goto LABEL_42;
    }
  }
  return 0;
}
