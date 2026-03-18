/*
 * XREFs of ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0159B74
 * Callers:
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0159774 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02643D0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C026700C (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0267C50 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0268558 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0269FD0 (vSpUnTearDownSprites.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENUMAREAS::bEnumLayers(ENUMAREAS *this, struct SPRITE **a2)
{
  unsigned int v2; // r11d
  __int64 v5; // r8
  _DWORD *v6; // r10
  _DWORD *v7; // rcx
  __int64 result; // rax
  _DWORD *v9; // rdx

  v2 = 0;
  if ( (*(_DWORD *)this & 1) != 0 )
  {
    v9 = (_DWORD *)*((_QWORD *)this + 9);
    v7 = v9;
    if ( (unsigned __int64)v9 > *((_QWORD *)this + 8) + 24LL && *(v9 - 4) == *v9 )
    {
      *((_QWORD *)this + 9) = v9 - 4;
      v7 = v9 - 4;
      goto LABEL_9;
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
LABEL_9:
      v2 = 1;
    }
  }
  result = v2;
  *a2 = (struct SPRITE *)*((_QWORD *)v7 + 1);
  return result;
}
