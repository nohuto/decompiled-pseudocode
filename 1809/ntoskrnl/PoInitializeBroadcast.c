/*
 * XREFs of PoInitializeBroadcast @ 0x1406E1D44
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PnprQuiesceDevices @ 0x14057B1E0 (PnprQuiesceDevices.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x14086905C (PopDirectedDripsInitializeBroadcast.c)
 *     PopDirectedDripsNotifyDrivers @ 0x1408693B8 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     PopHaltDeviceIdle @ 0x140155F38 (PopHaltDeviceIdle.c)
 *     PpmBeginHighPerfRequest @ 0x1401786C0 (PpmBeginHighPerfRequest.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PopBuildDeviceNotifyList @ 0x14056DD44 (PopBuildDeviceNotifyList.c)
 */

__int64 PoInitializeBroadcast()
{
  _QWORD *PoolWithTag; // rax
  unsigned int v1; // ebx
  _QWORD *v2; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1D8uLL, 0x73734450u);
  v1 = 0;
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1D8uLL);
    v3 = v2 + 12;
    v2[2] = KeGetCurrentThread();
    v4 = 5LL;
    v2[1] = 0LL;
    v2[55] = v2 + 54;
    v2[54] = v2 + 54;
    do
    {
      *(v3 - 2) = v3 - 3;
      *(v3 - 3) = v3 - 3;
      *v3 = v3 - 1;
      *(v3 - 1) = v3 - 1;
      v3[2] = v3 + 1;
      v3[1] = v3 + 1;
      v5 = v3 + 3;
      v3[4] = v3 + 3;
      v3 += 9;
      *v5 = v5;
      --v4;
    }
    while ( v4 );
    PpmBeginHighPerfRequest();
    qword_140418730 = v2;
    PopCurrentBroadcast = 0LL;
    qword_140418728 = 0LL;
    PopBuildDeviceNotifyList(v2 + 6);
    PopHaltDeviceIdle();
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
