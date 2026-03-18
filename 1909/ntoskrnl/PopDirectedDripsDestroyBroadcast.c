/*
 * XREFs of PopDirectedDripsDestroyBroadcast @ 0x1408A383C
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x1408A43B4 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408A4498 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     PoClearBroadcast @ 0x140728D88 (PoClearBroadcast.c)
 */

void PopDirectedDripsDestroyBroadcast()
{
  _DWORD *v0; // rdx
  _QWORD *i; // rax
  int v2; // eax
  _QWORD *v3; // rax

  v0 = IopRootDeviceNode;
  for ( i = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (_QWORD *)i[1] )
    v0 = i;
  while ( v0 != IopRootDeviceNode )
  {
    v0[74] &= ~0x100u;
    *((_QWORD *)v0 + 92) = v0 + 182;
    *((_QWORD *)v0 + 91) = v0 + 182;
    *((_QWORD *)v0 + 94) = v0 + 186;
    *((_QWORD *)v0 + 93) = v0 + 186;
    v2 = v0[190];
    v0[191] = 0;
    v0[190] = v2 & 0xFFF8FFFF;
    v3 = *(_QWORD **)v0;
    if ( *(_QWORD *)v0 )
    {
      do
      {
        v0 = v3;
        v3 = (_QWORD *)v3[1];
      }
      while ( v3 );
    }
    else
    {
      v0 = (_DWORD *)*((_QWORD *)v0 + 2);
    }
  }
  PoClearBroadcast();
}
