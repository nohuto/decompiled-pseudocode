/*
 * XREFs of ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x1C0047F80
 * Callers:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0047D74 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C0047EEC (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047FEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C0048020 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::CleanupRegions(REGION **this)
{
  REGION *v2; // rcx
  REGION *v3; // rcx

  REGION::vDeleteREGION(this[11]);
  v2 = this[10];
  this[11] = 0LL;
  REGION::vDeleteREGION(v2);
  v3 = *this;
  this[10] = 0LL;
  EtwTraceLifetimeAccum(v3, 1LL);
  REGION::vDeleteREGION(this[16]);
  this[16] = 0LL;
  METAREGION::vClearMoveData((METAREGION *)(this + 16), 1);
}
