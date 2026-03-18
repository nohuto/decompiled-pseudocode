/*
 * XREFs of ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010505C
 * Callers:
 *     ?vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x1C0104EF4 (-vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C024D9A0 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0250EEC (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0252F34 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0252FA8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02540A8 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025431C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0254700 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0254AB4 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpDeleteSurface(SURFOBJ *pso)
{
  HSURF hsurf; // rbx

  if ( pso )
  {
    *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(pso) + 116) = 0;
    hsurf = pso->hsurf;
    EngUnlockSurface(pso);
    EngDeleteSurface(hsurf);
  }
}
