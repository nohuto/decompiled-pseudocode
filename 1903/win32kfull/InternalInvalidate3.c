/*
 * XREFs of InternalInvalidate3 @ 0x1C00C5A38
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00C3D60 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxEndPaint @ 0x1C01040B0 (xxxEndPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ClearHungFlag @ 0x1C0099DDC (ClearHungFlag.c)
 *     CalcWindowRgn @ 0x1C00B40E0 (CalcWindowRgn.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     DecPaintCount @ 0x1C0114AFC (DecPaintCount.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0116710 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     IncPaintCount @ 0x1C023B550 (IncPaintCount.c)
 *     IncPaintCountInterMoveSize @ 0x1C023B59C (IncPaintCountInterMoveSize.c)
 */

void __fastcall InternalInvalidate3(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // r12
  int v7; // edi
  __int64 v8; // rcx
  struct tagWND *v9; // rax
  __int64 v10; // rcx
  BOOL v11; // ebp
  __int64 v12; // rax
  int v13; // ebp
  int v14; // r14d
  int v15; // r15d
  __int64 v16; // rcx
  int v17; // r13d
  unsigned int *v18; // rax
  int v19; // edi
  __int64 v20; // rax
  int v21; // ebp
  int v22; // r14d
  int v23; // r15d
  __int64 v24; // rcx
  unsigned int *v25; // rax
  int v26; // edi
  int v27; // r14d
  int v28; // ebp
  int v29; // r15d
  __int64 v30; // rcx
  unsigned int *v31; // rax
  int v32; // edi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdi
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // r8d
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // ebp
  int v46; // ecx
  void *v47; // rax
  int v48; // ebp
  int v49; // ecx
  void *v50; // rax
  void *v51; // rax
  int v52; // [rsp+20h] [rbp-38h]
  BOOL v53; // [rsp+70h] [rbp+18h]

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
    v11 = *(_QWORD *)(v10 + 136) || (*(_BYTE *)(v10 + 17) & 0x10) != 0;
    v53 = v11;
    if ( (v4 & 0x407) != 0 )
    {
      if ( (v4 & 2) != 0 )
        SetOrClrWF(1, (__int64)a1, 0x110u, 1);
      if ( !v7 )
        goto LABEL_38;
      v12 = *((_QWORD *)a1 + 5);
      v13 = *(_DWORD *)(v12 + 28);
      v14 = *(_DWORD *)(v12 + 24);
      v15 = *(_DWORD *)(v12 + 232);
      *(_BYTE *)(v12 + 17) &= ~1u;
      v17 = -268435456;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v18 = (unsigned int *)*((_QWORD *)a1 + 5);
        a4 = v18[7];
        a3 = v18[6];
        v19 = v18[58];
        if ( v13 != (_DWORD)a4 )
          goto LABEL_88;
        if ( v14 == (_DWORD)a3 && v15 == v19 )
          goto LABEL_17;
        if ( v13 == (_DWORD)a4 )
        {
          if ( v14 == (_DWORD)a3 )
          {
            if ( ((v15 ^ v19) & 0x2E00300) == 0 )
              goto LABEL_17;
            a2 = 1LL;
            v45 = -268435456;
          }
          else
          {
            a2 = ((v14 ^ (unsigned int)a3) & 0x4E27A9) != 0;
            v45 = ((v14 ^ (unsigned int)a3) & 0x4E27A9) != 0 ? 0xFFFFFFEC : 0;
            v16 = -((v14 ^ (unsigned int)a3) & 0x4E27A9);
            v19 = ((v14 ^ (unsigned int)a3) & 0x4E27A9) != 0 ? a3 : 0;
          }
        }
        else
        {
LABEL_88:
          v46 = (v13 ^ a4) & 0xB1CF0000;
          a2 = v46 != 0;
          v45 = v46 != 0 ? 0xFFFFFFF0 : 0;
          v16 = (unsigned int)-v46;
          v19 = (_DWORD)v16 != 0 ? a4 : 0;
        }
        if ( (_DWORD)a2 )
        {
          v47 = (void *)ReferenceDwmApiPort(v16, a2, a3);
          DwmAsyncChildStyleChange(v47, *(_QWORD *)a1, v45, v19);
        }
      }
LABEL_17:
      if ( *((_QWORD *)a1 + 2) != gptiCurrent )
      {
        SetOrClrWF(1, (__int64)a1, 0x120u, 1);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 1) != 0 )
        {
          SetOrClrWF(1, (__int64)a1, 0x402u, 1);
          gRdwFlags |= v4;
        }
      }
      if ( v5 == 1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
        SetOrClrWF(0, (__int64)a1, 0x102u, 1);
      if ( (v4 & 4) != 0 )
      {
        v20 = *((_QWORD *)a1 + 5);
        v21 = *(_DWORD *)(v20 + 28);
        v22 = *(_DWORD *)(v20 + 24);
        v23 = *(_DWORD *)(v20 + 232);
        *(_BYTE *)(v20 + 17) |= 2u;
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v25 = (unsigned int *)*((_QWORD *)a1 + 5);
          a4 = v25[7];
          a3 = v25[6];
          v26 = v25[58];
          if ( v21 != (_DWORD)a4 )
            goto LABEL_96;
          if ( v22 == (_DWORD)a3 && v23 == v26 )
            goto LABEL_24;
          if ( v21 == (_DWORD)a4 )
          {
            if ( v22 == (_DWORD)a3 )
            {
              if ( ((v23 ^ v26) & 0x2E00300) == 0 )
                goto LABEL_24;
              a2 = 1LL;
              v48 = -268435456;
            }
            else
            {
              a2 = ((v22 ^ (unsigned int)a3) & 0x4E27A9) != 0;
              v48 = ((v22 ^ (unsigned int)a3) & 0x4E27A9) != 0 ? 0xFFFFFFEC : 0;
              v24 = -((v22 ^ (unsigned int)a3) & 0x4E27A9);
              v26 = ((v22 ^ (unsigned int)a3) & 0x4E27A9) != 0 ? a3 : 0;
            }
          }
          else
          {
LABEL_96:
            v49 = (v21 ^ a4) & 0xB1CF0000;
            a2 = v49 != 0;
            v48 = v49 != 0 ? 0xFFFFFFF0 : 0;
            v24 = (unsigned int)-v49;
            v26 = (_DWORD)v24 != 0 ? a4 : 0;
          }
          if ( (_DWORD)a2 )
          {
            v50 = (void *)ReferenceDwmApiPort(v24, a2, a3);
            DwmAsyncChildStyleChange(v50, *(_QWORD *)a1, v48, v26);
          }
        }
      }
LABEL_24:
      if ( (v4 & 0x404) != 0 )
      {
        a2 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(a2 + 24) & 0x20) == 0 )
        {
          if ( (*(_BYTE *)(a2 + 19) & 0x18) == 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
          {
            VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu, v52);
            a2 = *((_QWORD *)a1 + 5);
          }
          v27 = *(_DWORD *)(a2 + 28);
          v28 = *(_DWORD *)(a2 + 24);
          v29 = *(_DWORD *)(a2 + 232);
          *(_BYTE *)(a2 + 19) |= 8u;
          if ( (unsigned int)IsWindowDesktopComposed(a1) )
          {
            v31 = (unsigned int *)*((_QWORD *)a1 + 5);
            a4 = v31[7];
            a3 = v31[6];
            v32 = v31[58];
            if ( v27 != (_DWORD)a4 )
              goto LABEL_104;
            if ( v28 == (_DWORD)a3 && v29 == v32 )
              goto LABEL_31;
            if ( v27 == (_DWORD)a4 )
            {
              if ( v28 == (_DWORD)a3 )
              {
                if ( ((v29 ^ v32) & 0x2E00300) == 0 )
                  goto LABEL_31;
                a2 = 1LL;
              }
              else
              {
                a2 = ((v28 ^ (unsigned int)a3) & 0x4E27A9) != 0;
                v17 = ((v28 ^ (unsigned int)a3) & 0x4E27A9) != 0 ? 0xFFFFFFEC : 0;
                v30 = -((v28 ^ (unsigned int)a3) & 0x4E27A9);
                v32 = ((v28 ^ (unsigned int)a3) & 0x4E27A9) != 0 ? a3 : 0;
              }
            }
            else
            {
LABEL_104:
              a2 = ((v27 ^ (unsigned int)a4) & 0xB1CF0000) != 0;
              v17 = ((v27 ^ (unsigned int)a4) & 0xB1CF0000) != 0 ? 0xFFFFFFF0 : 0;
              v30 = -((v27 ^ (unsigned int)a4) & 0xB1CF0000);
              v32 = ((v27 ^ (unsigned int)a4) & 0xB1CF0000) != 0 ? a4 : 0;
            }
            if ( (_DWORD)a2 )
            {
              v51 = (void *)ReferenceDwmApiPort(v30, a2, a3);
              DwmAsyncChildStyleChange(v51, *(_QWORD *)a1, v17, v32);
            }
          }
        }
      }
LABEL_31:
      if ( (v4 & 0x400) != 0 )
        SetOrClrWF(1, (__int64)a1, 0x108u, 1);
      v33 = *((_QWORD *)a1 + 5);
      v34 = *(_QWORD *)(v33 + 136);
      if ( v34 == 1 )
        goto LABEL_38;
      if ( v5 != 1 )
      {
        if ( v34 )
        {
          if ( (unsigned int)GreCombineRgn(v34, *(_QWORD *)(v33 + 136), v5, 2LL) )
            goto LABEL_38;
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
          v35 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
          if ( v35 && (unsigned int)GreCombineRgn(v35, v5, 0LL, 5LL) )
          {
LABEL_38:
            if ( !v53 )
            {
              v36 = *((_QWORD *)a1 + 5);
              if ( *(_QWORD *)(v36 + 136) || (*(_BYTE *)(v36 + 17) & 0x10) != 0 )
              {
                v37 = *((_QWORD *)a1 + 2);
                if ( (v4 & 0x20000) != 0 )
                {
                  if ( v37 == W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) )
                    IncPaintCount(a1);
                  else
                    IncPaintCountInterMoveSize(a1);
                }
                else
                {
                  v38 = *(_DWORD *)(v37 + 592);
                  *(_DWORD *)(v37 + 592) = v38 + 1;
                  if ( !v38 )
                  {
                    EtwTraceWakePump(v37, a1, 15LL);
                    if ( (*(_DWORD *)(v37 + 480) & 1) == 0 )
                    {
                      *(_WORD *)(*(_QWORD *)(v37 + 440) + 6LL) |= 0x20u;
                      *(_WORD *)(*(_QWORD *)(v37 + 440) + 4LL) |= 0x20u;
                      if ( (*(_BYTE *)(*(_QWORD *)(v37 + 440) + 10LL) & 0x20) != 0 )
                        KeSetEvent(*(PRKEVENT *)(v37 + 728), 2, 0);
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
    if ( (v4 & 0x838) == 0 || (((v4 & 0x8000) == 0) & (*(_BYTE *)(v10 + 17) >> 5)) != 0 )
      return;
    if ( (v4 & 0x10) != 0 )
      SetOrClrWF(0, (__int64)a1, 0x110u, 1);
    if ( (v4 & 8) == 0 )
      goto LABEL_65;
    if ( (v4 & 0x20) != 0 )
      SetOrClrWF(0, (__int64)a1, 0x102u, 1);
    if ( (v4 & 0x800) != 0 )
    {
      SetOrClrWF(0, (__int64)a1, 0x108u, 1);
      SetOrClrWF(0, (__int64)a1, 0x680u, 1);
    }
    if ( (v4 & 0x820) != 0 )
      ClearHungFlag(a1, 0x308u);
    v39 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v39 + 136) )
      goto LABEL_65;
    if ( (*(_BYTE *)(v39 + 17) & 8) != 0 )
    {
      if ( v5 != 1 )
        goto LABEL_76;
      v5 = ghrgnInv2;
      CalcWindowRgn((__int64)a1, ghrgnInv2, 1);
    }
    if ( v5 == 1 )
    {
LABEL_79:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
      SetOrClrWF(0, (__int64)a1, 0x102u, 1);
      ClearHungFlag(a1, 0x308u);
LABEL_65:
      if ( v11 )
      {
        v40 = *((_QWORD *)a1 + 5);
        if ( !*(_QWORD *)(v40 + 136) && (*(_BYTE *)(v40 + 17) & 0x10) == 0 )
          DecPaintCount(a1);
      }
      return;
    }
LABEL_76:
    if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) == 1LL )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
      v43 = *((_QWORD *)a1 + 5);
      v44 = *(_QWORD *)(v43 + 136);
      if ( !v44 )
        goto LABEL_52;
      LOBYTE(v42) = ~*(_BYTE *)(v43 + 17);
      if ( !(unsigned int)CalcWindowRgn((__int64)a1, v44, (v42 >> 3) & 1) )
        goto LABEL_52;
    }
    v41 = GreCombineRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), v5, 4LL);
    if ( !v41 )
      goto LABEL_52;
    if ( v41 != 1 )
      goto LABEL_65;
    goto LABEL_79;
  }
}
