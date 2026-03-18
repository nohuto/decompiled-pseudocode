/*
 * XREFs of PnpShutdownDevices @ 0x14085D44C
 * Callers:
 *     IoShutdownSystem @ 0x1405A7988 (IoShutdownSystem.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpCreateDeviceEventEntry @ 0x140669A50 (PnpCreateDeviceEventEntry.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x140731480 (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PipSetDevNodeUserFlags @ 0x14073AB78 (PipSetDevNodeUserFlags.c)
 */

__int64 PnpShutdownDevices()
{
  unsigned int v0; // esi
  GUID *DeviceEventEntry; // rdi
  _QWORD *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  _QWORD *v6; // rax
  PVOID P; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+78h] [rbp-D0h] BYREF
  char *v9; // [rsp+80h] [rbp-C8h]
  __int64 v10; // [rsp+88h] [rbp-C0h] BYREF
  char v11; // [rsp+90h] [rbp-B8h] BYREF

  HIDWORD(v8) = 0;
  KeSetEvent(&PnpShutdownEvent, 0, 0);
  v0 = 0;
  if ( !PnpTearDownPnpStacksOnShutdown && (PopShutdownCleanly & 0x20) == 0 )
    return v0;
  DeviceEventEntry = (GUID *)PnpCreateDeviceEventEntry(0x189uLL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
  KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
  v3 = IopRootDeviceNode;
  v9 = &v11;
  LODWORD(v8) = 10485760;
  PipSetDevNodeUserFlags((__int64)IopRootDeviceNode, 16);
  while ( 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v3 = (_QWORD *)v3[1];
    while ( v3 )
    {
      v5 = *((_DWORD *)v3 + 100);
      if ( (v5 & 0x20) != 0 )
      {
        if ( v3 == IopRootDeviceNode )
        {
          v3 = 0LL;
          break;
        }
LABEL_17:
        v6 = (_QWORD *)*v3;
        if ( *v3 )
          goto LABEL_19;
        v3 = (_QWORD *)v3[2];
        PipSetDevNodeUserFlags((__int64)v3, 32);
      }
      else
      {
        if ( (v5 & 0x10) == 0 )
          break;
        v6 = (_QWORD *)v3[1];
        if ( !v6 )
        {
          PipSetDevNodeUserFlags((__int64)v3, 32);
          goto LABEL_17;
        }
LABEL_19:
        v3 = v6;
      }
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v3 )
    {
      PnpInitializeTargetDeviceRemoveEvent(
        DeviceEventEntry,
        0x189uLL,
        (PVOID)v3[4],
        0,
        1,
        0,
        0,
        0x2Eu,
        0,
        0LL,
        0LL,
        (__int64)&v10,
        (__int64)&v8);
      P = DeviceEventEntry;
      v0 = PnpProcessQueryRemoveAndEject((__int64 *)&P);
      if ( P != DeviceEventEntry && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag(P, 0x4B706E50u);
      continue;
    }
    break;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&DeviceEventEntry[4], 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(DeviceEventEntry, 0x4B706E50u);
  return v0;
}
