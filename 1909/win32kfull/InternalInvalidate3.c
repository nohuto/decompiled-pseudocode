/*
 * XREFs of InternalInvalidate3 @ 0x1C0067108
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065430 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxEndPaint @ 0x1C00E01C0 (xxxEndPaint.c)
 * Callees:
 *     ClearHungFlag @ 0x1C003ABAC (ClearHungFlag.c)
 *     CalcWindowRgn @ 0x1C0054E44 (CalcWindowRgn.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     DecPaintCount @ 0x1C00EF7B0 (DecPaintCount.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00F0F60 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     IncPaintCount @ 0x1C023AF30 (IncPaintCount.c)
 *     IncPaintCountInterMoveSize @ 0x1C023AF7C (IncPaintCountInterMoveSize.c)
 */

void __fastcall InternalInvalidate3(struct tagWND *a1, __int64 a2, int a3)
{
  int v6; // edi
  __int64 v7; // rcx
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  BOOL v11; // ebp
  __int64 v12; // rax
  int v13; // ebp
  int v14; // r14d
  int v15; // r15d
  __int64 v16; // rcx
  unsigned int *v17; // rax
  unsigned int v18; // r9d
  __int64 v19; // r8
  unsigned int v20; // edi
  __int64 v21; // rax
  int v22; // ebp
  int v23; // r14d
  int v24; // r15d
  __int64 v25; // rcx
  unsigned int *v26; // rax
  unsigned int v27; // r9d
  __int64 v28; // r8
  unsigned int v29; // edi
  __int64 v30; // rdx
  int v31; // r14d
  int v32; // ebp
  int v33; // r15d
  __int64 v34; // rcx
  unsigned int *v35; // rax
  unsigned int v36; // r9d
  __int64 v37; // r8
  unsigned int v38; // edi
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdi
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // rdx
  _BOOL8 v51; // rdx
  void *v52; // rax
  _BOOL8 v53; // rdx
  void *v54; // rax
  _BOOL8 v55; // rdx
  void *v56; // rax
  int v57; // [rsp+20h] [rbp-38h]
  BOOL v58; // [rsp+70h] [rbp+18h]

  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    goto LABEL_6;
  v7 = *((_QWORD *)a1 + 3);
  v8 = 0LL;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 8);
    if ( v9 )
      v8 = *(struct tagWND **)(v9 + 24);
  }
  if ( a1 != v8 || !(unsigned int)IsWindowDesktopComposed(a1) )
  {
LABEL_6:
    v10 = *((_QWORD *)a1 + 5);
    v11 = *(_QWORD *)(v10 + 136) || (*(_BYTE *)(v10 + 17) & 0x10) != 0;
    v58 = v11;
    if ( (a3 & 0x407) != 0 )
    {
      if ( (a3 & 2) != 0 )
        SetOrClrWF(1LL, a1, 272LL, 1LL);
      if ( !v6 )
        goto LABEL_38;
      v12 = *((_QWORD *)a1 + 5);
      v13 = *(_DWORD *)(v12 + 28);
      v14 = *(_DWORD *)(v12 + 24);
      v15 = *(_DWORD *)(v12 + 232);
      *(_BYTE *)(v12 + 17) &= ~1u;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v17 = (unsigned int *)*((_QWORD *)a1 + 5);
        v18 = v17[7];
        v19 = v17[6];
        v20 = v17[58];
        if ( v13 != v18 )
          goto LABEL_88;
        if ( v14 == (_DWORD)v19 && v15 == v20 )
          goto LABEL_17;
        if ( v13 == v18 )
        {
          if ( v14 == (_DWORD)v19 )
          {
            if ( ((v15 ^ v20) & 0x2E00300) == 0 )
              goto LABEL_17;
            v51 = 1LL;
          }
          else
          {
            v51 = ((v14 ^ (unsigned int)v19) & 0x4E27A9) != 0;
            v16 = -((v14 ^ (unsigned int)v19) & 0x4E27A9);
          }
        }
        else
        {
LABEL_88:
          v51 = ((v13 ^ v18) & 0xB1CF0000) != 0;
          v16 = -((v13 ^ v18) & 0xB1CF0000);
        }
        if ( v51 )
        {
          v52 = (void *)ReferenceDwmApiPort(v16, v51, v19);
          DwmAsyncChildStyleChange(v52);
        }
      }
LABEL_17:
      if ( *((_QWORD *)a1 + 2) != gptiCurrent )
      {
        SetOrClrWF(1LL, a1, 288LL, 1LL);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 1) != 0 )
        {
          SetOrClrWF(1LL, a1, 1026LL, 1LL);
          gRdwFlags |= a3;
        }
      }
      if ( a2 == 1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
        SetOrClrWF(0LL, a1, 258LL, 1LL);
      if ( (a3 & 4) != 0 )
      {
        v21 = *((_QWORD *)a1 + 5);
        v22 = *(_DWORD *)(v21 + 28);
        v23 = *(_DWORD *)(v21 + 24);
        v24 = *(_DWORD *)(v21 + 232);
        *(_BYTE *)(v21 + 17) |= 2u;
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v26 = (unsigned int *)*((_QWORD *)a1 + 5);
          v27 = v26[7];
          v28 = v26[6];
          v29 = v26[58];
          if ( v22 != v27 )
            goto LABEL_96;
          if ( v23 == (_DWORD)v28 && v24 == v29 )
            goto LABEL_24;
          if ( v22 == v27 )
          {
            if ( v23 == (_DWORD)v28 )
            {
              if ( ((v24 ^ v29) & 0x2E00300) == 0 )
                goto LABEL_24;
              v53 = 1LL;
            }
            else
            {
              v53 = ((v23 ^ (unsigned int)v28) & 0x4E27A9) != 0;
              v25 = -((v23 ^ (unsigned int)v28) & 0x4E27A9);
            }
          }
          else
          {
LABEL_96:
            v53 = ((v22 ^ v27) & 0xB1CF0000) != 0;
            v25 = -((v22 ^ v27) & 0xB1CF0000);
          }
          if ( v53 )
          {
            v54 = (void *)ReferenceDwmApiPort(v25, v53, v28);
            DwmAsyncChildStyleChange(v54);
          }
        }
      }
LABEL_24:
      if ( (a3 & 0x404) != 0 )
      {
        v30 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v30 + 24) & 0x20) == 0 )
        {
          if ( (*(_BYTE *)(v30 + 19) & 0x18) == 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
          {
            VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu, v57);
            v30 = *((_QWORD *)a1 + 5);
          }
          v31 = *(_DWORD *)(v30 + 28);
          v32 = *(_DWORD *)(v30 + 24);
          v33 = *(_DWORD *)(v30 + 232);
          *(_BYTE *)(v30 + 19) |= 8u;
          if ( (unsigned int)IsWindowDesktopComposed(a1) )
          {
            v35 = (unsigned int *)*((_QWORD *)a1 + 5);
            v36 = v35[7];
            v37 = v35[6];
            v38 = v35[58];
            if ( v31 != v36 )
              goto LABEL_104;
            if ( v32 == (_DWORD)v37 && v33 == v38 )
              goto LABEL_31;
            if ( v31 == v36 )
            {
              if ( v32 == (_DWORD)v37 )
              {
                if ( ((v33 ^ v38) & 0x2E00300) == 0 )
                  goto LABEL_31;
                v55 = 1LL;
              }
              else
              {
                v55 = ((v32 ^ (unsigned int)v37) & 0x4E27A9) != 0;
                v34 = -((v32 ^ (unsigned int)v37) & 0x4E27A9);
              }
            }
            else
            {
LABEL_104:
              v55 = ((v31 ^ v36) & 0xB1CF0000) != 0;
              v34 = -((v31 ^ v36) & 0xB1CF0000);
            }
            if ( v55 )
            {
              v56 = (void *)ReferenceDwmApiPort(v34, v55, v37);
              DwmAsyncChildStyleChange(v56);
            }
          }
        }
      }
LABEL_31:
      if ( (a3 & 0x400) != 0 )
        SetOrClrWF(1LL, a1, 264LL, 1LL);
      v39 = *((_QWORD *)a1 + 5);
      v40 = *(_QWORD *)(v39 + 136);
      if ( v40 == 1 )
        goto LABEL_38;
      if ( a2 != 1 )
      {
        if ( v40 )
        {
          if ( (unsigned int)GreCombineRgn(v40, *(_QWORD *)(v39 + 136), a2, 2LL) )
            goto LABEL_38;
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
          v41 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
          if ( v41 && (unsigned int)GreCombineRgn(v41, a2, 0LL, 5LL) )
          {
LABEL_38:
            if ( !v58 )
            {
              v42 = *((_QWORD *)a1 + 5);
              if ( *(_QWORD *)(v42 + 136) || (*(_BYTE *)(v42 + 17) & 0x10) != 0 )
              {
                v43 = *((_QWORD *)a1 + 2);
                if ( (a3 & 0x20000) != 0 )
                {
                  if ( v43 == W32GetThreadWin32Thread(KeGetCurrentThread()) )
                    IncPaintCount(a1);
                  else
                    IncPaintCountInterMoveSize(a1);
                }
                else
                {
                  v44 = *(_DWORD *)(v43 + 592);
                  *(_DWORD *)(v43 + 592) = v44 + 1;
                  if ( !v44 )
                  {
                    EtwTraceWakePump(v43, a1, 15LL);
                    if ( (*(_DWORD *)(v43 + 480) & 1) == 0 )
                    {
                      *(_WORD *)(*(_QWORD *)(v43 + 440) + 6LL) |= 0x20u;
                      *(_WORD *)(*(_QWORD *)(v43 + 440) + 4LL) |= 0x20u;
                      if ( (*(_BYTE *)(*(_QWORD *)(v43 + 440) + 10LL) & 0x20) != 0 )
                        KeSetEvent(*(PRKEVENT *)(v43 + 728), 2, 0);
                    }
                  }
                }
              }
            }
            return;
          }
        }
      }
LABEL_52:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
      goto LABEL_38;
    }
    if ( (a3 & 0x838) == 0 || (((a3 & 0x8000) == 0) & (*(_BYTE *)(v10 + 17) >> 5)) != 0 )
      return;
    if ( (a3 & 0x10) != 0 )
      SetOrClrWF(0LL, a1, 272LL, 1LL);
    if ( (a3 & 8) == 0 )
      goto LABEL_65;
    if ( (a3 & 0x20) != 0 )
      SetOrClrWF(0LL, a1, 258LL, 1LL);
    if ( (a3 & 0x800) != 0 )
    {
      SetOrClrWF(0LL, a1, 264LL, 1LL);
      SetOrClrWF(0LL, a1, 1664LL, 1LL);
    }
    if ( (a3 & 0x820) != 0 )
      ClearHungFlag(a1, 0x308u);
    v45 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v45 + 136) )
      goto LABEL_65;
    if ( (*(_BYTE *)(v45 + 17) & 8) != 0 )
    {
      if ( a2 != 1 )
        goto LABEL_76;
      a2 = ghrgnInv2;
      CalcWindowRgn((__int64)a1, ghrgnInv2, 1);
    }
    if ( a2 == 1 )
    {
LABEL_79:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
      SetOrClrWF(0LL, a1, 258LL, 1LL);
      ClearHungFlag(a1, 0x308u);
LABEL_65:
      if ( v11 )
      {
        v46 = *((_QWORD *)a1 + 5);
        if ( !*(_QWORD *)(v46 + 136) && (*(_BYTE *)(v46 + 17) & 0x10) == 0 )
          DecPaintCount(a1);
      }
      return;
    }
LABEL_76:
    if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) == 1LL )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
      v49 = *((_QWORD *)a1 + 5);
      v50 = *(_QWORD *)(v49 + 136);
      if ( !v50 )
        goto LABEL_52;
      LOBYTE(v48) = ~*(_BYTE *)(v49 + 17);
      if ( !(unsigned int)CalcWindowRgn((__int64)a1, v50, (v48 >> 3) & 1) )
        goto LABEL_52;
    }
    v47 = GreCombineRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), a2, 4LL);
    if ( !v47 )
      goto LABEL_52;
    if ( v47 != 1 )
      goto LABEL_65;
    goto LABEL_79;
  }
}
