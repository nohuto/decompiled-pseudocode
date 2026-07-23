/*
 * XREFs of PopDirectedDripsIsLikelySpecialDevice @ 0x14087D674
 * Callers:
 *     PopDirectedDripsBuildBroadcastTree @ 0x14087D1F8 (PopDirectedDripsBuildBroadcastTree.c)
 *     PopDirectedDripsVisitPs4Device @ 0x14087D6EC (PopDirectedDripsVisitPs4Device.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopDirectedDripsIsLikelySpecialDevice(__int64 a1)
{
  return (*(_DWORD *)(a1 + 760) & 0x10) != 0
      || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0
      || *(_DWORD *)(a1 + 768) != 0;
}
