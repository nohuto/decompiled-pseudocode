/*
 * XREFs of ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C015A068
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0096B08 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0159774 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0267C50 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0267F5C (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C000B37C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C0095200 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 */

struct _SURFOBJ *__fastcall psoSpGetComposite(struct _SPRITESTATE *a1, struct _RECTL *a2, unsigned int *a3)
{
  char *v3; // rbx
  SURFOBJ *v4; // rdi
  signed int ClearBits; // eax
  __int64 v9; // rsi
  int v10; // r15d
  __int64 v11; // r12
  __int64 v13; // r10
  signed int v14; // r8d
  signed int v15; // r9d
  int v16; // edx
  signed int v17; // eax
  int v18; // ecx
  signed int v19; // eax
  int v20; // ecx
  struct _SURFOBJ *Surface; // rax

  v3 = (char *)a1 + 688;
  v4 = 0LL;
  *a3 = -1;
  if ( a1 != (struct _SPRITESTATE *)-688LL )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3, 0LL);
  }
  ClearBits = RtlFindClearBits((PRTL_BITMAP)((char *)a1 + 664), 1u, 0);
  v9 = ClearBits;
  v10 = -1;
  if ( ClearBits == -1 )
  {
    v11 = -1LL;
  }
  else
  {
    v4 = (SURFOBJ *)*((_QWORD *)a1 + ClearBits + 19);
    v11 = ClearBits;
  }
  if ( v4 && v4->sizlBitmap.cx >= a2->right - a2->left && v4->sizlBitmap.cy >= a2->bottom - a2->top )
    goto LABEL_8;
  vSpDeleteSurface(v4);
  if ( (_DWORD)v9 != -1 )
    *((_QWORD *)a1 + v9 + 19) = 0LL;
  v13 = *((_QWORD *)a1 + 1);
  v14 = -1;
  v15 = -1;
  while ( v13 )
  {
    v16 = *(_DWORD *)(v13 + 88) - *(_DWORD *)(v13 + 80);
    v17 = v16;
    if ( v16 <= v14 )
      v17 = v14;
    v18 = *(_DWORD *)(v13 + 92) - *(_DWORD *)(v13 + 84);
    v13 = *(_QWORD *)(v13 + 24);
    v14 = v17;
    v19 = v18;
    if ( v18 <= v15 )
      v19 = v15;
    v20 = v16 * v18;
    v15 = v19;
    if ( v20 <= v10 )
      v20 = v10;
    v10 = v20;
  }
  Surface = psoSpCreateSurface(a1, 0, v14, v15);
  v4 = Surface;
  if ( Surface )
  {
    if ( (_DWORD)v9 != -1 )
      *((_QWORD *)a1 + v11 + 19) = Surface;
    Surface->fjBitmap |= 4u;
LABEL_8:
    if ( (_DWORD)v9 != -1 )
    {
      *a3 = v9;
      RtlSetBits((PRTL_BITMAP)((char *)a1 + 664), v9, 1u);
    }
  }
  if ( v3 )
  {
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
