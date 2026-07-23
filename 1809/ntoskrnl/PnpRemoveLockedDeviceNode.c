/*
 * XREFs of PnpRemoveLockedDeviceNode @ 0x14015AA5C
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1406EF3D4 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14015ADC0 (PipRestoreDevNodeState.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpDeleteAllDependencyRelations @ 0x1405A0218 (PnpDeleteAllDependencyRelations.c)
 *     PpHotSwapInitRemovalPolicy @ 0x1406D1EA4 (PpHotSwapInitRemovalPolicy.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E6D10 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     IopRemoveDevice @ 0x1406EE0A4 (IopRemoveDevice.c)
 *     PiDmaGuardProcessPostRemove @ 0x1406EE8AC (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x1406EE924 (IopReleaseDeviceResources.c)
 *     PnpDisableDeviceInterfaces @ 0x1406F069C (PnpDisableDeviceInterfaces.c)
 *     PipSetDevNodeProblem @ 0x1406F0800 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1406F7F78 (PipClearDevNodeProblem.c)
 *     PnpUnloadAttachedDriver @ 0x140709BB4 (PnpUnloadAttachedDriver.c)
 *     PipIsProblemReadonly @ 0x140761140 (PipIsProblemReadonly.c)
 *     PpProfileCommitTransitioningDock @ 0x140833B54 (PpProfileCommitTransitioningDock.c)
 */

__int64 __fastcall PnpRemoveLockedDeviceNode(ULONG_PTR BugCheckParameter4, unsigned int a2, unsigned int a3)
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

  v3 = *(_QWORD *)(BugCheckParameter4 + 32);
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
  result = *(unsigned int *)(BugCheckParameter4 + 300);
  if ( (_DWORD)result == 782 || (_DWORD)result == 783 )
  {
    if ( *(_DWORD *)(BugCheckParameter4 + 304) == 785 )
      return result;
    PipRestoreDevNodeState(BugCheckParameter4);
    LODWORD(result) = *(_DWORD *)(BugCheckParameter4 + 300);
  }
  if ( (_DWORD)result != 788 )
    JUMPOUT(0x14015AADALL);
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
          ObfReferenceObjectWithTag(v14, 0x746C6644u);
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
  if ( (*(_DWORD *)(BugCheckParameter4 + 396) & 0x10) == 0
    && (unsigned int)(*(_DWORD *)(BugCheckParameter4 + 568) - 3) <= 1 )
  {
    PpProfileCommitTransitioningDock(BugCheckParameter4);
  }
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
        ObfDereferenceObjectWithTag(*v21++, 0x746C6644u);
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
  if ( (*(_DWORD *)(BugCheckParameter4 + 396) & 0x10) == 0 )
    v24 = 788;
  PipSetDevNodeState(BugCheckParameter4, v24);
  if ( v4
    && ((*(_DWORD *)(BugCheckParameter4 + 396) & 0x6000) == 0
     || ((v4 - 22) & 0xFFFFFFFD) == 0
     || (unsigned int)PipIsProblemReadonly(BugCheckParameter4, v4)
     && !(unsigned int)PipIsProblemReadonly(v30, *(unsigned int *)(BugCheckParameter4 + 404))) )
  {
    PipClearDevNodeProblem(BugCheckParameter4);
    v25 = a3;
    if ( !a3 )
      v25 = *(_DWORD *)(BugCheckParameter4 + 392);
    PipSetDevNodeProblem(BugCheckParameter4, v4, v25);
  }
  if ( (*(_DWORD *)(BugCheckParameter4 + 396) & 0x10) == 0 )
    PnpDeleteAllDependencyRelations(v3);
  result = PiDmaGuardProcessPostRemove(BugCheckParameter4);
  v27 = *(_QWORD *)(BugCheckParameter4 + 48);
  if ( v27 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v26, v27, 23LL);
  return result;
}
