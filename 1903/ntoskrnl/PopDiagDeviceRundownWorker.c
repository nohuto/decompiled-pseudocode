/*
 * XREFs of PopDiagDeviceRundownWorker @ 0x140718B00
 * Callers:
 *     <none>
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x140158EF8 (IoControlPnpDeviceActionQueue.c)
 *     PoDiagTraceDeviceRundown @ 0x140718B80 (PoDiagTraceDeviceRundown.c)
 */

__int64 PopDiagDeviceRundownWorker()
{
  _QWORD *v0; // rbx
  _QWORD *i; // rax
  _QWORD *v2; // rax

  _InterlockedExchange(&PopDiagDeviceRundownRequests, 0);
  IoControlPnpDeviceActionQueue(1);
  v0 = IopRootDeviceNode;
  for ( i = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (_QWORD *)i[1] )
    v0 = i;
  while ( v0 != IopRootDeviceNode )
  {
    PoDiagTraceDeviceRundown(v0, v0 + 5, v0 + 7, *((unsigned int *)v0 + 35));
    v2 = (_QWORD *)*v0;
    if ( *v0 )
    {
      do
      {
        v0 = v2;
        v2 = (_QWORD *)v2[1];
      }
      while ( v2 );
    }
    else
    {
      v0 = (_QWORD *)v0[2];
    }
  }
  return IoControlPnpDeviceActionQueue(0);
}
