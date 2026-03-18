/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1C0026490
 * Callers:
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0038440 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxGetUpdateRgn @ 0x1C00F5B38 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C00FC220 (xxxGetUpdateRect.c)
 * Callees:
 *     IsHungWindow @ 0x1C001E340 (IsHungWindow.c)
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     ClearHungFlag @ 0x1C0037FF8 (ClearHungFlag.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     xxxSendEraseBkgnd @ 0x1C00E99D8 (xxxSendEraseBkgnd.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F0E9C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F2C68 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C01360F8 (xxxRedrawHungWindow.c)
 */

char __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  __int64 StyleWindow; // rax
  __int64 v3; // rax
  int v4; // ebp
  int v5; // esi
  int v6; // r14d
  __int64 v7; // rcx
  unsigned int *v8; // rax
  unsigned int v9; // r9d
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 v12; // rdx
  int v13; // edi
  HRGN NCUpdateRgn; // rax
  HRGN v15; // rsi
  __int64 v16; // rcx
  _BOOL8 v17; // rdx
  void *v18; // rax
  HRGN v19; // rax

  StyleWindow = GetStyleWindow(a1, 2818LL);
  if ( StyleWindow )
    return StyleWindow;
  v3 = *((_QWORD *)a1 + 5);
  v4 = *(_DWORD *)(v3 + 28);
  v5 = *(_DWORD *)(v3 + 24);
  v6 = *(_DWORD *)(v3 + 232);
  *(_BYTE *)(v3 + 18) &= ~0x40u;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v8 = (unsigned int *)*((_QWORD *)a1 + 5);
    v9 = v8[7];
    v10 = v8[6];
    v11 = v8[58];
    if ( v4 != v9 )
      goto LABEL_27;
    if ( v5 == (_DWORD)v10 && v6 == v11 )
      goto LABEL_6;
    if ( v4 != v9 )
    {
LABEL_27:
      v17 = ((v4 ^ v9) & 0xB9CF0000) != 0;
      v7 = -((v4 ^ v9) & 0xB9CF0000);
      goto LABEL_30;
    }
    if ( v5 != (_DWORD)v10 )
    {
      v17 = ((v5 ^ (unsigned int)v10) & 0x4E27A9) != 0;
      v7 = -((v5 ^ (unsigned int)v10) & 0x4E27A9);
      goto LABEL_30;
    }
    if ( ((v6 ^ v11) & 0x2E00300) != 0 )
    {
      v17 = 1LL;
LABEL_30:
      if ( v17 )
      {
        v18 = (void *)ReferenceDwmApiPort(v7, v17, v10);
        DwmAsyncChildStyleChange(v18);
      }
    }
  }
LABEL_6:
  v12 = *((_QWORD *)a1 + 5);
  v13 = (*(unsigned __int8 *)(v12 + 17) >> 2) & 2 | 1;
  LOBYTE(StyleWindow) = *(_BYTE *)(v12 + 17) & 2;
  if ( !(_BYTE)StyleWindow )
    v13 = (*(unsigned __int8 *)(v12 + 17) >> 2) & 2;
  if ( v13 )
  {
    if ( (*(_BYTE *)(v12 + 31) & 0x10) != 0 )
    {
      if ( !*(_QWORD *)(v12 + 136) )
      {
        SetOrClrWF(0LL, a1, 258LL, 1LL);
        SetOrClrWF(0LL, a1, 260LL, 1LL);
        LOBYTE(v13) = v13 & 0xFE;
      }
      if ( *((_QWORD *)a1 + 2) == gptiCurrent )
      {
        NCUpdateRgn = GetNCUpdateRgn(a1, 1);
        v15 = NCUpdateRgn;
        if ( (v13 & 2) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
          xxxSendNCPaint(a1, NCUpdateRgn);
        if ( (v13 & 1) != 0 )
        {
          v16 = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(v16 + 17) & 8) != 0 )
          {
            DeleteMaybeSpecialRgn(v15);
            v19 = GetNCUpdateRgn(a1, 0);
            v16 = *((_QWORD *)a1 + 5);
            v15 = v19;
          }
          if ( (*(_BYTE *)(v16 + 17) & 2) != 0 )
          {
            SetOrClrWF(0LL, a1, 258LL, 1LL);
            SetOrClrWF(0LL, a1, 260LL, 1LL);
            xxxSendEraseBkgnd(a1, 0LL, v15);
          }
          ClearHungFlag(a1);
        }
        LOBYTE(StyleWindow) = DeleteMaybeSpecialRgn(v15);
      }
      else
      {
        StyleWindow = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(StyleWindow + 31) & 0xC0) != 0x40 )
        {
          StyleWindow = *(_QWORD *)(grpdeskRitInput + 8LL);
          if ( a1 != *(struct tagWND **)(StyleWindow + 24) )
          {
            LODWORD(StyleWindow) = IsHungWindow((__int64)a1);
            if ( (_DWORD)StyleWindow )
            {
              StyleWindow = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(StyleWindow + 19) & 8) != 0 )
              {
                ClearHungFlag(a1);
                LOBYTE(StyleWindow) = xxxRedrawHungWindow(a1);
              }
            }
          }
        }
      }
    }
    else
    {
      SetOrClrWF(0LL, a1, 264LL, 1LL);
      SetOrClrWF(0LL, a1, 258LL, 1LL);
      SetOrClrWF(0LL, a1, 1664LL, 1LL);
      SetOrClrWF(0LL, a1, 260LL, 1LL);
      LOBYTE(StyleWindow) = ClearHungFlag(a1);
    }
  }
  return StyleWindow;
}
