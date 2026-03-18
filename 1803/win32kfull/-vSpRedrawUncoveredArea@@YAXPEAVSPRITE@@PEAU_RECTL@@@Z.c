/*
 * XREFs of ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0254AB4
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C009F23C (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C00E59EC (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010505C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0138EB8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C024FDE8 (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0250EEC (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0251108 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0251B08 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02552B0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0255E1C (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0256138 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 */

void __fastcall vSpRedrawUncoveredArea(struct SPRITE *a1, struct _RECTL *a2)
{
  __int64 v2; // r15
  struct _RECTL *v4; // r13
  unsigned int v5; // eax
  __int64 v6; // r14
  LONG x; // edi
  struct _POINTL *v8; // rdx
  struct _SURFOBJ *Composite; // r12
  struct _RECTL *v10; // rbx
  __int64 v11; // rdi
  struct SPRITE *v12; // rcx
  struct SPRITE *v13; // r13
  struct _RECTL *v14; // r15
  struct _RECTL *v15; // rbx
  __int64 v16; // r15
  const struct _RECTL *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rbx
  struct SPRITE *v21; // rbx
  bool v22; // zf
  struct _RECTL *v23; // rdi
  __int64 v24; // rsi
  struct _POINTL v25; // [rsp+40h] [rbp-99h] BYREF
  ULONG StartingIndex; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-8Dh]
  struct _RECTL *v28; // [rsp+50h] [rbp-89h]
  _BYTE v29[8]; // [rsp+58h] [rbp-81h] BYREF
  __int64 v30; // [rsp+60h] [rbp-79h]
  __int64 v31; // [rsp+68h] [rbp-71h]
  struct _RECTL *v32; // [rsp+70h] [rbp-69h]
  struct SPRITE *v33; // [rsp+78h] [rbp-61h] BYREF
  int v34; // [rsp+80h] [rbp-59h]
  struct _RECTL *v35; // [rsp+88h] [rbp-51h]
  __int64 v36; // [rsp+90h] [rbp-49h]
  struct _RECTL v37; // [rsp+98h] [rbp-41h] BYREF
  struct _RECTL v38; // [rsp+B0h] [rbp-29h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v36 = v2;
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 40LL) & 0x400) == 0 )
  {
    v4 = (struct _RECTL *)((char *)a1 + 80);
    v5 = cSpSubtract((const struct _RECTL *)a1 + 5, a2, &v38);
    v6 = v5;
    v27 = v5;
    if ( v5 )
    {
      x = 0;
      v25.x = 0;
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v2, v4, &StartingIndex);
      if ( Composite )
      {
        if ( *(_QWORD *)(v2 + 1032) && (_DWORD)v6 )
        {
          v10 = &v38;
          v11 = (unsigned int)v6;
          do
          {
            vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, v8, v10++, 0LL, 1);
            --v11;
          }
          while ( v11 );
          x = v25.x;
        }
        v12 = *(struct SPRITE **)(v2 + 8);
        v25.x = -v4->left;
        v25.y = -*((_DWORD *)a1 + 21);
        v13 = pSpFindInZ(v12, v4);
        if ( v13 )
        {
          v14 = (struct _RECTL *)((char *)a1 + 80);
          do
          {
            if ( v13 != a1 && (_DWORD)v6 )
            {
              v15 = &v38;
              v16 = (unsigned int)v6;
              v17 = (const struct _RECTL *)((char *)v13 + 80);
              v32 = &v38;
              v6 = (unsigned int)v6;
              v31 = (unsigned int)v6;
              do
              {
                if ( bIntersect(v15, v17, &v37) )
                {
                  if ( !x )
                  {
                    v30 = v6;
                    v28 = &v38;
                    do
                    {
                      v18 = *((_QWORD *)a1 + 20);
                      v19 = 0LL;
                      if ( v18
                        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 20)) + 112) & 0x4000) != 0
                         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) < 0)
                        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x200) == 0 )
                      {
                        v19 = SURFOBJ_TO_SURFACE_NOT_NULL(v18);
                        GreLockDisplayDevice(*(_QWORD *)(v19 + 48));
                      }
                      v20 = 0LL;
                      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x4000) != 0
                         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) < 0)
                        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x200) == 0 )
                      {
                        v20 = SURFOBJ_TO_SURFACE_NOT_NULL(Composite);
                        GreLockDisplayDevice(*(_QWORD *)(v20 + 48));
                      }
                      INVOKEOFFCOPYBITS(
                        &v25,
                        Composite,
                        (struct _POINTL *)a1 + 21,
                        *((struct _SURFOBJ **)a1 + 20),
                        0LL,
                        0LL,
                        v28,
                        (struct _POINTL *)v28);
                      if ( v20 )
                        GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
                      if ( v19 )
                        GreUnlockDisplayDevice(*(_QWORD *)(v19 + 48));
                      ++v28;
                      --v30;
                    }
                    while ( v30 );
                    v15 = v32;
                    x = 1;
                    v6 = v31;
                  }
                  vSpComposite(v13, &v25, Composite, &v37);
                }
                ++v15;
                v17 = (const struct _RECTL *)((char *)v13 + 80);
                v32 = v15;
                --v16;
              }
              while ( v16 );
              v6 = v27;
              v14 = (struct _RECTL *)((char *)a1 + 80);
            }
            SINGLEREADERLOCK::vUnlock((struct _KMUTANT **)v13 + 31);
            v13 = pSpFindInZ(*((struct SPRITE **)v13 + 3), v14);
          }
          while ( v13 );
          v2 = v36;
        }
        v21 = 0LL;
        v34 = 0;
        v33 = 0LL;
        if ( *((_QWORD *)a1 + 9) )
        {
          v34 = v6;
          v21 = a1;
          v35 = &v38;
          v33 = a1;
          UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v33);
        }
        if ( (_DWORD)v6 )
        {
          v22 = x == 0;
          v23 = &v38;
          if ( v22 )
          {
            do
            {
              vSpWriteToScreen(
                (struct _SPRITESTATE *)v2,
                (struct _POINTL *)a1 + 21,
                *((struct _SURFOBJ **)a1 + 20),
                v23++);
              --v6;
            }
            while ( v6 );
          }
          else
          {
            v24 = (unsigned int)v6;
            do
            {
              vSpWriteToScreen((struct _SPRITESTATE *)v2, &v25, Composite, v23++);
              --v24;
            }
            while ( v24 );
          }
        }
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v29, (struct _EX_PUSH_LOCK *)(v2 + 688));
          RtlClearBits((PRTL_BITMAP)(v2 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v29);
        }
        if ( v21 )
          UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v33);
      }
    }
  }
}
