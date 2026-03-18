/*
 * XREFs of DrawFrameControl @ 0x1C007BB1C
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C007B8B0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C01061C8 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02291FC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1C0231664 (MNDrawArrow.c)
 * Callees:
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     GrePolyPatBlt @ 0x1C007B620 (GrePolyPatBlt.c)
 *     DrawPushButton @ 0x1C007B7E0 (DrawPushButton.c)
 *     GreSetBkMode @ 0x1C007BDE4 (GreSetBkMode.c)
 *     GreGetLayout @ 0x1C007BE5C (GreGetLayout.c)
 *     GreCreateFontIndirectW @ 0x1C007DE28 (GreCreateFontIndirectW.c)
 *     GreGetTextAlign @ 0x1C00A70F4 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C00A72C0 (GreSetTextAlign.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C01105C8 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C01106E0 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?GetCaptionChar@@YAGI@Z @ 0x1C0110A90 (-GetCaptionChar@@YAGI@Z.c)
 *     ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0110AC8 (-DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0110B00 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C012585C (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     GreSetGraphicsMode @ 0x1C02A1988 (GreSetGraphicsMode.c)
 */

__int64 __fastcall DrawFrameControl(HDC a1, struct tagRECT *a2, unsigned int a3, int a4)
{
  int v8; // r15d
  unsigned int v9; // r14d
  int v10; // ecx
  unsigned int v11; // edi
  __int16 v12; // r9
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
  v9 = 1;
  v21 = *a2;
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
    v12 = 12288;
    if ( a3 == 3 )
      v12 = 0x2000;
    DrawPushButton(a1, &v21, v11, v11 & 0xC000 | v12);
    if ( (v11 & 0x2000) != 0 )
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
      FontIndirectW = GreCreateFontIndirectW(v25, 0LL);
      v22 = GreSelectFont(a1);
      if ( v27 )
      {
        if ( a3 == 1 )
        {
          CaptionChar = GetCaptionChar(v11);
          DrawIt(a1, &v21, v11, CaptionChar);
          goto LABEL_22;
        }
        if ( a3 != 3 )
        {
          if ( a3 != 4 )
            v9 = 0;
          goto LABEL_22;
        }
        v17 = v11;
      }
      else
      {
        if ( a3 != 2 && a3 != 5 )
        {
          if ( a3 == 4 )
            DrawBox(a1, &v21, v11);
          else
            DrawGrip(a1, a2, v11);
LABEL_22:
          if ( v8 )
          {
            GreSetGraphicsMode(a1);
            GreSetTextAlign(a1);
          }
          GreSetBkMode(a1);
          GreSelectFont(a1);
          GreDeleteObject(FontIndirectW);
          return v9;
        }
        if ( (v11 & 0x18) == 0 )
        {
          DrawMenuMark(a1, &v21, a3, v11);
          goto LABEL_22;
        }
        if ( (v11 & 0x800) == 0 )
        {
          top = a2->top;
          v19 = a2->right - a2->left;
          v23[0] = a2->left;
          v23[2] = v19;
          v20 = a2->bottom - top;
          v23[1] = top;
          v23[3] = v20;
          v24 = *(_QWORD *)(gpsi + 4728LL);
          GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v23, 1);
        }
        v17 = v11 & 0x1100 | (((v11 >> 3) & 1) == 0);
      }
      DrawScrollArrow(a1, &v21, v17);
      goto LABEL_22;
    }
  }
  if ( v8 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1);
  }
  return 0LL;
}
