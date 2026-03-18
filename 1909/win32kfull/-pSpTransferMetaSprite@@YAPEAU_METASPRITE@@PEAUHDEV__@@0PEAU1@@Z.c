/*
 * XREFs of ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027E848
 * Callers:
 *     vSpDynamicModeChange @ 0x1C0081F50 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00816B4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0081A34 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0081BE4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00824CC (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C027DCB0 (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C027F8A0 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
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
  struct SPRITE *Sprite; // r14
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r14
  HBITMAP v31; // r15
  struct SPRITE *v32; // rcx
  __int64 j; // r14
  __int64 k; // rsi
  struct SPRITE *v35; // rcx
  __int64 v36; // rcx
  __int64 m; // rax
  __int64 n; // rsi
  struct SPRITE *v39; // rcx
  HDEV v41; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v42; // [rsp+28h] [rbp-D8h]
  __int64 v43; // [rsp+30h] [rbp-D0h] BYREF
  struct _POINTL v44; // [rsp+38h] [rbp-C8h] BYREF
  HBITMAP hsurf; // [rsp+40h] [rbp-C0h]
  __int64 *v46[24]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v47[32]; // [rsp+110h] [rbp+10h] BYREF
  int v48; // [rsp+220h] [rbp+120h]
  int i; // [rsp+230h] [rbp+130h]
  struct SPRITE *v51; // [rsp+238h] [rbp+138h]

  v3 = 0;
  v4 = (HDEV)(a1 + 22);
  v5 = 0LL;
  v48 = 0;
  v7 = a2;
  if ( *(_QWORD *)a3 )
  {
    v8 = (unsigned int)(8 * a1[37] + 32);
    if ( (*((_DWORD *)a3 + 4) & 4) == 0 )
    {
      v5 = PALLOCMEM2(v8, 1836086087LL, 1);
      if ( v5 )
      {
        v51 = 0LL;
        v10 = 0LL;
        v42 = 0LL;
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
                  v51 = v17;
                  v11 = *(_DWORD *)(v19 + 2108);
                  v42 = v19;
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
              v41 = *(HDEV *)(*((_QWORD *)v4 + 8) + 8 * v22);
              SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v47, (struct PDEVOBJ *)&v41, v9);
              Sprite = pSpCreateSprite(v41, 0LL, *(HWND *)a3, 0LL);
              if ( Sprite )
              {
                v43 = v42;
                SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v46, (struct PDEVOBJ *)&v43, v24);
                bSpTransferShape(Sprite, v51);
                v26 = v43;
                *((_QWORD *)Sprite + 24) = *((_QWORD *)v51 + 24);
                *((_QWORD *)v51 + 24) = 0LL;
                v27 = *(_DWORD *)(v26 + 2588) - *((_DWORD *)v41 + 647);
                v44.x = *((_DWORD *)v51 + 28) + *(_DWORD *)(v26 + 2584) - *((_DWORD *)v41 + 646);
                v44.y = *((_DWORD *)v51 + 29) + v27;
                if ( (unsigned int)bSpUpdatePosition(Sprite, &v44, 0, 0) )
                {
                  v3 = v48;
                  v5[v22 + 3] = Sprite;
                  *((_QWORD *)Sprite + 1) = v5;
                }
                else
                {
                  vSpDeleteSprite(Sprite);
                  v3 = 1;
                  v48 = 1;
                }
                SPRITEDDIACCESS::~SPRITEDDIACCESS(v46, v28, v29);
              }
              else
              {
                v3 = 1;
                v48 = 1;
              }
              SPRITEDDIACCESS::~SPRITEDDIACCESS(v47, v23, v24);
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
            v30 = 0LL;
            if ( *((_DWORD *)v5 + 5) )
            {
              v31 = hsurf;
              do
              {
                v32 = (struct SPRITE *)v5[v30 + 3];
                if ( (*(_DWORD *)v32 & 0x40) == 0 )
                  pSpHintSpriteShape(v32, (HSURF)v31, 0);
                v30 = (unsigned int)(v30 + 1);
              }
              while ( (unsigned int)v30 < *((_DWORD *)v5 + 5) );
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
          v3 = v48;
        }
        v7 = a2;
      }
    }
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)a3 + 5); k = (unsigned int)(k + 1) )
  {
    v35 = (struct SPRITE *)*((_QWORD *)a3 + k + 3);
    if ( v35 )
    {
      if ( (*(_DWORD *)v35 & 0x40) != 0 )
      {
        pSpHintSpriteShape(v35, 0LL, 0);
        v35 = (struct SPRITE *)*((_QWORD *)a3 + k + 3);
      }
      vSpDeleteSprite(v35);
    }
  }
  v36 = *((_QWORD *)v7 + 20);
  if ( (struct _METASPRITE *)v36 == a3 )
  {
    *((_QWORD *)v7 + 20) = *((_QWORD *)a3 + 1);
  }
  else
  {
    for ( m = *(_QWORD *)(v36 + 8); (struct _METASPRITE *)m != a3; m = *(_QWORD *)(m + 8) )
      v36 = m;
    *(_QWORD *)(v36 + 8) = *((_QWORD *)a3 + 1);
  }
  if ( v3 )
  {
    for ( n = 0LL; (unsigned int)n < *((_DWORD *)v5 + 5); n = (unsigned int)(n + 1) )
    {
      v39 = (struct SPRITE *)v5[n + 3];
      if ( v39 )
      {
        if ( (*(_DWORD *)v39 & 0x40) != 0 )
        {
          pSpHintSpriteShape(v39, 0LL, 0);
          v39 = (struct SPRITE *)v5[n + 3];
        }
        vSpDeleteSprite(v39);
      }
    }
    Win32FreePool(v5);
    v5 = 0LL;
  }
  Win32FreePool(a3);
  return (struct _METASPRITE *)v5;
}
