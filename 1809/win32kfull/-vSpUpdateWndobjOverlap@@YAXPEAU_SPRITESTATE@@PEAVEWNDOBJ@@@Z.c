/*
 * XREFs of ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0268B40
 * Callers:
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C02662D4 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C026686C (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0267294 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0056B74 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?bSpSpriteOnTopOfWndObjInZ@@YAHPEAVSPRITE@@PEAVEWNDOBJ@@@Z @ 0x1C0264FB4 (-bSpSpriteOnTopOfWndObjInZ@@YAHPEAVSPRITE@@PEAVEWNDOBJ@@@Z.c)
 *     ?bSpWndObjTrackedSprite@@YAHPEAVSPRITE@@@Z @ 0x1C0265590 (-bSpWndObjTrackedSprite@@YAHPEAVSPRITE@@@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C0266958 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C026B16C (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 */

void __fastcall vSpUpdateWndobjOverlap(struct _SPRITESTATE *a1, struct EWNDOBJ *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 i; // rdi
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // esi
  int v14; // eax
  struct RGNOBJ *v15; // r8
  int v16; // eax
  unsigned int v17; // eax
  _QWORD v18[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-10h] BYREF
  struct _POINTL v21; // [rsp+90h] [rbp+40h] BYREF
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+58h] BYREF

  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a2 + 21) + 32LL);
    v5 = *(_QWORD *)(v4 + 48);
    if ( v5 )
    {
      if ( v4 == *(_QWORD *)(v5 + 2552) && v5 != *(_QWORD *)a1 )
        return;
    }
  }
  v22 = *((_QWORD *)a1 + 88);
  v24 = *((_QWORD *)a2 + 24);
  RGNOBJ::vSet((RGNOBJ *)&v22);
  for ( i = *((_QWORD *)a1 + 1); ; i = *(_QWORD *)(i + 24) )
  {
    if ( !i )
    {
      v16 = *((_DWORD *)a2 + 46);
      if ( (v16 & 0x2000000) != 0 )
      {
        v17 = v16 & 0xFDFFFFFF;
        *((_DWORD *)a2 + 46) = v17;
        if ( (v17 & 0x80u) != 0 )
        {
          v12 = 256LL;
          goto LABEL_47;
        }
      }
      goto LABEL_48;
    }
    if ( ((unsigned int)bIntersect((char *)a2 + 4, i + 80, v6, v7) || (*((_DWORD *)a2 + 46) & 0x200) != 0)
      && (RGNOBJ::bInside((struct EWNDOBJ *)((char *)a2 + 56), (struct _RECTL *)(i + 80)) == 2
       || (*((_DWORD *)a2 + 46) & 0x200) != 0 && v24 && RGNOBJ::bInside((RGNOBJ *)&v24, (struct _RECTL *)(i + 80)) == 2) )
    {
      break;
    }
LABEL_42:
    ;
  }
  v9 = *(_QWORD *)(i + 184);
  v10 = *((_DWORD *)a2 + 46);
  v23 = v9;
  if ( (v10 & 0x200) != 0 )
  {
    if ( (*(_DWORD *)i & 1) != 0
      || !*(_QWORD *)(i + 72)
      || (unsigned int)bSpWndObjTrackedSprite((struct SPRITE *)i)
      || !bSpSpriteOnTopOfWndObjInZ((struct SPRITE *)i, a2) )
    {
      goto LABEL_42;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v20);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v20);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
    if ( v19[0] && v20[0] && v18[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)v20, (struct _RECTL *)(i + 80));
      v13 = 1;
      if ( !v23 )
        goto LABEL_36;
      if ( RGNOBJ::bMerge((RGNOBJ *)v19, (struct RGNOBJ *)&v23, (struct RGNOBJ *)&v24, BYTE1(gafjRgnOp))
        && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v19) == 1
        || !RGNOBJ::bCopy((RGNOBJ *)v18, (struct RGNOBJ *)&v23)
        || (v21.x = -*(_DWORD *)(i + 80),
            v21.y = -*(_DWORD *)(i + 84),
            RGNOBJ::bOffset((RGNOBJ *)v18, &v21),
            vSpComputeClipEffective((struct SPRITE *)i, (struct RGNOBJ *)v18),
            (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v18) == 1) )
      {
        v13 = 0;
      }
      else
      {
        v21.x = -v21.x;
        v21.y = -v21.y;
        RGNOBJ::bOffset((RGNOBJ *)v18, &v21);
      }
      if ( !v23 )
      {
LABEL_36:
        v14 = 0;
        goto LABEL_37;
      }
      if ( v13 == 1 )
      {
        v14 = 1;
LABEL_37:
        v15 = (struct RGNOBJ *)v20;
        if ( v14 )
          v15 = (struct RGNOBJ *)v18;
        if ( RGNOBJ::bMerge((RGNOBJ *)v19, (struct RGNOBJ *)&v22, v15, BYTE2(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)v19, (struct RGNOBJ *)&v22);
          *((_QWORD *)a1 + 88) = v22;
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
    goto LABEL_42;
  }
  if ( !v9 )
    goto LABEL_16;
  if ( RGNOBJ::bInside((RGNOBJ *)&v23, (struct _RECTL *)((char *)a2 + 4)) != 2 )
    goto LABEL_42;
  v10 = *((_DWORD *)a2 + 46);
LABEL_16:
  if ( (v10 & 0x2000000) == 0 )
  {
    v11 = v10 | 0x2000000;
    *((_DWORD *)a2 + 46) = v11;
    if ( (v11 & 0x80u) != 0 )
    {
      v12 = 128LL;
LABEL_47:
      (*(void (__fastcall **)(struct EWNDOBJ *, __int64))(*((_QWORD *)a2 + 21) + 40LL))(a2, v12);
    }
  }
LABEL_48:
  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    vUpdateClientRgnOnSpriteOverlap(a2, (struct RGNOBJ *)&v22);
    *((_QWORD *)a1 + 88) = v22;
  }
}
