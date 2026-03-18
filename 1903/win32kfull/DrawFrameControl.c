/*
 * XREFs of DrawFrameControl @ 0x1C008CAFC
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C000B548 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C008C884 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241CA8 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1C024A2A8 (MNDrawArrow.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C004BB3C (GreCreateFontIndirectW.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C008CFF8 (GreSetBkMode.c)
 *     DrawPushButton @ 0x1C008D074 (DrawPushButton.c)
 *     GrePolyPatBlt @ 0x1C008DA64 (GrePolyPatBlt.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C008DBBC (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?GetCaptionChar@@YAGI@Z @ 0x1C008DD40 (-GetCaptionChar@@YAGI@Z.c)
 *     GreGetLayout @ 0x1C00C7E90 (GreGetLayout.c)
 *     GreSetTextAlign @ 0x1C00F9CEC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FBDFC (GreGetTextAlign.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C011BBE4 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C011BCFC (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C012ED38 (-DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0130778 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     GreSetGraphicsMode @ 0x1C02B85E0 (GreSetGraphicsMode.c)
 */

__int64 __fastcall DrawFrameControl(HDC a1, struct tagRECT *a2, unsigned int a3, int a4)
{
  int v8; // r15d
  unsigned int v9; // r14d
  int v10; // ecx
  unsigned int v11; // edi
  int v12; // r13d
  __int64 FontIndirectW; // r13
  unsigned __int16 CaptionChar; // ax
  unsigned int v16; // r8d
  LONG top; // edx
  int v18; // eax
  int v19; // eax
  RECT v20; // [rsp+30h] [rbp-69h] BYREF
  __int64 v21; // [rsp+40h] [rbp-59h]
  _DWORD v22[4]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v23; // [rsp+58h] [rbp-41h]
  _DWORD v24[36]; // [rsp+60h] [rbp-39h] BYREF
  int v26; // [rsp+110h] [rbp+77h]

  v26 = 0;
  v8 = 0;
  v9 = 1;
  v20 = *a2;
  if ( (GreGetLayout(a1) & 1) != 0 )
  {
    v8 = GreSetGraphicsMode(a1);
    if ( v8 )
    {
      if ( (GreGetTextAlign(a1) & 6) != 6 )
        GreSetTextAlign(a1);
    }
  }
  v10 = a4 | 0x8000;
  if ( *(_WORD *)(gpsi + 6996LL) != 1 )
    v10 = a4;
  v11 = v10 | 0x4000;
  if ( (v10 & 0x8000) == 0 )
    v11 = v10;
  if ( a3 != 2 && a3 != 5 && (a3 != 4 || (v11 & 0x10) != 0) && (a3 != 3 || (v11 & 0x18) == 0) )
  {
    DrawPushButton(a1);
    if ( (v11 & 0x2000) != 0 )
      *a2 = v20;
    v26 = 1;
  }
  if ( (unsigned int)GreSetBkMode(a1) )
  {
    v12 = v20.right - v20.left;
    if ( v20.right - v20.left >= v20.bottom - v20.top )
      v12 = v20.bottom - v20.top;
    if ( v12 > 0 )
    {
      memset(v24, 0, 0x5CuLL);
      v24[0] = v12;
      v24[4] = 400;
      *(_OWORD *)&v24[7] = *(_OWORD *)L"Marlett";
      HIBYTE(v24[5]) = 2;
      FontIndirectW = GreCreateFontIndirectW((__int64)v24, 0);
      v21 = GreSelectFont(a1, FontIndirectW);
      if ( v26 )
      {
        if ( a3 == 1 )
        {
          CaptionChar = GetCaptionChar(v11);
          DrawIt(a1, &v20, v11, CaptionChar);
          goto LABEL_20;
        }
        if ( a3 != 3 )
        {
          if ( a3 != 4 )
            v9 = 0;
          goto LABEL_20;
        }
        v16 = v11;
      }
      else
      {
        if ( a3 != 2 && a3 != 5 )
        {
          if ( a3 == 4 )
            DrawBox(a1, &v20, v11);
          else
            DrawGrip(a1, a2, v11);
LABEL_20:
          if ( v8 )
          {
            GreSetGraphicsMode(a1);
            GreSetTextAlign(a1);
          }
          GreSetBkMode(a1);
          GreSelectFont(a1, v21);
          GreDeleteObject(FontIndirectW);
          return v9;
        }
        if ( (v11 & 0x18) == 0 )
        {
          DrawMenuMark(a1, &v20, a3, v11);
          goto LABEL_20;
        }
        if ( (v11 & 0x800) == 0 )
        {
          top = a2->top;
          v18 = a2->right - a2->left;
          v22[0] = a2->left;
          v22[2] = v18;
          v19 = a2->bottom - top;
          v22[1] = top;
          v22[3] = v19;
          v23 = *(_QWORD *)(gpsi + 4728LL);
          GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v22, 1u);
        }
        v16 = v11 & 0x1100 | (((v11 >> 3) & 1) == 0);
      }
      DrawScrollArrow(a1, &v20, v16);
      goto LABEL_20;
    }
  }
  if ( v8 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1);
  }
  return 0LL;
}
