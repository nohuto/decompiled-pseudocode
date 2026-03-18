/*
 * XREFs of InternalInvalidate3 @ 0x1C002C088
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C002AEA0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxEndPaint @ 0x1C00E2444 (xxxEndPaint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     ClearHungFlag @ 0x1C0037FF8 (ClearHungFlag.c)
 *     CalcWindowRgn @ 0x1C0074A3C (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     DecPaintCount @ 0x1C00F1034 (DecPaintCount.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00F5E78 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     SetWakeBitInterMoveSize @ 0x1C01A222C (SetWakeBitInterMoveSize.c)
 *     IncPaintCount @ 0x1C01FAEBC (IncPaintCount.c)
 */

void __fastcall InternalInvalidate3(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  __int64 v5; // r12
  int v7; // ebp
  __int64 v8; // rcx
  struct tagWND *v9; // rax
  __int64 v10; // rcx
  BOOL v11; // edi
  __int64 v12; // rax
  int v13; // esi
  int v14; // ebp
  int v15; // r15d
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int *v18; // rax
  unsigned int v19; // edi
  __int64 v20; // rax
  int v21; // esi
  int v22; // ebp
  int v23; // r15d
  unsigned int *v24; // rax
  unsigned int v25; // edi
  int v26; // ebp
  int v27; // esi
  int v28; // r15d
  unsigned int *v29; // rax
  unsigned int v30; // edi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdi
  int v36; // ecx
  int v37; // esi
  int v38; // r15d
  int v39; // r12d
  __int64 v40; // rcx
  unsigned int *v41; // rax
  unsigned int v42; // r9d
  __int64 v43; // r8
  unsigned int v44; // edi
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rdx
  int v50; // eax
  void *v51; // rax
  _BOOL8 v52; // rcx
  void *v53; // rax
  _BOOL8 v54; // rcx
  void *v55; // rax
  _BOOL8 v56; // rcx
  void *v57; // rax
  __int64 v58; // rdi
  int v59; // edx
  int v60; // [rsp+20h] [rbp-48h]
  __int64 v61; // [rsp+78h] [rbp+10h]
  BOOL v62; // [rsp+80h] [rbp+18h]

  v61 = a2;
  v4 = a3;
  v5 = a2;
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    goto LABEL_6;
  v8 = *((_QWORD *)a1 + 3);
  v9 = 0LL;
  if ( v8 )
  {
    a2 = *(_QWORD *)(v8 + 8);
    if ( a2 )
      v9 = *(struct tagWND **)(a2 + 24);
  }
  if ( a1 != v9 || !(unsigned int)IsWindowDesktopComposed(a1) )
  {
LABEL_6:
    v10 = *((_QWORD *)a1 + 5);
    LOBYTE(a2) = 16;
    v11 = *(_QWORD *)(v10 + 136) || (*(_BYTE *)(v10 + 17) & 0x10) != 0;
    v62 = v11;
    if ( (v4 & 0x407) != 0 )
    {
      if ( (v4 & 2) == 0 )
        goto LABEL_11;
      v37 = *(_DWORD *)(v10 + 28);
      v38 = *(_DWORD *)(v10 + 24);
      v39 = *(_DWORD *)(v10 + 232);
      *(_BYTE *)(v10 + 17) |= 0x10u;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v41 = (unsigned int *)*((_QWORD *)a1 + 5);
        v42 = v41[7];
        v43 = v41[6];
        v44 = v41[58];
        if ( v37 != v42 )
          goto LABEL_91;
        if ( v38 == (_DWORD)v43 && v39 == v44 )
          goto LABEL_51;
        if ( v37 != v42 )
        {
LABEL_91:
          a2 = ((v37 ^ v42) & 0xB9CF0000) != 0;
          v40 = -((v37 ^ v42) & 0xB9CF0000);
          goto LABEL_94;
        }
        if ( v38 != (_DWORD)v43 )
        {
          a2 = ((v38 ^ (unsigned int)v43) & 0x4E27A9) != 0;
          v40 = -((v38 ^ (unsigned int)v43) & 0x4E27A9);
          goto LABEL_94;
        }
        if ( ((v39 ^ v44) & 0x2E00300) != 0 )
        {
          a2 = 1LL;
LABEL_94:
          if ( (_DWORD)a2 )
          {
            v51 = (void *)ReferenceDwmApiPort(v40, a2, v43);
            DwmAsyncChildStyleChange(v51);
          }
        }
      }
LABEL_51:
      v5 = v61;
LABEL_11:
      if ( !v7 )
        goto LABEL_39;
      v12 = *((_QWORD *)a1 + 5);
      v13 = *(_DWORD *)(v12 + 28);
      v14 = *(_DWORD *)(v12 + 24);
      v15 = *(_DWORD *)(v12 + 232);
      *(_BYTE *)(v12 + 17) &= ~1u;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v18 = (unsigned int *)*((_QWORD *)a1 + 5);
        v16 = v18[7];
        a2 = v18[6];
        v19 = v18[58];
        if ( v13 != (_DWORD)v16 )
          goto LABEL_99;
        if ( v14 == (_DWORD)a2 && v15 == v19 )
          goto LABEL_16;
        if ( v13 == (_DWORD)v16 )
        {
          if ( v14 == (_DWORD)a2 )
          {
            if ( ((v19 ^ v15) & 0x2E00300) == 0 )
              goto LABEL_16;
            v52 = 1LL;
          }
          else
          {
            v52 = (((unsigned int)a2 ^ v14) & 0x4E27A9) != 0;
          }
        }
        else
        {
LABEL_99:
          v52 = (((unsigned int)v16 ^ v13) & 0xB9CF0000) != 0;
        }
        if ( v52 )
        {
          v53 = (void *)ReferenceDwmApiPort(v52, a2, v16);
          DwmAsyncChildStyleChange(v53);
        }
      }
LABEL_16:
      if ( *((_QWORD *)a1 + 2) != gptiCurrent )
      {
        SetOrClrWF(1LL, a1, 288LL, 1LL);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 1) != 0 )
        {
          SetOrClrWF(1LL, a1, 1026LL, 1LL);
          gRdwFlags |= v4;
        }
      }
      if ( v5 == 1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
        SetOrClrWF(0LL, a1, 258LL, 1LL);
      if ( (v4 & 4) != 0 )
      {
        v20 = *((_QWORD *)a1 + 5);
        v21 = *(_DWORD *)(v20 + 28);
        v22 = *(_DWORD *)(v20 + 24);
        v23 = *(_DWORD *)(v20 + 232);
        *(_BYTE *)(v20 + 17) |= 2u;
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v24 = (unsigned int *)*((_QWORD *)a1 + 5);
          v16 = v24[7];
          a2 = v24[6];
          v25 = v24[58];
          if ( v21 != (_DWORD)v16 )
            goto LABEL_107;
          if ( v22 == (_DWORD)a2 && v23 == v25 )
            goto LABEL_23;
          if ( v21 == (_DWORD)v16 )
          {
            if ( v22 == (_DWORD)a2 )
            {
              if ( ((v25 ^ v23) & 0x2E00300) == 0 )
                goto LABEL_23;
              v54 = 1LL;
            }
            else
            {
              v54 = (((unsigned int)a2 ^ v22) & 0x4E27A9) != 0;
            }
          }
          else
          {
LABEL_107:
            v54 = (((unsigned int)v16 ^ v21) & 0xB9CF0000) != 0;
          }
          if ( v54 )
          {
            v55 = (void *)ReferenceDwmApiPort(v54, a2, v16);
            DwmAsyncChildStyleChange(v55);
          }
        }
      }
LABEL_23:
      if ( (v4 & 0x404) != 0 )
      {
        a2 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(a2 + 24) & 0x20) == 0 )
        {
          if ( (*(_BYTE *)(a2 + 19) & 0x18) == 0 && *((_QWORD *)a1 + 10) == GetDesktopWindow(a1) )
          {
            VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu, v60);
            a2 = *((_QWORD *)a1 + 5);
          }
          v26 = *(_DWORD *)(a2 + 28);
          v27 = *(_DWORD *)(a2 + 24);
          v28 = *(_DWORD *)(a2 + 232);
          *(_BYTE *)(a2 + 19) |= 8u;
          if ( (unsigned int)IsWindowDesktopComposed(a1) )
          {
            v29 = (unsigned int *)*((_QWORD *)a1 + 5);
            v16 = v29[7];
            a2 = v29[6];
            v30 = v29[58];
            if ( v26 != (_DWORD)v16 )
              goto LABEL_115;
            if ( v27 == (_DWORD)a2 && v28 == v30 )
              goto LABEL_32;
            if ( v26 == (_DWORD)v16 )
            {
              if ( v27 == (_DWORD)a2 )
              {
                if ( ((v30 ^ v28) & 0x2E00300) == 0 )
                  goto LABEL_32;
                v56 = 1LL;
              }
              else
              {
                v56 = (((unsigned int)a2 ^ v27) & 0x4E27A9) != 0;
              }
            }
            else
            {
LABEL_115:
              v56 = (((unsigned int)v16 ^ v26) & 0xB9CF0000) != 0;
            }
            if ( v56 )
            {
              v57 = (void *)ReferenceDwmApiPort(v56, a2, v16);
              DwmAsyncChildStyleChange(v57);
            }
          }
        }
      }
LABEL_32:
      if ( (v4 & 0x400) != 0 )
        SetOrClrWF(1LL, a1, 264LL, 1LL);
      v31 = *((_QWORD *)a1 + 5);
      v32 = *(_QWORD *)(v31 + 136);
      if ( v32 == 1 )
        goto LABEL_39;
      if ( v5 != 1 )
      {
        if ( v32 )
        {
          if ( (unsigned int)GreCombineRgn(v32, *(_QWORD *)(v31 + 136), v5, 2LL) )
            goto LABEL_39;
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic(0LL, a2, v16, v17);
          v33 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
          if ( v33 && (unsigned int)GreCombineRgn(v33, v5, 0LL, 5LL) )
          {
LABEL_39:
            if ( !v62 )
            {
              v34 = *((_QWORD *)a1 + 5);
              if ( *(_QWORD *)(v34 + 136) || (*(_BYTE *)(v34 + 17) & 0x10) != 0 )
              {
                v35 = *((_QWORD *)a1 + 2);
                if ( (v4 & 0x20000) != 0 )
                {
                  if ( v35 == W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) )
                  {
                    IncPaintCount(a1);
                  }
                  else
                  {
                    v58 = *((_QWORD *)a1 + 2);
                    v59 = *(_DWORD *)(v58 + 592);
                    *(_DWORD *)(v58 + 592) = v59 + 1;
                    if ( !v59 )
                    {
                      EtwTraceWakePump(v58, a1, 15LL);
                      SetWakeBitInterMoveSize(v58);
                    }
                  }
                }
                else
                {
                  v36 = *(_DWORD *)(v35 + 592);
                  *(_DWORD *)(v35 + 592) = v36 + 1;
                  if ( !v36 )
                  {
                    EtwTraceWakePump(v35, a1, 15LL);
                    if ( (*(_DWORD *)(v35 + 480) & 1) == 0 )
                    {
                      *(_WORD *)(*(_QWORD *)(v35 + 440) + 6LL) |= 0x20u;
                      *(_WORD *)(*(_QWORD *)(v35 + 440) + 4LL) |= 0x20u;
                      if ( (*(_BYTE *)(*(_QWORD *)(v35 + 440) + 10LL) & 0x20) != 0 )
                        KeSetEvent(*(PRKEVENT *)(v35 + 720), 2, 0);
                    }
                  }
                }
              }
            }
            return;
          }
        }
      }
LABEL_56:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
      goto LABEL_39;
    }
    if ( (v4 & 0x838) == 0 )
      return;
    LOBYTE(v10) = ((v4 & 0x8000) == 0) & (*(_BYTE *)(v10 + 17) >> 5);
    if ( (v10 & 1) != 0 )
      return;
    if ( (v4 & 0x10) != 0 )
      SetOrClrWF(0LL, a1, 272LL, 1LL);
    if ( (v4 & 8) == 0 )
      goto LABEL_69;
    if ( (v4 & 0x20) != 0 )
      SetOrClrWF(0LL, a1, 258LL, 1LL);
    if ( (v4 & 0x800) != 0 )
    {
      SetOrClrWF(0LL, a1, 264LL, 1LL);
      SetOrClrWF(0LL, a1, 1664LL, 1LL);
    }
    if ( (v4 & 0x820) != 0 )
      ClearHungFlag(a1);
    v45 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v45 + 136) )
      goto LABEL_69;
    if ( (*(_BYTE *)(v45 + 17) & 8) != 0 )
    {
      if ( v5 != 1 )
        goto LABEL_80;
      v5 = ghrgnInv2;
      CalcWindowRgn(a1, ghrgnInv2, 1LL);
    }
    if ( v5 == 1 )
    {
LABEL_85:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
      SetOrClrWF(0LL, a1, 258LL, 1LL);
      ClearHungFlag(a1);
LABEL_69:
      if ( v11 )
      {
        v46 = *((_QWORD *)a1 + 5);
        if ( !*(_QWORD *)(v46 + 136) && (*(_BYTE *)(v46 + 17) & 0x10) == 0 )
          DecPaintCount(a1, a2);
      }
      return;
    }
LABEL_80:
    if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) == 1LL )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic(v10, a2, a3, a4);
      v48 = *((_QWORD *)a1 + 5);
      v49 = *(_QWORD *)(v48 + 136);
      if ( !v49 )
        goto LABEL_56;
      LOBYTE(v47) = ~*(_BYTE *)(v48 + 17);
      if ( !(unsigned int)CalcWindowRgn(a1, v49, (v47 >> 3) & 1) )
        goto LABEL_56;
    }
    v50 = GreCombineRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), v5, 4LL);
    if ( !v50 )
      goto LABEL_56;
    if ( v50 != 1 )
      goto LABEL_69;
    goto LABEL_85;
  }
}
