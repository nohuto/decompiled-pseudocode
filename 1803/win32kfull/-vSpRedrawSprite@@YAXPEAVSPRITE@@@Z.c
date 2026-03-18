/*
 * XREFs of ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0254700
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00345A8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C024A74C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C024AD60 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C024F70C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C0255FD4 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C009F23C (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C00E59EC (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010505C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0138EB8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C024CC0C (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0250EEC (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0251474 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0251B08 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0255E1C (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpRedrawSprite(struct SPRITE *a1)
{
  __int64 v1; // r12
  char v3; // dl
  unsigned int v4; // r13d
  LONG *v5; // r14
  struct _SURFOBJ *Composite; // r15
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbx
  struct SPRITE *i; // rcx
  const struct _RECTL *v11; // rax
  struct _RECTL *v12; // rbx
  int v13; // edi
  struct REGION *v14; // rbx
  __int128 v15; // xmm0
  struct _RECTL *v16; // r9
  LONG v17; // eax
  LONG v18; // eax
  LONG v19; // eax
  ULONG StartingIndex; // [rsp+48h] [rbp-C0h] BYREF
  struct _POINTL v21; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v22[8]; // [rsp+58h] [rbp-B0h] BYREF
  struct _RECTL v23; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v24[20]; // [rsp+78h] [rbp-90h] BYREF
  char v25; // [rsp+8Ch] [rbp-7Ch]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  __int64 v27; // [rsp+C8h] [rbp-40h]
  int v28; // [rsp+D0h] [rbp-38h]
  int v29; // [rsp+F8h] [rbp-10h]
  __int64 v30; // [rsp+108h] [rbp+0h]
  unsigned int v31; // [rsp+118h] [rbp+10h] BYREF
  _OWORD v32[20]; // [rsp+11Ch] [rbp+14h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 40LL) & 0x400) == 0 && (*(_DWORD *)a1 & 0x400) == 0 && (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v4 = 0;
    if ( !(unsigned int)bIgnoreMirrorUpdate(a1) && ((v3 & 0x40) == 0 || (v3 & 0xC0) == 0xC0) )
    {
      v5 = (LONG *)((char *)a1 + 80);
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v1, (struct _RECTL *)a1 + 5, &StartingIndex);
      if ( Composite )
      {
        v7 = 0LL;
        v8 = *((_QWORD *)a1 + 20);
        v21.x = -*v5;
        v21.y = -*((_DWORD *)a1 + 21);
        if ( v8
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v8) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v8) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v8) + 112) & 0x200) == 0 )
        {
          v7 = SURFOBJ_TO_SURFACE_NOT_NULL(v8);
          GreLockDisplayDevice(*(_QWORD *)(v7 + 48));
        }
        v9 = 0LL;
        if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x200) == 0 )
        {
          v9 = SURFOBJ_TO_SURFACE_NOT_NULL(Composite);
          GreLockDisplayDevice(*(_QWORD *)(v9 + 48));
        }
        INVOKEOFFCOPYBITS(
          &v21,
          Composite,
          (struct _POINTL *)a1 + 21,
          *((struct _SURFOBJ **)a1 + 20),
          0LL,
          0LL,
          (struct _RECTL *)a1 + 5,
          (struct _POINTL *)a1 + 10);
        if ( v9 )
          GreUnlockDisplayDevice(*(_QWORD *)(v9 + 48));
        if ( v7 )
          GreUnlockDisplayDevice(*(_QWORD *)(v7 + 48));
        for ( i = *(struct SPRITE **)(v1 + 8); ; i = *(struct SPRITE **)&v12[1].right )
        {
          v11 = (const struct _RECTL *)pSpFindInZ(i, (struct _RECTL *)a1 + 5);
          v12 = (struct _RECTL *)v11;
          if ( !v11 )
            break;
          if ( bIntersect(v11 + 5, (const struct _RECTL *)a1 + 5, &v23) )
            vSpComposite((struct SPRITE *)v12, &v21, Composite, &v23);
          SINGLEREADERLOCK::vUnlock((struct _KMUTANT **)&v12[15].right);
        }
        v13 = 1;
        v14 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
        if ( !v14 )
        {
          if ( (*(_DWORD *)a1 & 0x40) == 0 )
            vSpWriteToScreen((struct _SPRITESTATE *)v1, &v21, Composite, (struct _RECTL *)a1 + 5);
          goto LABEL_50;
        }
        v27 = 0LL;
        v28 = 0;
        v29 = 1;
        v30 = 0LL;
        v26 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v24, v14, (struct SPRITE *)((char *)a1 + 80), 1);
        if ( v25 )
        {
          if ( v25 != 1 )
          {
            if ( v25 != 3 )
            {
LABEL_49:
              vSpAddAndCompactDirtyRegion(a1, v14);
LABEL_50:
              if ( StartingIndex == -1 )
              {
                vSpDeleteSurface(Composite);
              }
              else
              {
                CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v22, (struct _EX_PUSH_LOCK *)(v1 + 688));
                RtlClearBits((PRTL_BITMAP)(v1 + 664), StartingIndex, 1u);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v22);
              }
              return;
            }
            XCLIPOBJ::cEnumStart((XCLIPOBJ *)v24, 0, 0, 4u, 0x14u);
LABEL_36:
            if ( !v13 )
              goto LABEL_38;
            do
            {
              v13 = XCLIPOBJ::bEnum((XCLIPOBJ *)v24, 0x144u, (char *)&v31, 0LL);
LABEL_38:
              if ( v31 )
              {
                do
                {
                  v16 = (struct _RECTL *)&v32[v4];
                  if ( v16->left < *v5 )
                    v16->left = *v5;
                  v17 = *((_DWORD *)a1 + 22);
                  if ( v16->right > v17 )
                    v16->right = v17;
                  v18 = *((_DWORD *)a1 + 21);
                  if ( v16->top < v18 )
                    v16->top = v18;
                  v19 = *((_DWORD *)a1 + 23);
                  if ( v16->bottom > v19 )
                    v16->bottom = v19;
                  vSpWriteToScreen((struct _SPRITESTATE *)v1, &v21, Composite, v16);
                  ++v4;
                }
                while ( v4 < v31 );
              }
              v4 = 0;
            }
            while ( v13 );
            goto LABEL_49;
          }
          v15 = *(_OWORD *)&v24[4];
        }
        else
        {
          v15 = *(_OWORD *)v5;
        }
        v32[0] = v15;
        v31 = 1;
        v13 = 0;
        goto LABEL_36;
      }
    }
  }
}
