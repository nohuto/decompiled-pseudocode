/*
 * XREFs of ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0265CDC
 * Callers:
 *     vSpDynamicModeChange @ 0x1C0096050 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000B1F4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00958D4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0095E98 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0096494 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C0265148 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0266E08 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpTransferMetaSprite(_DWORD *a1, HDEV a2, struct _METASPRITE *a3)
{
  int v3; // r12d
  HDEV v4; // rsi
  _QWORD *v5; // rbx
  HDEV v7; // r15
  size_t v8; // rcx
  HBITMAP v9; // r14
  unsigned int v10; // r11d
  int v11; // r12d
  __int64 v12; // r9
  char v13; // r13
  int v14; // r12d
  int v15; // r13d
  __int64 v16; // r8
  struct SPRITE *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  __int64 v22; // r15
  __int64 v23; // rdx
  struct SPRITE *Sprite; // r14
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // r14
  HBITMAP v29; // r15
  struct SPRITE *v30; // rcx
  __int64 j; // r14
  __int64 k; // rsi
  struct SPRITE *v33; // rcx
  __int64 v34; // rcx
  __int64 m; // rax
  __int64 n; // rsi
  struct SPRITE *v37; // rcx
  HDEV v39; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v40; // [rsp+28h] [rbp-D8h]
  __int64 v41; // [rsp+30h] [rbp-D0h] BYREF
  struct _POINTL v42; // [rsp+38h] [rbp-C8h] BYREF
  HBITMAP hsurf; // [rsp+40h] [rbp-C0h]
  __int64 *v44[24]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v45[32]; // [rsp+110h] [rbp+10h] BYREF
  int v46; // [rsp+220h] [rbp+120h]
  int i; // [rsp+230h] [rbp+130h]
  struct SPRITE *v49; // [rsp+238h] [rbp+138h]

  v3 = 0;
  v4 = (HDEV)(a1 + 22);
  v5 = 0LL;
  v46 = 0;
  v7 = a2;
  if ( *(_QWORD *)a3 )
  {
    v8 = (unsigned int)(8 * a1[37] + 32);
    if ( (*((_DWORD *)a3 + 4) & 4) == 0 )
    {
      v5 = PALLOCMEM2(v8, 1836086087LL, 1);
      if ( v5 )
      {
        v49 = 0LL;
        v9 = 0LL;
        v40 = 0LL;
        v10 = 0;
        v11 = *((_DWORD *)a3 + 4);
        v12 = 0LL;
        v13 = v11;
        hsurf = 0LL;
        v14 = v11 & 0x100;
        v15 = v13 & 0x40;
        for ( i = v14; (unsigned int)v12 < *((_DWORD *)v4 + 15); v12 = (unsigned int)(v12 + 1) )
        {
          v16 = 0LL;
          if ( *((_DWORD *)a3 + 5) )
          {
            do
            {
              v17 = (struct SPRITE *)*((_QWORD *)a3 + v16 + 3);
              if ( v17 )
              {
                if ( v15 && !v9 )
                  v9 = (HBITMAP)*((_QWORD *)v17 + 30);
                v18 = (_QWORD *)*((_QWORD *)v17 + 2);
                v19 = *v18;
                if ( v4 == (HDEV)v18 )
                {
                  v5[v12 + 3] = v17;
                  *((_QWORD *)a3 + v16 + 3) = 0LL;
                  *((_QWORD *)v17 + 1) = v5;
                }
                if ( v10 < *(_DWORD *)(v19 + 2108) )
                {
                  v49 = v17;
                  v10 = *(_DWORD *)(v19 + 2108);
                  v40 = v19;
                }
              }
              v16 = (unsigned int)(v16 + 1);
            }
            while ( (unsigned int)v16 < *((_DWORD *)a3 + 5) );
            hsurf = v9;
          }
        }
        *v5 = *(_QWORD *)a3;
        v20 = *((_DWORD *)v4 + 15);
        *((_DWORD *)v5 + 5) = v20;
        v21 = v15 != 0 ? 0x40 : 0;
        *((_DWORD *)v5 + 4) = v21;
        if ( v14 )
          *((_DWORD *)v5 + 4) = v21 | 0x100;
        v22 = 0LL;
        if ( v20 )
        {
          while ( 1 )
          {
            if ( !v5[v22 + 3] )
            {
              v39 = *(HDEV *)(*((_QWORD *)v4 + 8) + 8 * v22);
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v45, (struct PDEVOBJ *)&v39);
              Sprite = pSpCreateSprite(v39, 0LL, *(HWND *)a3, 0LL);
              if ( Sprite )
              {
                v41 = v40;
                SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v44, (struct PDEVOBJ *)&v41);
                bSpTransferShape(Sprite, v49);
                v25 = v41;
                *((_QWORD *)Sprite + 24) = *((_QWORD *)v49 + 24);
                *((_QWORD *)v49 + 24) = 0LL;
                v26 = *(_DWORD *)(v25 + 2588) - *((_DWORD *)v39 + 647);
                v42.x = *((_DWORD *)v49 + 28) + *(_DWORD *)(v25 + 2584) - *((_DWORD *)v39 + 646);
                v42.y = *((_DWORD *)v49 + 29) + v26;
                if ( (unsigned int)bSpUpdatePosition(Sprite, &v42, 0, 0) )
                {
                  v3 = v46;
                  v5[v22 + 3] = Sprite;
                  *((_QWORD *)Sprite + 1) = v5;
                }
                else
                {
                  vSpDeleteSprite(Sprite);
                  v3 = 1;
                  v46 = 1;
                }
                SPRITEDDIACCESS::~SPRITEDDIACCESS(v44, v27);
              }
              else
              {
                v3 = 1;
                v46 = 1;
              }
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v45, v23);
              if ( v3 )
                break;
            }
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= *((_DWORD *)v5 + 5) )
            {
              v14 = i;
              goto LABEL_30;
            }
          }
        }
        else
        {
LABEL_30:
          v5[1] = *((_QWORD *)v4 + 9);
          *((_QWORD *)v4 + 9) = v5;
          if ( v15 )
          {
            v28 = 0LL;
            if ( *((_DWORD *)v5 + 5) )
            {
              v29 = hsurf;
              do
              {
                v30 = (struct SPRITE *)v5[v28 + 3];
                if ( (*(_DWORD *)v30 & 0x40) == 0 )
                  pSpHintSpriteShape(v30, (HSURF)v29, 0);
                v28 = (unsigned int)(v28 + 1);
              }
              while ( (unsigned int)v28 < *((_DWORD *)v5 + 5) );
            }
          }
          if ( v14 )
          {
            for ( j = 0LL; (unsigned int)j < *((_DWORD *)v5 + 5); j = (unsigned int)(j + 1) )
            {
              if ( (*(_DWORD *)v5[j + 3] & 0x100) == 0 )
              {
                vSpCreateExMirror(*(HDEV *)v4);
                *(_DWORD *)v5[j + 3] |= 0x100u;
              }
            }
          }
          v3 = v46;
        }
        v7 = a2;
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)a3 + 5); k = (unsigned int)(k + 1) )
  {
    v33 = (struct SPRITE *)*((_QWORD *)a3 + k + 3);
    if ( v33 )
    {
      if ( (*(_DWORD *)v33 & 0x40) != 0 )
      {
        pSpHintSpriteShape(v33, 0LL, 0);
        v33 = (struct SPRITE *)*((_QWORD *)a3 + k + 3);
      }
      vSpDeleteSprite(v33);
    }
  }
  v34 = *((_QWORD *)v7 + 20);
  if ( (struct _METASPRITE *)v34 == a3 )
  {
    *((_QWORD *)v7 + 20) = *((_QWORD *)a3 + 1);
  }
  else
  {
    for ( m = *(_QWORD *)(v34 + 8); (struct _METASPRITE *)m != a3; m = *(_QWORD *)(m + 8) )
      v34 = m;
    *(_QWORD *)(v34 + 8) = *((_QWORD *)a3 + 1);
  }
  if ( v3 )
  {
    for ( n = 0LL; (unsigned int)n < *((_DWORD *)v5 + 5); n = (unsigned int)(n + 1) )
    {
      v37 = (struct SPRITE *)v5[n + 3];
      if ( v37 )
      {
        if ( (*(_DWORD *)v37 & 0x40) != 0 )
        {
          pSpHintSpriteShape(v37, 0LL, 0);
          v37 = (struct SPRITE *)v5[n + 3];
        }
        vSpDeleteSprite(v37);
      }
    }
    Win32FreePool(v5);
    v5 = 0LL;
  }
  Win32FreePool(a3);
  return (struct _METASPRITE *)v5;
}
