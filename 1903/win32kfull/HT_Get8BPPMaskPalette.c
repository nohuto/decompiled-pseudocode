/*
 * XREFs of HT_Get8BPPMaskPalette @ 0x1C0154190
 * Callers:
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C003BF98 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x1C0154070 (NtGdiHT_Get8BPPMaskPalette.c)
 * Callees:
 *     DivFD6 @ 0x1C0039CA8 (DivFD6.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     HT_Get8BPPFormatPalette @ 0x1C025DC10 (HT_Get8BPPFormatPalette.c)
 */

LONG __stdcall HT_Get8BPPMaskPalette(
        LPPALETTEENTRY pPaletteEntry,
        BOOL Use8BPPMaskPal,
        BYTE CMYMask,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  LPPALETTEENTRY v6; // rbx
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned int v11; // r15d
  int v12; // r12d
  int v13; // ecx
  unsigned int v14; // r13d
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r12d
  bool v21; // cf
  unsigned int v22; // r15d
  bool v23; // cf
  BYTE v24; // r8
  unsigned int v25; // ebp
  int v26; // eax
  bool v27; // cf
  int v28; // eax
  int v29; // edx
  unsigned int i; // r15d
  int v31; // r12d
  BYTE v32; // cl
  unsigned int v33; // ebp
  __int64 v34; // rax
  int v35; // eax
  int v36; // edx
  int v37; // [rsp+20h] [rbp-38h]
  int v38; // [rsp+24h] [rbp-34h]
  __int64 v39; // [rsp+28h] [rbp-30h]
  __int64 v40; // [rsp+28h] [rbp-30h]
  int v41; // [rsp+68h] [rbp+10h]
  int v42; // [rsp+68h] [rbp+10h]

  v6 = pPaletteEntry;
  if ( !Use8BPPMaskPal )
    return HT_Get8BPPFormatPalette(pPaletteEntry, RedGamma, GreenGamma, BlueGamma);
  if ( CMYMask == 1 )
  {
    v9 = 4;
    v7 = 125;
    goto LABEL_20;
  }
  if ( CMYMask == 2 )
  {
    v9 = 5;
    v7 = 216;
LABEL_20:
    v8 = v9;
    v10 = v9;
    goto LABEL_5;
  }
  v7 = 0;
  v8 = (CMYMask >> 2) & 7;
  v9 = CMYMask >> 5;
  v10 = CMYMask & 3;
  if ( CMYMask && (!v9 || !v8 || (CMYMask & 3) == 0) )
    return 0;
LABEL_5:
  if ( pPaletteEntry )
  {
    v11 = 0;
    v37 = 512;
    v12 = 1;
    if ( *pPaletteEntry == 809650002 )
    {
      v6 = pPaletteEntry + 255;
      v12 = -1;
      if ( CMYMask )
      {
        v7 = (v9 + 1) * (v8 + 1) * (v10 + 1);
        v11 = (256 - v7) >> 1;
        if ( ((((_BYTE)v9 + 1) * ((_BYTE)v8 + 1) * ((_BYTE)v10 + 1)) & 1) != 0 )
          v37 = v11 + (v7 >> 1);
      }
    }
    memset(pPaletteEntry, 0, 0x400uLL);
    v14 = 0;
    if ( v7 )
    {
      v18 = v12;
      if ( v11 )
      {
        v14 = v11;
        v13 = 255;
        v19 = v11;
        do
        {
          *(_WORD *)&v6->peGreen = -1;
          v6->peRed = -1;
          v6 += v12;
          --v19;
        }
        while ( v19 );
      }
      v20 = 0;
      v39 = 4 * v18;
      v21 = v9 != 0;
      do
      {
        if ( v21 )
        {
          v13 = 255 * DivFD6(v20, v9);
          v41 = (255500000 - v13) / 1000000;
        }
        else
        {
          LOBYTE(v41) = 0;
        }
        v22 = 0;
        v23 = v8 != 0;
        do
        {
          if ( v23 )
            v13 = (int)(255500000 - 255 * DivFD6(v22, v8)) / 1000000;
          else
            LOBYTE(v13) = 0;
          v24 = v41;
          v25 = 0;
          v26 = v37;
          v27 = v10 != 0;
          v38 = v13;
          do
          {
            if ( v27 )
            {
              v28 = DivFD6(v25, v10);
              v24 = v41;
              v13 = v38;
              v29 = (255500000 - 255 * v28) / 1000000;
              v26 = v37;
            }
            else
            {
              LOBYTE(v29) = 0;
            }
            v6->peRed = v24;
            v6->peGreen = v13;
            v6->peBlue = v29;
            if ( v14 == v26 )
            {
              ++v14;
              v6 = (LPPALETTEENTRY)((char *)v6 + v39);
              v6->peRed = v24;
              v6->peGreen = v13;
              v6->peBlue = v29;
            }
            v6 = (LPPALETTEENTRY)((char *)v6 + v39);
            ++v25;
            ++v14;
            v27 = v25 < v10;
          }
          while ( v25 <= v10 );
          v23 = ++v22 < v8;
        }
        while ( v22 <= v8 );
        v21 = ++v20 < v9;
      }
      while ( v20 <= v9 );
    }
    else if ( v9 && v8 && v10 )
    {
      v40 = 4LL * v12;
      do
      {
        if ( v14 >= v9 )
          LOBYTE(v42) = 0;
        else
          v42 = (int)(255500000 - 255 * DivFD6(v14, v9)) / 1000000;
        for ( i = 0; i <= 7; ++i )
        {
          if ( i >= v8 )
            LOBYTE(v31) = 0;
          else
            v31 = (int)(255500000 - 255 * DivFD6(i, v8)) / 1000000;
          v32 = v42;
          v33 = 0;
          v34 = v40;
          do
          {
            if ( v33 >= v10 )
            {
              LOBYTE(v36) = 0;
            }
            else
            {
              v35 = DivFD6(v33, v10);
              v32 = v42;
              v36 = (255500000 - 255 * v35) / 1000000;
              v34 = v40;
            }
            v6->peRed = v32;
            ++v33;
            v6->peGreen = v31;
            v6->peBlue = v36;
            v6 = (LPPALETTEENTRY)((char *)v6 + v34);
          }
          while ( v33 <= 3 );
        }
        ++v14;
      }
      while ( v14 <= 7 );
    }
    else
    {
      v15 = 255;
      v16 = 256LL;
      do
      {
        v6->peBlue = v15;
        v6->peGreen = v15;
        v6->peRed = v15--;
        v6 += v12;
        --v16;
      }
      while ( v16 );
    }
  }
  return 256;
}
