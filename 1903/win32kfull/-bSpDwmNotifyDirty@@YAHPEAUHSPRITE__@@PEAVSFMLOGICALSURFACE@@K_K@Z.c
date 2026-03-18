/*
 * XREFs of ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0046D48
 * Callers:
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0046D0C (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     GreNotifyDirtySprite @ 0x1C00EDAB8 (GreNotifyDirtySprite.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C0108014 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C012BBC4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C013E734 (GreTransferSpriteStateToDwmState.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026C95C (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C002A934 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0046E0C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C0046E44 (DwmAsyncDirtySprite.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C01222E0 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
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
