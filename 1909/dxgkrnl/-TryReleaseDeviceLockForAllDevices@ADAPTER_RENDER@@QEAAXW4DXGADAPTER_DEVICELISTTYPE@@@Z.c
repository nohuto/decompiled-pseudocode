/*
 * XREFs of ?TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01F6D50
 * Callers:
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EE9D4 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 **v5; // rsi
  __int64 v6; // rdi
  __int64 *i; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 136LL;
  if ( a2 != 1 )
    v3 = 120LL;
  v4 = 40LL;
  v5 = (__int64 **)(a1 + v3);
  if ( a2 != 1 )
    v4 = 24LL;
  v6 = a1 + v4;
  if ( *(struct _KTHREAD **)(v6 + 8) == CurrentThread
    || DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    for ( i = *v5;
          i != (__int64 *)v5 && i && (*((_DWORD *)i + 18) || ExIsResourceAcquiredExclusiveLite((PERESOURCE)i[13]));
          i = (__int64 *)*i )
    {
      ExReleaseResourceLite((PERESOURCE)i[13]);
      if ( (struct _KTHREAD *)i[15] != KeGetCurrentThread() )
        break;
      i[15] = 0LL;
      ExReleasePushLockExclusiveEx(i + 14, 0LL);
    }
    if ( *(struct _KTHREAD **)(v6 + 8) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v6 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v6, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
