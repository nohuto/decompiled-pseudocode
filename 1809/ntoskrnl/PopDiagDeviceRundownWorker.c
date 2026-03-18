/*
 * XREFs of PopDiagDeviceRundownWorker @ 0x1406DA020
 * Callers:
 *     <none>
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x140135350 (IoControlPnpDeviceActionQueue.c)
 *     PoDiagTraceDeviceRundown @ 0x1406DA0A0 (PoDiagTraceDeviceRundown.c)
 */

__int64 PopDiagDeviceRundownWorker()
{
  ULONG_PTR v0; // rbx
  ULONG_PTR i; // rax
  ULONG_PTR v2; // rax

  _InterlockedExchange(&PopDiagDeviceRundownRequests, 0);
  IoControlPnpDeviceActionQueue(1);
  v0 = IopRootDeviceNode;
  for ( i = *(_QWORD *)(IopRootDeviceNode + 8); i; i = *(_QWORD *)(i + 8) )
    v0 = i;
  while ( v0 != IopRootDeviceNode )
  {
    PoDiagTraceDeviceRundown(v0, v0 + 40, v0 + 56, *(unsigned int *)(v0 + 140));
    v2 = *(_QWORD *)v0;
    if ( *(_QWORD *)v0 )
    {
      do
      {
        v0 = v2;
        v2 = *(_QWORD *)(v2 + 8);
      }
      while ( v2 );
    }
    else
    {
      v0 = *(_QWORD *)(v0 + 16);
    }
  }
  return IoControlPnpDeviceActionQueue(0);
}
