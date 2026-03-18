/*
 * XREFs of ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x1801DC57C
 * Callers:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801DB9B4 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1800A9B1C (TraceLoggingProviderEnabled.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801D7A2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x18021E124 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 */

void __fastcall CInteractionTracker::TelemetrySetPosition(CInteractionTracker *this)
{
  unsigned __int64 v2; // rdi

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 0, 0x400000000002uLL) )
  {
    v2 = 0LL;
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
      v2 = *(_QWORD *)(*((_QWORD *)this + 40) + 608LL);
    InteractionSourceManager::TelemetrySetPosition((CInteractionTracker *)((char *)this + 192), v2);
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      if ( v2 )
        *(_QWORD *)(*((_QWORD *)this + 40) + 608LL) = 0LL;
    }
  }
}
