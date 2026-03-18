/*
 * XREFs of PopDirectedDripsMarkCandidateDevice @ 0x1408A45CC
 * Callers:
 *     PopDripsWatchdogDfxCallback @ 0x1408AAD60 (PopDripsWatchdogDfxCallback.c)
 *     PopDripsWatchdogPs4Callback @ 0x1408AB120 (PopDripsWatchdogPs4Callback.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408B8DC8 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140304760 (PopDirectedDripsDiagTraceMarkDevice.c)
 */

void __fastcall PopDirectedDripsMarkCandidateDevice(__int64 a1)
{
  _m_prefetchw((const void *)(a1 + 816));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x40u) & 0x40) == 0 )
  {
    ++dword_140444AF4;
    ++dword_140444CF0;
    PopDirectedDripsDiagTraceMarkDevice(*(_QWORD *)(a1 + 48));
  }
}
