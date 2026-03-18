/*
 * XREFs of ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01F6608
 * Callers:
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EBC48 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 **v4; // rsi
  __int64 v5; // rbx
  __int64 **i; // rbx

  v2 = 136LL;
  if ( a2 != 1 )
    v2 = 120LL;
  v3 = 40LL;
  v4 = (__int64 **)(a1 + v2);
  if ( a2 != 1 )
    v3 = 24LL;
  v5 = a1 + v3;
  KeEnterCriticalRegion();
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5, 0LL) )
  {
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    for ( i = (__int64 **)*v4; i != v4 && i; i = (__int64 **)*i )
    {
      if ( !ExAcquireResourceExclusiveLite((PERESOURCE)i[13], 0)
        || !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(i + 14, 0LL) )
      {
        return 0;
      }
      i[15] = (__int64 *)KeGetCurrentThread();
    }
    return 1;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 0;
  }
}
