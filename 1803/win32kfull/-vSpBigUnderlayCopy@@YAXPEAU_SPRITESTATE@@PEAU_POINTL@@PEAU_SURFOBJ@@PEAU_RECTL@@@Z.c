/*
 * XREFs of ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0251858
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C009F23C (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00E1924 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00E1960 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00E19E8 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0253B90 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpBigUnderlayCopy(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  int v7; // eax
  struct SPRITE *v8; // r14
  int v9; // r12d
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rdi
  struct SPRITE *v13; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v14[96]; // [rsp+50h] [rbp-C8h] BYREF
  struct _RECTL v15; // [rsp+B0h] [rbp-68h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x400) == 0 )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v14, a1, a4, 0, 0LL);
    do
    {
      v7 = ENUMAREAS::bEnum((ENUMAREAS *)v14, &v13, &v15);
      v8 = v13;
      v9 = v7;
      if ( v13 )
      {
        v10 = 0LL;
        if ( a3
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
        {
          v10 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
          GreLockDisplayDevice(*(_QWORD *)(v10 + 48));
        }
        v11 = *((_QWORD *)v8 + 20);
        v12 = 0LL;
        if ( v11
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v8 + 20)) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x200) == 0 )
        {
          v12 = SURFOBJ_TO_SURFACE_NOT_NULL(v11);
          GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
        }
        INVOKEOFFCOPYBITS(
          a2,
          a3,
          (struct _POINTL *)v8 + 21,
          *((struct _SURFOBJ **)v8 + 20),
          0LL,
          0LL,
          &v15,
          (struct _POINTL *)&v15);
        if ( v12 )
          GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
        if ( v10 )
          GreUnlockDisplayDevice(*(_QWORD *)(v10 + 48));
      }
      else
      {
        vSpReadFromScreen(a1, a2, a3, &v15);
      }
    }
    while ( v9 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v14);
  }
}
