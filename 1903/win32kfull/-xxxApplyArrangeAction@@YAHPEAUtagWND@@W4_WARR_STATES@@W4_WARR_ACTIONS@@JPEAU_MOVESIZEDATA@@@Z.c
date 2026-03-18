/*
 * XREFs of ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC310
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01FCA7C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     UpdateCheckpoint @ 0x1C0090C28 (UpdateCheckpoint.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FAA24 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01FB484 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01FB604 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FCC84 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C01FDA70 (-xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAU.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FEE04 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 */

__int64 __fastcall xxxApplyArrangeAction(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _MOVESIZEDATA *a5)
{
  unsigned int v5; // r14d
  unsigned int v7; // esi
  BOOL v8; // ecx
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r12d
  __int64 v24; // rbx
  __int64 v25; // rdx
  struct tagMONITOR **v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int8 v30; // al
  __int64 v31; // rbx
  __int64 v32; // rbx
  unsigned int v33; // r12d
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rbx
  struct tagMONITOR *v44; // rsi
  __int64 v45; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int16 v49; // r14
  __int64 v50; // r10
  __int64 v51; // r10
  __int64 v52; // rbx
  bool v53; // zf
  struct tagMONITOR *v54; // r15
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // ebx
  int v59; // ecx
  int v60; // r12d
  __int64 ThreadWin32Thread; // rax
  _DWORD v63[2]; // [rsp+30h] [rbp-71h] BYREF
  __int64 v64; // [rsp+38h] [rbp-69h] BYREF
  __int64 v65; // [rsp+40h] [rbp-61h] BYREF
  __int64 v66; // [rsp+48h] [rbp-59h]
  __int64 v67; // [rsp+50h] [rbp-51h]
  struct tagMONITOR *v68; // [rsp+58h] [rbp-49h] BYREF
  struct tagRECT v69; // [rsp+68h] [rbp-39h] BYREF
  char v70; // [rsp+78h] [rbp-29h] BYREF
  __int128 v71; // [rsp+88h] [rbp-19h] BYREF
  __int128 v72; // [rsp+98h] [rbp-9h] BYREF
  __int128 v73; // [rsp+A8h] [rbp+7h] BYREF

  v63[0] = a4;
  v5 = a2;
  v65 = 0LL;
  v66 = 0LL;
  v7 = 1;
  v67 = 0LL;
  *(_QWORD *)&v69.left = 0LL;
  *(_QWORD *)&v69.right = 0LL;
  v8 = a5 && (*((_DWORD *)a5 + 70) & 8) != 0;
  if ( !(_DWORD)a3 )
  {
    v60 = 2;
    if ( (unsigned int)(a2 - 1) <= 2 )
      v60 = 6;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    v65 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v65;
    v66 = 0LL;
    v7 = xxxMinMaximizeEx(a1, 3u, v60 | 0x10u, 0LL, &v69, 0LL) != 0;
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
    v11 = (unsigned int)(v10 - 1);
    if ( !(_DWORD)v11 )
    {
      v64 = 0LL;
      v68 = 0LL;
      v42 = 4LL;
      if ( v5 == 4 )
      {
        *((_DWORD *)a5 + 60) = 4;
        UpdateCheckpoint((__int64)a1);
      }
      v43 = *((_QWORD *)a5 + 29);
      v44 = v68;
      do
      {
        v73 = 0uLL;
        v45 = *(_QWORD *)(*((_QWORD *)a5 + 2) + 40LL);
        if ( (*(_DWORD *)(v45 + 288) & 0xF) == 2 || v43 == *((_QWORD *)a5 + 26) )
        {
          v73 = *GetMonitorWorkRectForWindow(&v71, v43, a1);
        }
        else
        {
          v73 = *(_OWORD *)(*(_QWORD *)(v43 + 40) + 44LL);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v45, v42, v11, a4);
          PhysicalToLogicalDPIRect(&v73, &v73, CurrentThreadDpiAwarenessContext, (char *)a5 + 208);
        }
        v49 = v63[0];
        if ( IsDockTargetActive((__int64)a5, v43, 0) && (int)v73 <= SLOWORD(v63[0]) )
        {
          v50 = v64;
          if ( SLOWORD(v63[0]) <= SDWORD2(v73) )
            v50 = v43;
          v64 = v50;
        }
        if ( IsDockTargetActive(v48, v47, 3) && (int)v73 <= SLOWORD(v63[0]) && SLOWORD(v63[0]) <= SDWORD2(v73) )
          v44 = (struct tagMONITOR *)v43;
        v52 = *(_QWORD *)(v43 + 280);
        if ( v52 == gpDispInfo + 144LL )
          v52 = *(_QWORD *)(gpDispInfo + 144LL);
        v43 = v52 - 280;
      }
      while ( v43 != *((_QWORD *)a5 + 29) );
      v68 = v44;
      v53 = v44 == 0LL;
      v7 = 1;
      if ( !v53 && v51 )
      {
        v54 = v68;
        *(_QWORD *)&v69.left = HIDWORD(*(_QWORD *)GetMonitorWorkRectForWindow(&v72, v43, a1));
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 40LL) + 288LL) & 0xF) != 2 )
        {
          v56 = *((_QWORD *)v68 + 5);
          v57 = *(unsigned __int16 *)(*(_QWORD *)(v64 + 40) + 64LL);
          if ( *(_WORD *)(v56 + 64) != (_WORD)v57 )
          {
            v63[1] = 0;
            v54 = (struct tagMONITOR *)v64;
            v63[0] = SLOWORD(v63[0]);
            v58 = W32GetCurrentThreadDpiAwarenessContext(v57, v56, v64, v55);
            LogicalToPhysicalDPIPoint(v63, v63, v58, (char *)a5 + 208);
            PhysicalToLogicalDPIPoint(v63, v63, v58, &v64);
            v49 = v63[0];
          }
        }
        SizeRect(
          a5,
          (unsigned __int16)(v49 + *((_WORD *)a5 + 84)) | ((unsigned __int16)(LOWORD(v69.left) + *((_WORD *)a5 + 86)) << 16),
          v54,
          0LL);
        goto LABEL_88;
      }
      return 0;
    }
    v12 = (unsigned int)(v11 - 1);
    if ( (_DWORD)v12 )
    {
      v13 = (unsigned int)(v12 - 1);
      if ( (_DWORD)v13 )
      {
        v14 = (unsigned int)(v13 - 1);
        if ( (_DWORD)v14 )
        {
          if ( (_DWORD)v14 == 1 )
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
                v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v14, a4);
                v65 = *(_QWORD *)(v18 + 408);
                *(_QWORD *)(v18 + 408) = &v65;
                v66 = v17;
                if ( v17 )
                  HMLockObject(v17);
                v19 = xxxEvaluateDestRectForMonitorMigration(v5, a5, a1, v17, 0);
                v23 = v19;
                if ( v19 )
                {
                  if ( v5 != 1 )
                    goto LABEL_40;
                  *((_DWORD *)a5 + 44) = 3;
                  SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                  v26 = &v68;
                  goto LABEL_39;
                }
                v24 = *(_QWORD *)(v17 + 288);
                ThreadUnlock1(v21, v20, v22);
                if ( v24 == gpDispInfo + 144LL )
                  v24 = *(_QWORD *)(gpDispInfo + 152LL);
                v17 = v24 - 280;
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
          v27 = *((_QWORD *)a5 + 29);
          v28 = *(_QWORD *)(v27 + 280);
          if ( v28 == gpDispInfo + 144LL )
            v28 = *(_QWORD *)(gpDispInfo + 144LL);
          v17 = v28 - 280;
          if ( v17 != v27 )
          {
            while ( v5 )
            {
              v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v14, a4);
              v65 = *(_QWORD *)(v29 + 408);
              *(_QWORD *)(v29 + 408) = &v65;
              v66 = v17;
              if ( v17 )
                HMLockObject(v17);
              v30 = xxxEvaluateDestRectForMonitorMigration(v5, a5, a1, v17, 0);
              v23 = v30;
              if ( v30 )
              {
                if ( v5 == 1 )
                {
                  *((_DWORD *)a5 + 44) = 3;
                  SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                  v26 = (struct tagMONITOR **)&v70;
LABEL_39:
                  *((_DWORD *)a5 + 75) = HIDWORD(*(_QWORD *)GetMonitorWorkRectForWindow(v26, v25, a1));
                }
                else
                {
LABEL_40:
                  if ( v5 - 2 <= 1 )
                    SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                }
                ThreadUnlock1(v21, v20, v22);
LABEL_43:
                if ( v23 )
                  goto LABEL_88;
                return 0;
              }
              v31 = *(_QWORD *)(v17 + 280);
              ThreadUnlock1(v21, v20, v22);
              if ( v31 == gpDispInfo + 144LL )
                v31 = *(_QWORD *)(gpDispInfo + 144LL);
              v17 = v31 - 280;
              if ( v17 == *((_QWORD *)a5 + 29) )
                goto LABEL_43;
            }
            goto LABEL_45;
          }
        }
        return 0;
      }
      v32 = *((_QWORD *)a5 + 29);
      v33 = 2;
      if ( (_DWORD)a2 == 3 && !v8 )
      {
        v34 = *(_QWORD *)(v32 + 280);
        if ( v34 == gpDispInfo + 144LL )
          v34 = *(_QWORD *)(gpDispInfo + 144LL);
        v33 = 1;
        v32 = v34 - 280;
      }
      v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, v13, a4);
      v65 = *(_QWORD *)(v35 + 408);
      *(_QWORD *)(v35 + 408) = &v65;
      v66 = v32;
      if ( v32 )
        HMLockObject(v32);
      v36 = v33;
    }
    else
    {
      v32 = *((_QWORD *)a5 + 29);
      if ( (_DWORD)a2 == 2 && !v8 )
      {
        v40 = *(_QWORD *)(v32 + 288);
        if ( v40 == gpDispInfo + 144LL )
          v40 = *(_QWORD *)(gpDispInfo + 152LL);
        v7 = 2;
        v32 = v40 - 280;
      }
      v41 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, v12, a4);
      v65 = *(_QWORD *)(v41 + 408);
      *(_QWORD *)(v41 + 408) = &v65;
      v66 = v32;
      if ( v32 )
        HMLockObject(v32);
      v36 = v7;
    }
    v7 = xxxProgrammaticSemiMaximize(a5, v32, v36);
LABEL_96:
    ThreadUnlock1(v38, v37, v39);
    return v7;
  }
  v59 = 0;
  if ( (unsigned int)(a2 - 1) <= 2 )
    v59 = 4;
  return xxxMinMaximizeEx(a1, 6u, v59 | gdwPUDFlags & 0x10000u, 0LL, 0LL, 0LL) != 0;
}
