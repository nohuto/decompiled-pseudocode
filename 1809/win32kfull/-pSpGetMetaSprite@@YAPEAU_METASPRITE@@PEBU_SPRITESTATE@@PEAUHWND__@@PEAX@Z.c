/*
 * XREFs of ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0265B68
 * Callers:
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C000AF54 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z @ 0x1C0095BCC (-GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00963A8 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C0096670 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C00968A4 (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C015AD40 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x1C0261D6C (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C02627F4 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 *     GreDisableMirrorRendering @ 0x1C02692C8 (GreDisableMirrorRendering.c)
 *     GreEnableMirrorRendering @ 0x1C02693D8 (GreEnableMirrorRendering.c)
 * Callees:
 *     <none>
 */

HWND *__fastcall pSpGetMetaSprite(const struct _SPRITESTATE *a1, HWND a2, HWND *i)
{
  if ( !i && a2 )
  {
    for ( i = (HWND *)*((_QWORD *)a1 + 9); i && (*i != a2 || ((_DWORD)i[2] & 0x400) != 0); i = (HWND *)i[1] )
      ;
  }
  return i;
}
