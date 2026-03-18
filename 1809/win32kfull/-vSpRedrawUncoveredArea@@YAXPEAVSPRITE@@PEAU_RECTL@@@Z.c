/*
 * XREFs of ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0267F5C
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00958D4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C000B37C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00F4C00 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C0132C40 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0159A60 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0159BC0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C015A068 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C02655E4 (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C02662D4 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0268558 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0269090 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C02691C0 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall vSpRedrawUncoveredArea(struct SPRITE *a1, struct _RECTL *a2)
{
  __int64 v2; // rsi
  struct _RECTL *v4; // r15
  unsigned int v5; // eax
  __int64 v6; // rbx
  LONG x; // r12d
  struct _POINTL *v8; // rdx
  struct _SURFOBJ *Composite; // r13
  struct _RECTL *v10; // r14
  __int64 v11; // r12
  struct SPRITE *v12; // rcx
  struct SPRITE *v13; // r14
  const struct _RECTL *v14; // rcx
  __int64 v15; // rsi
  struct _RECTL *v16; // r15
  struct _RECTL *v17; // r12
  __int64 v18; // rsi
  struct SPRITE *v19; // r14
  struct _RECTL *v20; // rdi
  struct _RECTL *v21; // r15
  struct _POINTL v22; // [rsp+40h] [rbp-89h] BYREF
  ULONG StartingIndex; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v24; // [rsp+4Ch] [rbp-7Dh]
  __int64 v25; // [rsp+50h] [rbp-79h] BYREF
  __int64 v26; // [rsp+58h] [rbp-71h] BYREF
  __int64 v27; // [rsp+60h] [rbp-69h] BYREF
  __int64 v28; // [rsp+68h] [rbp-61h]
  __int64 v29; // [rsp+70h] [rbp-59h]
  struct SPRITE *v30; // [rsp+78h] [rbp-51h] BYREF
  int v31; // [rsp+80h] [rbp-49h]
  struct _RECTL *v32; // [rsp+88h] [rbp-41h]
  struct _RECTL v33; // [rsp+90h] [rbp-39h] BYREF
  struct _RECTL v34; // [rsp+A0h] [rbp-29h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v25 = v2;
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 40LL) & 0x400) == 0 )
  {
    v4 = (struct _RECTL *)((char *)a1 + 80);
    v5 = cSpSubtract((const struct _RECTL *)a1 + 5, a2, &v34);
    v6 = v5;
    v24 = v5;
    if ( v5 )
    {
      x = 0;
      v22.x = 0;
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v2, v4, &StartingIndex);
      if ( Composite )
      {
        if ( *(_QWORD *)(v2 + 1032) && (_DWORD)v6 )
        {
          v10 = &v34;
          v11 = (unsigned int)v6;
          do
          {
            vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, v8, v10++, 0LL, 1);
            --v11;
          }
          while ( v11 );
          x = v22.x;
        }
        v12 = *(struct SPRITE **)(v2 + 8);
        v22.x = -v4->left;
        v22.y = -*((_DWORD *)a1 + 21);
        v13 = pSpFindInZ(v12, v4);
        if ( v13 )
        {
          do
          {
            if ( v13 != a1 && (_DWORD)v6 )
            {
              v14 = (const struct _RECTL *)((char *)v13 + 80);
              v15 = (unsigned int)v6;
              v16 = &v34;
              v28 = (unsigned int)v6;
              v6 = (unsigned int)v6;
              v29 = (unsigned int)v6;
              do
              {
                if ( bIntersect(v16, v14, &v33) )
                {
                  if ( !x )
                  {
                    v17 = &v34;
                    v18 = v6;
                    do
                    {
                      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v27, *((struct _SURFOBJ **)a1 + 20));
                      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v26, Composite);
                      INVOKEOFFCOPYBITS(
                        &v22,
                        Composite,
                        (struct _POINTL *)a1 + 21,
                        *((struct _SURFOBJ **)a1 + 20),
                        0LL,
                        0LL,
                        v17,
                        (struct _POINTL *)v17);
                      if ( v26 )
                      {
                        GreUnlockDisplayDevice(*(_QWORD *)(v26 + 48));
                        v26 = 0LL;
                      }
                      if ( v27 )
                      {
                        GreUnlockDisplayDevice(*(_QWORD *)(v27 + 48));
                        v27 = 0LL;
                      }
                      ++v17;
                      --v18;
                    }
                    while ( v18 );
                    v6 = v28;
                    x = 1;
                    v15 = v29;
                  }
                  vSpComposite(v13, &v22, Composite, &v33);
                }
                ++v16;
                v14 = (const struct _RECTL *)((char *)v13 + 80);
                v29 = --v15;
              }
              while ( v15 );
              v6 = v24;
              v4 = (struct _RECTL *)((char *)a1 + 80);
            }
            SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v13 + 248));
            v13 = pSpFindInZ(*((struct SPRITE **)v13 + 3), v4);
          }
          while ( v13 );
          v2 = v25;
        }
        v19 = 0LL;
        v31 = 0;
        v30 = 0LL;
        if ( *((_QWORD *)a1 + 9) )
        {
          v30 = a1;
          v32 = &v34;
          v19 = a1;
          v31 = v6;
          UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v30);
        }
        if ( (_DWORD)v6 )
        {
          if ( x )
          {
            v20 = &v34;
            do
            {
              vSpWriteToScreen((struct _SPRITESTATE *)v2, &v22, Composite, v20++);
              --v6;
            }
            while ( v6 );
          }
          else
          {
            v21 = &v34;
            do
            {
              vSpWriteToScreen(
                (struct _SPRITESTATE *)v2,
                (struct _POINTL *)a1 + 21,
                *((struct _SURFOBJ **)a1 + 20),
                v21++);
              --v6;
            }
            while ( v6 );
          }
        }
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v25, (struct _EX_PUSH_LOCK *)(v2 + 688));
          RtlClearBits((PRTL_BITMAP)(v2 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v25);
        }
        if ( v19 )
          UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v30);
      }
    }
  }
}
