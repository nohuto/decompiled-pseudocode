/*
 * XREFs of IopLegacyResourceAllocation @ 0x14072E084
 * Callers:
 *     IopDestroyDeviceNode @ 0x1405A0300 (IopDestroyDeviceNode.c)
 *     IopReleaseDeviceResources @ 0x1406EE924 (IopReleaseDeviceResources.c)
 *     IoAssignResources @ 0x140824470 (IoAssignResources.c)
 *     IoReportResourceUsageInternal @ 0x1408276B8 (IoReportResourceUsageInternal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseSemaphore @ 0x1400C5E00 (KeReleaseSemaphore.c)
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopSetLegacyResourcesFlag @ 0x140288D30 (IopSetLegacyResourcesFlag.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopDestroyDeviceNode @ 0x1405A0300 (IopDestroyDeviceNode.c)
 *     IoCreateDevice @ 0x140653B90 (IoCreateDevice.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 *     PnpAllocateResources @ 0x1406FC05C (PnpAllocateResources.c)
 *     PnpDetermineResourceListSize @ 0x1406FCD2C (PnpDetermineResourceListSize.c)
 *     PipAllocateDeviceNode @ 0x1406FFD7C (PipAllocateDeviceNode.c)
 *     IopRemoveLegacyDeviceNode @ 0x14072E1B4 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x14072E318 (IopReleaseResources.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14072F28C (IopWriteAllocatedResourcesToRegistry.c)
 *     IopCombineLegacyResources @ 0x140829BA4 (IopCombineLegacyResources.c)
 */

__int64 __fastcall IopLegacyResourceAllocation(int a1, __int64 a2, __int64 a3, __int64 a4, const void **a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v10; // edi
  _QWORD *v11; // rbx
  struct _DEVICE_OBJECT *v12; // rsi
  __int64 v13; // r14
  int DeviceNode; // eax
  PDEVICE_OBJECT v16; // rcx
  const void **v17; // rsi
  _DWORD *v18; // rcx
  PVOID PoolWithTag; // r12
  size_t v20; // r8
  _DWORD *v21; // rax
  void *v22; // rbx
  unsigned int v23; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v25[14]; // [rsp+58h] [rbp-21h] BYREF
  size_t Size; // [rsp+E8h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  v10 = -1073741823;
  if ( a3 )
  {
    v11 = *(_QWORD **)(*(_QWORD *)(a3 + 312) + 40LL);
    Size = (size_t)v11;
    if ( v11 )
    {
      v12 = (struct _DEVICE_OBJECT *)a3;
LABEL_4:
      v10 = 0;
      goto LABEL_5;
    }
    if ( (*(_DWORD *)(a3 + 48) & 0x1000) != 0 )
      goto LABEL_36;
    DeviceNode = PipAllocateDeviceNode(a3, (void **)&Size);
    v11 = (_QWORD *)Size;
    v10 = DeviceNode;
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
        v10 = 0;
      }
      v12 = (struct _DEVICE_OBJECT *)a3;
      goto LABEL_37;
    }
LABEL_35:
    v10 = -1073741670;
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
  v10 = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &DeviceObject);
  if ( v10 < 0 )
    goto LABEL_36;
  v12 = DeviceObject;
  v16 = DeviceObject;
  DeviceObject->Flags |= 0x1000u;
  v10 = PipAllocateDeviceNode((__int64)v16, (void **)&Size);
  if ( v10 == -1073740946 || (v11 = (_QWORD *)Size) == 0LL )
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
  if ( v10 < 0 )
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
  memset(v25, 0, 0x40uLL);
  HIDWORD(v25[1]) = a1;
  v25[0] = v12;
  v25[3] = a4;
  LODWORD(v25[1]) = 128;
  PnpAllocateResources(1u, v25, 1, 0LL);
  v10 = v25[7];
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
    ExAcquireFastMutex(&PiResourceListLock);
    v20 = Size;
    v11[52] = PoolWithTag;
    memmove(PoolWithTag, *v17, v20);
    v11[53] = v25[6];
    KeReleaseGuardedMutex(&PiResourceListLock);
    v13 = v11[66];
  }
  else
  {
    ExAcquireFastMutex(&PiResourceListLock);
    v11[52] = v25[5];
    v11[53] = v25[6];
    KeReleaseGuardedMutex(&PiResourceListLock);
    IopReleaseResources(v11);
    v10 = -1073741670;
  }
  if ( v10 < 0 )
  {
LABEL_11:
    IopRemoveLegacyDeviceNode(a3, v11);
    if ( v10 < 0 )
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v10;
}
