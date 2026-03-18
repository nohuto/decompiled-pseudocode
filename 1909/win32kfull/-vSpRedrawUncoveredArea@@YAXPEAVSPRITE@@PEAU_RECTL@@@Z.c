/*
 * XREFs of ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0280A10
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0081BE4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0030F0C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0030F40 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C008183C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C008238C (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00853C4 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0162630 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C01629E8 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0162CB8 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C027E150 (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C027EE38 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0281034 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0281B88 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0281CB8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall vSpRedrawUncoveredArea(struct SPRITE *a1, struct _RECTL *a2)
{
  __int64 *v2; // rsi
  __int64 v4; // rax
  struct _RECTL *v5; // r15
  unsigned int v6; // eax
  __int64 v7; // rbx
  int v8; // r12d
  struct _POINTL *v9; // rdx
  struct _SURFOBJ *Composite; // r13
  struct _RECTL *v11; // r14
  __int64 v12; // r12
  struct SPRITE *v13; // rcx
  struct SPRITE *v14; // r14
  const struct _RECTL *v15; // rcx
  __int64 v16; // rsi
  struct _RECTL *v17; // r15
  struct _RECTL *v18; // r12
  __int64 v19; // rsi
  struct SPRITE *v20; // r14
  struct _RECTL *v21; // rdi
  struct _RECTL *v22; // r15
  ULONG StartingIndex; // [rsp+40h] [rbp-99h] BYREF
  struct _POINTL v24; // [rsp+48h] [rbp-91h] BYREF
  __int64 v25; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-81h]
  __int64 *v27; // [rsp+60h] [rbp-79h] BYREF
  __int64 v28; // [rsp+68h] [rbp-71h] BYREF
  __int64 v29; // [rsp+70h] [rbp-69h]
  __int64 v30; // [rsp+78h] [rbp-61h]
  struct SPRITE *v31; // [rsp+80h] [rbp-59h] BYREF
  int v32; // [rsp+88h] [rbp-51h]
  struct _RECTL *v33; // [rsp+90h] [rbp-49h]
  struct _RECTL v34; // [rsp+98h] [rbp-41h] BYREF
  struct _RECTL v35; // [rsp+B0h] [rbp-29h] BYREF

  v2 = (__int64 *)*((_QWORD *)a1 + 2);
  v24 = 0LL;
  *(_QWORD *)&v34.left = 0LL;
  *(_QWORD *)&v34.right = 0LL;
  v4 = *v2;
  v27 = v2;
  if ( (*(_DWORD *)(v4 + 40) & 0x400) == 0 )
  {
    v5 = (struct _RECTL *)((char *)a1 + 80);
    v6 = cSpSubtract((const struct _RECTL *)a1 + 5, a2, &v35);
    v7 = v6;
    v26 = v6;
    if ( v6 )
    {
      v8 = 0;
      LODWORD(v25) = 0;
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v2, v5, &StartingIndex);
      if ( Composite )
      {
        if ( v2[129] && (_DWORD)v7 )
        {
          v11 = &v35;
          v12 = (unsigned int)v7;
          do
          {
            vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, v9, v11++, 0LL, 1);
            --v12;
          }
          while ( v12 );
          v8 = v25;
        }
        v13 = (struct SPRITE *)v2[1];
        v24.x = -v5->left;
        v24.y = -*((_DWORD *)a1 + 21);
        v14 = pSpFindInZ(v13, v5);
        if ( v14 )
        {
          do
          {
            if ( v14 != a1 && (_DWORD)v7 )
            {
              v15 = (const struct _RECTL *)((char *)v14 + 80);
              v16 = (unsigned int)v7;
              v17 = &v35;
              v29 = (unsigned int)v7;
              v7 = (unsigned int)v7;
              v30 = (unsigned int)v7;
              do
              {
                if ( bIntersect(v17, v15, &v34) )
                {
                  if ( !v8 )
                  {
                    v18 = &v35;
                    v19 = v7;
                    do
                    {
                      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v28, *((struct _SURFOBJ **)a1 + 20));
                      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v25, Composite);
                      INVOKEOFFCOPYBITS(
                        &v24,
                        Composite,
                        (struct _POINTL *)a1 + 21,
                        *((struct _SURFOBJ **)a1 + 20),
                        0LL,
                        0LL,
                        v18,
                        (struct _POINTL *)v18);
                      if ( v25 )
                      {
                        GreUnlockDisplayDevice(*(_QWORD *)(v25 + 48));
                        v25 = 0LL;
                      }
                      if ( v28 )
                      {
                        GreUnlockDisplayDevice(*(_QWORD *)(v28 + 48));
                        v28 = 0LL;
                      }
                      ++v18;
                      --v19;
                    }
                    while ( v19 );
                    v7 = v29;
                    v8 = 1;
                    v16 = v30;
                  }
                  vSpComposite(v14, &v24, Composite, &v34);
                }
                ++v17;
                v15 = (const struct _RECTL *)((char *)v14 + 80);
                v30 = --v16;
              }
              while ( v16 );
              v7 = v26;
              v5 = (struct _RECTL *)((char *)a1 + 80);
            }
            SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v14 + 248));
            v14 = pSpFindInZ(*((struct SPRITE **)v14 + 3), v5);
          }
          while ( v14 );
          v2 = v27;
        }
        v20 = 0LL;
        v32 = 0;
        v31 = 0LL;
        if ( *((_QWORD *)a1 + 9) )
        {
          v31 = a1;
          v33 = &v35;
          v20 = a1;
          v32 = v7;
          UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v31);
        }
        if ( (_DWORD)v7 )
        {
          if ( v8 )
          {
            v21 = &v35;
            do
            {
              vSpWriteToScreen((struct _SPRITESTATE *)v2, &v24, Composite, v21++);
              --v7;
            }
            while ( v7 );
          }
          else
          {
            v22 = &v35;
            do
            {
              vSpWriteToScreen(
                (struct _SPRITESTATE *)v2,
                (struct _POINTL *)a1 + 21,
                *((struct _SURFOBJ **)a1 + 20),
                v22++);
              --v7;
            }
            while ( v7 );
          }
        }
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v27, (struct _EX_PUSH_LOCK *)(v2 + 86));
          RtlClearBits((PRTL_BITMAP)(v2 + 83), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v27);
        }
        if ( v20 )
          UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v31);
      }
    }
  }
}
