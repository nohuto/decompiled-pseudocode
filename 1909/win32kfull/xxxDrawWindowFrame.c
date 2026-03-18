/*
 * XREFs of xxxDrawWindowFrame @ 0x1C002E4B0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00EFFE8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 * Callees:
 *     IsVisible @ 0x1C002F1E0 (IsVisible.c)
 *     GetCaptionHeight @ 0x1C0033D9C (GetCaptionHeight.c)
 *     GetRect @ 0x1C006CABC (GetRect.c)
 *     xxxDrawScrollBar @ 0x1C00EA614 (xxxDrawScrollBar.c)
 *     DrawEdge @ 0x1C012B8CC (DrawEdge.c)
 *     GetWindowBorders @ 0x1C012DDEC (GetWindowBorders.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     DrawSize @ 0x1C0241934 (DrawSize.c)
 *     xxxMenuBarDraw @ 0x1C024AA44 (xxxMenuBarDraw.c)
 */

char __fastcall xxxDrawWindowFrame(struct tagWND *a1, HDC a2, __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int WindowBorders; // esi
  _BYTE *v12; // rdx
  unsigned int v13; // r15d
  char v14; // r8
  int CaptionHeight; // eax
  __int64 v16; // rcx
  bool v17; // r14
  bool v18; // cl
  int v19; // eax
  __int64 v21; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+28h] [rbp-28h]
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h]

  v23 = 0LL;
  v24 = 0LL;
  LODWORD(v6) = IsVisible(a1);
  if ( (_DWORD)v6 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    LOBYTE(v6) = *(_BYTE *)(v8 + 17);
    if ( (v6 & 1) == 0 || (v6 & 0x80u) != 0LL )
    {
      v9 = *(_QWORD *)(v8 + 88) - *(_QWORD *)(v8 + 104);
      if ( !v9 )
        v9 = *(_QWORD *)(v8 + 96) - *(_QWORD *)(v8 + 112);
      if ( v9 )
      {
        if ( *(_QWORD *)(v8 + 136) || (LODWORD(v6) = GreGetClipBox(a2, &v23, 1LL), (_DWORD)v6 != 1) )
        {
          v10 = *((_QWORD *)a1 + 5);
          v21 = 0LL;
          v22 = 0LL;
          if ( (*(_BYTE *)(v10 + 31) & 0x20) == 0 || (*(_BYTE *)(v10 + 17) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(v10 + 28), *(unsigned int *)(v10 + 24));
            GetRect(a1, &v21, 34LL);
            v12 = (_BYTE *)*((_QWORD *)a1 + 5);
            LODWORD(v21) = v21 + WindowBorders;
            v13 = HIDWORD(v21) + WindowBorders;
            LODWORD(v22) = v22 - WindowBorders;
            HIDWORD(v22) -= WindowBorders;
            if ( (v12[16] & 1) != 0 && (a3 & 0x2000) == 0 )
            {
              v19 = xxxMenuBarDraw(a1, a2, WindowBorders, WindowBorders, v21, v22, v23, v24);
              v12 = (_BYTE *)*((_QWORD *)a1 + 5);
              v13 += v19;
            }
            v14 = v12[30];
            if ( (v14 & 0xC0) != 0 )
              goto LABEL_11;
            v18 = 0;
            if ( (v14 & 4) == 0 )
              v18 = (v12[24] & 1) == 0;
            if ( !v18 || (v12[25] & 1) != 0 || (v12[26] & 2) != 0 && (v12[17] & 1) == 0 )
LABEL_11:
              xxxDrawCaptionBar(a1, a2);
            CaptionHeight = GetCaptionHeight(a1);
            v16 = *((_QWORD *)a1 + 5);
            HIDWORD(v21) = CaptionHeight + v13;
            if ( (*(_BYTE *)(v16 + 20) & 0x10) != 0 )
            {
              WindowBorders += 2;
              DrawEdge(a2);
              v16 = *((_QWORD *)a1 + 5);
            }
            v17 = (a3 & 0x2000) == 0;
            if ( (v17 & (*(_BYTE *)(v16 + 16) >> 1) & 1) != 0 )
            {
              if ( (*(_BYTE *)(v16 + 16) & 4) != 0 )
                DrawSize(a1, a2, WindowBorders, WindowBorders);
              xxxDrawScrollBar(a1, a2, 1);
            }
            v6 = *((_QWORD *)a1 + 5);
            if ( (v17 & (*(_BYTE *)(v6 + 16) >> 2) & 1) != 0 )
              LOBYTE(v6) = xxxDrawScrollBar(a1, a2, 0);
          }
          else
          {
            LOBYTE(v6) = xxxDrawCaptionBar(a1, a2);
          }
        }
      }
    }
  }
  return v6;
}
