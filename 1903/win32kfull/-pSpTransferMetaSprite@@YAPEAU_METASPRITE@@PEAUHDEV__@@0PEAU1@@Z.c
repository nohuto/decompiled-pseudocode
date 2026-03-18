/*
 * XREFs of ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027EF08
 * Callers:
 *     vSpDynamicModeChange @ 0x1C003DD50 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003D4B4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C003D834 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C003E40C (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C027E370 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C027FF60 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpTransferMetaSprite(_DWORD *a1, HDEV a2, struct _METASPRITE *a3)
{
  int v3; // r12d
  HDEV v4; // rsi
  _QWORD *v5; // rbx
  HDEV v7; // r15
  size_t v8; // rcx
  __int64 v9; // r8
  HBITMAP v10; // r14
  unsigned int v11; // r11d
  int v12; // r12d
  __int64 v13; // r9
  char v14; // r13
  int v15; // r12d
  int v16; // r13d
  struct SPRITE *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct SPRITE *Sprite; // r14
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r14
  HBITMAP v33; // r15
  struct SPRITE *v34; // rcx
  __int64 j; // r14
  __int64 k; // rsi
  struct SPRITE *v37; // rcx
  __int64 v38; // rcx
  __int64 m; // rax
  __int64 n; // rsi
  struct SPRITE *v41; // rcx
  HDEV v43; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+28h] [rbp-D8h]
  __int64 v45; // [rsp+30h] [rbp-D0h] BYREF
  struct _POINTL v46; // [rsp+38h] [rbp-C8h] BYREF
  HBITMAP hsurf; // [rsp+40h] [rbp-C0h]
  __int64 *v48[24]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v49[32]; // [rsp+110h] [rbp+10h] BYREF
  int v50; // [rsp+220h] [rbp+120h]
  int i; // [rsp+230h] [rbp+130h]
  struct SPRITE *v53; // [rsp+238h] [rbp+138h]

  v3 = 0;
  v4 = (HDEV)(a1 + 22);
  v5 = 0LL;
  v50 = 0;
  v7 = a2;
  if ( *(_QWORD *)a3 )
  {
    v8 = (unsigned int)(8 * a1[37] + 32);
    if ( (*((_DWORD *)a3 + 4) & 4) == 0 )
    {
      v5 = PALLOCMEM2(v8, 1836086087LL, 1);
      if ( v5 )
      {
        v53 = 0LL;
        v10 = 0LL;
        v44 = 0LL;
        v11 = 0;
        v12 = *((_DWORD *)a3 + 4);
        v13 = 0LL;
        v14 = v12;
        hsurf = 0LL;
        v15 = v12 & 0x100;
        v16 = v14 & 0x40;
        for ( i = v15; (unsigned int)v13 < *((_DWORD *)v4 + 15); v13 = (unsigned int)(v13 + 1) )
        {
          v9 = 0LL;
          if ( *((_DWORD *)a3 + 5) )
          {
            do
            {
              v17 = (struct SPRITE *)*((_QWORD *)a3 + v9 + 3);
              if ( v17 )
              {
                if ( v16 && !v10 )
                  v10 = (HBITMAP)*((_QWORD *)v17 + 30);
                v18 = (_QWORD *)*((_QWORD *)v17 + 2);
                v19 = *v18;
                if ( v4 == (HDEV)v18 )
                {
                  v5[v13 + 3] = v17;
                  *((_QWORD *)a3 + v9 + 3) = 0LL;
                  *((_QWORD *)v17 + 1) = v5;
                }
                if ( v11 < *(_DWORD *)(v19 + 2108) )
                {
                  v53 = v17;
                  v11 = *(_DWORD *)(v19 + 2108);
                  v44 = v19;
                }
              }
              v9 = (unsigned int)(v9 + 1);
            }
            while ( (unsigned int)v9 < *((_DWORD *)a3 + 5) );
            hsurf = v10;
          }
        }
        *v5 = *(_QWORD *)a3;
        v20 = *((_DWORD *)v4 + 15);
        *((_DWORD *)v5 + 5) = v20;
        v21 = v16 != 0 ? 0x40 : 0;
        *((_DWORD *)v5 + 4) = v21;
        if ( v15 )
          *((_DWORD *)v5 + 4) = v21 | 0x100;
        v22 = 0LL;
        if ( v20 )
        {
          while ( 1 )
          {
            if ( !v5[v22 + 3] )
            {
              v43 = *(HDEV *)(*((_QWORD *)v4 + 8) + 8 * v22);
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v49, (struct PDEVOBJ *)&v43, v9, v13);
              Sprite = pSpCreateSprite(v43, 0LL, *(HWND *)a3, 0LL);
              if ( Sprite )
              {
                v45 = v44;
                SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v48, (struct PDEVOBJ *)&v45, v24, v25);
                bSpTransferShape(Sprite, v53);
                v27 = v45;
                *((_QWORD *)Sprite + 24) = *((_QWORD *)v53 + 24);
                *((_QWORD *)v53 + 24) = 0LL;
                v28 = *(_DWORD *)(v27 + 2588) - *((_DWORD *)v43 + 647);
                v46.x = *((_DWORD *)v53 + 28) + *(_DWORD *)(v27 + 2584) - *((_DWORD *)v43 + 646);
                v46.y = *((_DWORD *)v53 + 29) + v28;
                if ( (unsigned int)bSpUpdatePosition(Sprite, &v46, 0, 0) )
                {
                  v3 = v50;
                  v5[v22 + 3] = Sprite;
                  *((_QWORD *)Sprite + 1) = v5;
                }
                else
                {
                  vSpDeleteSprite(Sprite);
                  v3 = 1;
                  v50 = 1;
                }
                SPRITEDDIACCESS::~SPRITEDDIACCESS(v48, v29, v30, v31);
              }
              else
              {
                v3 = 1;
                v50 = 1;
              }
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v49, v23, v24, v25);
              if ( v3 )
                break;
            }
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= *((_DWORD *)v5 + 5) )
            {
              v15 = i;
              goto LABEL_30;
            }
          }
        }
        else
        {
LABEL_30:
          v5[1] = *((_QWORD *)v4 + 9);
          *((_QWORD *)v4 + 9) = v5;
          if ( v16 )
          {
            v32 = 0LL;
            if ( *((_DWORD *)v5 + 5) )
            {
              v33 = hsurf;
              do
              {
                v34 = (struct SPRITE *)v5[v32 + 3];
                if ( (*(_DWORD *)v34 & 0x40) == 0 )
                  pSpHintSpriteShape(v34, (HSURF)v33, 0);
                v32 = (unsigned int)(v32 + 1);
              }
              while ( (unsigned int)v32 < *((_DWORD *)v5 + 5) );
            }
          }
          if ( v15 )
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
          v3 = v50;
        }
        v7 = a2;
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)a3 + 5); k = (unsigned int)(k + 1) )
  {
    v37 = (struct SPRITE *)*((_QWORD *)a3 + k + 3);
    if ( v37 )
    {
      if ( (*(_DWORD *)v37 & 0x40) != 0 )
      {
        pSpHintSpriteShape(v37, 0LL, 0);
        v37 = (struct SPRITE *)*((_QWORD *)a3 + k + 3);
      }
      vSpDeleteSprite(v37);
    }
  }
  v38 = *((_QWORD *)v7 + 20);
  if ( (struct _METASPRITE *)v38 == a3 )
  {
    *((_QWORD *)v7 + 20) = *((_QWORD *)a3 + 1);
  }
  else
  {
    for ( m = *(_QWORD *)(v38 + 8); (struct _METASPRITE *)m != a3; m = *(_QWORD *)(m + 8) )
      v38 = m;
    *(_QWORD *)(v38 + 8) = *((_QWORD *)a3 + 1);
  }
  if ( v3 )
  {
    for ( n = 0LL; (unsigned int)n < *((_DWORD *)v5 + 5); n = (unsigned int)(n + 1) )
    {
      v41 = (struct SPRITE *)v5[n + 3];
      if ( v41 )
      {
        if ( (*(_DWORD *)v41 & 0x40) != 0 )
        {
          pSpHintSpriteShape(v41, 0LL, 0);
          v41 = (struct SPRITE *)v5[n + 3];
        }
        vSpDeleteSprite(v41);
      }
    }
    Win32FreePool(v5);
    v5 = 0LL;
  }
  Win32FreePool(a3);
  return (struct _METASPRITE *)v5;
}
