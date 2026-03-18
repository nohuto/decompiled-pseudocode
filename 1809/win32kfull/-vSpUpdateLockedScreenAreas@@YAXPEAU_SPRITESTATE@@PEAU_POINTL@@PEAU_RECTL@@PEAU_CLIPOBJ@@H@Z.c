/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0268558
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C003D974 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C0096C58 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00F4190 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02643D0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0267F5C (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00F4C00 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00F52A0 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00F52F8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00F5380 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0159B74 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1,
        struct _POINTL *a2,
        struct _RECTL *a3,
        struct _CLIPOBJ *a4,
        int a5)
{
  __int64 v8; // rdx
  struct REGION *v9; // r14
  int v10; // eax
  struct SPRITE *v11; // rbx
  int v12; // r13d
  struct RGNOBJ *v13; // r10
  struct SPRITE *v14; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v20[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v21; // [rsp+88h] [rbp-78h] BYREF
  __int64 v22; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[96]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v24[24]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v25; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _RECTL v26; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _CLIPOBJ v27; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v28; // [rsp+218h] [rbp+118h]
  __int64 v29; // [rsp+230h] [rbp+130h]
  int v30; // [rsp+238h] [rbp+138h]
  int v31; // [rsp+260h] [rbp+160h]
  __int64 v32; // [rsp+270h] [rbp+170h]

  v29 = 0LL;
  v30 = 0;
  v32 = 0LL;
  v28 = 0LL;
  v31 = 1;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v15);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v15);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v20);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v20);
  v21 = *(_QWORD *)a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v24, (struct PDEVOBJ *)&v21);
  v9 = 0LL;
  if ( v15[0] && v20[0] && bIntersect(a3, (const struct _RECTL *)((char *)a1 + 40), &v26) )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v23, a1, &v26, 0, 0LL);
    do
    {
      v10 = ENUMAREAS::bEnum((ENUMAREAS *)v23, &v14, &v25);
      v11 = v14;
      v12 = v10;
      if ( v14 )
      {
        if ( !v9 )
        {
          if ( !a4
            || (v13 = (struct RGNOBJ *)((unsigned __int64)&a4[2].rclBounds.top & -(__int64)(a4 != 0LL)),
                !a4->iDComplexity) )
          {
            RGNOBJ::vSet((RGNOBJ *)v20, (struct _RECTL *)((char *)a1 + 40));
            v13 = (struct RGNOBJ *)v20;
          }
          v22 = *((_QWORD *)a1 + 129);
          if ( !RGNOBJ::bMerge((RGNOBJ *)v15, v13, (struct RGNOBJ *)&v22, BYTE4(gafjRgnOp)) )
            RGNOBJ::vSet((RGNOBJ *)v15);
          v9 = (struct REGION *)v15[0];
        }
        XCLIPOBJ::vSetup((XCLIPOBJ *)&v27, v9, (struct ERECTL *)&v25, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&v27.rclBounds) )
        {
          while ( 1 )
          {
            if ( a5 )
            {
              NEEDDDILOCK::vLock((NEEDDDILOCK *)&v17, *((struct _SURFOBJ **)a1 + 4));
              NEEDDDILOCK::vLock((NEEDDDILOCK *)&v16, *((struct _SURFOBJ **)v11 + 20));
              INVOKEOFFCOPYBITS(
                (struct _POINTL *)v11 + 21,
                *((struct _SURFOBJ **)v11 + 20),
                &gptlZero,
                *((struct _SURFOBJ **)a1 + 4),
                &v27,
                0LL,
                &v25,
                (struct _POINTL *)&v25);
              if ( v16 )
              {
                GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
                v16 = 0LL;
              }
              if ( v17 )
              {
                GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
                v17 = 0LL;
              }
            }
            else
            {
              NEEDDDILOCK::vLock((NEEDDDILOCK *)&v19, *((struct _SURFOBJ **)v11 + 20));
              NEEDDDILOCK::vLock((NEEDDDILOCK *)&v18, *((struct _SURFOBJ **)a1 + 4));
              INVOKEOFFCOPYBITS(
                &gptlZero,
                *((struct _SURFOBJ **)a1 + 4),
                (struct _POINTL *)v11 + 21,
                *((struct _SURFOBJ **)v11 + 20),
                &v27,
                0LL,
                &v25,
                (struct _POINTL *)&v25);
              if ( v18 )
              {
                GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
                v18 = 0LL;
              }
              if ( !v19 )
                break;
              GreUnlockDisplayDevice(*(_QWORD *)(v19 + 48));
              v19 = 0LL;
            }
            if ( !a5 || !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v23, &v14) )
              break;
            v11 = v14;
          }
        }
      }
    }
    while ( v12 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v23);
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v24, v8);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
}
