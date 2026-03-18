/*
 * XREFs of ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C027F1AC
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0081BE4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0083694 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00853C4 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0087DDC (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0087E94 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0280230 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpBigUnderlayCopy(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  int v7; // eax
  struct SPRITE *v8; // rbx
  int v9; // esi
  __int64 v10; // [rsp+40h] [rbp-79h] BYREF
  __int64 v11; // [rsp+48h] [rbp-71h] BYREF
  struct SPRITE *v12; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v13[96]; // [rsp+60h] [rbp-59h] BYREF
  struct _RECTL v14; // [rsp+C0h] [rbp+7h] BYREF

  *(_QWORD *)&v14.left = 0LL;
  *(_QWORD *)&v14.right = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x400) == 0 )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v13, a1, a4, 0, 0LL);
    do
    {
      v7 = ENUMAREAS::bEnum((ENUMAREAS *)v13, &v12, &v14);
      v8 = v12;
      v9 = v7;
      if ( v12 )
      {
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v11, a3);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v10, *((struct _SURFOBJ **)v8 + 20));
        INVOKEOFFCOPYBITS(
          a2,
          a3,
          (struct _POINTL *)v8 + 21,
          *((struct _SURFOBJ **)v8 + 20),
          0LL,
          0LL,
          &v14,
          (struct _POINTL *)&v14);
        if ( v10 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v10 + 48));
          v10 = 0LL;
        }
        if ( v11 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
          v11 = 0LL;
        }
      }
      else
      {
        vSpReadFromScreen(a1, a2, a3, &v14);
      }
    }
    while ( v9 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v13);
  }
}
