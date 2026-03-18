/*
 * XREFs of ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C00C56F4
 * Callers:
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C00C516C (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00E6714 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreNotifyDirtySprite @ 0x1C00E85BC (GreNotifyDirtySprite.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0137094 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C023C0C4 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C007780C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     DwmAsyncDirtySprite @ 0x1C00C5554 (DwmAsyncDirtySprite.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00C7A78 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C00FEAB8 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 */

__int64 __fastcall bSpDwmNotifyDirty(__int64 a1, struct SFMLOGICALSURFACE *a2, int a3, UINT_PTR a4)
{
  int v8; // ebp
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // edi
  void *v15; // rax
  __int64 v16; // r8

  v8 = 0;
  v9 = 0;
  if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(a2) )
    a3 &= ~1u;
  v14 = 1;
  if ( (a3 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*((unsigned int *)a2 + 63)) )
  {
    v8 = GreAddLogicalSurfaceToDirtyQueue(*(_QWORD *)a2, 1u, a4);
    a3 &= ~1u;
  }
  if ( a3 )
  {
    v15 = (void *)UserReferenceDwmApiPort(v11, v10, v12, v13);
    v9 = DwmAsyncDirtySprite(v15, a1, v16, a3, a4);
  }
  if ( v8 < 0 || v9 < 0 )
    return 0;
  return v14;
}
