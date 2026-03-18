/*
 * XREFs of ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003E76C
 * Callers:
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C003E5EC (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00426D0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00C6000 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027B950 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027BF68 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C003D63C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C003E2CC (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0041334 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00F5428 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0161660 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0161A18 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0161B54 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C0161C70 (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0161CE8 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0282378 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall vSpRedrawSprite(struct SPRITE *a1)
{
  __int64 v1; // r14
  char v3; // dl
  unsigned int v4; // r13d
  LONG *v5; // rsi
  struct _SURFOBJ *Composite; // r12
  struct _SURFOBJ *v7; // rdx
  struct SPRITE *i; // rcx
  const struct _RECTL *v9; // rax
  struct _RECTL *v10; // rbx
  int v11; // r15d
  struct REGION *v12; // rbx
  __int128 v13; // xmm0
  struct _RECTL *v14; // r9
  LONG v15; // eax
  LONG v16; // eax
  LONG v17; // eax
  ULONG StartingIndex; // [rsp+48h] [rbp-C0h] BYREF
  struct _POINTL v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  struct _RECTL v23; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v24[4]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v25; // [rsp+8Ch] [rbp-7Ch]
  char v26; // [rsp+9Ch] [rbp-6Ch]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  __int64 v28; // [rsp+D8h] [rbp-30h]
  int v29; // [rsp+E0h] [rbp-28h]
  int v30; // [rsp+108h] [rbp+0h]
  __int64 v31; // [rsp+118h] [rbp+10h]
  _DWORD v32[84]; // [rsp+128h] [rbp+20h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  *(_QWORD *)&v23.left = 0LL;
  *(_QWORD *)&v23.right = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 40LL) & 0x400) == 0 && (*(_DWORD *)a1 & 0x400) == 0 && (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v4 = 0;
    if ( !(unsigned int)bIgnoreMirrorUpdate(a1) && ((v3 & 0x40) == 0 || (v3 & 0xC0) == 0xC0) )
    {
      v5 = (LONG *)((char *)a1 + 80);
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v1, (struct _RECTL *)a1 + 5, &StartingIndex);
      if ( Composite )
      {
        v7 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
        v19.x = -*v5;
        v19.y = -*((_DWORD *)a1 + 21);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v21, v7);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v20, Composite);
        INVOKEOFFCOPYBITS(
          &v19,
          Composite,
          (struct _POINTL *)a1 + 21,
          *((struct _SURFOBJ **)a1 + 20),
          0LL,
          0LL,
          (struct _RECTL *)a1 + 5,
          (struct _POINTL *)a1 + 10);
        if ( v20 )
          GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
        if ( v21 )
          GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
        for ( i = *(struct SPRITE **)(v1 + 8); ; i = *(struct SPRITE **)&v10[1].right )
        {
          v9 = (const struct _RECTL *)pSpFindInZ(i, (struct _RECTL *)a1 + 5);
          v10 = (struct _RECTL *)v9;
          if ( !v9 )
            break;
          if ( bIntersect(v9 + 5, (const struct _RECTL *)a1 + 5, &v23) )
            vSpComposite((struct SPRITE *)v10, &v19, Composite, &v23);
          SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)&v10[15].right);
        }
        v11 = 1;
        v12 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
        if ( !v12 )
        {
          if ( (*(_DWORD *)a1 & 0x40) == 0 )
            vSpWriteToScreen((struct _SPRITESTATE *)v1, &v19, Composite, (struct _RECTL *)a1 + 5);
          goto LABEL_42;
        }
        v28 = 0LL;
        v29 = 0;
        v30 = 1;
        v31 = 0LL;
        v27 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v24, v12, (struct SPRITE *)((char *)a1 + 80), 1);
        memset(v32, 0, 0x144uLL);
        if ( v26 )
        {
          if ( v26 != 1 )
          {
            if ( v26 != 3 )
            {
LABEL_41:
              vSpAddAndCompactDirtyRegion(a1, v12);
LABEL_42:
              if ( StartingIndex == -1 )
              {
                vSpDeleteSurface(Composite);
              }
              else
              {
                PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v22, (struct _EX_PUSH_LOCK *)(v1 + 688));
                RtlClearBits((PRTL_BITMAP)(v1 + 664), StartingIndex, 1u);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v22);
              }
              return;
            }
            XCLIPOBJ::cEnumStart((XCLIPOBJ *)v24, 0, 0, 4u, 0x14u);
LABEL_28:
            if ( !v11 )
              goto LABEL_30;
            do
            {
              v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)v24, 0x144u, v32, 0LL);
LABEL_30:
              if ( v32[0] )
              {
                do
                {
                  v14 = (struct _RECTL *)&v32[4 * v4 + 1];
                  if ( v14->left < *v5 )
                    v14->left = *v5;
                  v15 = *((_DWORD *)a1 + 22);
                  if ( v14->right > v15 )
                    v14->right = v15;
                  v16 = *((_DWORD *)a1 + 21);
                  if ( v14->top < v16 )
                    v14->top = v16;
                  v17 = *((_DWORD *)a1 + 23);
                  if ( v14->bottom > v17 )
                    v14->bottom = v17;
                  vSpWriteToScreen((struct _SPRITESTATE *)v1, &v19, Composite, v14);
                  ++v4;
                }
                while ( v4 < v32[0] );
              }
              v4 = 0;
            }
            while ( v11 );
            goto LABEL_41;
          }
          v13 = v25;
        }
        else
        {
          v13 = *(_OWORD *)v5;
        }
        *(_OWORD *)&v32[1] = v13;
        v32[0] = 1;
        v11 = 0;
        goto LABEL_28;
      }
    }
  }
}
