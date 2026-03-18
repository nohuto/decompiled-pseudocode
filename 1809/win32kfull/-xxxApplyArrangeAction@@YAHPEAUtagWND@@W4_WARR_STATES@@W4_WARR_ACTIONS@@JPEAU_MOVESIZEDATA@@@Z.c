/*
 * XREFs of ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E69FC
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01E7130 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C001D104 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UpdateCheckpoint @ 0x1C00B6E60 (UpdateCheckpoint.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E5134 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01E5BA4 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01E5D24 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01E7350 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C01E810C (-xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAU.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E9430 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 */

__int64 __fastcall xxxApplyArrangeAction(struct tagWND *a1, __int64 a2, int a3, int a4, struct _MOVESIZEDATA *a5)
{
  unsigned int v5; // r14d
  unsigned int v7; // esi
  BOOL v8; // ecx
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
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r12d
  __int64 v23; // rbx
  __int64 v24; // rdx
  struct tagMONITOR **v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned __int8 v29; // al
  __int64 v30; // rbx
  __int64 v31; // rbx
  unsigned int v32; // r12d
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // r15d
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rbx
  struct tagMONITOR *v43; // rsi
  __int64 v44; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int16 v48; // r14
  __int64 v49; // r10
  __int64 v50; // r10
  __int64 v51; // rbx
  bool v52; // zf
  struct tagMONITOR *v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned int v56; // ebx
  int v57; // ecx
  int v58; // r12d
  __int64 ThreadWin32Thread; // rax
  _DWORD v61[2]; // [rsp+30h] [rbp-71h] BYREF
  __int64 v62; // [rsp+38h] [rbp-69h] BYREF
  __int64 v63; // [rsp+40h] [rbp-61h] BYREF
  __int64 v64; // [rsp+48h] [rbp-59h]
  struct tagMONITOR *v65; // [rsp+58h] [rbp-49h] BYREF
  __int128 v66; // [rsp+68h] [rbp-39h] BYREF
  char v67; // [rsp+78h] [rbp-29h] BYREF
  __int128 v68; // [rsp+88h] [rbp-19h] BYREF
  __int128 v69; // [rsp+98h] [rbp-9h] BYREF
  __int128 v70; // [rsp+A8h] [rbp+7h] BYREF

  v61[0] = a4;
  v5 = a2;
  v66 = 0uLL;
  v7 = 1;
  v8 = a5 && (*((_DWORD *)a5 + 70) & 8) != 0;
  if ( !a3 )
  {
    v58 = 2;
    if ( (unsigned int)(a2 - 1) <= 2 )
      v58 = 6;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v63 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v63;
    v64 = 0LL;
    v7 = xxxMinMaximizeEx(a1, 3u, v58 | 0x10u, 0LL, &v66, 0LL) != 0;
    goto LABEL_96;
  }
  v9 = a3 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      xxxSysCommand(a1, 61730, 0LL);
      return v7;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v62 = 0LL;
      v65 = 0LL;
      v41 = 4LL;
      if ( v5 == 4 )
      {
        *((_DWORD *)a5 + 60) = 4;
        UpdateCheckpoint((__int64)a1);
      }
      v42 = *((_QWORD *)a5 + 29);
      v43 = v65;
      do
      {
        v44 = *(_QWORD *)(*((_QWORD *)a5 + 2) + 40LL);
        if ( (*(_DWORD *)(v44 + 288) & 0xF) == 2 || v42 == *((_QWORD *)a5 + 26) )
        {
          v70 = *GetMonitorWorkRectForWindow(&v68, v42, a1);
        }
        else
        {
          v70 = *(_OWORD *)(*(_QWORD *)(v42 + 40) + 44LL);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v44, v41);
          PhysicalToLogicalDPIRect(&v70, &v70, CurrentThreadDpiAwarenessContext, (char *)a5 + 208);
        }
        v48 = v61[0];
        if ( IsDockTargetActive((__int64)a5, v42, 0) && (int)v70 <= SLOWORD(v61[0]) )
        {
          v49 = v62;
          if ( SLOWORD(v61[0]) <= SDWORD2(v70) )
            v49 = v42;
          v62 = v49;
        }
        if ( IsDockTargetActive(v47, v46, 3) && (int)v70 <= SLOWORD(v61[0]) && SLOWORD(v61[0]) <= SDWORD2(v70) )
          v43 = (struct tagMONITOR *)v42;
        v51 = *(_QWORD *)(v42 + 280);
        if ( v51 == gpDispInfo + 144LL )
          v51 = *(_QWORD *)(gpDispInfo + 144LL);
        v42 = v51 - 280;
      }
      while ( v42 != *((_QWORD *)a5 + 29) );
      v65 = v43;
      v52 = v43 == 0LL;
      v7 = 1;
      if ( !v52 && v50 )
      {
        v53 = v65;
        *(_QWORD *)&v66 = HIDWORD(*(_QWORD *)GetMonitorWorkRectForWindow(&v69, v42, a1));
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 40LL) + 288LL) & 0xF) != 2 )
        {
          v54 = *((_QWORD *)v65 + 5);
          v55 = *(unsigned __int16 *)(*(_QWORD *)(v62 + 40) + 64LL);
          if ( *(_WORD *)(v54 + 64) != (_WORD)v55 )
          {
            v61[1] = 0;
            v53 = (struct tagMONITOR *)v62;
            v61[0] = SLOWORD(v61[0]);
            v56 = W32GetCurrentThreadDpiAwarenessContext(v55, v54);
            LogicalToPhysicalDPIPoint(v61, v61, v56, (char *)a5 + 208);
            PhysicalToLogicalDPIPoint(v61, v61, v56, &v62);
            v48 = v61[0];
          }
        }
        SizeRect(
          a5,
          (unsigned __int16)(v48 + *((_WORD *)a5 + 84)) | ((unsigned __int16)(v66 + *((_WORD *)a5 + 86)) << 16),
          v53,
          0LL);
        goto LABEL_88;
      }
      return 0;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            v15 = *((_QWORD *)a5 + 29);
            v16 = *(_QWORD *)(v15 + 288);
            if ( v16 == gpDispInfo + 144LL )
              v16 = *(_QWORD *)(gpDispInfo + 152LL);
            v17 = v16 - 280;
            if ( v17 != v15 )
            {
              while ( v5 )
              {
                v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
                v63 = *(_QWORD *)(v18 + 416);
                *(_QWORD *)(v18 + 416) = &v63;
                v64 = v17;
                if ( v17 )
                  _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
                v19 = xxxEvaluateDestRectForMonitorMigration(v5, a5, a1, v17, 0);
                v22 = v19;
                if ( v19 )
                {
                  if ( v5 != 1 )
                    goto LABEL_40;
                  *((_DWORD *)a5 + 44) = 3;
                  SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                  v25 = &v65;
                  goto LABEL_39;
                }
                v23 = *(_QWORD *)(v17 + 288);
                ThreadUnlock1(v21, v20);
                if ( v23 == gpDispInfo + 144LL )
                  v23 = *(_QWORD *)(gpDispInfo + 152LL);
                v17 = v23 - 280;
                if ( v17 == *((_QWORD *)a5 + 29) )
                  goto LABEL_43;
              }
LABEL_45:
              SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
LABEL_88:
              *(_OWORD *)((char *)a5 + 24) = *(_OWORD *)((char *)a5 + 40);
              xxxCommitMoveSize(a1, a5);
              return v7;
            }
          }
        }
        else
        {
          v26 = *((_QWORD *)a5 + 29);
          v27 = *(_QWORD *)(v26 + 280);
          if ( v27 == gpDispInfo + 144LL )
            v27 = *(_QWORD *)(gpDispInfo + 144LL);
          v17 = v27 - 280;
          if ( v17 != v26 )
          {
            while ( v5 )
            {
              v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26);
              v63 = *(_QWORD *)(v28 + 416);
              *(_QWORD *)(v28 + 416) = &v63;
              v64 = v17;
              if ( v17 )
                _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
              v29 = xxxEvaluateDestRectForMonitorMigration(v5, a5, a1, v17, 0);
              v22 = v29;
              if ( v29 )
              {
                if ( v5 == 1 )
                {
                  *((_DWORD *)a5 + 44) = 3;
                  SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                  v25 = (struct tagMONITOR **)&v67;
LABEL_39:
                  *((_DWORD *)a5 + 75) = HIDWORD(*(_QWORD *)GetMonitorWorkRectForWindow(v25, v24, a1));
                }
                else
                {
LABEL_40:
                  if ( v5 - 2 <= 1 )
                    SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                }
                ThreadUnlock1(v21, v20);
LABEL_43:
                if ( v22 )
                  goto LABEL_88;
                return 0;
              }
              v30 = *(_QWORD *)(v17 + 280);
              ThreadUnlock1(v21, v20);
              if ( v30 == gpDispInfo + 144LL )
                v30 = *(_QWORD *)(gpDispInfo + 144LL);
              v17 = v30 - 280;
              if ( v17 == *((_QWORD *)a5 + 29) )
                goto LABEL_43;
            }
            goto LABEL_45;
          }
        }
        return 0;
      }
      v31 = *((_QWORD *)a5 + 29);
      v32 = 2;
      if ( (_DWORD)a2 == 3 && !v8 )
      {
        v33 = *(_QWORD *)(v31 + 280);
        if ( v33 == gpDispInfo + 144LL )
          v33 = *(_QWORD *)(gpDispInfo + 144LL);
        v32 = 1;
        v31 = v33 - 280;
      }
      v34 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v63 = *(_QWORD *)(v34 + 416);
      *(_QWORD *)(v34 + 416) = &v63;
      v64 = v31;
      if ( v31 )
        _InterlockedAdd((volatile signed __int32 *)(v31 + 8), 1u);
      v35 = v32;
    }
    else
    {
      v31 = *((_QWORD *)a5 + 29);
      v38 = 1;
      if ( (_DWORD)a2 == 2 && !v8 )
      {
        v39 = *(_QWORD *)(v31 + 288);
        if ( v39 == gpDispInfo + 144LL )
          v39 = *(_QWORD *)(gpDispInfo + 152LL);
        v31 = v39 - 280;
        v38 = 2;
      }
      v40 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
      v63 = *(_QWORD *)(v40 + 416);
      *(_QWORD *)(v40 + 416) = &v63;
      v64 = v31;
      if ( v31 )
        _InterlockedAdd((volatile signed __int32 *)(v31 + 8), 1u);
      v35 = v38;
    }
    v7 = xxxProgrammaticSemiMaximize(a5, v31, v35);
LABEL_96:
    ThreadUnlock1(v37, v36);
    return v7;
  }
  v57 = 0;
  if ( (unsigned int)(a2 - 1) <= 2 )
    v57 = 4;
  return xxxMinMaximizeEx(a1, 6u, v57 | gdwPUDFlags & 0x10000u, 0LL, 0LL, 0LL) != 0;
}
