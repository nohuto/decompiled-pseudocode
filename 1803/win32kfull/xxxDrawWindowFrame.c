/*
 * XREFs of xxxDrawWindowFrame @ 0x1C0075134
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F2780 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRedrawHungWindow @ 0x1C01360F8 (xxxRedrawHungWindow.c)
 * Callees:
 *     DrawEdge @ 0x1C0010DBC (DrawEdge.c)
 *     IsVisible @ 0x1C002FD68 (IsVisible.c)
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00C3220 (GetWindowBorders.c)
 *     GetCaptionHeight @ 0x1C00F6358 (GetCaptionHeight.c)
 *     xxxDrawScrollBar @ 0x1C012F578 (xxxDrawScrollBar.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     DrawSize @ 0x1C0200A70 (DrawSize.c)
 *     xxxMenuBarDraw @ 0x1C0209284 (xxxMenuBarDraw.c)
 */

char __fastcall xxxDrawWindowFrame(ULONG_PTR a1, HDC a2, __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int WindowBorders; // ebp
  _BYTE *v12; // rdx
  unsigned int v13; // r15d
  char v14; // r8
  int CaptionHeight; // eax
  __int64 v16; // rcx
  bool v17; // cl
  int v18; // eax
  RECT v20; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v21[16]; // [rsp+30h] [rbp-48h] BYREF

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
        if ( *(_QWORD *)(v8 + 136) || (LODWORD(v6) = GreGetClipBox(a2, v21, 1LL), (_DWORD)v6 != 1) )
        {
          v10 = *(_QWORD *)(a1 + 40);
          if ( (*(_BYTE *)(v10 + 31) & 0x20) == 0 || (*(_BYTE *)(v10 + 17) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(v10 + 28), *(unsigned int *)(v10 + 24));
            GetRect(a1, &v20.left, 34);
            v12 = *(_BYTE **)(a1 + 40);
            v20.left += WindowBorders;
            v13 = v20.top + WindowBorders;
            v20.right -= WindowBorders;
            v20.bottom -= WindowBorders;
            if ( (v12[16] & 1) != 0 && (a3 & 0x2000) == 0 )
            {
              v18 = xxxMenuBarDraw(a1, a2, WindowBorders, WindowBorders, v20.left, *(_QWORD *)&v20.right);
              v12 = *(_BYTE **)(a1 + 40);
              v13 += v18;
            }
            v14 = v12[30];
            if ( (v14 & 0xC0) != 0 )
              goto LABEL_11;
            v17 = 0;
            if ( (v14 & 4) == 0 )
              v17 = (v12[24] & 1) == 0;
            if ( !v17 || (v12[25] & 1) != 0 || (v12[26] & 2) != 0 && (v12[17] & 1) == 0 )
LABEL_11:
              xxxDrawCaptionBar(a1, a2);
            CaptionHeight = GetCaptionHeight(a1);
            v16 = *(_QWORD *)(a1 + 40);
            v20.top = CaptionHeight + v13;
            if ( (*(_BYTE *)(v16 + 20) & 0x10) != 0 )
            {
              WindowBorders += 2;
              DrawEdge(a2, &v20, 10, 8207);
              v16 = *(_QWORD *)(a1 + 40);
            }
            if ( (((a3 & 0x2000) == 0) & (*(_BYTE *)(v16 + 16) >> 1)) != 0 )
            {
              if ( (*(_BYTE *)(v16 + 16) & 4) != 0 )
                DrawSize(a1, a2, WindowBorders, WindowBorders);
              xxxDrawScrollBar((struct tagWND *)a1, a2, 1);
            }
            v6 = *(_QWORD *)(a1 + 40);
            if ( (*(_BYTE *)(v6 + 16) & 4) != 0 && (a3 & 0x2000) == 0 )
              LOBYTE(v6) = xxxDrawScrollBar((struct tagWND *)a1, a2, 0);
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
