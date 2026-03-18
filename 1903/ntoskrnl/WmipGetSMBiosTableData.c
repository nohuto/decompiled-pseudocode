/*
 * XREFs of WmipGetSMBiosTableData @ 0x1406BFAF8
 * Callers:
 *     WmipRawSMBiosTableHandler @ 0x140116CC0 (WmipRawSMBiosTableHandler.c)
 *     WmipQueryWmiDataBlock @ 0x1406BF4A0 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     MmUnmapIoSpace @ 0x140117010 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140118AB0 (MmMapIoSpaceEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     WmipGetRegistryHideMachine @ 0x1406BFBF8 (WmipGetRegistryHideMachine.c)
 *     WmipSMBiosHideMachine @ 0x1408F068C (WmipSMBiosHideMachine.c)
 */

__int64 __fastcall WmipGetSMBiosTableData(void *a1, _DWORD *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  void *v9; // rax
  void *v10; // rsi
  unsigned int v11; // ebx

  if ( !a2 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&WmipSMBiosLock, 1u);
  if ( a3 )
    *a3 = WmipSMBiosVersionInfo;
  if ( *a2 >= (unsigned int)WmipSMBiosTableLength )
  {
    if ( WmipSMBiosTablePhysicalAddress )
    {
      v9 = (void *)MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4u);
      v10 = v9;
      if ( v9 )
      {
        v11 = WmipSMBiosTableLength;
        memmove(a1, v9, (unsigned int)WmipSMBiosTableLength);
        MmUnmapIoSpace(v10, v11);
        v7 = 0;
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
      v7 = -1073741808;
    }
  }
  else
  {
    v7 = -1073741789;
  }
  *a2 = WmipSMBiosTableLength;
  if ( (unsigned __int8)WmipGetRegistryHideMachine() )
  {
    if ( v7 >= 0 )
      WmipSMBiosHideMachine(a1, (unsigned int)*a2);
  }
  ExReleaseResourceLite(&WmipSMBiosLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
