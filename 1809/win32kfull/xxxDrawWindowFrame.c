/*
 * XREFs of xxxDrawWindowFrame @ 0x1C0078D80
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010C920 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRedrawHungWindow @ 0x1C01354AC (xxxRedrawHungWindow.c)
 * Callees:
 *     GetRect @ 0x1C0021568 (GetRect.c)
 *     IsVisible @ 0x1C0079A24 (IsVisible.c)
 *     DrawEdge @ 0x1C007AF44 (DrawEdge.c)
 *     GetCaptionHeight @ 0x1C00A7388 (GetCaptionHeight.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00A8414 (GetWindowBorders.c)
 *     xxxDrawScrollBar @ 0x1C0106138 (xxxDrawScrollBar.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     DrawSize @ 0x1C02294A8 (DrawSize.c)
 *     xxxMenuBarDraw @ 0x1C0232510 (xxxMenuBarDraw.c)
 */

char __fastcall xxxDrawWindowFrame(ULONG_PTR a1, HDC a2, __int64 a3, __int64 a4)
{
  __int16 v4; // bp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int WindowBorders; // esi
  _BYTE *v13; // rdx
  int v14; // r14d
  char v15; // r8
  int CaptionHeight; // eax
  __int64 v17; // rcx
  bool v18; // bp
  bool v19; // cl
  int v20; // eax
  int v22; // [rsp+20h] [rbp-58h] BYREF
  int v23; // [rsp+24h] [rbp-54h]
  __int64 v24; // [rsp+28h] [rbp-50h]
  _BYTE v25[16]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a3;
  LODWORD(v7) = IsVisible(a1, a2, a3, a4);
  if ( (_DWORD)v7 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    LOBYTE(v7) = *(_BYTE *)(v9 + 17);
    if ( (v7 & 1) == 0 || (v7 & 0x80u) != 0LL )
    {
      v10 = *(_QWORD *)(v9 + 88) - *(_QWORD *)(v9 + 104);
      if ( !v10 )
        v10 = *(_QWORD *)(v9 + 96) - *(_QWORD *)(v9 + 112);
      if ( v10 )
      {
        if ( *(_QWORD *)(v9 + 136) || (LODWORD(v7) = GreGetClipBox(a2, v25, 1LL), (_DWORD)v7 != 1) )
        {
          v11 = *(_QWORD *)(a1 + 40);
          if ( (*(_BYTE *)(v11 + 31) & 0x20) == 0 || (*(_BYTE *)(v11 + 17) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(v11 + 28), *(unsigned int *)(v11 + 24));
            GetRect(a1, (__int64)&v22, 34);
            v13 = *(_BYTE **)(a1 + 40);
            v22 += WindowBorders;
            v14 = v23 + WindowBorders;
            LODWORD(v24) = v24 - WindowBorders;
            HIDWORD(v24) -= WindowBorders;
            if ( (v13[16] & 1) != 0 && (v4 & 0x2000) == 0 )
            {
              v20 = xxxMenuBarDraw(a1, a2, WindowBorders, WindowBorders, v22, v24);
              v13 = *(_BYTE **)(a1 + 40);
              v14 += v20;
            }
            v15 = v13[30];
            if ( (v15 & 0xC0) != 0 )
              goto LABEL_10;
            v19 = 0;
            if ( (v15 & 4) == 0 )
              v19 = (v13[24] & 1) == 0;
            if ( !v19 || (v13[25] & 1) != 0 || (v13[26] & 2) != 0 && (v13[17] & 1) == 0 )
LABEL_10:
              xxxDrawCaptionBar(a1, a2);
            CaptionHeight = GetCaptionHeight(a1);
            v17 = *(_QWORD *)(a1 + 40);
            v23 = CaptionHeight + v14;
            if ( (*(_BYTE *)(v17 + 20) & 0x10) != 0 )
            {
              WindowBorders += 2;
              DrawEdge(a2);
              v17 = *(_QWORD *)(a1 + 40);
            }
            v18 = (v4 & 0x2000) == 0;
            if ( (v18 & (*(_BYTE *)(v17 + 16) >> 1) & 1) != 0 )
            {
              if ( (*(_BYTE *)(v17 + 16) & 4) != 0 )
                DrawSize(a1, a2, WindowBorders, WindowBorders);
              xxxDrawScrollBar((struct tagWND *)a1, a2, 1);
            }
            v7 = *(_QWORD *)(a1 + 40);
            if ( (v18 & (*(_BYTE *)(v7 + 16) >> 2) & 1) != 0 )
              LOBYTE(v7) = xxxDrawScrollBar((struct tagWND *)a1, a2, 0);
          }
          else
          {
            LOBYTE(v7) = xxxDrawCaptionBar(a1, a2);
          }
        }
      }
    }
  }
  return v7;
}
