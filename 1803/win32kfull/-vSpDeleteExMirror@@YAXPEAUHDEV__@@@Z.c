/*
 * XREFs of ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0105030
 * Callers:
 *     ?vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x1C0104EF4 (-vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0252FA8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     GreEnableMirrorRendering @ 0x1C0256434 (GreEnableMirrorRendering.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpDeleteExMirror(_QWORD *a1)
{
  SURFOBJ *v2; // rcx

  if ( a1 )
  {
    v2 = (SURFOBJ *)a1[176];
    if ( v2 )
    {
      EngUnlockSurface(v2);
      if ( !(unsigned int)HmgQueryAltLock(*(_QWORD *)(a1[176] + 8LL)) )
      {
        *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1[176]) + 116) = 0;
        EngDeleteSurface(*(HSURF *)(a1[176] + 8LL));
        a1[176] = 0LL;
      }
    }
  }
}
