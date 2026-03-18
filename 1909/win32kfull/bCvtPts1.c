/*
 * XREFs of bCvtPts1 @ 0x1C00BC6A0
 * Callers:
 *     GreGetAppClipBox @ 0x1C00A29F8 (GreGetAppClipBox.c)
 *     GreStretchDIBitsInternal @ 0x1C00A2EB4 (GreStretchDIBitsInternal.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00A59CC (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C00A6150 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A8DA0 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00B4130 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreDrawStream @ 0x1C00BA5C0 (GreDrawStream.c)
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     GreStretchBltInternal @ 0x1C00BB5E8 (GreStretchBltInternal.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00BC0E0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C01256C4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 * Callees:
 *     bFToL @ 0x1C00DC874 (bFToL.c)
 */

__int64 __fastcall bCvtPts1(unsigned __int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v5; // rbp
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  _DWORD *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+40h] [rbp+8h] BYREF
  int v21; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  v5 = (_DWORD *)a1;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 0 )
  {
    switch ( *(_DWORD *)(a1 + 32) & 0xB )
    {
      case 1:
        if ( a3 )
        {
          do
          {
            v10 = a2 + 1;
            bFToL(a1, a2, 6LL);
            bFToL(v11, a2 + 1, v12);
            *a2 += v5[6];
            a2 += 2;
            *v10 += v5[7];
            --v3;
          }
          while ( v3 );
        }
        break;
      case 3:
        if ( a3 )
        {
          do
          {
            *a2 += *(_DWORD *)(a1 + 24);
            a2 += 2;
            *(a2 - 1) += *(_DWORD *)(a1 + 28);
            --v3;
          }
          while ( v3 );
        }
        break;
      case 8:
        if ( a3 )
        {
          do
          {
            bFToL(a1, &v20, 6LL);
            bFToL(v15, &v21, v16);
            a1 = (unsigned int)((((v5[6] + v20) >> 3) + 1) >> 1);
            *a2 = a1;
            a2[1] = (((v21 + v5[7]) >> 3) + 1) >> 1;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 9:
        if ( a3 )
        {
          do
          {
            bFToL(a1, &v20, 6LL);
            bFToL(v13, &v21, v14);
            a1 = (unsigned int)((((v5[6] + v20) >> 3) + 1) >> 1);
            *a2 = a1;
            a2 += 2;
            *(a2 - 1) = (((v21 + v5[7]) >> 3) + 1) >> 1;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 11:
        v6 = *(_DWORD *)(a1 + 24);
        v7 = ((*(int *)(a1 + 28) >> 3) + 1) >> 1;
        v8 = ((v6 >> 3) + 1) >> 1;
        if ( a3 )
        {
          do
          {
            *a2 += v8;
            a2[1] += v7;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
    }
  }
  else if ( a3 )
  {
    do
    {
      v17 = a2 + 1;
      bFToL(a1, a2, 6LL);
      bFToL(v18, a2 + 1, v19);
      *a2 += v5[6];
      a2 += 2;
      a1 = (unsigned int)v5[7];
      *v17 += a1;
      --v3;
    }
    while ( v3 );
  }
  return 1LL;
}
