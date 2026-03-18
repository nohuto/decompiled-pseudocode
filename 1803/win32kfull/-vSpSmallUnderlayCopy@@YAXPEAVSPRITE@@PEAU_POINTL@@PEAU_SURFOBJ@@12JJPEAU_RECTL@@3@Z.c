/*
 * XREFs of ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0254F44
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C009F23C (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C00E59EC (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0138EB8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C024FDE8 (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0253B90 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
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
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rbx
  struct _POINTL *v14; // r8
  struct _POINTL *v15; // r13
  struct _RECTL *v16; // rdi
  int v17; // esi
  int v18; // ebx
  struct SPRITE *i; // rcx
  int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // r15
  __int64 v23; // rdi
  struct SPRITE *v24; // rax
  struct SPRITE *v25; // rsi
  int v26; // [rsp+40h] [rbp-A1h]
  struct _RECTL v29; // [rsp+60h] [rbp-81h] BYREF
  struct _POINTL v30; // [rsp+70h] [rbp-71h] BYREF
  int v31; // [rsp+78h] [rbp-69h]
  int v32; // [rsp+7Ch] [rbp-65h]
  struct _RECTL v33; // [rsp+80h] [rbp-61h] BYREF
  struct _RECTL v34[4]; // [rsp+90h] [rbp-51h] BYREF

  v11 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(*(_QWORD *)v11 + 40LL) & 0x400) == 0 )
  {
    if ( bIntersect(a9, a8, &v29) )
    {
      v12 = 0LL;
      v30.x = a6 + v29.left;
      v31 = a6 + v29.right;
      v30.y = a7 + v29.top;
      v32 = a7 + v29.bottom;
      if ( a3
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
      {
        v12 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
        GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
      }
      v13 = 0LL;
      if ( a5
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a5) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a5) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a5) + 112) & 0x200) == 0 )
      {
        v13 = SURFOBJ_TO_SURFACE_NOT_NULL(a5);
        GreLockDisplayDevice(*(_QWORD *)(v13 + 48));
      }
      v14 = a4;
      v15 = a2;
      INVOKEOFFCOPYBITS(a2, a3, v14, a5, 0LL, 0LL, &v29, &v30);
      if ( v13 )
        GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
      if ( v12 )
        GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
    }
    else
    {
      v15 = a2;
    }
    v16 = a8;
    v17 = cSpSubtract(a8, a9, v34);
    v26 = v17;
    v18 = 0;
    do
      vSpReadFromScreen((struct _SPRITESTATE *)v11, v15, a3, &v34[v18++]);
    while ( v18 != v17 );
    for ( i = *(struct SPRITE **)(v11 + 8); ; i = (struct SPRITE *)*((_QWORD *)v25 + 3) )
    {
      v24 = pSpFindInZ(i, v16);
      v25 = v24;
      if ( !v24 )
        break;
      if ( v24 != a1 )
      {
        v20 = 0;
        do
        {
          if ( bIntersect(&v34[v20], (const struct _RECTL *)v25 + 5, &v33) )
          {
            v21 = 0LL;
            if ( a3
              && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
               || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
            {
              v21 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
              GreLockDisplayDevice(*(_QWORD *)(v21 + 48));
            }
            v22 = *((_QWORD *)v25 + 20);
            v23 = 0LL;
            if ( v22
              && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v25 + 20)) + 112) & 0x4000) != 0
               || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v22) + 112) < 0)
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v22) + 112) & 0x200) == 0 )
            {
              v23 = SURFOBJ_TO_SURFACE_NOT_NULL(v22);
              GreLockDisplayDevice(*(_QWORD *)(v23 + 48));
            }
            INVOKEOFFCOPYBITS(
              a2,
              a3,
              (struct _POINTL *)v25 + 21,
              *((struct _SURFOBJ **)v25 + 20),
              0LL,
              0LL,
              &v33,
              (struct _POINTL *)&v33);
            if ( v23 )
              GreUnlockDisplayDevice(*(_QWORD *)(v23 + 48));
            if ( v21 )
              GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
          }
          ++v20;
        }
        while ( v20 != v26 );
        v16 = a8;
      }
      SINGLEREADERLOCK::vUnlock((struct _KMUTANT **)v25 + 31);
    }
  }
}
