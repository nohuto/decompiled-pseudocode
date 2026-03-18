/*
 * XREFs of ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C02509A4
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00FDD50 (vSpDynamicModeChange.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C007A2B4 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C007A2EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C024E2F4 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0250344 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0250618 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0252D38 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0252FA8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

struct _METASPRITE *__fastcall pSpTransferMetaSprite(_DWORD *a1, HDEV a2, struct _METASPRITE *a3)
{
  int v3; // r12d
  HDEV v4; // r14
  _QWORD *v5; // rbx
  HDEV v7; // r15
  size_t v8; // rcx
  HBITMAP v9; // rsi
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
  struct SPRITE *Sprite; // rsi
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rsi
  HBITMAP v27; // r15
  struct SPRITE *v28; // rcx
  __int64 j; // rsi
  __int64 k; // rsi
  struct SPRITE *v31; // rcx
  __int64 v32; // rcx
  __int64 m; // rax
  __int64 n; // rsi
  struct SPRITE *v35; // rcx
  HDEV v37; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+28h] [rbp-D8h]
  __int64 v39; // [rsp+30h] [rbp-D0h] BYREF
  struct _POINTL v40; // [rsp+38h] [rbp-C8h] BYREF
  HBITMAP hsurf; // [rsp+40h] [rbp-C0h]
  struct _SPRITESTATE *v42[24]; // [rsp+50h] [rbp-B0h] BYREF
  struct _SPRITESTATE *v43[32]; // [rsp+110h] [rbp+10h] BYREF
  int v44; // [rsp+220h] [rbp+120h]
  int i; // [rsp+230h] [rbp+130h]
  struct SPRITE *v47; // [rsp+238h] [rbp+138h]

  v3 = 0;
  v4 = (HDEV)(a1 + 20);
  v5 = 0LL;
  v44 = 0;
  v7 = a2;
  if ( *(_QWORD *)a3 )
  {
    v8 = (unsigned int)(8 * a1[35] + 32);
    if ( (*((_DWORD *)a3 + 4) & 4) == 0 )
    {
      v5 = PALLOCMEM2(v8, 1836086087LL, 1);
      if ( v5 )
      {
        v47 = 0LL;
        v9 = 0LL;
        v38 = 0LL;
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
                if ( v10 < *(_DWORD *)(v19 + 2100) )
                {
                  v47 = v17;
                  v10 = *(_DWORD *)(v19 + 2100);
                  v38 = v19;
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
              v37 = *(HDEV *)(*((_QWORD *)v4 + 8) + 8 * v22);
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v43, (struct PDEVOBJ *)&v37);
              Sprite = pSpCreateSprite(v37, 0LL, *(HWND *)a3, 0LL);
              if ( Sprite )
              {
                v39 = v38;
                SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v42, (struct PDEVOBJ *)&v39);
                bSpTransferShape(Sprite, v47);
                v24 = v39;
                *((_QWORD *)Sprite + 24) = *((_QWORD *)v47 + 24);
                *((_QWORD *)v47 + 24) = 0LL;
                v25 = *(_DWORD *)(v24 + 2580) - *((_DWORD *)v37 + 645);
                v40.x = *((_DWORD *)v47 + 28) + *(_DWORD *)(v24 + 2576) - *((_DWORD *)v37 + 644);
                v40.y = *((_DWORD *)v47 + 29) + v25;
                if ( (unsigned int)bSpUpdatePosition(Sprite, &v40, 0, 0) )
                {
                  v3 = v44;
                  v5[v22 + 3] = Sprite;
                  *((_QWORD *)Sprite + 1) = v5;
                }
                else
                {
                  vSpDeleteSprite(Sprite);
                  v3 = 1;
                  v44 = 1;
                }
                SPRITEDDIACCESS::~SPRITEDDIACCESS(v42);
              }
              else
              {
                v3 = 1;
                v44 = 1;
              }
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v43);
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
            v26 = 0LL;
            if ( *((_DWORD *)v5 + 5) )
            {
              v27 = hsurf;
              do
              {
                v28 = (struct SPRITE *)v5[v26 + 3];
                if ( (*(_DWORD *)v28 & 0x40) == 0 )
                  pSpHintSpriteShape(v28, (HSURF)v27, 0);
                v26 = (unsigned int)(v26 + 1);
              }
              while ( (unsigned int)v26 < *((_DWORD *)v5 + 5) );
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
          v3 = v44;
        }
        v7 = a2;
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)a3 + 5); k = (unsigned int)(k + 1) )
  {
    v31 = (struct SPRITE *)*((_QWORD *)a3 + k + 3);
    if ( v31 )
    {
      if ( (*(_DWORD *)v31 & 0x40) != 0 )
      {
        pSpHintSpriteShape(v31, 0LL, 0);
        v31 = (struct SPRITE *)*((_QWORD *)a3 + k + 3);
      }
      vSpDeleteSprite(v31);
    }
  }
  v32 = *((_QWORD *)v7 + 19);
  if ( (struct _METASPRITE *)v32 == a3 )
  {
    *((_QWORD *)v7 + 19) = *((_QWORD *)a3 + 1);
  }
  else
  {
    for ( m = *(_QWORD *)(v32 + 8); (struct _METASPRITE *)m != a3; m = *(_QWORD *)(m + 8) )
      v32 = m;
    *(_QWORD *)(v32 + 8) = *((_QWORD *)a3 + 1);
  }
  if ( v3 )
  {
    for ( n = 0LL; (unsigned int)n < *((_DWORD *)v5 + 5); n = (unsigned int)(n + 1) )
    {
      v35 = (struct SPRITE *)v5[n + 3];
      if ( v35 )
      {
        if ( (*(_DWORD *)v35 & 0x40) != 0 )
        {
          pSpHintSpriteShape(v35, 0LL, 0);
          v35 = (struct SPRITE *)v5[n + 3];
        }
        vSpDeleteSprite(v35);
      }
    }
    Win32FreePool(v5);
    v5 = 0LL;
  }
  Win32FreePool(a3);
  return (struct _METASPRITE *)v5;
}
