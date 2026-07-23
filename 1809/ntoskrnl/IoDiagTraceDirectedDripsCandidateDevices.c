/*
 * XREFs of IoDiagTraceDirectedDripsCandidateDevices @ 0x14083E050
 * Callers:
 *     PopDiagTraceDirectedDripsNotifyDevices @ 0x14087337C (PopDiagTraceDirectedDripsNotifyDevices.c)
 * Callees:
 *     PoDiagTraceDirectedDripsCandidateDevice @ 0x140870C7C (PoDiagTraceDirectedDripsCandidateDevice.c)
 */

ULONG_PTR IoDiagTraceDirectedDripsCandidateDevices()
{
  ULONG_PTR v0; // rbx
  ULONG_PTR result; // rax

  v0 = IopRootDeviceNode;
  for ( result = *(_QWORD *)(IopRootDeviceNode + 8); result; result = *(_QWORD *)(result + 8) )
    v0 = result;
  while ( v0 != IopRootDeviceNode )
  {
    if ( (*(_DWORD *)(v0 + 704) & 0x2000) != 0 )
      PoDiagTraceDirectedDripsCandidateDevice(v0);
    result = *(_QWORD *)v0;
    if ( *(_QWORD *)v0 )
    {
      do
      {
        v0 = result;
        result = *(_QWORD *)(result + 8);
      }
      while ( result );
    }
    else
    {
      v0 = *(_QWORD *)(v0 + 16);
    }
  }
  return result;
}
