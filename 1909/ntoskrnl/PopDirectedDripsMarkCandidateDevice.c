/*
 * XREFs of PopDirectedDripsMarkCandidateDevice @ 0x1408A3E0C
 * Callers:
 *     PopDripsWatchdogDfxCallback @ 0x1408AA5C0 (PopDripsWatchdogDfxCallback.c)
 *     PopDripsWatchdogPs4Callback @ 0x1408AA980 (PopDripsWatchdogPs4Callback.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408B8698 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140304210 (PopDirectedDripsDiagTraceMarkDevice.c)
 */

void __fastcall PopDirectedDripsMarkCandidateDevice(__int64 a1)
{
  _m_prefetchw((const void *)(a1 + 816));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x40u) & 0x40) == 0 )
  {
    ++dword_1404447D4;
    ++dword_1404449D0;
    PopDirectedDripsDiagTraceMarkDevice(*(_QWORD *)(a1 + 48));
  }
}
