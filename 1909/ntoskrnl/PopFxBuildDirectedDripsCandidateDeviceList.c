/*
 * XREFs of PopFxBuildDirectedDripsCandidateDeviceList @ 0x1402F1DD4
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x1408A3B54 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PopFxAddRefDevice @ 0x1400E0C44 (PopFxAddRefDevice.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PopFxBuildDirectedDripsCandidateDeviceList(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  struct _KTHREAD *v6; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v8; // si
  unsigned int v9; // r8d
  int v10; // eax
  __int64 v11; // rcx
  _KLOCK_ENTRY *v12; // rdi
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  _QWORD *result; // rax
  __int64 v19; // rcx
  int v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+68h] [rbp+10h]

  a1[1] = a1;
  *a1 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(i + 816), 0, 0) & 0x40) != 0 )
    {
      PopFxAddRefDevice(i);
      v4 = (_QWORD *)a1[1];
      v5 = (_QWORD *)(i + 864);
      if ( (_QWORD *)*v4 != a1 )
        __fastfail(3u);
      *v5 = a1;
      *(_QWORD *)(i + 872) = v4;
      *v4 = v5;
      a1[1] = v5;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  v6 = KeGetCurrentThread();
  v20 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  else
    SessionId = -1;
  --v6->SpecialApcDisable;
  v8 = ++v6->AbAllocationRegionCount;
  v9 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v14, v9);
    v21 = v14;
    if ( v13 )
      goto LABEL_20;
    v10 = 1 << v14;
    v11 = v14;
    v12 = &v6->LockEntries[v11];
    v9 &= ~v10;
    if ( (v12->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v12->LockState.0 & 1) == 0
      && (*(_QWORD *)&v12->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && v12->LockState.SessionId == SessionId )
    {
      v12->AcquiredByte &= ~1u;
      if ( v12->LockState.0 )
        break;
    }
  }
  if ( !v12 )
  {
LABEL_20:
    if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_27;
  }
  v12->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v12->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v6->LockEntries[v11].TreeNode);
  v15 = v12->BoostBitmap.AllFields & 0x1FFFF;
  v16 = v12->BoostBitmap.AllFields & 0xFFFE0000;
  v12->ThreadLocalFlags &= ~1u;
  v20 = v15;
  v12->BoostBitmap.AllFields = v16;
  v12->LockState.0 = 0LL;
  v17 = ((char *)v12 - (char *)v6 - 800) / 96;
  if ( v8 == 1 )
    v6->AbEntrySummary |= 1 << v17;
  else
    _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v17);
LABEL_27:
  --v6->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)v6, (__int64)&PopFxDeviceListLock, &v20);
  v13 = v6->SpecialApcDisable++ == -1;
  if ( v13 )
  {
    result = &v6->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v19);
  }
  return result;
}
