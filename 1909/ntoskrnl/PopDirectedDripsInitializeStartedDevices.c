/*
 * XREFs of PopDirectedDripsInitializeStartedDevices @ 0x1405B1B00
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x1408A4030 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x140159598 (IoControlPnpDeviceActionQueue.c)
 *     PopDirectedDripsNotifyDeviceStarted @ 0x14071CFD4 (PopDirectedDripsNotifyDeviceStarted.c)
 */

__int64 PopDirectedDripsInitializeStartedDevices()
{
  _DWORD *v0; // rbx
  _QWORD *i; // rax
  _QWORD *v2; // rax

  IoControlPnpDeviceActionQueue(1);
  v0 = IopRootDeviceNode;
  for ( i = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (_QWORD *)i[1] )
    v0 = i;
  while ( v0 != IopRootDeviceNode )
  {
    if ( (v0[190] & 0x20) != 0 )
      PopDirectedDripsNotifyDeviceStarted(v0);
    v2 = *(_QWORD **)v0;
    if ( *(_QWORD *)v0 )
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
      v0 = (_DWORD *)*((_QWORD *)v0 + 2);
    }
  }
  return IoControlPnpDeviceActionQueue(0);
}
