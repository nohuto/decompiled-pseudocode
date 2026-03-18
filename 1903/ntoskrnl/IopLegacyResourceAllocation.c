/*
 * XREFs of IopLegacyResourceAllocation @ 0x140750B1C
 * Callers:
 *     IopDestroyDeviceNode @ 0x1406A24D0 (IopDestroyDeviceNode.c)
 *     IopReleaseDeviceResources @ 0x140730810 (IopReleaseDeviceResources.c)
 *     IoAssignResources @ 0x14085D6C0 (IoAssignResources.c)
 *     IoReportResourceUsageInternal @ 0x140860918 (IoReportResourceUsageInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeAcquireGuardedMutex @ 0x14009C4C0 (KeAcquireGuardedMutex.c)
 *     IoDeleteDevice @ 0x1400B3E60 (IoDeleteDevice.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     PipSetDevNodeState @ 0x14014568C (PipSetDevNodeState.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopSetLegacyResourcesFlag @ 0x14029ECB0 (IopSetLegacyResourcesFlag.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopDestroyDeviceNode @ 0x1406A24D0 (IopDestroyDeviceNode.c)
 *     PipSetDevNodeFlags @ 0x14070618C (PipSetDevNodeFlags.c)
 *     PnpAllocateResources @ 0x140721A50 (PnpAllocateResources.c)
 *     PnpDetermineResourceListSize @ 0x14072281C (PnpDetermineResourceListSize.c)
 *     PipAllocateDeviceNode @ 0x140723244 (PipAllocateDeviceNode.c)
 *     IopRemoveLegacyDeviceNode @ 0x140750C40 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x140750DA4 (IopReleaseResources.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140751E7C (IopWriteAllocatedResourcesToRegistry.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140780104 (IopCreateRootEnumeratedDeviceObject.c)
 *     IopCombineLegacyResources @ 0x140862F84 (IopCombineLegacyResources.c)
 */

__int64 __fastcall IopLegacyResourceAllocation(int a1, __int64 a2, __int64 a3, __int64 a4, const void **a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int RootEnumeratedDeviceObject; // edi
  _QWORD *v11; // rbx
  struct _DEVICE_OBJECT *v12; // rsi
  __int64 v13; // r15
  int DeviceNode; // eax
  PDEVICE_OBJECT v16; // rcx
  const void **v17; // rsi
  _DWORD *v18; // rcx
  PVOID PoolWithTag; // r12
  size_t v20; // r8
  _DWORD *v21; // rax
  void *v22; // rbx
  unsigned int v23; // eax
  PDEVICE_OBJECT DeviceObject[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v25[8]; // [rsp+40h] [rbp-40h] BYREF
  size_t Size; // [rsp+D0h] [rbp+50h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  RootEnumeratedDeviceObject = -1073741823;
  if ( a3 )
  {
    v11 = *(_QWORD **)(*(_QWORD *)(a3 + 312) + 40LL);
    Size = (size_t)v11;
    if ( v11 )
    {
      v12 = (struct _DEVICE_OBJECT *)a3;
LABEL_4:
      RootEnumeratedDeviceObject = 0;
      goto LABEL_5;
    }
    if ( (*(_DWORD *)(a3 + 48) & 0x1000) != 0 )
      goto LABEL_36;
    DeviceNode = PipAllocateDeviceNode(a3, (void **)&Size);
    v11 = (_QWORD *)Size;
    RootEnumeratedDeviceObject = DeviceNode;
    if ( Size )
    {
      if ( DeviceNode == -1073740946 )
      {
        IopDestroyDeviceNode((char *)Size);
        v11 = (_QWORD *)Size;
      }
      else
      {
        PipSetDevNodeFlags(Size, 0x20000);
        RootEnumeratedDeviceObject = 0;
      }
      v12 = (struct _DEVICE_OBJECT *)a3;
      goto LABEL_37;
    }
LABEL_35:
    RootEnumeratedDeviceObject = -1073741670;
LABEL_36:
    v12 = (struct _DEVICE_OBJECT *)Size;
    v11 = (_QWORD *)Size;
    goto LABEL_37;
  }
  v11 = (_QWORD *)IopLegacyDeviceNode;
  Size = IopLegacyDeviceNode;
  if ( IopLegacyDeviceNode )
  {
    do
    {
      if ( v11[54] == a2 )
        break;
      v11 = (_QWORD *)*v11;
      Size = (size_t)v11;
    }
    while ( v11 );
    if ( v11 )
    {
      v12 = (struct _DEVICE_OBJECT *)v11[4];
      goto LABEL_4;
    }
  }
  RootEnumeratedDeviceObject = IopCreateRootEnumeratedDeviceObject(DeviceObject);
  if ( RootEnumeratedDeviceObject < 0 )
    goto LABEL_36;
  v12 = DeviceObject[0];
  v16 = DeviceObject[0];
  DeviceObject[0]->Flags |= 0x1000u;
  RootEnumeratedDeviceObject = PipAllocateDeviceNode((__int64)v16, (void **)&Size);
  if ( RootEnumeratedDeviceObject == -1073740946 || (v11 = (_QWORD *)Size) == 0LL )
  {
    IoDeleteDevice(v12);
    goto LABEL_35;
  }
  v12->DriverObject = (struct _DRIVER_OBJECT *)a2;
  PipSetDevNodeFlags((__int64)v11, 131073);
  PipSetDevNodeState((__int64)v11, 770);
  v11[54] = a2;
  *v11 = IopLegacyDeviceNode;
  if ( IopLegacyDeviceNode )
    *(_QWORD *)(IopLegacyDeviceNode + 8) = v11;
  IopLegacyDeviceNode = (__int64)v11;
LABEL_37:
  if ( RootEnumeratedDeviceObject < 0 )
    goto LABEL_16;
LABEL_5:
  v13 = 0LL;
  if ( v11[2] )
    goto LABEL_6;
  if ( a4 )
  {
    if ( *(_DWORD *)(a4 + 4) == -1 )
      *(_DWORD *)(a4 + 4) = 1;
    v11[2] = IopRootDeviceNode;
LABEL_6:
    if ( a4 )
      goto LABEL_43;
  }
  if ( v11[2] )
  {
LABEL_8:
    IopReleaseResources(v11);
    goto LABEL_9;
  }
LABEL_43:
  if ( v11[52] || v11[68] )
    goto LABEL_8;
LABEL_9:
  if ( !a4 )
  {
    v13 = v11[66];
    goto LABEL_11;
  }
  memset(v25, 0, sizeof(v25));
  HIDWORD(v25[1]) = a1;
  v25[0] = v12;
  v25[3] = a4;
  LODWORD(v25[1]) = 128;
  PnpAllocateResources(1u, v25, 1, 0LL);
  RootEnumeratedDeviceObject = v25[7];
  if ( SLODWORD(v25[7]) < 0 )
    goto LABEL_11;
  v17 = a5;
  v18 = (_DWORD *)v25[5];
  if ( *a5 )
    v18 = *a5;
  Size = (unsigned int)PnpDetermineResourceListSize(v18);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x20207050u);
  if ( PoolWithTag )
  {
    if ( *v17 )
      ExFreePoolWithTag((PVOID)v25[5], 0);
    else
      *v17 = (const void *)v25[5];
    KeAcquireGuardedMutex(&PiResourceListLock);
    v20 = Size;
    v11[52] = PoolWithTag;
    memmove(PoolWithTag, *v17, v20);
    v11[53] = v25[6];
    KeReleaseGuardedMutex(&PiResourceListLock);
    v13 = v11[66];
  }
  else
  {
    KeAcquireGuardedMutex(&PiResourceListLock);
    v11[52] = v25[5];
    v11[53] = v25[6];
    KeReleaseGuardedMutex(&PiResourceListLock);
    IopReleaseResources(v11);
    RootEnumeratedDeviceObject = -1073741670;
  }
  if ( RootEnumeratedDeviceObject < 0 )
  {
LABEL_11:
    IopRemoveLegacyDeviceNode(a3, v11);
    if ( RootEnumeratedDeviceObject < 0 )
      goto LABEL_16;
  }
  if ( v13 )
  {
    v21 = (_DWORD *)IopCombineLegacyResources(v13);
    v22 = v21;
    if ( v21 )
    {
      v23 = PnpDetermineResourceListSize(v21);
      IopWriteAllocatedResourcesToRegistry(v13, v22, v23);
      ExFreePoolWithTag(v22, 0);
    }
  }
  if ( a1 != 3 && a4 )
    IopSetLegacyResourcesFlag(a2);
LABEL_16:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)RootEnumeratedDeviceObject;
}
