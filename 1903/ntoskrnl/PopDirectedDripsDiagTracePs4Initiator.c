/*
 * XREFs of PopDirectedDripsDiagTracePs4Initiator @ 0x140304820
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x1408B90FC (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDirectedDripsDiagTracePs4Initiator(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 776);
  if ( result )
    *(_DWORD *)(result + 124) |= 0x10000u;
  return result;
}
