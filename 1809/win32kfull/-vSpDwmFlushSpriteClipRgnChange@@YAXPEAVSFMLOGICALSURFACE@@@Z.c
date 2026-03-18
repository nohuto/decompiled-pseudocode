/*
 * XREFs of ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C00A1CA0
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x1C00746A8 (GreUpdateSpriteClipRgn.c)
 *     GreForceClipRgnChange @ 0x1C00A2FFC (GreForceClipRgnChange.c)
 * Callees:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C00A1CDC (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 */

void __fastcall vSpDwmFlushSpriteClipRgnChange(HSPRITE *a1)
{
  if ( (*((_DWORD *)a1 + 63) & 0x20) != 0 )
  {
    bSpDwmNotifyDirty(a1[37], (struct SFMLOGICALSURFACE *)a1, 2u, 0LL);
    *((_DWORD *)a1 + 63) &= ~0x20u;
  }
}
