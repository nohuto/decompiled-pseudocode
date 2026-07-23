/*
 * XREFs of PopDirectedDripsDiagTracePs4Initiator @ 0x1402E7968
 * Callers:
 *     PopDirectedDripsBuildBroadcastTree @ 0x14087D1F8 (PopDirectedDripsBuildBroadcastTree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDirectedDripsDiagTracePs4Initiator(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 776);
  if ( result )
    *(_DWORD *)(result + 108) |= 0x10000u;
  return result;
}
