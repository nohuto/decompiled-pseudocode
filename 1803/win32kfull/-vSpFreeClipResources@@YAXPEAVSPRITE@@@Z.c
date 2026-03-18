/*
 * XREFs of ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C0253960
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00345A8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0252FA8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpFreeClipResources(struct SPRITE *a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 23);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v2);
  *((_QWORD *)a1 + 23) = 0LL;
}
