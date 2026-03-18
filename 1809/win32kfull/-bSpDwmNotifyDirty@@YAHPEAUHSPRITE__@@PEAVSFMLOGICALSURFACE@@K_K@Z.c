/*
 * XREFs of ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C00A1CDC
 * Callers:
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C000ACC8 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C000BD70 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreNotifyDirtySprite @ 0x1C0010ABC (GreNotifyDirtySprite.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C00A1CA0 (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00C83F0 (GreTransferSpriteStateToDwmState.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0253244 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0074C48 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00A1DA0 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     DwmAsyncDirtySprite @ 0x1C00A1DD8 (DwmAsyncDirtySprite.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C011A688 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 */

__int64 __fastcall bSpDwmNotifyDirty(HSPRITE a1, struct SFMLOGICALSURFACE *a2, int a3, UINT_PTR a4)
{
  int v7; // ebp
  int v8; // esi
  __int64 v9; // rcx
  unsigned int v10; // edi
  void *v11; // rax

  v7 = 0;
  v8 = 0;
  if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(a2) )
    a3 &= ~1u;
  v10 = 1;
  if ( (a3 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)a2 + 63)) )
  {
    v7 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)a2, 1u, a4);
    a3 &= ~1u;
  }
  if ( a3 )
  {
    v11 = (void *)UserReferenceDwmApiPort(v9);
    v8 = DwmAsyncDirtySprite(v11, a4);
  }
  if ( v7 < 0 || v8 < 0 )
    return 0;
  return v10;
}
