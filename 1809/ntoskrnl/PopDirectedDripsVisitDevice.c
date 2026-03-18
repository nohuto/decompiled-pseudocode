/*
 * XREFs of PopDirectedDripsVisitDevice @ 0x14087C460
 * Callers:
 *     PopDirectedDripsBuildBroadcastTree @ 0x14087BFB8 (PopDirectedDripsBuildBroadcastTree.c)
 *     PopDirectedDripsVisitPs4Device @ 0x14087C4AC (PopDirectedDripsVisitPs4Device.c)
 * Callees:
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x1402E74E4 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 */

__int64 __fastcall PopDirectedDripsVisitDevice(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax

  v3 = (_QWORD *)(a2 + 16);
  if ( (_QWORD *)*v3 == v3 )
  {
    *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 32);
    v4 = *(_QWORD **)(a1 + 8);
    if ( *v4 != a1 )
      __fastfail(3u);
    *v3 = a1;
    *(_QWORD *)(a2 + 24) = v4;
    *v4 = v3;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return PopDirectedDripsDiagTraceBroadcastVisit(a2 - 728, a3);
}
