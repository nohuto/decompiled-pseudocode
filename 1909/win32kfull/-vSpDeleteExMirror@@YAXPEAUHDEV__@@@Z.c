/*
 * XREFs of ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0081688
 * Callers:
 *     ?vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x1C0081524 (-vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00816B4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     GreEnableMirrorRendering @ 0x1C0281EC8 (GreEnableMirrorRendering.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpDeleteExMirror(_QWORD *a1)
{
  SURFOBJ *v2; // rcx

  if ( a1 )
  {
    v2 = (SURFOBJ *)a1[177];
    if ( v2 )
    {
      EngUnlockSurface(v2);
      if ( !(unsigned int)HmgQueryAltLock(*(_QWORD *)(a1[177] + 8LL)) )
      {
        *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1[177]) + 116) = 0;
        EngDeleteSurface(*(HSURF *)(a1[177] + 8LL));
        a1[177] = 0LL;
      }
    }
  }
}
