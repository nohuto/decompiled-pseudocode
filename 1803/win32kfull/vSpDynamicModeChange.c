/*
 * XREFs of vSpDynamicModeChange @ 0x1C00FDD50
 * Callers:
 *     <none>
 * Callees:
 *     ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C00FE08C (--1MULTISPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00FE0D8 (--0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpCorrectHdevReferences@@YAXPEAU_SPRITESTATE@@PEAUHDEV__@@@Z @ 0x1C00FE170 (-vSpCorrectHdevReferences@@YAXPEAU_SPRITESTATE@@PEAUHDEV__@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00FE1C0 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C024FEE0 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C02500A0 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C0250870 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C02509A4 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0250D74 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C0251054 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0252FA8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

void __fastcall vSpDynamicModeChange(HDEV a1, HDEV a2)
{
  HDEV v2; // rdi
  HDEV v4; // rax
  HDEV v5; // rsi
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  HDEV v8; // r15
  __int64 v9; // r8
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // r8
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  _OWORD *v26; // rcx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // edx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rbx
  __int64 v46; // r8
  __int64 v47; // rbx
  struct _METASPRITE *v48; // rax
  __int64 v49; // rax
  int v50; // ecx
  __int64 v51; // rbx
  __int64 v52; // rbx
  struct SPRITE *v53; // rax
  __int64 v54; // rbx
  HDEV v55; // rbx
  __int64 v56; // rsi
  unsigned int v57; // edx
  HDEV v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rsi
  struct _METASPRITE *v61; // rax
  __int64 v62; // rax
  int v63; // ecx
  __int64 v64; // rsi
  __int64 v65; // r8
  __int64 v66; // rdi
  _BYTE v67[1392]; // [rsp+20h] [rbp-E0h] BYREF
  HDEV v68; // [rsp+5A0h] [rbp+4A0h] BYREF
  HDEV v69; // [rsp+5A8h] [rbp+4A8h] BYREF
  char v70; // [rsp+5B0h] [rbp+4B0h] BYREF
  char v71; // [rsp+5B8h] [rbp+4B8h] BYREF

  v69 = a1;
  v68 = a2;
  v2 = a2;
  v4 = a2;
  if ( ((_DWORD)a1[10] & 0x20000) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents(a1);
    v4 = v68;
  }
  if ( ((_DWORD)v4[10] & 0x20000) == 0 )
  {
    vSpRemoveAllSpriteOverlapPresents(v4);
    v4 = v68;
  }
  v5 = v4 + 20;
  v6 = 10LL;
  v7 = v67;
  v8 = v69 + 20;
  v9 = 10LL;
  v10 = v69 + 20;
  do
  {
    v11 = v10[1];
    *v7 = *v10;
    v12 = v10[2];
    v7[1] = v11;
    v13 = v10[3];
    v7[2] = v12;
    v14 = v10[4];
    v7[3] = v13;
    v15 = v10[5];
    v7[4] = v14;
    v16 = v10[6];
    v7[5] = v15;
    v17 = v10[7];
    v10 += 8;
    v7[6] = v16;
    v7 += 8;
    *(v7 - 1) = v17;
    --v9;
  }
  while ( v9 );
  v18 = 10LL;
  v19 = v10[1];
  *v7 = *v10;
  v20 = v10[2];
  v7[1] = v19;
  v21 = v10[3];
  v22 = v8;
  v7[2] = v20;
  v7[3] = v21;
  v23 = v5;
  do
  {
    *v22 = *v23;
    v22[1] = v23[1];
    v22[2] = v23[2];
    v22[3] = v23[3];
    v22[4] = v23[4];
    v22[5] = v23[5];
    v22[6] = v23[6];
    v22 += 8;
    v24 = v23[7];
    v23 += 8;
    *(v22 - 1) = v24;
    --v18;
  }
  while ( v18 );
  *v22 = *v23;
  v22[1] = v23[1];
  v22[2] = v23[2];
  v25 = v23[3];
  v26 = v67;
  v22[3] = v25;
  v27 = v5;
  do
  {
    v28 = v26[1];
    *v27 = *v26;
    v29 = v26[2];
    v27[1] = v28;
    v30 = v26[3];
    v27[2] = v29;
    v31 = v26[4];
    v27[3] = v30;
    v32 = v26[5];
    v27[4] = v31;
    v33 = v26[6];
    v27[5] = v32;
    v34 = v26[7];
    v26 += 8;
    v27[6] = v33;
    v27 += 8;
    *(v27 - 1) = v34;
    --v6;
  }
  while ( v6 );
  v35 = v26[1];
  *v27 = *v26;
  v36 = v26[2];
  v27[1] = v35;
  v37 = v26[3];
  v27[2] = v36;
  v27[3] = v37;
  v38 = *((_DWORD *)v8 + 292);
  v8[292] = v5[292];
  *((_DWORD *)v5 + 292) = v38;
  RtlInitializeBitMap((PRTL_BITMAP)(v8 + 166), (PULONG)v8 + 170, 0x40u);
  RtlInitializeBitMap((PRTL_BITMAP)(v5 + 166), (PULONG)v5 + 170, 0x40u);
  vSpCorrectHdevReferences((struct _SPRITESTATE *)v8, a1);
  vSpCorrectHdevReferences((struct _SPRITESTATE *)v5, v2);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v71, (struct PDEVOBJ *)&v69);
  MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v70, (struct PDEVOBJ *)&v68);
  v39 = *((_QWORD *)v8 + 140);
  *((_QWORD *)v8 + 140) = 0LL;
  *((_QWORD *)v8 + 139) = 0LL;
  *((_DWORD *)v8 + 271) = 0;
  if ( v39 )
  {
    do
    {
      v44 = *(_QWORD *)(v39 + 24);
      vSpDeleteSprite((struct SPRITE *)v39);
      v39 = v44;
    }
    while ( v44 );
  }
  v40 = *((_QWORD *)v5 + 140);
  *((_QWORD *)v5 + 140) = 0LL;
  *((_QWORD *)v5 + 139) = 0LL;
  *((_DWORD *)v5 + 271) = 0;
  if ( v40 )
  {
    do
    {
      v45 = *(_QWORD *)(v40 + 24);
      vSpDeleteSprite((struct SPRITE *)v40);
      v40 = v45;
    }
    while ( v45 );
  }
  v41 = (_DWORD)v69[10] & 0x20000;
  if ( v41 && ((_DWORD)v68[10] & 0x20000) != 0 )
  {
    v46 = *((_QWORD *)v8 + 9);
    if ( v46 )
    {
      do
      {
        v47 = *(_QWORD *)(v46 + 8);
        v48 = pSpTransferMetaSprite(v2, a1, (struct _METASPRITE *)v46);
        if ( v48 )
          *((_DWORD *)v48 + 4) |= 2u;
        v46 = v47;
      }
      while ( v47 );
    }
    v49 = *((_QWORD *)v5 + 9);
    if ( v49 )
    {
      do
      {
        v50 = *(_DWORD *)(v49 + 16);
        v51 = *(_QWORD *)(v49 + 8);
        if ( (v50 & 2) != 0 )
          *(_DWORD *)(v49 + 16) = v50 & 0xFFFFFFFD;
        else
          pSpTransferMetaSprite(a1, v2, (struct _METASPRITE *)v49);
        v49 = v51;
      }
      while ( v51 );
    }
LABEL_18:
    if ( ((_DWORD)v69[10] & 0x20000) != 0 )
      vFixupMetaSpriteList((struct PDEVOBJ *)&v69);
    if ( ((_DWORD)v68[10] & 0x20000) != 0 )
      vFixupMetaSpriteList((struct PDEVOBJ *)&v68);
    goto LABEL_22;
  }
  if ( !v41 && ((_DWORD)v68[10] & 0x20000) == 0 )
  {
    v42 = *((_QWORD *)v8 + 1);
    if ( v42 )
    {
      do
      {
        v52 = *(_QWORD *)(v42 + 24);
        v53 = pSpTransferSprite(v2, (struct SPRITE *)v42);
        if ( v53 )
          *(_DWORD *)v53 |= 2u;
        v42 = v52;
      }
      while ( v52 );
    }
    v43 = *((_QWORD *)v5 + 1);
    if ( v43 )
    {
      do
      {
        v54 = *(_QWORD *)(v43 + 24);
        if ( (*(_DWORD *)v43 & 2) != 0 )
          *(_DWORD *)v43 &= ~2u;
        else
          pSpTransferSprite(a1, (struct SPRITE *)v43);
        v43 = v54;
      }
      while ( v54 );
    }
    goto LABEL_18;
  }
  v55 = a1;
  if ( !v41 )
  {
    v55 = v2;
    v2 = a1;
  }
  v56 = 0LL;
  v57 = *((_DWORD *)v55 + 35);
  if ( !v57 )
  {
LABEL_53:
    v59 = *((_QWORD *)v2 + 11);
    if ( v59 )
    {
      do
      {
        v60 = *(_QWORD *)(v59 + 24);
        v61 = pSpConvertSpriteToMeta(v55, v2, (struct SPRITE *)v59);
        if ( v61 )
          *((_DWORD *)v61 + 4) |= 2u;
        v59 = v60;
      }
      while ( v60 );
    }
    v62 = *((_QWORD *)v55 + 19);
    if ( v62 )
    {
      do
      {
        v63 = *(_DWORD *)(v62 + 16);
        v64 = *(_QWORD *)(v62 + 8);
        if ( (v63 & 2) != 0 )
          *(_DWORD *)(v62 + 16) = v63 & 0xFFFFFFFD;
        else
          pSpConvertSpriteFromMeta(v2, v55, (struct _METASPRITE *)v62);
        v62 = v64;
      }
      while ( v64 );
    }
    goto LABEL_18;
  }
  v58 = (HDEV)*((_QWORD *)v55 + 18);
  while ( *((HDEV *)v58 + v56) != v55 )
  {
    v56 = (unsigned int)(v56 + 1);
    if ( (unsigned int)v56 >= v57 )
      goto LABEL_53;
  }
  *((_QWORD *)v58 + v56) = v2;
  v65 = *((_QWORD *)v55 + 19);
  if ( v65 )
  {
    do
    {
      v66 = *(_QWORD *)(v65 + 8);
      pSpMoveSpriteFromMeta(v58, v55, (struct _METASPRITE *)v65, v56);
      v65 = v66;
    }
    while ( v66 );
  }
LABEL_22:
  MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v70);
  MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS((MULTISPRITEDDIACCESS *)&v71);
}
