/*
 * XREFs of ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C003D974
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C003C0E0 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C000B014 (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0055B68 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00958D4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0096B08 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0096CAC (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     UserVisrgnFromHwnd @ 0x1C011D564 (UserVisrgnFromHwnd.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C026686C (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0268558 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpUpdateSpriteVisRgn(HDEV a1, char a2)
{
  HDEV v2; // rsi
  __int64 v3; // rdi
  HDEV v4; // r14
  int v5; // r13d
  __int64 v6; // rdx
  struct REGION *v7; // rdx
  int v8; // ebx
  struct REGION *v9; // r15
  int v10; // r9d
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  struct _POINTL *v15; // rdx
  int v16; // r12d
  unsigned int v17; // r14d
  int v18; // r15d
  int v19; // eax
  int v20; // eax
  int v21; // edx
  struct REGION *v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+40h] [rbp-C8h]
  struct _POINTL v24; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v25; // [rsp+50h] [rbp-B8h]
  struct REGION *v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v29[7]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v30[192]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v31[4]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v32[4]; // [rsp+178h] [rbp+70h] BYREF
  char v33[16]; // [rsp+17Ch] [rbp+74h] BYREF
  char v34; // [rsp+18Ch] [rbp+84h]
  __int64 v35; // [rsp+1B0h] [rbp+A8h]
  __int64 v36; // [rsp+1C8h] [rbp+C0h]
  int v37; // [rsp+1D0h] [rbp+C8h]
  int v38; // [rsp+1F8h] [rbp+F0h]
  __int64 v39; // [rsp+208h] [rbp+100h]
  _BYTE v40[4]; // [rsp+218h] [rbp+110h] BYREF
  char v41[16]; // [rsp+21Ch] [rbp+114h] BYREF
  char v42; // [rsp+22Ch] [rbp+124h]
  __int64 v43; // [rsp+250h] [rbp+148h]
  __int64 v44; // [rsp+268h] [rbp+160h]
  int v45; // [rsp+270h] [rbp+168h]
  int v46; // [rsp+298h] [rbp+190h]
  __int64 v47; // [rsp+2A8h] [rbp+1A0h]
  _DWORD v48[84]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _DWORD v49[84]; // [rsp+408h] [rbp+300h] BYREF

  v2 = a1 + 22;
  v25 = a1;
  v3 = *((_QWORD *)a1 + 12);
  v4 = a1;
  if ( v3 )
  {
    v5 = 1;
    if ( (a2 & 4) != 0 )
    {
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)(a1 + 22), 1);
      v3 = *((_QWORD *)v2 + 1);
    }
    while ( 1 )
    {
      if ( !v3 )
        return;
      v6 = *(_QWORD *)(v3 + 72);
      if ( v6 )
        break;
LABEL_22:
      v3 = *(_QWORD *)(v3 + 24);
    }
    UserVisrgnFromHwnd(v2 + 264, v6, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v22);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v29, *((HRGN *)v2 + 132), 0, 0);
    if ( !v29[0] || !v22 || !RGNOBJ::bCopy((RGNOBJ *)&v22, (struct RGNOBJ *)v29) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
LABEL_20:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v29);
      if ( v23 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
      goto LABEL_22;
    }
    v24.x = -*((_DWORD *)v4 + 646);
    v24.y = -*((_DWORD *)v4 + 647);
    RGNOBJ::bOffset((RGNOBJ *)&v22, &v24);
    v7 = *(struct REGION **)(v3 + 184);
    v8 = 1;
    v9 = v22;
    v26 = v22;
    if ( v7 )
    {
      v10 = *(_DWORD *)(v3 + 116);
      v11 = *(_DWORD *)(v3 + 112) + *(_DWORD *)(v3 + 104) - *(_DWORD *)(v3 + 96);
      v31[0] = *(_DWORD *)(v3 + 112);
      v31[2] = v11;
      v12 = v10 + *(_DWORD *)(v3 + 108) - *(_DWORD *)(v3 + 100);
      v31[1] = v10;
      v31[3] = v12;
      v36 = 0LL;
      v37 = 0;
      v38 = 1;
      v39 = 0LL;
      v35 = 0LL;
      v44 = 0LL;
      v45 = 0;
      v46 = 1;
      v47 = 0LL;
      v43 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v32, v7, (struct ERECTL *)v31, 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v40, v9, (struct ERECTL *)v31, 0);
      ERECTL::bEmpty((ERECTL *)v33);
      v13 = ERECTL::bEmpty((ERECTL *)v41);
      if ( v14 == v13 )
      {
        if ( !v34 && !v42 )
          goto LABEL_14;
        if ( v34 == v42 )
        {
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v32, 0, 0, 4u, 0x64u);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v40, 0, 0, 4u, 0x64u);
          v16 = 1;
          while ( 1 )
          {
            v17 = 0;
            v18 = 0;
            v48[0] = 0;
            v49[0] = 0;
            if ( v16 )
            {
              v19 = XCLIPOBJ::bEnum((XCLIPOBJ *)v32, 0x144u, v48, 0LL);
              v17 = v48[0];
              v16 = v19;
            }
            if ( v5 )
            {
              v20 = XCLIPOBJ::bEnum((XCLIPOBJ *)v40, 0x144u, v49, 0LL);
              v18 = v49[0];
              v5 = v20;
            }
            if ( v17 != v18 )
              break;
            v21 = 0;
            if ( v17 )
            {
              while ( v49[4 * v21 + 1] == v48[4 * v21 + 1]
                   && v49[4 * v21 + 2] == v48[4 * v21 + 2]
                   && v49[4 * v21 + 3] == v48[4 * v21 + 3]
                   && v49[4 * v21 + 4] == v48[4 * v21 + 4] )
              {
                if ( ++v21 >= v17 )
                  goto LABEL_42;
              }
              v8 = 0;
              v16 = 0;
              v5 = 0;
            }
LABEL_42:
            if ( !v16 && !v5 )
              goto LABEL_46;
          }
          v8 = 0;
LABEL_46:
          v9 = v26;
          v5 = 1;
          v4 = v25;
          goto LABEL_14;
        }
      }
    }
    v8 = 0;
LABEL_14:
    vSpFreeClipResources((struct SPRITE *)v3);
    *(_QWORD *)(v3 + 184) = v9;
    *((_DWORD *)v9 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
    v27 = *(_QWORD *)v2;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v28, (struct PDEVOBJ *)&v27);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v30, (struct PDEVOBJ *)&v27);
    *(_DWORD *)v3 &= ~1u;
    if ( RGNOBJ::bInside((RGNOBJ *)&v22, (struct _RECTL *)(v2 + 10)) != 2 )
      *(_DWORD *)v3 |= 1u;
    bSpUpdatePosition((struct SPRITE *)v3, (struct _POINTL *)(v3 + 112), 0, 0);
    if ( gpto )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v2, (struct _RECTL *)(v3 + 80), (struct _RECTL *)(v3 + 80));
    if ( !v8 )
    {
      if ( *((_QWORD *)v2 + 129) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, v15, (struct _RECTL *)(v3 + 80), 0LL, 1);
      vSpRedrawSprite((struct SPRITE *)v3);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v30);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v28);
    goto LABEL_20;
  }
}
