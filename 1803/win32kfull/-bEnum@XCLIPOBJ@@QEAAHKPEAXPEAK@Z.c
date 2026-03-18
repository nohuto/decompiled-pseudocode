/*
 * XREFs of ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00345A8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C007A1D4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C008A810 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0091D20 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     EngAlphaBlend @ 0x1C00A15D0 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00A3068 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     EngTextOut @ 0x1C00AA120 (EngTextOut.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00AE604 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngTransparentBlt @ 0x1C00B1C40 (EngTransparentBlt.c)
 *     EngHTBlt @ 0x1C00CD750 (EngHTBlt.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00DC218 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     CLIPOBJ_bEnum @ 0x1C0104D80 (CLIPOBJ_bEnum.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C024B22C (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0254700 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C025ED3C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0261E8C (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02826F0 (NtGdiCLIPOBJ_bEnum.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C0293B74 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C0293E38 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bEnum(XCLIPOBJ *this, unsigned int a2, char *a3, unsigned int *a4)
{
  _DWORD *v4; // r14
  unsigned int v7; // ebx
  int *v8; // rdx
  int v9; // ebp
  int v10; // r12d
  __int64 v11; // rcx
  _DWORD *v12; // r8
  int v13; // edx
  int v14; // r8d
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // edi
  _DWORD *v20; // rdx
  int v21; // r8d
  int v22; // esi
  _DWORD *v23; // rdi
  int i; // edx
  __int64 v25; // rcx
  int v26; // r8d
  unsigned int v28; // r12d
  unsigned int v29; // r8d
  int v30; // edi
  int v31; // r13d
  int v32; // esi
  unsigned int v33; // ebx
  __int64 v34; // rax

  v4 = a3 + 4;
  if ( a2 >= 0x14 )
  {
    v7 = a2 - 4;
    if ( a4 )
      *a4 = 4;
    *(_DWORD *)a3 = 0;
    v8 = (int *)*((_QWORD *)this + 10);
    if ( !*((_DWORD *)this + 32) )
    {
      v9 = v8[1];
      v10 = v8[2];
      if ( !*((_DWORD *)this + 22) )
        return 0LL;
      while ( 1 )
      {
        v11 = *((unsigned int *)this + 24);
        v12 = (_DWORD *)*((_QWORD *)this + 10);
        if ( (_DWORD)v11 == *((_DWORD *)this + 26) )
        {
          v19 = *((_DWORD *)this + 27);
          if ( v19 >= 2 )
          {
            if ( v12[1] <= *((_DWORD *)this + 17) )
            {
LABEL_35:
              *((_DWORD *)this + 22) = 0;
              return 0LL;
            }
            v20 = (_DWORD *)((char *)v12 - (unsigned int)(4 * *(v12 - 1) + 16));
          }
          else
          {
            if ( v12[2] >= *((_DWORD *)this + 19) )
              goto LABEL_35;
            v20 = (_DWORD *)((char *)v12 + (unsigned int)(4 * *v12 + 16));
          }
          *((_QWORD *)this + 10) = v20;
          --*((_DWORD *)this + 22);
          v9 = v20[1];
          v10 = v20[2];
          if ( (v19 & 1) != 0 )
          {
            v25 = (unsigned int)(*v20 - 2);
            *((_DWORD *)this + 26) = -2;
            *((_DWORD *)this + 24) = v25;
            if ( (_DWORD)v25 != -2 )
            {
              v26 = *((_DWORD *)this + 18);
              do
              {
                if ( v20[v25 + 3] < v26 )
                  break;
                v25 = (unsigned int)(v25 - 2);
                *((_DWORD *)this + 24) = v25;
              }
              while ( (_DWORD)v25 != -2 );
            }
          }
          else
          {
            *((_DWORD *)this + 24) = 0;
            v21 = *v20;
            *((_DWORD *)this + 26) = *v20;
            if ( v21 )
            {
              v22 = *((_DWORD *)this + 16);
              v23 = v20;
              for ( i = 0; i != v21; *((_DWORD *)this + 24) = i )
              {
                if ( v23[i + 1 + 3] > v22 )
                  break;
                i += 2;
              }
            }
          }
        }
        else
        {
          v13 = v12[v11 + 3];
          v14 = v12[(unsigned int)(v11 + 1) + 3];
          v15 = *((_DWORD *)this + 16);
          if ( v15 <= v13 )
            v15 = v13;
          *v4 = v15;
          v16 = *((_DWORD *)this + 18);
          if ( v16 >= v14 )
            v16 = v14;
          v4[2] = v16;
          if ( v15 >= v16 )
          {
            *((_DWORD *)this + 24) = *((_DWORD *)this + 26);
          }
          else
          {
            v17 = *((_DWORD *)this + 17);
            if ( v17 <= v9 )
              v17 = v9;
            v4[1] = v17;
            v18 = *((_DWORD *)this + 19);
            if ( v18 >= v10 )
              v18 = v10;
            v7 -= 16;
            v4[3] = v18;
            v4 += 4;
            *((_DWORD *)this + 24) += *((_DWORD *)this + 25);
            if ( a4 )
              *a4 += 16;
            ++*(_DWORD *)a3;
            if ( v7 < 0x10 )
              return 1LL;
          }
        }
        if ( !*((_DWORD *)this + 22) )
          return 0LL;
      }
    }
    v28 = *((_DWORD *)this + 27);
    v29 = *((_DWORD *)this + 24);
    v30 = *((_DWORD *)this + 26);
    v31 = *((_DWORD *)this + 25);
    v32 = *((_DWORD *)this + 22);
    v33 = v7 >> 4;
    while ( 1 )
    {
      if ( !v32 )
        return 0LL;
      if ( v29 == v30 )
      {
        if ( v28 >= 2 )
          v8 = (int *)((char *)v8 - (unsigned int)(4 * *(v8 - 1) + 16));
        else
          v8 = (int *)((char *)v8 + (unsigned int)(4 * *v8 + 16));
        *((_DWORD *)this + 22) = v32 - 1;
        if ( !*v8 )
          goto LABEL_56;
        if ( (v28 & 1) != 0 )
        {
          v29 = *v8 - 2;
          v30 = -2;
        }
        else
        {
          v29 = 0;
          v30 = *v8;
        }
      }
      --v33;
      v34 = v29 + 1;
      *v4 = v8[v29 + 3];
      v29 += v31;
      v4[2] = v8[v34 + 3];
      v4[1] = v8[1];
      v4[3] = v8[2];
      v4 += 4;
      ++*(_DWORD *)a3;
      if ( a4 )
        *a4 += 16;
      if ( !v33 )
      {
        *((_DWORD *)this + 24) = v29;
        *((_DWORD *)this + 26) = v30;
        *((_QWORD *)this + 10) = v8;
        return 1LL;
      }
LABEL_56:
      v32 = *((_DWORD *)this + 22);
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
