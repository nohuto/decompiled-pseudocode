/*
 * XREFs of ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0281458
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C003D9E4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C003E2CC (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0041334 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C027E810 (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02808F0 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0282378 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall vSpSmallUnderlayCopy(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        struct _RECTL *a9)
{
  struct _SPRITESTATE *v9; // rdi
  struct SPRITE *v12; // r12
  __int64 v13; // rax
  int v14; // r14d
  int v15; // ebx
  struct SPRITE *i; // rcx
  int v17; // edi
  struct SPRITE *v18; // rax
  struct SPRITE *v19; // rbx
  __int64 v20; // [rsp+40h] [rbp-A1h] BYREF
  struct _POINTL *v21; // [rsp+48h] [rbp-99h] BYREF
  __int64 v22; // [rsp+50h] [rbp-91h] BYREF
  struct SPRITE *v23; // [rsp+58h] [rbp-89h]
  struct _RECTL v24; // [rsp+60h] [rbp-81h] BYREF
  struct _POINTL v25; // [rsp+70h] [rbp-71h] BYREF
  int v26; // [rsp+78h] [rbp-69h]
  int v27; // [rsp+7Ch] [rbp-65h]
  struct _RECTL v28; // [rsp+80h] [rbp-61h] BYREF
  struct _RECTL v29[4]; // [rsp+90h] [rbp-51h] BYREF

  v9 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v12 = a1;
  *(_QWORD *)&v24.left = 0LL;
  *(_QWORD *)&v24.right = 0LL;
  *(_QWORD *)&v28.left = 0LL;
  *(_QWORD *)&v28.right = 0LL;
  v13 = *(_QWORD *)v9;
  v21 = a4;
  v23 = a1;
  if ( (*(_DWORD *)(v13 + 40) & 0x400) == 0 )
  {
    if ( bIntersect(a9, a8, &v24) )
    {
      v25.x = a6 + v24.left;
      v26 = a6 + v24.right;
      v25.y = a7 + v24.top;
      v27 = a7 + v24.bottom;
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v22, a3);
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v20, a5);
      INVOKEOFFCOPYBITS(a2, a3, v21, a5, 0LL, 0LL, &v24, &v25);
      if ( v20 )
        GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
      if ( v22 )
        GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
    }
    v14 = cSpSubtract(a8, a9, v29);
    v15 = 0;
    do
      vSpReadFromScreen(v9, a2, a3, &v29[v15++]);
    while ( v15 != v14 );
    for ( i = (struct SPRITE *)*((_QWORD *)v9 + 1); ; i = (struct SPRITE *)*((_QWORD *)v19 + 3) )
    {
      v18 = pSpFindInZ(i, a8);
      v19 = v18;
      if ( !v18 )
        break;
      if ( v18 != v12 )
      {
        v17 = 0;
        do
        {
          if ( bIntersect(&v29[v17], (const struct _RECTL *)v19 + 5, &v28) )
          {
            NEEDDDILOCK::vLock((NEEDDDILOCK *)&v21, a3);
            NEEDDDILOCK::vLock((NEEDDDILOCK *)&v20, *((struct _SURFOBJ **)v19 + 20));
            INVOKEOFFCOPYBITS(
              a2,
              a3,
              (struct _POINTL *)v19 + 21,
              *((struct _SURFOBJ **)v19 + 20),
              0LL,
              0LL,
              &v28,
              (struct _POINTL *)&v28);
            if ( v20 )
            {
              GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
              v20 = 0LL;
            }
            if ( v21 )
            {
              GreUnlockDisplayDevice(*(_QWORD *)&v21[6]);
              v21 = 0LL;
            }
          }
          ++v17;
        }
        while ( v17 != v14 );
        v12 = v23;
      }
      SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v19 + 248));
    }
  }
}
