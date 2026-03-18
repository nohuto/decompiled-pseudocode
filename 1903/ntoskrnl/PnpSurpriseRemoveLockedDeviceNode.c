/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x1407304D4
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1407302F4 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PipSetDevNodeState @ 0x14014568C (PipSetDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x140170940 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x140170A88 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140171760 (IopDecrementDeviceObjectHandleCount.c)
 *     PipRestoreDevNodeState @ 0x140173CB4 (PipRestoreDevNodeState.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A2C00 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406FEAE0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipClearDevNodeFlags @ 0x140707494 (PipClearDevNodeFlags.c)
 *     PiDmaGuardProcessPostRemove @ 0x140730798 (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x140730810 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x1407308C4 (IopRemoveDevice.c)
 *     PnpDisableDeviceInterfaces @ 0x140730F74 (PnpDisableDeviceInterfaces.c)
 *     PipSetDevNodeProblem @ 0x140731754 (PipSetDevNodeProblem.c)
 *     PipConvertResolutionsToReservations @ 0x140784484 (PipConvertResolutionsToReservations.c)
 */

__int64 __fastcall PnpSurpriseRemoveLockedDeviceNode(__int64 MaxDataSize, unsigned int a2, unsigned int a3)
{
  int v3; // esi
  void *v4; // rbp
  struct _DEVICE_OBJECT *v5; // r13
  unsigned int v6; // r14d
  int v9; // r15d
  __int64 v10; // rbx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v18; // eax
  __int64 v19; // r14
  ULONG_PTR v20; // [rsp+20h] [rbp-38h] BYREF
  void *v21; // [rsp+28h] [rbp-30h]

  v3 = *(_DWORD *)(MaxDataSize + 300);
  v4 = 0LL;
  v5 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v6 = a3;
  v20 = 0LL;
  v21 = 0LL;
  v9 = 768;
  if ( v3 == 782 || v3 == 783 )
  {
    v9 = v3;
    PipRestoreDevNodeState(MaxDataSize);
    v3 = *(_DWORD *)(MaxDataSize + 300);
  }
  *(_WORD *)(MaxDataSize + 466) = 0;
  if ( v3 == 785 && v9 == 782 )
  {
    PipClearDevNodeFlags(MaxDataSize, 16);
    return PipSetDevNodeState(MaxDataSize, 787);
  }
  v10 = *(_QWORD *)(MaxDataSize + 8);
  if ( v10 )
  {
    do
    {
      v18 = *(_DWORD *)(v10 + 396);
      v19 = *(_QWORD *)v10;
      if ( (v18 & 0x10) != 0 )
      {
        v18 &= ~0x10u;
        *(_DWORD *)(v10 + 396) = v18;
      }
      if ( *(_QWORD *)(v10 + 416) || *(_QWORD *)(v10 + 544) || (v18 & 0x40) != 0 )
        IopReleaseDeviceResources(v10, 0LL);
      PipSetDevNodeState(v10, 787);
      v10 = v19;
    }
    while ( v19 );
    v6 = a3;
  }
  if ( v3 == 778 && (*(_DWORD *)(MaxDataSize + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v5, 1, &v20);
    PnpUnlockMountableDevice((__int64)v5);
    PipClearDevNodeFlags(MaxDataSize, 0x1000000);
    v4 = v21;
  }
  v11 = *(_DWORD *)(MaxDataSize + 300);
  if ( v11 < 769 || v11 > 770 && (v11 <= 776 || v11 == 778 || (unsigned int)(v11 - 785) > 3) )
  {
    v12 = IopRemoveDevice(v5);
    PnpDisableDeviceInterfaces(MaxDataSize + 40);
    if ( v12 >= 0 )
      IopReleaseDeviceResources(MaxDataSize, 0LL);
    v13 = MaxDataSize;
    if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    {
      v14 = 787;
LABEL_13:
      PipSetDevNodeState(v13, v14);
      goto LABEL_14;
    }
    PipSetDevNodeState(MaxDataSize, 785);
    v14 = 782;
    if ( v9 == 782 )
    {
      v13 = MaxDataSize;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( v3 == 778 && v4 )
  {
    IopDecrementDeviceObjectHandleCount((ULONG_PTR)v4);
    ObfDereferenceObject(v4);
  }
  if ( a2 && (*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(MaxDataSize, a2, v6);
  *(_DWORD *)(MaxDataSize + 704) &= ~2u;
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
  {
    PnpAcquireDependencyRelationsLock(1);
    v15 = *(_QWORD *)(MaxDataSize + 32);
    if ( v15 )
      v16 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 80LL);
    else
      v16 = 0LL;
    if ( v16 )
      PipConvertResolutionsToReservations(v16);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    PipProcessRebuildPowerRelationsQueue();
  }
  return PiDmaGuardProcessPostRemove(MaxDataSize);
}
