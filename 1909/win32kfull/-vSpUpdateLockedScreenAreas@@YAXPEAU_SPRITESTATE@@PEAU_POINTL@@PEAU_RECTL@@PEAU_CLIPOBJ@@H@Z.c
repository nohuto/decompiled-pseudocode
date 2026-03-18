/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0281034
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00676D0 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00828CC (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0085780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027CED0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0280A10 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0083694 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00853C4 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0087DDC (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0087E94 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0162C6C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1,
        struct _POINTL *a2,
        struct _RECTL *a3,
        struct _CLIPOBJ *a4,
        int a5)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  struct REGION *v11; // r14
  int v12; // eax
  struct SPRITE *v13; // rbx
  int v14; // r13d
  struct RGNOBJ *v15; // r10
  struct SPRITE *v16; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v22[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h] BYREF
  __int64 v24; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v25[96]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v26[24]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v27; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _RECTL v28; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _CLIPOBJ v29; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v30; // [rsp+218h] [rbp+118h]
  __int64 v31; // [rsp+230h] [rbp+130h]
  int v32; // [rsp+238h] [rbp+138h]
  int v33; // [rsp+260h] [rbp+160h]
  __int64 v34; // [rsp+270h] [rbp+170h]

  v33 = 1;
  v31 = 0LL;
  v32 = 0;
  v34 = 0LL;
  v30 = 0LL;
  *(_QWORD *)&v27.left = 0LL;
  *(_QWORD *)&v27.right = 0LL;
  *(_QWORD *)&v28.left = 0LL;
  *(_QWORD *)&v28.right = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v22);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v22);
  v23 = *(_QWORD *)a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v26, (struct PDEVOBJ *)&v23, v8);
  v11 = 0LL;
  if ( v17[0] && v22[0] && bIntersect(a3, (const struct _RECTL *)((char *)a1 + 40), &v28) )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v25, a1, &v28, 0, 0LL);
    do
    {
      v12 = ENUMAREAS::bEnum((ENUMAREAS *)v25, &v16, &v27);
      v13 = v16;
      v14 = v12;
      if ( v16 )
      {
        if ( !v11 )
        {
          if ( !a4
            || (v15 = (struct RGNOBJ *)((unsigned __int64)&a4[2].rclBounds.top & -(__int64)(a4 != 0LL)),
                !a4->iDComplexity) )
          {
            RGNOBJ::vSet((RGNOBJ *)v22, (struct _RECTL *)((char *)a1 + 40));
            v15 = (struct RGNOBJ *)v22;
          }
          v24 = *((_QWORD *)a1 + 129);
          if ( !RGNOBJ::bMerge((RGNOBJ *)v17, v15, (struct RGNOBJ *)&v24, BYTE4(gafjRgnOp)) )
            RGNOBJ::vSet((RGNOBJ *)v17);
          v11 = (struct REGION *)v17[0];
        }
        XCLIPOBJ::vSetup((XCLIPOBJ *)&v29, v11, (struct ERECTL *)&v27, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&v29.rclBounds) )
        {
          while ( 1 )
          {
            if ( a5 )
            {
              NEEDDDILOCK::vLock((NEEDDDILOCK *)&v19, *((struct _SURFOBJ **)a1 + 4));
              NEEDDDILOCK::vLock((NEEDDDILOCK *)&v18, *((struct _SURFOBJ **)v13 + 20));
              INVOKEOFFCOPYBITS(
                (struct _POINTL *)v13 + 21,
                *((struct _SURFOBJ **)v13 + 20),
                &gptlZero,
                *((struct _SURFOBJ **)a1 + 4),
                &v29,
                0LL,
                &v27,
                (struct _POINTL *)&v27);
              if ( v18 )
              {
                GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
                v18 = 0LL;
              }
              if ( v19 )
              {
                GreUnlockDisplayDevice(*(_QWORD *)(v19 + 48));
                v19 = 0LL;
              }
            }
            else
            {
              NEEDDDILOCK::vLock((NEEDDDILOCK *)&v21, *((struct _SURFOBJ **)v13 + 20));
              NEEDDDILOCK::vLock((NEEDDDILOCK *)&v20, *((struct _SURFOBJ **)a1 + 4));
              INVOKEOFFCOPYBITS(
                &gptlZero,
                *((struct _SURFOBJ **)a1 + 4),
                (struct _POINTL *)v13 + 21,
                *((struct _SURFOBJ **)v13 + 20),
                &v29,
                0LL,
                &v27,
                (struct _POINTL *)&v27);
              if ( v20 )
              {
                GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
                v20 = 0LL;
              }
              if ( !v21 )
                break;
              GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
              v21 = 0LL;
            }
            if ( !a5 || !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v25, &v16) )
              break;
            v13 = v16;
          }
        }
      }
    }
    while ( v14 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v25);
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v26, v9, v10);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v22);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
}
