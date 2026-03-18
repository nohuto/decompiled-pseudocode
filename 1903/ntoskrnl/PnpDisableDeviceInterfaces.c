/*
 * XREFs of PnpDisableDeviceInterfaces @ 0x140730F74
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140172AD4 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1407304D4 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405BDA40 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1405BF440 (PnpUnicodeStringToWstr.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x140625D38 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     IoSetDeviceInterfaceState @ 0x140731A30 (IoSetDeviceInterfaceState.c)
 */

__int64 __fastcall PnpDisableDeviceInterfaces(unsigned __int16 *a1)
{
  PVOID PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int MatchingFilteredDeviceInterfaceList; // edi
  unsigned int v5; // esi
  const WCHAR *i; // rsi
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+98h] [rbp+38h] BYREF
  __int16 *v10; // [rsp+A0h] [rbp+40h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  PoolWithTag = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  MatchingFilteredDeviceInterfaceList = PnpUnicodeStringToWstr(&v10, 0LL, a1);
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    v9 = 4096;
    MatchingFilteredDeviceInterfaceList = -1073741789;
    v5 = 0;
    while ( v5 < 5 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v9, 0x20207050u);
      if ( !PoolWithTag )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        break;
      }
      ++v5;
      MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                              *(__int64 *)&PiPnpRtlCtx,
                                              0LL,
                                              (__int64)v10,
                                              1,
                                              0LL,
                                              0LL,
                                              (__int64)PoolWithTag,
                                              v9,
                                              (__int64)&v9,
                                              0);
      if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
        break;
    }
    if ( MatchingFilteredDeviceInterfaceList >= 0 )
    {
      for ( i = (const WCHAR *)PoolWithTag; *i; i += ((unsigned __int64)DestinationString.Length + 2) >> 1 )
      {
        MatchingFilteredDeviceInterfaceList = RtlInitUnicodeStringEx(&DestinationString, i);
        if ( MatchingFilteredDeviceInterfaceList >= 0 )
          IoSetDeviceInterfaceState(&DestinationString, 0);
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  PnpUnicodeStringToWstrFree(v10, (__int64)a1);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
