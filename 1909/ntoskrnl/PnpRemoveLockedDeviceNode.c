/*
 * XREFs of PnpRemoveLockedDeviceNode @ 0x140173204
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140732554 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     PipSetDevNodeState @ 0x140145D2C (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1401743E4 (PipRestoreDevNodeState.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpDeleteAllDependencyRelations @ 0x14066FAC4 (PnpDeleteAllDependencyRelations.c)
 *     PpHotSwapInitRemovalPolicy @ 0x1406F1D10 (PpHotSwapInitRemovalPolicy.c)
 *     PipClearDevNodeProblem @ 0x1406FADBC (PipClearDevNodeProblem.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140708810 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpUnloadAttachedDriver @ 0x140732938 (PnpUnloadAttachedDriver.c)
 *     PiDmaGuardProcessPostRemove @ 0x1407329F8 (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x140732A70 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140732B24 (IopRemoveDevice.c)
 *     PnpDisableDeviceInterfaces @ 0x1407331D4 (PnpDisableDeviceInterfaces.c)
 *     PipSetDevNodeProblem @ 0x1407339B4 (PipSetDevNodeProblem.c)
 *     PipIsProblemReadonly @ 0x140862184 (PipIsProblemReadonly.c)
 *     PpProfileCommitTransitioningDock @ 0x14086C9F0 (PpProfileCommitTransitioningDock.c)
 */

__int64 __fastcall PnpRemoveLockedDeviceNode(__int64 MaxDataSize, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v4; // r15d
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 *PoolWithTag; // rdi
  PVOID v12; // r12
  unsigned int v13; // esi
  _QWORD *v14; // rsi
  __int64 *v15; // r14
  _QWORD *v16; // r15
  KIRQL v17; // r8
  __int64 *v18; // rdx
  __int64 i; // rcx
  __int64 v20; // rax
  PVOID *v21; // r14
  KIRQL v22; // al
  KIRQL v23; // al
  int v24; // edx
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rbp
  __int64 v30; // rcx

  v3 = *(_QWORD *)(MaxDataSize + 32);
  v4 = a2;
  v6 = 0;
  PpHotSwapInitRemovalPolicy();
  v8 = *(_QWORD *)(v7 + 8);
  if ( v8 )
  {
    do
    {
      v28 = *(_DWORD *)(v8 + 396);
      v29 = *(_QWORD *)v8;
      if ( (v28 & 0x10) != 0 )
      {
        v28 &= ~0x10u;
        *(_DWORD *)(v8 + 396) = v28;
      }
      if ( *(_QWORD *)(v8 + 416) || *(_QWORD *)(v8 + 544) || (v28 & 0x40) != 0 )
      {
        IopRemoveDevice(*(PDEVICE_OBJECT *)(v8 + 32));
        IopReleaseDeviceResources(v8, 0LL);
      }
      PipSetDevNodeState(v8, 788);
      v8 = v29;
    }
    while ( v29 );
  }
  result = *(unsigned int *)(MaxDataSize + 300);
  if ( (_DWORD)result == 782 || (_DWORD)result == 783 )
  {
    if ( *(_DWORD *)(MaxDataSize + 304) == 785 )
      return result;
    PipRestoreDevNodeState(MaxDataSize);
    LODWORD(result) = *(_DWORD *)(MaxDataSize + 300);
  }
  if ( (_DWORD)result != 788 )
    JUMPOUT(0x140173282LL);
  v10 = *(_QWORD *)(v3 + 24);
  while ( v10 )
  {
    v10 = *(_QWORD *)(v10 + 24);
    ++v6;
  }
  PoolWithTag = 0LL;
  v12 = 0LL;
  if ( v6 )
  {
    v13 = 8 * v6 + 16;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x65647050u);
    if ( PoolWithTag )
    {
      v12 = ExAllocatePoolWithTag(PagedPool, v13, 0x65647050u);
      if ( v12 )
      {
        memset(PoolWithTag, 0, v13);
        memset(v12, 0, v13);
        v14 = *(_QWORD **)(v3 + 24);
        v15 = PoolWithTag;
        v16 = v12;
        while ( v14 )
        {
          ObfReferenceObject(v14);
          *v15++ = (__int64)v14;
          *v16++ = v14[1];
          v14 = (_QWORD *)v14[3];
        }
        v4 = a2;
      }
      else
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
    }
  }
  v17 = KeAcquireQueuedSpinLock(0xAuLL);
  v18 = PoolWithTag;
  if ( PoolWithTag )
  {
    for ( i = *PoolWithTag; i; i = *v18 )
    {
      *(_DWORD *)(*(_QWORD *)(i + 312) + 32LL) &= ~4u;
      v20 = *v18++;
      *(_DWORD *)(*(_QWORD *)(v20 + 312) + 32LL) |= 8u;
    }
  }
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~4u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 8u;
  KeReleaseQueuedSpinLock(0xAuLL, v17);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 && (unsigned int)(*(_DWORD *)(MaxDataSize + 568) - 3) <= 1 )
    PpProfileCommitTransitioningDock(MaxDataSize);
  v21 = (PVOID *)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( *PoolWithTag )
    {
      do
      {
        v22 = KeAcquireQueuedSpinLock(0xAuLL);
        *(_DWORD *)(*((_QWORD *)*v21 + 39) + 32LL) &= ~8u;
        *(_DWORD *)(*((_QWORD *)*v21 + 39) + 32LL) |= 0x10u;
        KeReleaseQueuedSpinLock(0xAuLL, v22);
        PnpUnloadAttachedDriver(*(PVOID *)((char *)v21 + (_BYTE *)v12 - (_BYTE *)PoolWithTag));
        ObfDereferenceObject(*v21++);
      }
      while ( *v21 );
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    ExFreePoolWithTag(v12, 0);
  }
  v23 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~8u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 0x10u;
  KeReleaseQueuedSpinLock(0xAuLL, v23);
  v24 = 786;
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    v24 = 788;
  PipSetDevNodeState(MaxDataSize, v24);
  if ( v4
    && ((*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0
     || ((v4 - 22) & 0xFFFFFFFD) == 0
     || (unsigned int)PipIsProblemReadonly(MaxDataSize, v4)
     && !(unsigned int)PipIsProblemReadonly(v30, *(unsigned int *)(MaxDataSize + 404))) )
  {
    PipClearDevNodeProblem(MaxDataSize);
    v25 = a3;
    if ( !a3 )
      v25 = *(_DWORD *)(MaxDataSize + 392);
    PipSetDevNodeProblem(MaxDataSize, v4, v25);
  }
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    PnpDeleteAllDependencyRelations(v3);
  result = PiDmaGuardProcessPostRemove(MaxDataSize);
  v27 = *(_QWORD *)(MaxDataSize + 48);
  if ( v27 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v26, v27, 23LL);
  return result;
}
