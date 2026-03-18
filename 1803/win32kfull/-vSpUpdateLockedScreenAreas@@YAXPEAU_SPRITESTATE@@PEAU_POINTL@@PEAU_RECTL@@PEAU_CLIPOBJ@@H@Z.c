/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02552B0
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00345A8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00E11F0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00FE1C0 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C024D080 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0254AB4 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C007A2B4 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C007A2EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C009F23C (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00E1924 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00E1960 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00E19E8 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C024CB88 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 */

void __fastcall vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1,
        struct _POINTL *a2,
        struct _RECTL *a3,
        struct _CLIPOBJ *a4,
        int a5)
{
  struct REGION *v8; // r12
  struct _RECTL *v9; // rdi
  int v10; // eax
  struct SPRITE *v11; // r14
  int v12; // ebx
  struct RGNOBJ *v13; // r10
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  int v21; // [rsp+40h] [rbp-C0h]
  struct SPRITE *v22; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v27[96]; // [rsp+80h] [rbp-80h] BYREF
  struct _SPRITESTATE *v28[24]; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v29; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v30; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _CLIPOBJ v31; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v32; // [rsp+1F8h] [rbp+F8h]
  __int64 v33; // [rsp+210h] [rbp+110h]
  int v34; // [rsp+218h] [rbp+118h]
  int v35; // [rsp+240h] [rbp+140h]
  __int64 v36; // [rsp+250h] [rbp+150h]

  v35 = 1;
  v33 = 0LL;
  v34 = 0;
  v36 = 0LL;
  v32 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v23);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v23);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v24);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v24);
  v25 = *(_QWORD *)a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v28, (struct PDEVOBJ *)&v25);
  v8 = 0LL;
  if ( v23[0] )
  {
    if ( v24[0] )
    {
      v9 = (struct _RECTL *)((char *)a1 + 40);
      if ( bIntersect(a3, (const struct _RECTL *)((char *)a1 + 40), &v30) )
      {
        ENUMAREAS::ENUMAREAS((ENUMAREAS *)v27, a1, &v30, 0, 0LL);
        do
        {
          v10 = ENUMAREAS::bEnum((ENUMAREAS *)v27, &v22, &v29);
          v11 = v22;
          v12 = v10;
          v21 = v10;
          if ( v22 )
          {
            if ( !v8 )
            {
              if ( !a4
                || (v13 = (struct RGNOBJ *)((unsigned __int64)&a4[2].rclBounds.top & -(__int64)(a4 != 0LL)),
                    !a4->iDComplexity) )
              {
                RGNOBJ::vSet((RGNOBJ *)v24, v9);
                v13 = (struct RGNOBJ *)v24;
              }
              v26 = *((_QWORD *)a1 + 129);
              if ( !RGNOBJ::bMerge((RGNOBJ *)v23, v13, (struct RGNOBJ *)&v26, BYTE4(gafjRgnOp)) )
                RGNOBJ::vSet((RGNOBJ *)v23);
              v8 = (struct REGION *)v23[0];
            }
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v31, v8, (struct ERECTL *)&v29, 0);
            if ( !ERECTL::bEmpty((ERECTL *)&v31.rclBounds) )
            {
              while ( 1 )
              {
                v14 = 0LL;
                if ( !a5 )
                  break;
                v15 = *((_QWORD *)a1 + 4);
                if ( v15
                  && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 112) & 0x4000) != 0
                   || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) < 0)
                  && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 0x200) == 0 )
                {
                  v14 = SURFOBJ_TO_SURFACE_NOT_NULL(v15);
                  GreLockDisplayDevice(*(_QWORD *)(v14 + 48));
                }
                v16 = *((_QWORD *)v11 + 20);
                v17 = 0LL;
                if ( v16
                  && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v11 + 20)) + 112) & 0x4000) != 0
                   || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) < 0)
                  && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x200) == 0 )
                {
                  v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
                  GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
                }
                INVOKEOFFCOPYBITS(
                  (struct _POINTL *)v11 + 21,
                  *((struct _SURFOBJ **)v11 + 20),
                  &gptlZero,
                  *((struct _SURFOBJ **)a1 + 4),
                  &v31,
                  0LL,
                  &v29,
                  (struct _POINTL *)&v29);
                if ( v17 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
                if ( v14 )
                  goto LABEL_42;
LABEL_43:
                if ( !a5 || !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v27, &v22) )
                  goto LABEL_46;
                v11 = v22;
              }
              v18 = *((_QWORD *)v11 + 20);
              if ( v18
                && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v11 + 20)) + 112) & 0x4000) != 0
                 || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) < 0)
                && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x200) == 0 )
              {
                v14 = SURFOBJ_TO_SURFACE_NOT_NULL(v18);
                GreLockDisplayDevice(*(_QWORD *)(v14 + 48));
              }
              v19 = *((_QWORD *)a1 + 4);
              v20 = 0LL;
              if ( v19
                && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4)) + 112) & 0x4000) != 0
                 || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) < 0)
                && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) & 0x200) == 0 )
              {
                v20 = SURFOBJ_TO_SURFACE_NOT_NULL(v19);
                GreLockDisplayDevice(*(_QWORD *)(v20 + 48));
              }
              INVOKEOFFCOPYBITS(
                &gptlZero,
                *((struct _SURFOBJ **)a1 + 4),
                (struct _POINTL *)v11 + 21,
                *((struct _SURFOBJ **)v11 + 20),
                &v31,
                0LL,
                &v29,
                (struct _POINTL *)&v29);
              if ( v20 )
                GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
              if ( !v14 )
              {
LABEL_46:
                v12 = v21;
                v9 = (struct _RECTL *)((char *)a1 + 40);
                continue;
              }
LABEL_42:
              GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
              goto LABEL_43;
            }
          }
        }
        while ( v12 );
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v27);
      }
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v28);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v23);
}
