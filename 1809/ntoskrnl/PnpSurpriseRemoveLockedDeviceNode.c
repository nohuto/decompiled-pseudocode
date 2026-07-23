/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x1406EE6C8
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1406EF3D4 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14015ADC0 (PipRestoreDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x14016992C (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x140169BE8 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14016A290 (IopDecrementDeviceObjectHandleCount.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059E8F4 (PnpAcquireDependencyRelationsLock.c)
 *     PipClearDevNodeFlags @ 0x1406E7780 (PipClearDevNodeFlags.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406ECAB0 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopRemoveDevice @ 0x1406EE0A4 (IopRemoveDevice.c)
 *     PiDmaGuardProcessPostRemove @ 0x1406EE8AC (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x1406EE924 (IopReleaseDeviceResources.c)
 *     PnpDisableDeviceInterfaces @ 0x1406F069C (PnpDisableDeviceInterfaces.c)
 *     PipSetDevNodeProblem @ 0x1406F0800 (PipSetDevNodeProblem.c)
 *     PipConvertResolutionsToReservations @ 0x14075EB00 (PipConvertResolutionsToReservations.c)
 */

__int64 __fastcall PnpSurpriseRemoveLockedDeviceNode(ULONG_PTR BugCheckParameter4, unsigned int a2, unsigned int a3)
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

  v3 = *(_DWORD *)(BugCheckParameter4 + 300);
  v4 = 0LL;
  v5 = *(struct _DEVICE_OBJECT **)(BugCheckParameter4 + 32);
  v6 = a3;
  v20 = 0LL;
  v21 = 0LL;
  v9 = 768;
  if ( v3 == 782 || v3 == 783 )
  {
    v9 = v3;
    PipRestoreDevNodeState(BugCheckParameter4);
    v3 = *(_DWORD *)(BugCheckParameter4 + 300);
  }
  *(_WORD *)(BugCheckParameter4 + 466) = 0;
  if ( v3 == 785 && v9 == 782 )
  {
    PipClearDevNodeFlags(BugCheckParameter4, 16);
    return PipSetDevNodeState(BugCheckParameter4, 787);
  }
  v10 = *(_QWORD *)(BugCheckParameter4 + 8);
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
  if ( v3 == 778 && (*(_DWORD *)(BugCheckParameter4 + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v5, 1, &v20);
    PnpUnlockMountableDevice((__int64)v5);
    PipClearDevNodeFlags(BugCheckParameter4, 0x1000000);
    v4 = v21;
  }
  v11 = *(_DWORD *)(BugCheckParameter4 + 300);
  if ( v11 < 769 || v11 > 770 && (v11 <= 776 || v11 == 778 || (unsigned int)(v11 - 785) > 3) )
  {
    v12 = IopRemoveDevice(v5, 23);
    PnpDisableDeviceInterfaces(BugCheckParameter4 + 40);
    if ( v12 >= 0 )
      IopReleaseDeviceResources(BugCheckParameter4, 0LL);
    v13 = BugCheckParameter4;
    if ( (*(_DWORD *)(BugCheckParameter4 + 396) & 0x10) == 0 )
    {
      v14 = 787;
LABEL_13:
      PipSetDevNodeState(v13, v14);
      goto LABEL_14;
    }
    PipSetDevNodeState(BugCheckParameter4, 785);
    v14 = 782;
    if ( v9 == 782 )
    {
      v13 = BugCheckParameter4;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( v3 == 778 && v4 )
  {
    IopDecrementDeviceObjectHandleCount((ULONG_PTR)v4);
    ObfDereferenceObject(v4);
  }
  if ( a2 && (*(_DWORD *)(BugCheckParameter4 + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(BugCheckParameter4, a2, v6);
  *(_DWORD *)(BugCheckParameter4 + 704) &= ~2u;
  if ( (*(_DWORD *)(BugCheckParameter4 + 396) & 0x10) == 0 )
  {
    PnpAcquireDependencyRelationsLock(1);
    v15 = *(_QWORD *)(BugCheckParameter4 + 32);
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
  return PiDmaGuardProcessPostRemove(BugCheckParameter4);
}
