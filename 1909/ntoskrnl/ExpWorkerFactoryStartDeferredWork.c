/*
 * XREFs of ExpWorkerFactoryStartDeferredWork @ 0x140045890
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1400443F0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     AlpcpSignal @ 0x14000D690 (AlpcpSignal.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

_QWORD *__fastcall ExpWorkerFactoryStartDeferredWork(__int64 a1, unsigned __int8 a2)
{
  _QWORD *result; // rax
  int v5; // ebp
  void *v6; // rdi
  __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebp
  signed __int32 v10; // edi
  _QWORD *v11; // r14
  signed __int32 v12; // edi
  __int64 v13; // rdx
  int v14; // r9d
  ULONG_PTR v15; // r13
  struct _KEVENT *v16; // rcx
  struct _KTHREAD *v17; // rdi
  unsigned int SessionId; // edx
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // r14
  __int64 v25; // rdx
  PVOID Object; // [rsp+30h] [rbp-88h] BYREF
  PVOID v27[8]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+C0h] [rbp+8h]
  int v29; // [rsp+D0h] [rbp+18h] BYREF
  int v30; // [rsp+D8h] [rbp+20h]

  result = (_QWORD *)*(unsigned int *)(a1 + 36);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 32);
    v6 = *(void **)(a1 + 24);
    v7 = *(_QWORD *)(a1 + 16);
    memset(v27, 0, sizeof(v27));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    v9 = v5 & 0xFFFF0000;
    if ( ObReferenceObjectByHandle(v6, 1u, AlpcPortObjectType, a2, &Object, 0LL) < 0 )
      return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( (v9 & 0x40000) != 0 )
    {
      v10 = _InterlockedExchangeAdd((volatile signed __int32 *)Object + 101, 1u);
      v11 = Object;
      v12 = v10 + 1;
      if ( !*((_QWORD *)Object + 51) )
        goto LABEL_5;
      v15 = (ULONG_PTR)Object + 352;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
      v16 = (struct _KEVENT *)v11[51];
      if ( v16 && v12 == v16[1].Header.LockNV )
        KeSetEvent(v16, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v11 + 44);
      v29 = 0;
      v17 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v11 + 44)) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v17->ApcState.Process);
      else
        SessionId = -1;
      --v17->SpecialApcDisable;
      ++v17->AbAllocationRegionCount;
      v19 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
      AbAllocationRegionCount = v17->AbAllocationRegionCount;
      v20 = !_BitScanReverse((unsigned int *)&v21, v19);
      v30 = v21;
      if ( v20 )
        goto LABEL_33;
      while ( 1 )
      {
        v22 = 1 << v21;
        v23 = v21;
        v24 = &v17->LockEntries[v23];
        v19 &= ~v22;
        if ( (v24->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v24->LockState.0 & 1) == 0
          && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
          && v24->LockState.SessionId == SessionId )
        {
          v24->AcquiredByte &= ~1u;
          if ( v24->LockState.0 )
            break;
        }
        v20 = !_BitScanReverse((unsigned int *)&v21, v19);
        v30 = v21;
        if ( v20 )
          goto LABEL_33;
      }
      if ( !v24 )
      {
LABEL_33:
        if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v17, v15, SessionId, 0LL);
      }
      else
      {
        v24->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v24->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v17->LockEntries[v23].TreeNode);
        v29 = v24->BoostBitmap.AllFields & 0x1FFFF;
        v24->BoostBitmap.AllFields &= 0xFFFE0000;
        v24->ThreadLocalFlags &= ~1u;
        v24->LockState.0 = 0LL;
        v25 = ((char *)v24 - (char *)v17 - 800) / 96;
        if ( AbAllocationRegionCount == 1 )
          v17->AbEntrySummary |= 1 << v25;
        else
          _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v25);
      }
      --v17->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v17, v15, &v29);
      v20 = v17->SpecialApcDisable++ == -1;
      if ( v20 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
        KiCheckForKernelApcDelivery();
    }
    v11 = Object;
LABEL_5:
    v27[0] = v11;
    LODWORD(v27[6]) = v9 | 4;
    memset(&v27[3], 0, 24);
    if ( (int)AlpcpSendMessage(v27, v7, 0LL, a2) < 0 )
    {
      ObfDereferenceObject(v27[0]);
    }
    else
    {
      *(PVOID *)a1 = v27[4];
      LOBYTE(v13) = 1;
      *(PVOID *)(a1 + 8) = v27[0];
      AlpcpSignal((__int64)v27, v13, 0LL, v14);
    }
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
