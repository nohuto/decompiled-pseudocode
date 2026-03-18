/*
 * XREFs of ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00676D0
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C0065BF0 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C00818CC (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0081BE4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C008282C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0082920 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00A8A78 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00D5518 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00D5CE8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     UserVisrgnFromHwnd @ 0x1C01036A0 (UserVisrgnFromHwnd.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C027F304 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0281034 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpUpdateSpriteVisRgn(HDEV a1, char a2)
{
  HDEV v3; // r14
  HDEV v4; // rsi
  __int64 v5; // rdi
  int v6; // r13d
  __int64 v7; // rdx
  struct REGION *v8; // rdx
  int v9; // ebx
  struct REGION *v10; // r15
  int v11; // r9d
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  struct _POINTL *v16; // rdx
  int v17; // r12d
  unsigned int v18; // r14d
  int v19; // r15d
  int v20; // eax
  int v21; // eax
  int v22; // edx
  struct REGION *v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C8h]
  struct _POINTL v25; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v26; // [rsp+50h] [rbp-B8h]
  struct REGION *v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v30[3]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v31[192]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v32[4]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v33[4]; // [rsp+158h] [rbp+50h] BYREF
  char v34[16]; // [rsp+15Ch] [rbp+54h] BYREF
  char v35; // [rsp+16Ch] [rbp+64h]
  __int64 v36; // [rsp+190h] [rbp+88h]
  __int64 v37; // [rsp+1A8h] [rbp+A0h]
  int v38; // [rsp+1B0h] [rbp+A8h]
  int v39; // [rsp+1D8h] [rbp+D0h]
  __int64 v40; // [rsp+1E8h] [rbp+E0h]
  _BYTE v41[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v42[16]; // [rsp+1FCh] [rbp+F4h] BYREF
  char v43; // [rsp+20Ch] [rbp+104h]
  __int64 v44; // [rsp+230h] [rbp+128h]
  __int64 v45; // [rsp+248h] [rbp+140h]
  int v46; // [rsp+250h] [rbp+148h]
  int v47; // [rsp+278h] [rbp+170h]
  __int64 v48; // [rsp+288h] [rbp+180h]
  _DWORD v49[84]; // [rsp+298h] [rbp+190h] BYREF
  _DWORD v50[84]; // [rsp+3E8h] [rbp+2E0h] BYREF

  v26 = a1;
  v3 = a1;
  v25 = 0LL;
  memset(v49, 0, 0x144uLL);
  memset(v50, 0, 0x144uLL);
  v4 = v3 + 22;
  v5 = *((_QWORD *)v3 + 12);
  if ( v5 )
  {
    v6 = 1;
    if ( (a2 & 4) != 0 )
    {
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)(v3 + 22), 1);
      v5 = *((_QWORD *)v3 + 12);
    }
    while ( 1 )
    {
      if ( !v5 )
        return;
      v7 = *(_QWORD *)(v5 + 72);
      if ( v7 )
        break;
LABEL_22:
      v5 = *(_QWORD *)(v5 + 24);
    }
    UserVisrgnFromHwnd(v4 + 264, v7, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v23);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v30, *((HRGN *)v4 + 132), 0);
    if ( !v30[0] || !v23 || !RGNOBJ::bCopy((RGNOBJ *)&v23, (struct RGNOBJ *)v30) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
LABEL_20:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v30);
      if ( (_DWORD)v24 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
      goto LABEL_22;
    }
    v25.x = -*((_DWORD *)v3 + 646);
    v25.y = -*((_DWORD *)v3 + 647);
    RGNOBJ::bOffset((RGNOBJ *)&v23, &v25);
    v8 = *(struct REGION **)(v5 + 184);
    v9 = 1;
    v10 = v23;
    v27 = v23;
    if ( v8 )
    {
      v11 = *(_DWORD *)(v5 + 116);
      v12 = *(_DWORD *)(v5 + 112) + *(_DWORD *)(v5 + 104) - *(_DWORD *)(v5 + 96);
      v32[0] = *(_DWORD *)(v5 + 112);
      v32[2] = v12;
      v13 = v11 + *(_DWORD *)(v5 + 108) - *(_DWORD *)(v5 + 100);
      v32[1] = v11;
      v32[3] = v13;
      v37 = 0LL;
      v38 = 0;
      v39 = 1;
      v40 = 0LL;
      v36 = 0LL;
      v45 = 0LL;
      v46 = 0;
      v47 = 1;
      v48 = 0LL;
      v44 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v33, v8, (struct ERECTL *)v32, 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v41, v10, (struct ERECTL *)v32, 0);
      ERECTL::bEmpty((ERECTL *)v34);
      v14 = ERECTL::bEmpty((ERECTL *)v42);
      if ( v15 == v14 )
      {
        if ( !v35 && !v43 )
          goto LABEL_14;
        if ( v35 == v43 )
        {
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v33, 0, 0, 4u, 0x64u);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v41, 0, 0, 4u, 0x64u);
          v17 = 1;
          while ( 1 )
          {
            v18 = 0;
            v19 = 0;
            v49[0] = 0;
            v50[0] = 0;
            if ( v17 )
            {
              v20 = XCLIPOBJ::bEnum((XCLIPOBJ *)v33, 0x144u, v49, 0LL);
              v18 = v49[0];
              v17 = v20;
            }
            if ( v6 )
            {
              v21 = XCLIPOBJ::bEnum((XCLIPOBJ *)v41, 0x144u, v50, 0LL);
              v19 = v50[0];
              v6 = v21;
            }
            if ( v18 != v19 )
              break;
            v22 = 0;
            if ( v18 )
            {
              while ( v50[4 * v22 + 1] == v49[4 * v22 + 1]
                   && v50[4 * v22 + 2] == v49[4 * v22 + 2]
                   && v50[4 * v22 + 3] == v49[4 * v22 + 3]
                   && v50[4 * v22 + 4] == v49[4 * v22 + 4] )
              {
                if ( ++v22 >= v18 )
                  goto LABEL_42;
              }
              v9 = 0;
              v17 = 0;
              v6 = 0;
            }
LABEL_42:
            if ( !v17 && !v6 )
              goto LABEL_46;
          }
          v9 = 0;
LABEL_46:
          v10 = v27;
          v6 = 1;
          v3 = v26;
          goto LABEL_14;
        }
      }
    }
    v9 = 0;
LABEL_14:
    vSpFreeClipResources((struct SPRITE *)v5);
    *(_QWORD *)(v5 + 184) = v10;
    *((_DWORD *)v10 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
    v28 = *(_QWORD *)v4;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v29, (struct PDEVOBJ *)&v28);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v31, (struct PDEVOBJ *)&v28);
    *(_DWORD *)v5 &= ~1u;
    if ( RGNOBJ::bInside((RGNOBJ *)&v23, (struct _RECTL *)(v4 + 10)) != 2 )
      *(_DWORD *)v5 |= 1u;
    bSpUpdatePosition((struct SPRITE *)v5, (struct _POINTL *)(v5 + 112), 0, 0);
    if ( gpto )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v4, (struct _RECTL *)(v5 + 80), (struct _RECTL *)(v5 + 80));
    if ( !v9 )
    {
      if ( *((_QWORD *)v4 + 129) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v4, v16, (struct _RECTL *)(v5 + 80), 0LL, 1);
      vSpRedrawSprite((struct SPRITE *)v5);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v31);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v29);
    goto LABEL_20;
  }
}
