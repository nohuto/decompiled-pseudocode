/*
 * XREFs of DrawFrameControl @ 0x1C012B23C
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00EA6A4 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C012AFC4 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241688 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1C0249B68 (MNDrawArrow.c)
 * Callees:
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0022044 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0022360 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     GreGetLayout @ 0x1C0069560 (GreGetLayout.c)
 *     GreCreateFontIndirectW @ 0x1C0090888 (GreCreateFontIndirectW.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0100E08 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     GreGetTextAlign @ 0x1C010AB68 (GreGetTextAlign.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C010B2C8 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     GreSetTextAlign @ 0x1C0128AB8 (GreSetTextAlign.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C012B54C (GreSetBkMode.c)
 *     DrawPushButton @ 0x1C012B5C8 (DrawPushButton.c)
 *     GrePolyPatBlt @ 0x1C012BFB4 (GrePolyPatBlt.c)
 *     ?GetCaptionChar@@YAGI@Z @ 0x1C012DDB4 (-GetCaptionChar@@YAGI@Z.c)
 *     ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C012EEB4 (-DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     GreSetGraphicsMode @ 0x1C02B8130 (GreSetGraphicsMode.c)
 */

__int64 __fastcall DrawFrameControl(HDC a1, struct tagRECT *a2, int a3, int a4)
{
  int v8; // r15d
  int TextAlign; // r12d
  unsigned int v10; // r14d
  int v11; // ecx
  unsigned int v12; // edi
  int v13; // r13d
  __int64 FontIndirectW; // r13
  unsigned __int16 CaptionChar; // ax
  unsigned int v17; // r8d
  LONG top; // edx
  int v19; // eax
  int v20; // eax
  RECT v21; // [rsp+30h] [rbp-69h] BYREF
  __int64 v22; // [rsp+40h] [rbp-59h]
  _DWORD v23[4]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v24; // [rsp+58h] [rbp-41h]
  _DWORD v25[36]; // [rsp+60h] [rbp-39h] BYREF
  int v27; // [rsp+110h] [rbp+77h]

  v27 = 0;
  v8 = 0;
  TextAlign = 0;
  v10 = 1;
  v21 = *a2;
  if ( (GreGetLayout(a1) & 1) != 0 )
  {
    v8 = GreSetGraphicsMode(a1);
    if ( v8 )
    {
      TextAlign = GreGetTextAlign(a1);
      if ( (TextAlign & 6) != 6 )
        GreSetTextAlign(a1, TextAlign ^ 2);
    }
  }
  v11 = a4 | 0x8000;
  if ( *(_WORD *)(gpsi + 6996LL) != 1 )
    v11 = a4;
  v12 = v11 | 0x4000;
  if ( (v11 & 0x8000) == 0 )
    v12 = v11;
  if ( a3 != 2 && a3 != 5 && (a3 != 4 || (v12 & 0x10) != 0) && (a3 != 3 || (v12 & 0x18) == 0) )
  {
    DrawPushButton(a1);
    if ( (v12 & 0x2000) != 0 )
      *a2 = v21;
    v27 = 1;
  }
  if ( (unsigned int)GreSetBkMode(a1) )
  {
    v13 = v21.right - v21.left;
    if ( v21.right - v21.left >= v21.bottom - v21.top )
      v13 = v21.bottom - v21.top;
    if ( v13 > 0 )
    {
      memset(v25, 0, 0x5CuLL);
      v25[0] = v13;
      v25[4] = 400;
      *(_OWORD *)&v25[7] = *(_OWORD *)L"Marlett";
      HIBYTE(v25[5]) = 2;
      FontIndirectW = GreCreateFontIndirectW((__int64)v25, 0);
      v22 = GreSelectFont(a1, FontIndirectW);
      if ( v27 )
      {
        if ( a3 == 1 )
        {
          CaptionChar = GetCaptionChar(v12);
          DrawIt(a1, &v21, v12, CaptionChar);
          goto LABEL_20;
        }
        if ( a3 != 3 )
        {
          if ( a3 != 4 )
            v10 = 0;
          goto LABEL_20;
        }
        v17 = v12;
      }
      else
      {
        if ( a3 != 2 && a3 != 5 )
        {
          if ( a3 == 4 )
            DrawBox(a1, &v21, v12);
          else
            DrawGrip(a1, a2, v12);
LABEL_20:
          if ( v8 )
          {
            GreSetGraphicsMode(a1);
            GreSetTextAlign(a1, TextAlign);
          }
          GreSetBkMode(a1);
          GreSelectFont(a1, v22);
          GreDeleteObject(FontIndirectW);
          return v10;
        }
        if ( (v12 & 0x18) == 0 )
        {
          DrawMenuMark(a1, &v21, a3, v12);
          goto LABEL_20;
        }
        if ( (v12 & 0x800) == 0 )
        {
          top = a2->top;
          v19 = a2->right - a2->left;
          v23[0] = a2->left;
          v23[2] = v19;
          v20 = a2->bottom - top;
          v23[1] = top;
          v23[3] = v20;
          v24 = *(_QWORD *)(gpsi + 4728LL);
          GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v23, 1u);
        }
        v17 = v12 & 0x1100 | (((v12 >> 3) & 1) == 0);
      }
      DrawScrollArrow(a1, &v21, v17);
      goto LABEL_20;
    }
  }
  if ( v8 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1, TextAlign);
  }
  return 0LL;
}
