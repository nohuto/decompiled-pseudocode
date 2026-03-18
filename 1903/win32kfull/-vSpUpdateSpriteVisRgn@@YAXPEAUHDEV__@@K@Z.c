/*
 * XREFs of ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00C6000
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C00C4520 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C003D6CC (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003E76C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C003E860 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C005ED54 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00F5428 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     UserVisrgnFromHwnd @ 0x1C01285F4 (UserVisrgnFromHwnd.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C027F9C4 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02816F4 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  struct _POINTL *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r12d
  unsigned int v22; // r14d
  int v23; // r15d
  int v24; // eax
  int v25; // eax
  int v26; // edx
  struct REGION *v27; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C8h]
  struct _POINTL v29; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v30; // [rsp+50h] [rbp-B8h]
  struct REGION *v31; // [rsp+58h] [rbp-B0h]
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v34[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 *v35[24]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v36[4]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v37[4]; // [rsp+158h] [rbp+50h] BYREF
  char v38[16]; // [rsp+15Ch] [rbp+54h] BYREF
  char v39; // [rsp+16Ch] [rbp+64h]
  __int64 v40; // [rsp+190h] [rbp+88h]
  __int64 v41; // [rsp+1A8h] [rbp+A0h]
  int v42; // [rsp+1B0h] [rbp+A8h]
  int v43; // [rsp+1D8h] [rbp+D0h]
  __int64 v44; // [rsp+1E8h] [rbp+E0h]
  _BYTE v45[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v46[16]; // [rsp+1FCh] [rbp+F4h] BYREF
  char v47; // [rsp+20Ch] [rbp+104h]
  __int64 v48; // [rsp+230h] [rbp+128h]
  __int64 v49; // [rsp+248h] [rbp+140h]
  int v50; // [rsp+250h] [rbp+148h]
  int v51; // [rsp+278h] [rbp+170h]
  __int64 v52; // [rsp+288h] [rbp+180h]
  _DWORD v53[84]; // [rsp+298h] [rbp+190h] BYREF
  _DWORD v54[84]; // [rsp+3E8h] [rbp+2E0h] BYREF

  v30 = a1;
  v3 = a1;
  v29 = 0LL;
  memset(v53, 0, 0x144uLL);
  memset(v54, 0, 0x144uLL);
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
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v27);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v34, *((HRGN *)v4 + 132), 0);
    if ( !v34[0] || !v27 || !RGNOBJ::bCopy((RGNOBJ *)&v27, (struct RGNOBJ *)v34) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
LABEL_20:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v34);
      if ( (_DWORD)v28 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
      goto LABEL_22;
    }
    v29.x = -*((_DWORD *)v3 + 646);
    v29.y = -*((_DWORD *)v3 + 647);
    RGNOBJ::bOffset((RGNOBJ *)&v27, &v29);
    v8 = *(struct REGION **)(v5 + 184);
    v9 = 1;
    v10 = v27;
    v31 = v27;
    if ( v8 )
    {
      v11 = *(_DWORD *)(v5 + 116);
      v12 = *(_DWORD *)(v5 + 112) + *(_DWORD *)(v5 + 104) - *(_DWORD *)(v5 + 96);
      v36[0] = *(_DWORD *)(v5 + 112);
      v36[2] = v12;
      v13 = v11 + *(_DWORD *)(v5 + 108) - *(_DWORD *)(v5 + 100);
      v36[1] = v11;
      v36[3] = v13;
      v41 = 0LL;
      v42 = 0;
      v43 = 1;
      v44 = 0LL;
      v40 = 0LL;
      v49 = 0LL;
      v50 = 0;
      v51 = 1;
      v52 = 0LL;
      v48 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v37, v8, (struct ERECTL *)v36, 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v45, v10, (struct ERECTL *)v36, 0);
      ERECTL::bEmpty((ERECTL *)v38);
      v14 = ERECTL::bEmpty((ERECTL *)v46);
      if ( v15 == v14 )
      {
        if ( !v39 && !v47 )
          goto LABEL_14;
        if ( v39 == v47 )
        {
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v37, 0, 0, 4u, 0x64u);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v45, 0, 0, 4u, 0x64u);
          v21 = 1;
          while ( 1 )
          {
            v22 = 0;
            v23 = 0;
            v53[0] = 0;
            v54[0] = 0;
            if ( v21 )
            {
              v24 = XCLIPOBJ::bEnum((XCLIPOBJ *)v37, 0x144u, v53, 0LL);
              v22 = v53[0];
              v21 = v24;
            }
            if ( v6 )
            {
              v25 = XCLIPOBJ::bEnum((XCLIPOBJ *)v45, 0x144u, v54, 0LL);
              v23 = v54[0];
              v6 = v25;
            }
            if ( v22 != v23 )
              break;
            v26 = 0;
            if ( v22 )
            {
              while ( v54[4 * v26 + 1] == v53[4 * v26 + 1]
                   && v54[4 * v26 + 2] == v53[4 * v26 + 2]
                   && v54[4 * v26 + 3] == v53[4 * v26 + 3]
                   && v54[4 * v26 + 4] == v53[4 * v26 + 4] )
              {
                if ( ++v26 >= v22 )
                  goto LABEL_42;
              }
              v9 = 0;
              v21 = 0;
              v6 = 0;
            }
LABEL_42:
            if ( !v21 && !v6 )
              goto LABEL_46;
          }
          v9 = 0;
LABEL_46:
          v10 = v31;
          v6 = 1;
          v3 = v30;
          goto LABEL_14;
        }
      }
    }
    v9 = 0;
LABEL_14:
    vSpFreeClipResources((struct SPRITE *)v5);
    *(_QWORD *)(v5 + 184) = v10;
    *((_DWORD *)v10 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
    v32 = *(_QWORD *)v4;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v33, (struct PDEVOBJ *)&v32);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v35, (struct PDEVOBJ *)&v32, v16, v17);
    *(_DWORD *)v5 &= ~1u;
    if ( RGNOBJ::bInside((RGNOBJ *)&v27, (struct _RECTL *)(v4 + 10)) != 2 )
      *(_DWORD *)v5 |= 1u;
    bSpUpdatePosition((struct SPRITE *)v5, (struct _POINTL *)(v5 + 112), 0, 0);
    if ( gpto )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v4, (struct _RECTL *)(v5 + 80), (struct _RECTL *)(v5 + 80));
    if ( !v9 )
    {
      if ( *((_QWORD *)v4 + 129) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v4, v18, (struct _RECTL *)(v5 + 80), 0LL, 1);
      vSpRedrawSprite((struct SPRITE *)v5);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v35, (__int64)v18, v19, v20);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v33);
    goto LABEL_20;
  }
}
