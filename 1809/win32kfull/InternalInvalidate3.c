/*
 * XREFs of InternalInvalidate3 @ 0x1C003B9D4
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C003B3B8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxEndPaint @ 0x1C00FD91C (xxxEndPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     ClearHungFlag @ 0x1C001F610 (ClearHungFlag.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     CalcWindowRgn @ 0x1C006F268 (CalcWindowRgn.c)
 *     DecPaintCount @ 0x1C00F7870 (DecPaintCount.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C010FB38 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     IncPaintCount @ 0x1C0222FB4 (IncPaintCount.c)
 *     IncPaintCountInterMoveSize @ 0x1C0223000 (IncPaintCountInterMoveSize.c)
 */

void __fastcall InternalInvalidate3(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  int v6; // ebp
  __int64 v7; // rcx
  BOOL v8; // edi
  unsigned int v9; // r13d
  int v10; // esi
  int v11; // r15d
  int v12; // r12d
  __int64 v13; // rcx
  _DWORD *v14; // rax
  int v15; // r9d
  int v16; // r8d
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // ecx
  __int64 v21; // rcx
  struct tagWND *v22; // rax
  __int64 v23; // rax
  int v24; // esi
  int v25; // ebp
  int v26; // r15d
  __int64 v27; // rdx
  unsigned int *v28; // rax
  unsigned int v29; // r8d
  int v30; // edi
  __int64 v31; // rax
  int v32; // esi
  int v33; // ebp
  int v34; // r15d
  unsigned int *v35; // rax
  unsigned int v36; // r8d
  int v37; // edi
  int v38; // ebp
  int v39; // esi
  int v40; // r15d
  unsigned int *v41; // rax
  unsigned int v42; // r8d
  int v43; // edi
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // r8d
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  _BOOL8 v53; // rdx
  int v54; // esi
  unsigned int v55; // ecx
  void *v56; // rax
  _BOOL8 v57; // rcx
  unsigned int v58; // r15d
  void *v59; // rax
  _BOOL8 v60; // rcx
  unsigned int v61; // r15d
  void *v62; // rax
  _BOOL8 v63; // rcx
  void *v64; // rax
  int v65; // [rsp+20h] [rbp-48h]
  __int64 v66; // [rsp+78h] [rbp+10h]
  BOOL v67; // [rsp+80h] [rbp+18h]

  v66 = a2;
  v4 = a2;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    goto LABEL_2;
  v21 = *((_QWORD *)a1 + 3);
  v22 = 0LL;
  if ( v21 )
  {
    a2 = *(_QWORD *)(v21 + 8);
    if ( a2 )
      v22 = *(struct tagWND **)(a2 + 24);
  }
  if ( a1 != v22 || !(unsigned int)IsWindowDesktopComposed(a1) )
  {
LABEL_2:
    v7 = *((_QWORD *)a1 + 5);
    LOBYTE(a2) = 16;
    v8 = *(_QWORD *)(v7 + 136) || (*(_BYTE *)(v7 + 17) & 0x10) != 0;
    v67 = v8;
    if ( (a3 & 0x407) != 0 )
    {
      v9 = -268435456;
      if ( (a3 & 2) == 0 )
        goto LABEL_12;
      v10 = *(_DWORD *)(v7 + 28);
      v11 = *(_DWORD *)(v7 + 24);
      v12 = *(_DWORD *)(v7 + 232);
      *(_BYTE *)(v7 + 17) |= 0x10u;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v14 = (_DWORD *)*((_QWORD *)a1 + 5);
        v15 = v14[7];
        v16 = v14[6];
        v17 = v14[58];
        if ( v10 != v15 )
          goto LABEL_92;
        if ( v11 == v16 && v12 == v17 )
          goto LABEL_11;
        if ( v10 != v15 )
        {
LABEL_92:
          v55 = (v10 ^ v15) & 0xB9CF0000;
          v53 = v55 != 0;
          v54 = v55 != 0 ? 0xFFFFFFF0 : 0;
          v13 = -v55;
          v17 = (_DWORD)v13 != 0 ? v15 : 0;
          goto LABEL_95;
        }
        if ( v11 != v16 )
        {
          v53 = ((v11 ^ v16) & 0x4E27A9) != 0;
          v54 = ((v11 ^ v16) & 0x4E27A9) != 0 ? 0xFFFFFFEC : 0;
          v13 = -((v11 ^ v16) & 0x4E27A9);
          v17 = ((v11 ^ v16) & 0x4E27A9) != 0 ? v16 : 0;
          goto LABEL_95;
        }
        if ( ((v12 ^ v17) & 0x2E00300) != 0 )
        {
          v53 = 1LL;
          v54 = -268435456;
LABEL_95:
          if ( v53 )
          {
            v56 = (void *)ReferenceDwmApiPort(v13, v53);
            DwmAsyncChildStyleChange(v56, *(_QWORD *)a1, v54, v17);
          }
        }
      }
LABEL_11:
      v4 = v66;
LABEL_12:
      if ( !v6 )
        goto LABEL_13;
      v23 = *((_QWORD *)a1 + 5);
      v24 = *(_DWORD *)(v23 + 28);
      v25 = *(_DWORD *)(v23 + 24);
      v26 = *(_DWORD *)(v23 + 232);
      *(_BYTE *)(v23 + 17) &= ~1u;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v28 = (unsigned int *)*((_QWORD *)a1 + 5);
        v29 = v28[7];
        v27 = v28[6];
        v30 = v28[58];
        if ( v24 != v29 )
          goto LABEL_100;
        if ( v25 == (_DWORD)v27 && v26 == v30 )
          goto LABEL_31;
        if ( v24 == v29 )
        {
          if ( v25 == (_DWORD)v27 )
          {
            if ( ((v30 ^ v26) & 0x2E00300) == 0 )
              goto LABEL_31;
            v57 = 1LL;
            v58 = -268435456;
          }
          else
          {
            v57 = (((unsigned int)v27 ^ v25) & 0x4E27A9) != 0;
            v58 = v57 ? 0xFFFFFFEC : 0;
            v30 = v57 ? v27 : 0;
          }
        }
        else
        {
LABEL_100:
          v57 = ((v29 ^ v24) & 0xB9CF0000) != 0;
          v58 = v57 ? 0xFFFFFFF0 : 0;
          v30 = v57 ? v29 : 0;
        }
        if ( v57 )
        {
          v59 = (void *)ReferenceDwmApiPort(v57, v27);
          DwmAsyncChildStyleChange(v59, *(_QWORD *)a1, v58, v30);
        }
      }
LABEL_31:
      if ( *((_QWORD *)a1 + 2) != gptiCurrent )
      {
        SetOrClrWF(1, (__int64)a1, 0x120u, 1);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 1) != 0 )
        {
          SetOrClrWF(1, (__int64)a1, 0x402u, 1);
          gRdwFlags |= a3;
        }
      }
      if ( v4 == 1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
        SetOrClrWF(0, (__int64)a1, 0x102u, 1);
      if ( (a3 & 4) != 0 )
      {
        v31 = *((_QWORD *)a1 + 5);
        v32 = *(_DWORD *)(v31 + 28);
        v33 = *(_DWORD *)(v31 + 24);
        v34 = *(_DWORD *)(v31 + 232);
        *(_BYTE *)(v31 + 17) |= 2u;
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v35 = (unsigned int *)*((_QWORD *)a1 + 5);
          v36 = v35[7];
          v27 = v35[6];
          v37 = v35[58];
          if ( v32 != v36 )
            goto LABEL_108;
          if ( v33 == (_DWORD)v27 && v34 == v37 )
            goto LABEL_38;
          if ( v32 == v36 )
          {
            if ( v33 == (_DWORD)v27 )
            {
              if ( ((v37 ^ v34) & 0x2E00300) == 0 )
                goto LABEL_38;
              v60 = 1LL;
              v61 = -268435456;
            }
            else
            {
              v60 = (((unsigned int)v27 ^ v33) & 0x4E27A9) != 0;
              v61 = v60 ? 0xFFFFFFEC : 0;
              v37 = v60 ? v27 : 0;
            }
          }
          else
          {
LABEL_108:
            v60 = ((v36 ^ v32) & 0xB9CF0000) != 0;
            v61 = v60 ? 0xFFFFFFF0 : 0;
            v37 = v60 ? v36 : 0;
          }
          if ( v60 )
          {
            v62 = (void *)ReferenceDwmApiPort(v60, v27);
            DwmAsyncChildStyleChange(v62, *(_QWORD *)a1, v61, v37);
          }
        }
      }
LABEL_38:
      if ( (a3 & 0x404) != 0 )
      {
        v27 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v27 + 24) & 0x20) == 0 )
        {
          if ( (*(_BYTE *)(v27 + 19) & 0x18) == 0 && *((_QWORD *)a1 + 10) == GetDesktopWindow(a1) )
          {
            VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu, v65);
            v27 = *((_QWORD *)a1 + 5);
          }
          v38 = *(_DWORD *)(v27 + 28);
          v39 = *(_DWORD *)(v27 + 24);
          v40 = *(_DWORD *)(v27 + 232);
          *(_BYTE *)(v27 + 19) |= 8u;
          if ( (unsigned int)IsWindowDesktopComposed(a1) )
          {
            v41 = (unsigned int *)*((_QWORD *)a1 + 5);
            v42 = v41[7];
            v27 = v41[6];
            v43 = v41[58];
            if ( v38 != v42 )
              goto LABEL_116;
            if ( v39 == (_DWORD)v27 && v40 == v43 )
              goto LABEL_45;
            if ( v38 == v42 )
            {
              if ( v39 == (_DWORD)v27 )
              {
                if ( ((v43 ^ v40) & 0x2E00300) == 0 )
                  goto LABEL_45;
                v63 = 1LL;
              }
              else
              {
                v63 = (((unsigned int)v27 ^ v39) & 0x4E27A9) != 0;
                v9 = v63 ? 0xFFFFFFEC : 0;
                v43 = v63 ? v27 : 0;
              }
            }
            else
            {
LABEL_116:
              v63 = ((v42 ^ v38) & 0xB9CF0000) != 0;
              v9 = v63 ? 0xFFFFFFF0 : 0;
              v43 = v63 ? v42 : 0;
            }
            if ( v63 )
            {
              v64 = (void *)ReferenceDwmApiPort(v63, v27);
              DwmAsyncChildStyleChange(v64, *(_QWORD *)a1, v9, v43);
            }
          }
        }
      }
LABEL_45:
      if ( (a3 & 0x400) != 0 )
        SetOrClrWF(1, (__int64)a1, 0x108u, 1);
      v44 = *((_QWORD *)a1 + 5);
      v45 = *(_QWORD *)(v44 + 136);
      if ( v45 == 1 )
        goto LABEL_13;
      if ( v4 != 1 )
      {
        if ( v45 )
        {
          if ( (unsigned int)GreCombineRgn(v45, *(_QWORD *)(v44 + 136), v4, 2LL) )
            goto LABEL_13;
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic(0LL, v27);
          v46 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
          if ( v46 && (unsigned int)GreCombineRgn(v46, v4, 0LL, 5LL) )
          {
LABEL_13:
            if ( !v67 )
            {
              v18 = *((_QWORD *)a1 + 5);
              if ( *(_QWORD *)(v18 + 136) || (*(_BYTE *)(v18 + 17) & 0x10) != 0 )
              {
                v19 = *((_QWORD *)a1 + 2);
                if ( (a3 & 0x20000) != 0 )
                {
                  if ( v19 == W32GetThreadWin32Thread(KeGetCurrentThread()) )
                    IncPaintCount(a1);
                  else
                    IncPaintCountInterMoveSize(a1);
                }
                else
                {
                  v20 = *(_DWORD *)(v19 + 600);
                  *(_DWORD *)(v19 + 600) = v20 + 1;
                  if ( !v20 )
                  {
                    EtwTraceWakePump(v19, a1, 15LL);
                    if ( (*(_DWORD *)(v19 + 488) & 1) == 0 )
                    {
                      *(_WORD *)(*(_QWORD *)(v19 + 448) + 6LL) |= 0x20u;
                      *(_WORD *)(*(_QWORD *)(v19 + 448) + 4LL) |= 0x20u;
                      if ( (*(_BYTE *)(*(_QWORD *)(v19 + 448) + 10LL) & 0x20) != 0 )
                        KeSetEvent(*(PRKEVENT *)(v19 + 736), 2, 0);
                    }
                  }
                }
              }
            }
            return;
          }
        }
      }
LABEL_59:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
      goto LABEL_13;
    }
    if ( (a3 & 0x838) == 0 )
      return;
    LOBYTE(v7) = ((a3 & 0x8000) == 0) & (*(_BYTE *)(v7 + 17) >> 5);
    if ( (v7 & 1) != 0 )
      return;
    if ( (a3 & 0x10) != 0 )
      SetOrClrWF(0, (__int64)a1, 0x110u, 1);
    if ( (a3 & 8) == 0 )
      goto LABEL_72;
    if ( (a3 & 0x20) != 0 )
      SetOrClrWF(0, (__int64)a1, 0x102u, 1);
    if ( (a3 & 0x800) != 0 )
    {
      SetOrClrWF(0, (__int64)a1, 0x108u, 1);
      SetOrClrWF(0, (__int64)a1, 0x680u, 1);
    }
    if ( (a3 & 0x820) != 0 )
      ClearHungFlag(a1, 0x308u);
    v47 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v47 + 136) )
      goto LABEL_72;
    if ( (*(_BYTE *)(v47 + 17) & 8) != 0 )
    {
      if ( v4 != 1 )
        goto LABEL_81;
      v4 = ghrgnInv2;
      CalcWindowRgn(a1, ghrgnInv2, 1LL);
    }
    if ( v4 == 1 )
    {
LABEL_86:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
      SetOrClrWF(0, (__int64)a1, 0x102u, 1);
      ClearHungFlag(a1, 0x308u);
LABEL_72:
      if ( v8 )
      {
        v48 = *((_QWORD *)a1 + 5);
        if ( !*(_QWORD *)(v48 + 136) && (*(_BYTE *)(v48 + 17) & 0x10) == 0 )
          DecPaintCount(a1);
      }
      return;
    }
LABEL_81:
    if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) == 1LL )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic(v7, a2);
      v50 = *((_QWORD *)a1 + 5);
      v51 = *(_QWORD *)(v50 + 136);
      if ( !v51 )
        goto LABEL_59;
      LOBYTE(v49) = ~*(_BYTE *)(v50 + 17);
      if ( !(unsigned int)CalcWindowRgn(a1, v51, (v49 >> 3) & 1) )
        goto LABEL_59;
    }
    v52 = GreCombineRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), v4, 4LL);
    if ( !v52 )
      goto LABEL_59;
    if ( v52 != 1 )
      goto LABEL_72;
    goto LABEL_86;
  }
}
