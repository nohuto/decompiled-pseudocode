/*
 * XREFs of ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C008B718
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0010634 (GreTransferSpriteStateToDwmState.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C008B6DC (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     GreNotifyDirtySprite @ 0x1C00CC698 (GreNotifyDirtySprite.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00E1EC4 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0106B94 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026C22C (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0030DA4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C008B7DC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C008B814 (DwmAsyncDirtySprite.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00FD2E0 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 */

__int64 __fastcall bSpDwmNotifyDirty(HSPRITE a1, struct SFMLOGICALSURFACE *a2, int a3, UINT_PTR a4)
{
  int v7; // ebp
  int v8; // esi
  unsigned int v9; // edi
  void *v10; // rax

  v7 = 0;
  v8 = 0;
  if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(a2) )
    a3 &= ~1u;
  v9 = 1;
  if ( (a3 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)a2 + 63)) )
  {
    v7 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)a2, 1u, a4);
    a3 &= ~1u;
  }
  if ( a3 )
  {
    v10 = (void *)UserReferenceDwmApiPort();
    v8 = DwmAsyncDirtySprite(v10, a4);
  }
  if ( v7 < 0 || v8 < 0 )
    return 0;
  return v9;
}
