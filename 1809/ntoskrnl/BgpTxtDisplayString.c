/*
 * XREFs of BgpTxtDisplayString @ 0x1409555A0
 * Callers:
 *     BgDisplayString @ 0x14095442C (BgDisplayString.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x14016EF30 (BgpGxDrawRectangle.c)
 *     BgpFoGetTextMetrics @ 0x14016F7E4 (BgpFoGetTextMetrics.c)
 *     BgpGxFillRectangle @ 0x14016FA28 (BgpGxFillRectangle.c)
 *     BgpRasPrintGlyph @ 0x14017A2D4 (BgpRasPrintGlyph.c)
 *     BgpFoGetAdvanceWidth @ 0x140327BB4 (BgpFoGetAdvanceWidth.c)
 *     BgpGxRectangleDestroy @ 0x14095021C (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x14095121C (BgpGxRectangleCreate.c)
 *     BgpGxBlendRectangle @ 0x140955208 (BgpGxBlendRectangle.c)
 *     BgpTxtClearRegion @ 0x140955570 (BgpTxtClearRegion.c)
 *     TxtpJustifyRectangle @ 0x1409557C0 (TxtpJustifyRectangle.c)
 */

__int64 __fastcall BgpTxtDisplayString(__int64 a1, unsigned __int16 *a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int16 *v6; // r14
  int AdvanceWidth; // ebx
  __int64 v8; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  int v11; // eax
  unsigned __int16 *v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  _DWORD *v17; // r15
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // r13d
  int v21; // eax
  unsigned int *v22; // rcx
  int v23; // eax
  __int64 v24; // rsi
  __int64 v26; // [rsp+38h] [rbp-28h]
  _DWORD v27[4]; // [rsp+50h] [rbp-10h] BYREF
  _DWORD *v28; // [rsp+A0h] [rbp+40h] BYREF
  int v29; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+58h] BYREF

  v30 = a4;
  v29 = a3;
  v6 = a2;
  v28 = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 64) & 1) == 0 )
    return 3221225485LL;
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 68) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a2[v8] );
      v9 = 0;
      v10 = 0;
      if ( (_DWORD)v8 )
      {
        v11 = a1 + 40;
        v12 = a2;
        while ( 1 )
        {
          AdvanceWidth = BgpFoGetAdvanceWidth(v11, *v12, (int)&v29, a4, 0LL);
          if ( AdvanceWidth < 0 )
            break;
          v9 += v29;
          v11 = a1 + 40;
          ++v10;
          ++v12;
          if ( v10 >= (unsigned int)v8 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        AdvanceWidth = BgpFoGetTextMetrics(a1 + 40, (__int64)&a5);
        if ( AdvanceWidth >= 0 )
        {
          v13 = *(_DWORD *)(a1 + 12);
          v14 = HIDWORD(a5);
          v27[2] = v9;
          if ( HIDWORD(a5) > v13 )
            v14 = v13;
          v15 = *(_DWORD *)(a1 + 8);
          v27[1] = v14;
          if ( v9 > v15 )
            v9 = v15;
          v27[0] = v9;
          v16 = BgpGxRectangleCreate(v27, 32, (__int64 *)&v28);
          v17 = v28;
          AdvanceWidth = v16;
          if ( v16 >= 0 )
          {
            BgpGxFillRectangle((__int64)v28, *(_DWORD *)(a1 + 40));
            v18 = 0;
            v19 = 0;
            v20 = 0;
            v30 = 0LL;
            if ( (_DWORD)v8 )
            {
              while ( 1 )
              {
                v21 = BgpRasPrintGlyph((__int64)v17, a1 + 40, *v6, v18, v19, 0, &v29, v26, 0LL);
                AdvanceWidth = v21;
                if ( v21 == -2147483643 )
                  break;
                if ( v21 < 0 )
                  goto LABEL_30;
                v18 = v29 + v30;
                LODWORD(v30) = v18;
                if ( v18 > v9 )
                  break;
                ++v20;
                ++v6;
                if ( v20 >= (unsigned int)v8 )
                  break;
                v19 = HIDWORD(v30);
              }
            }
            TxtpJustifyRectangle(a1, v27, &v30);
            v22 = *(unsigned int **)(a1 + 24);
            v28 = 0LL;
            v23 = BgpGxBlendRectangle(v22, v17, (int *)&v30, (__int64 *)&v28);
            v24 = (__int64)v28;
            AdvanceWidth = v23;
            if ( v23 >= 0 )
            {
              AdvanceWidth = BgpTxtClearRegion(a1);
              if ( AdvanceWidth >= 0 )
              {
                HIDWORD(v30) = *(_DWORD *)(a1 + 4);
                LODWORD(v30) = *(_DWORD *)a1 + v30;
                AdvanceWidth = BgpGxDrawRectangle(v24, (__int64)&v30);
              }
            }
            if ( v24 )
              BgpGxRectangleDestroy(v24);
          }
LABEL_30:
          if ( v17 )
            BgpGxRectangleDestroy((__int64)v17);
        }
      }
    }
  }
  else
  {
    return (unsigned int)BgpTxtClearRegion(a1);
  }
  return (unsigned int)AdvanceWidth;
}
