/*
 * XREFs of PopFxInsertDevice @ 0x140191B10
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x140771B40 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x140771EE0 (PopFxRegisterDevice.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PopFxInsertDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  char v6; // al
  struct _KTHREAD *v7; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // si
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rdi
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v5 = (_QWORD *)qword_140444298;
  if ( *(ULONG_PTR **)qword_140444298 != &PopFxDeviceList )
    __fastfail(3u);
  a3[1] = qword_140444298;
  *a3 = &PopFxDeviceList;
  *v5 = a3;
  qword_140444298 = (__int64)a3;
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  LODWORD(v21) = 0;
  v7 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
  else
    SessionId = -1;
  --v7->SpecialApcDisable;
  v9 = ++v7->AbAllocationRegionCount;
  v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v12, v10);
    if ( v11 )
      break;
    v13 = 1 << v12;
    v14 = v12;
    v15 = &v7->LockEntries[v14];
    v10 &= ~v13;
    if ( (v15->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v15->LockState.0 & 1) == 0
      && (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && v15->LockState.SessionId == SessionId )
    {
      v15->AcquiredByte &= ~1u;
      if ( v15->LockState.0 )
      {
        if ( v15 )
        {
          v15->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v15->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v7->LockEntries[v14].TreeNode);
          v16 = v15->BoostBitmap.AllFields & 0x1FFFF;
          v17 = v15->BoostBitmap.AllFields & 0xFFFE0000;
          v15->ThreadLocalFlags &= ~1u;
          LODWORD(v21) = v16;
          v15->BoostBitmap.AllFields = v17;
          v15->LockState.0 = 0LL;
          v18 = ((char *)v15 - (char *)v7 - 800) / 96;
          if ( v9 == 1 )
            v7->AbEntrySummary |= 1 << v18;
          else
            _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v18);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
LABEL_17:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, (__int64)&PopFxDeviceListLock, &v21);
  v11 = v7->SpecialApcDisable++ == -1;
  if ( v11 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v19);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
