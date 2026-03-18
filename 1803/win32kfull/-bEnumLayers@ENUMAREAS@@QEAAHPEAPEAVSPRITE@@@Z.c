/*
 * XREFs of ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C024CB88
 * Callers:
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C024D080 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0253134 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02540A8 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025431C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02552B0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0256F80 (vSpUnTearDownSprites.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENUMAREAS::bEnumLayers(ENUMAREAS *this, struct SPRITE **a2)
{
  unsigned int v2; // r11d
  __int64 v5; // r8
  _DWORD *v6; // r10
  _DWORD *v7; // rcx
  _DWORD *v8; // rdx
  __int64 result; // rax

  v2 = 0;
  if ( (*(_DWORD *)this & 1) != 0 )
  {
    v8 = (_DWORD *)*((_QWORD *)this + 9);
    v7 = v8;
    if ( (unsigned __int64)v8 > *((_QWORD *)this + 8) + 24LL && *(v8 - 4) == *v8 )
    {
      *((_QWORD *)this + 9) = v8 - 4;
      v7 = v8 - 4;
      goto LABEL_8;
    }
  }
  else
  {
    v5 = *((_QWORD *)this + 8);
    v6 = (_DWORD *)*((_QWORD *)this + 9);
    v7 = v6;
    if ( (unsigned __int64)v6 < *(_QWORD *)(v5 + 8) + v5 - 16 && v6[4] == *v6 )
    {
      *((_QWORD *)this + 9) = v6 + 4;
      v7 = v6 + 4;
LABEL_8:
      v2 = 1;
    }
  }
  result = v2;
  *a2 = (struct SPRITE *)*((_QWORD *)v7 + 1);
  return result;
}
