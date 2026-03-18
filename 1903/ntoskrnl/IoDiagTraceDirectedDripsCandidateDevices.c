/*
 * XREFs of IoDiagTraceDirectedDripsCandidateDevices @ 0x140877FDC
 * Callers:
 *     PopDiagTraceDirectedDripsNotifyDevices @ 0x1408AEEC4 (PopDiagTraceDirectedDripsNotifyDevices.c)
 * Callees:
 *     PoDiagTraceDirectedDripsCandidateDevice @ 0x1408AC604 (PoDiagTraceDirectedDripsCandidateDevice.c)
 */

_QWORD *IoDiagTraceDirectedDripsCandidateDevices()
{
  _DWORD *v0; // rbx
  _QWORD *result; // rax

  v0 = IopRootDeviceNode;
  for ( result = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); result; result = (_QWORD *)result[1] )
    v0 = result;
  while ( v0 != IopRootDeviceNode )
  {
    if ( (v0[74] & 0x100) != 0 )
      PoDiagTraceDirectedDripsCandidateDevice(v0);
    result = *(_QWORD **)v0;
    if ( *(_QWORD *)v0 )
    {
      do
      {
        v0 = result;
        result = (_QWORD *)result[1];
      }
      while ( result );
    }
    else
    {
      v0 = (_DWORD *)*((_QWORD *)v0 + 2);
    }
  }
  return result;
}
