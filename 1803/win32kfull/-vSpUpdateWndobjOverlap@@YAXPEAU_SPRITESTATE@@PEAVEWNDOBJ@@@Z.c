/*
 * XREFs of ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0255944
 * Callers:
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0251108 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C0251A34 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02533B0 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0078C9C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?bSpSpriteOnTopOfWndObjInZ@@YAHPEAVSPRITE@@PEAVEWNDOBJ@@@Z @ 0x1C024E168 (-bSpSpriteOnTopOfWndObjInZ@@YAHPEAVSPRITE@@PEAVEWNDOBJ@@@Z.c)
 *     ?bSpWndObjTrackedSprite@@YAHPEAVSPRITE@@@Z @ 0x1C024FD94 (-bSpWndObjTrackedSprite@@YAHPEAVSPRITE@@@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C02528B8 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C0258000 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 */

void __fastcall vSpUpdateWndobjOverlap(struct _SPRITESTATE *a1, struct EWNDOBJ *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 i; // rdi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  int v11; // esi
  int v12; // eax
  struct RGNOBJ *v13; // r8
  int v14; // eax
  unsigned int v15; // eax
  _QWORD v16[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-10h] BYREF
  struct _POINTL v19; // [rsp+90h] [rbp+40h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+58h] BYREF

  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a2 + 21) + 32LL);
    v5 = *(_QWORD *)(v4 + 48);
    if ( v5 )
    {
      if ( v4 == *(_QWORD *)(v5 + 2544) && v5 != *(_QWORD *)a1 )
        return;
    }
  }
  v20 = *((_QWORD *)a1 + 88);
  v22 = *((_QWORD *)a2 + 24);
  RGNOBJ::vSet((RGNOBJ *)&v20);
  for ( i = *((_QWORD *)a1 + 1); ; i = *(_QWORD *)(i + 24) )
  {
    if ( !i )
    {
      v14 = *((_DWORD *)a2 + 46);
      if ( (v14 & 0x2000000) != 0 )
      {
        v15 = v14 & 0xFDFFFFFF;
        *((_DWORD *)a2 + 46) = v15;
        if ( (v15 & 0x80u) != 0 )
        {
          v10 = 256LL;
          goto LABEL_47;
        }
      }
      goto LABEL_48;
    }
    if ( ((unsigned int)bIntersect((char *)a2 + 4, i + 80) || (*((_DWORD *)a2 + 46) & 0x200) != 0)
      && (RGNOBJ::bInside((struct EWNDOBJ *)((char *)a2 + 56), (struct _RECTL *)(i + 80)) == 2
       || (*((_DWORD *)a2 + 46) & 0x200) != 0 && v22 && RGNOBJ::bInside((RGNOBJ *)&v22, (struct _RECTL *)(i + 80)) == 2) )
    {
      break;
    }
LABEL_42:
    ;
  }
  v7 = *(_QWORD *)(i + 184);
  v8 = *((_DWORD *)a2 + 46);
  v21 = v7;
  if ( (v8 & 0x200) != 0 )
  {
    if ( (*(_DWORD *)i & 1) != 0
      || !*(_QWORD *)(i + 72)
      || (unsigned int)bSpWndObjTrackedSprite((struct SPRITE *)i)
      || !bSpSpriteOnTopOfWndObjInZ((struct SPRITE *)i, a2) )
    {
      goto LABEL_42;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v16);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v16);
    if ( v17[0] && v18[0] && v16[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)v18, (struct _RECTL *)(i + 80));
      v11 = 1;
      if ( !v21 )
        goto LABEL_36;
      if ( RGNOBJ::bMerge((RGNOBJ *)v17, (struct RGNOBJ *)&v21, (struct RGNOBJ *)&v22, BYTE1(gafjRgnOp))
        && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v17) == 1
        || !RGNOBJ::bCopy((RGNOBJ *)v16, (struct RGNOBJ *)&v21)
        || (v19.x = -*(_DWORD *)(i + 80),
            v19.y = -*(_DWORD *)(i + 84),
            RGNOBJ::bOffset((RGNOBJ *)v16, &v19),
            vSpComputeClipEffective((struct SPRITE *)i, (struct RGNOBJ *)v16),
            (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v16) == 1) )
      {
        v11 = 0;
      }
      else
      {
        v19.x = -v19.x;
        v19.y = -v19.y;
        RGNOBJ::bOffset((RGNOBJ *)v16, &v19);
      }
      if ( !v21 )
      {
LABEL_36:
        v12 = 0;
        goto LABEL_37;
      }
      if ( v11 == 1 )
      {
        v12 = 1;
LABEL_37:
        v13 = (struct RGNOBJ *)v18;
        if ( v12 )
          v13 = (struct RGNOBJ *)v16;
        if ( RGNOBJ::bMerge((RGNOBJ *)v17, (struct RGNOBJ *)&v20, v13, BYTE2(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)v17, (struct RGNOBJ *)&v20);
          *((_QWORD *)a1 + 88) = v20;
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
    goto LABEL_42;
  }
  if ( !v7 )
    goto LABEL_16;
  if ( RGNOBJ::bInside((RGNOBJ *)&v21, (struct _RECTL *)((char *)a2 + 4)) != 2 )
    goto LABEL_42;
  v8 = *((_DWORD *)a2 + 46);
LABEL_16:
  if ( (v8 & 0x2000000) == 0 )
  {
    v9 = v8 | 0x2000000;
    *((_DWORD *)a2 + 46) = v9;
    if ( (v9 & 0x80u) != 0 )
    {
      v10 = 128LL;
LABEL_47:
      (*(void (__fastcall **)(struct EWNDOBJ *, __int64))(*((_QWORD *)a2 + 21) + 40LL))(a2, v10);
    }
  }
LABEL_48:
  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    vUpdateClientRgnOnSpriteOverlap(a2, (struct RGNOBJ *)&v20);
    *((_QWORD *)a1 + 88) = v20;
  }
}
