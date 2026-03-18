/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02816F4
 * Callers:
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C003E80C (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00416F0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00C6000 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D590 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C02810D0 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C003F604 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0041334 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0043DD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0043E90 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EE7C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0161C9C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1,
        struct _POINTL *a2,
        struct _RECTL *a3,
        struct _CLIPOBJ *a4,
        int a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct REGION *v13; // r14
  int v14; // eax
  struct SPRITE *v15; // rbx
  int v16; // r13d
  struct RGNOBJ *v17; // r10
  struct SPRITE *v18; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v24[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v27[96]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v28[24]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v29; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _RECTL v30; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _CLIPOBJ v31; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v32; // [rsp+218h] [rbp+118h]
  __int64 v33; // [rsp+230h] [rbp+130h]
  int v34; // [rsp+238h] [rbp+138h]
  int v35; // [rsp+260h] [rbp+160h]
  __int64 v36; // [rsp+270h] [rbp+170h]

  v35 = 1;
  v33 = 0LL;
  v34 = 0;
  v36 = 0LL;
  v32 = 0LL;
  *(_QWORD *)&v29.left = 0LL;
  *(_QWORD *)&v29.right = 0LL;
  *(_QWORD *)&v30.left = 0LL;
  *(_QWORD *)&v30.right = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v24);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v24);
  v25 = *(_QWORD *)a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v28, (struct PDEVOBJ *)&v25, v8, v9);
  v13 = 0LL;
  if ( v19[0] && v24[0] && bIntersect(a3, (const struct _RECTL *)((char *)a1 + 40), &v30) )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v27, a1, &v30, 0, 0LL);
    do
    {
      v14 = ENUMAREAS::bEnum((ENUMAREAS *)v27, &v18, &v29);
      v15 = v18;
      v16 = v14;
      if ( v18 )
      {
        if ( !v13 )
        {
          if ( !a4
            || (v17 = (struct RGNOBJ *)((unsigned __int64)&a4[2].rclBounds.top & -(__int64)(a4 != 0LL)),
                !a4->iDComplexity) )
          {
            RGNOBJ::vSet((RGNOBJ *)v24, (struct _RECTL *)((char *)a1 + 40));
            v17 = (struct RGNOBJ *)v24;
          }
          v26 = *((_QWORD *)a1 + 129);
          if ( !RGNOBJ::bMerge((RGNOBJ *)v19, v17, (struct RGNOBJ *)&v26, BYTE4(gafjRgnOp)) )
            RGNOBJ::vSet((RGNOBJ *)v19);
          v13 = (struct REGION *)v19[0];
        }
        XCLIPOBJ::vSetup((XCLIPOBJ *)&v31, v13, (struct ERECTL *)&v29, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&v31.rclBounds) )
        {
          while ( 1 )
          {
            if ( a5 )
            {
              NEEDDDILOCK::vLock((NEEDDDILOCK *)&v21, *((struct _SURFOBJ **)a1 + 4));
              NEEDDDILOCK::vLock((NEEDDDILOCK *)&v20, *((struct _SURFOBJ **)v15 + 20));
              INVOKEOFFCOPYBITS(
                (struct _POINTL *)v15 + 21,
                *((struct _SURFOBJ **)v15 + 20),
                &gptlZero,
                *((struct _SURFOBJ **)a1 + 4),
                &v31,
                0LL,
                &v29,
                (struct _POINTL *)&v29);
              if ( v20 )
              {
                GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
                v20 = 0LL;
              }
              if ( v21 )
              {
                GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
                v21 = 0LL;
              }
            }
            else
            {
              NEEDDDILOCK::vLock((NEEDDDILOCK *)&v23, *((struct _SURFOBJ **)v15 + 20));
              NEEDDDILOCK::vLock((NEEDDDILOCK *)&v22, *((struct _SURFOBJ **)a1 + 4));
              INVOKEOFFCOPYBITS(
                &gptlZero,
                *((struct _SURFOBJ **)a1 + 4),
                (struct _POINTL *)v15 + 21,
                *((struct _SURFOBJ **)v15 + 20),
                &v31,
                0LL,
                &v29,
                (struct _POINTL *)&v29);
              if ( v22 )
              {
                GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
                v22 = 0LL;
              }
              if ( !v23 )
                break;
              GreUnlockDisplayDevice(*(_QWORD *)(v23 + 48));
              v23 = 0LL;
            }
            if ( !a5 || !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v27, &v18) )
              break;
            v15 = v18;
          }
        }
      }
    }
    while ( v16 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v27);
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v28, v10, v11, v12);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
}
