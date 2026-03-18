/*
 * XREFs of ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x1801A2DCC
 * Callers:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801A23F8 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18002C0A0 (TraceLoggingProviderEnabled.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18019E4BC (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x1801E5DF8 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 */

void __fastcall CInteractionTracker::TelemetrySetPosition(CInteractionTracker *this)
{
  unsigned __int64 v2; // rdi

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 0, 0x400000000002uLL) )
  {
    v2 = 0LL;
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
      v2 = *(_QWORD *)(*((_QWORD *)this + 40) + 584LL);
    InteractionSourceManager::TelemetrySetPosition((CInteractionTracker *)((char *)this + 192), v2);
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      if ( v2 )
        *(_QWORD *)(*((_QWORD *)this + 40) + 584LL) = 0LL;
    }
  }
}
