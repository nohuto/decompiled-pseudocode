/*
 * XREFs of ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00FE72C
 * Callers:
 *     bSpEnableSprites @ 0x1C00FD8B0 (bSpEnableSprites.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C024D9A0 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0250EEC (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0252D38 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall psoSpCreateSurface(struct _SPRITESTATE *a1, ULONG a2, unsigned int a3, unsigned int a4)
{
  SURFOBJ *v4; // rbx
  HBITMAP Bitmap; // rax
  __int64 v7; // rax
  __int64 v8; // rcx

  v4 = 0LL;
  if ( !a2 )
    a2 = *(_DWORD *)(*((_QWORD *)a1 + 4) + 72LL);
  Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(a4, a3), 0, a2, 1u, 0LL);
  if ( Bitmap )
  {
    v4 = EngLockSurface((HSURF)Bitmap);
    v7 = SURFOBJ_TO_SURFACE_NOT_NULL(v4);
    v8 = *(_QWORD *)a1;
    *(_DWORD *)(v7 + 116) |= 0x1000u;
    *(_QWORD *)(v7 + 48) = v8;
  }
  else
  {
    DbgPrint("psoSpCreateSurface: Error allocating sprite bitmap\n");
  }
  return v4;
}
