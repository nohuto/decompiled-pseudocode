/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1C002B824
 * Callers:
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C003B200 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxGetUpdateRgn @ 0x1C00EC440 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C012ECD8 (xxxGetUpdateRect.c)
 * Callees:
 *     GetStyleWindow @ 0x1C002B990 (GetStyleWindow.c)
 *     ClearHungFlag @ 0x1C003ABAC (ClearHungFlag.c)
 *     xxxSendEraseBkgnd @ 0x1C003B4F8 (xxxSendEraseBkgnd.c)
 *     IsHungWindow @ 0x1C004F680 (IsHungWindow.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C005124C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0051838 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 */

char __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  __int64 StyleWindow; // rax
  __int64 v3; // rdx
  int v4; // edi
  HRGN NCUpdateRgn; // rax
  HRGN v6; // rsi
  __int64 v7; // rcx
  HRGN v8; // rax

  StyleWindow = GetStyleWindow(a1, 2818LL);
  if ( !StyleWindow )
  {
    SetOrClrWF(0LL, a1, 576LL, 1LL);
    v3 = *((_QWORD *)a1 + 5);
    v4 = (*(unsigned __int8 *)(v3 + 17) >> 2) & 2 | 1;
    LOBYTE(StyleWindow) = *(_BYTE *)(v3 + 17) & 2;
    if ( !(_BYTE)StyleWindow )
      v4 = (*(unsigned __int8 *)(v3 + 17) >> 2) & 2;
    if ( v4 )
    {
      if ( (*(_BYTE *)(v3 + 31) & 0x10) != 0 )
      {
        if ( !*(_QWORD *)(v3 + 136) )
        {
          SetOrClrWF(0LL, a1, 258LL, 1LL);
          SetOrClrWF(0LL, a1, 260LL, 1LL);
          LOBYTE(v4) = v4 & 0xFE;
        }
        if ( *((_QWORD *)a1 + 2) == gptiCurrent )
        {
          NCUpdateRgn = GetNCUpdateRgn(a1, 1);
          v6 = NCUpdateRgn;
          if ( (v4 & 2) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
            xxxSendNCPaint(a1, NCUpdateRgn);
          if ( (v4 & 1) != 0 )
          {
            v7 = *((_QWORD *)a1 + 5);
            if ( (*(_BYTE *)(v7 + 17) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v6);
              v8 = GetNCUpdateRgn(a1, 0);
              v7 = *((_QWORD *)a1 + 5);
              v6 = v8;
            }
            if ( (*(_BYTE *)(v7 + 17) & 2) != 0 )
            {
              SetOrClrWF(0LL, a1, 258LL, 1LL);
              SetOrClrWF(0LL, a1, 260LL, 1LL);
              xxxSendEraseBkgnd(a1, 0LL, v6);
            }
            ClearHungFlag(a1);
          }
          LOBYTE(StyleWindow) = DeleteMaybeSpecialRgn(v6);
        }
        else
        {
          StyleWindow = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(StyleWindow + 31) & 0xC0) != 0x40 )
          {
            StyleWindow = *(_QWORD *)(grpdeskRitInput + 8LL);
            if ( a1 != *(struct tagWND **)(StyleWindow + 24) )
            {
              LODWORD(StyleWindow) = IsHungWindow(a1);
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
  }
  return StyleWindow;
}
