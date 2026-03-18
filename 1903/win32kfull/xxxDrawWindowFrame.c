/*
 * XREFs of xxxDrawWindowFrame @ 0x1C0028040
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F8A94 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRedrawHungWindow @ 0x1C015DC18 (xxxRedrawHungWindow.c)
 * Callees:
 *     xxxDrawScrollBar @ 0x1C000B4B8 (xxxDrawScrollBar.c)
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     IsVisible @ 0x1C0028D70 (IsVisible.c)
 *     DrawEdge @ 0x1C008D37C (DrawEdge.c)
 *     GetWindowBorders @ 0x1C00905B4 (GetWindowBorders.c)
 *     GetCaptionHeight @ 0x1C0093074 (GetCaptionHeight.c)
 *     GetRect @ 0x1C00CB3EC (GetRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     DrawSize @ 0x1C0241F54 (DrawSize.c)
 *     xxxMenuBarDraw @ 0x1C024B184 (xxxMenuBarDraw.c)
 */

void __fastcall xxxDrawWindowFrame(struct tagWND *a1, HDC a2, __int16 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int WindowBorders; // esi
  _BYTE *v12; // rdx
  unsigned int v13; // r15d
  char v14; // r8
  int v15; // r8d
  int CaptionHeight; // eax
  __int64 v17; // rcx
  bool v18; // r14
  bool v19; // cl
  unsigned int v20; // r8d
  int v21; // eax
  __int64 v22; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+28h] [rbp-28h]
  __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h]

  v24 = 0LL;
  v25 = 0LL;
  if ( (unsigned int)IsVisible(a1) )
  {
    v7 = *(_QWORD *)(v6 + 40);
    v8 = *(_BYTE *)(v7 + 17);
    if ( (v8 & 1) == 0 || v8 < 0 )
    {
      v9 = *(_QWORD *)(v7 + 88) - *(_QWORD *)(v7 + 104);
      if ( !v9 )
        v9 = *(_QWORD *)(v7 + 96) - *(_QWORD *)(v7 + 112);
      if ( v9 && (*(_QWORD *)(v7 + 136) || (unsigned int)GreGetClipBox(a2, &v24, 1LL) != 1) )
      {
        v10 = *((_QWORD *)a1 + 5);
        v22 = 0LL;
        v23 = 0LL;
        if ( (*(_BYTE *)(v10 + 31) & 0x20) == 0 || (*(_BYTE *)(v10 + 17) & 1) != 0 )
        {
          WindowBorders = GetWindowBorders(*(unsigned int *)(v10 + 28), *(unsigned int *)(v10 + 24));
          GetRect(a1, &v22, 34LL);
          v12 = (_BYTE *)*((_QWORD *)a1 + 5);
          LODWORD(v22) = v22 + WindowBorders;
          v13 = HIDWORD(v22) + WindowBorders;
          LODWORD(v23) = v23 - WindowBorders;
          HIDWORD(v23) -= WindowBorders;
          if ( (v12[16] & 1) != 0 && (a3 & 0x2000) == 0 )
          {
            v21 = xxxMenuBarDraw(a1, a2, WindowBorders, WindowBorders);
            v12 = (_BYTE *)*((_QWORD *)a1 + 5);
            v13 += v21;
          }
          v14 = v12[30];
          if ( (v14 & 0xC0) != 0 )
            goto LABEL_11;
          v19 = 0;
          if ( (v14 & 4) == 0 )
            v19 = (v12[24] & 1) == 0;
          if ( !v19 || (v12[25] & 1) != 0 || (v12[26] & 2) != 0 && (v12[17] & 1) == 0 )
          {
LABEL_11:
            v15 = a3 & 0x2000 | 0x900D;
            if ( (a3 & 1) == 0 )
              v15 = a3 & 0x2000 | 0x900C;
            xxxDrawCaptionBar(a1, a2, v15 | 0x800);
          }
          CaptionHeight = GetCaptionHeight(a1);
          v17 = *((_QWORD *)a1 + 5);
          HIDWORD(v22) = CaptionHeight + v13;
          if ( (*(_BYTE *)(v17 + 20) & 0x10) != 0 )
          {
            WindowBorders += 2;
            DrawEdge(a2);
            v17 = *((_QWORD *)a1 + 5);
          }
          v18 = (a3 & 0x2000) == 0;
          if ( (v18 & (*(_BYTE *)(v17 + 16) >> 1) & 1) != 0 )
          {
            if ( (*(_BYTE *)(v17 + 16) & 4) != 0 )
              DrawSize(a1, a2, WindowBorders, WindowBorders, v22, v23, v24, v25);
            xxxDrawScrollBar(a1, a2, 1u);
          }
          if ( (v18 & (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) >> 2) & 1) != 0 )
            xxxDrawScrollBar(a1, a2, 0);
        }
        else
        {
          v20 = ((*(_BYTE *)(v10 + 16) & 0x40 | 0x240300u) >> 6) | 0x2000;
          if ( (a3 & 0x2000) == 0 )
            v20 = (*(_BYTE *)(v10 + 16) & 0x40 | 0x240300u) >> 6;
          xxxDrawCaptionBar(a1, a2, v20);
        }
      }
    }
  }
}
