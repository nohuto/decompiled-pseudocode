/*
 * XREFs of PnpQueryWatchdogBugcheckEnabled @ 0x14029FB30
 * Callers:
 *     PnpQueryWatchdogTimeout @ 0x1400EF12C (PnpQueryWatchdogTimeout.c)
 *     PnpCancelWatchdog @ 0x1400EFCD0 (PnpCancelWatchdog.c)
 *     PnpProcessWatchdogWorkItem @ 0x14029FA78 (PnpProcessWatchdogWorkItem.c)
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

char PnpQueryWatchdogBugcheckEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // si
  struct _KTHREAD *v2; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v4; // bp
  unsigned int v5; // r8d
  int v6; // eax
  __int64 v7; // rcx
  _KLOCK_ENTRY *v8; // rdi
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  $C6908ADE9723D0A04AF8EE82D8D15C40 *v14; // rcx
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PnpWatchdogBugcheckConfigLock, 0LL);
  if ( !(_BYTE)dword_1405711AC && (PnpSetupOOBEInProgress || PnpSetupInProgress) )
    v1 = 1;
  if ( PnpWatchdogBugcheckConfig )
  {
    if ( PnpWatchdogBugcheckConfig == 1 )
      v1 = 1;
  }
  else
  {
    v1 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PnpWatchdogBugcheckConfigLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PnpWatchdogBugcheckConfigLock);
  v16 = 0;
  v2 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PnpWatchdogBugcheckConfigLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v2->ApcState.Process);
  else
    SessionId = -1;
  --v2->SpecialApcDisable;
  v4 = ++v2->AbAllocationRegionCount;
  v5 = ((char)v2->AbEntrySummary | (char)v2->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v10, v5);
    v17 = v10;
    if ( v9 )
      goto LABEL_21;
    v6 = 1 << v10;
    v7 = v10;
    v8 = &v2->LockEntries[v7];
    v5 &= ~v6;
    if ( (v8->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v8->LockState.0 & 1) == 0
      && (*(_QWORD *)&v8->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PnpWatchdogBugcheckConfigLock & 0x7FFFFFFFFFFFFFFCLL)
      && v8->LockState.SessionId == SessionId )
    {
      v8->AcquiredByte &= ~1u;
      if ( v8->LockState.0 )
        break;
    }
  }
  if ( !v8 )
  {
LABEL_21:
    if ( (*((_DWORD *)&v2->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v2, (ULONG_PTR)&PnpWatchdogBugcheckConfigLock, SessionId, 0LL);
    goto LABEL_28;
  }
  v8->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v8->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v2->LockEntries[v7].TreeNode);
  v11 = v8->BoostBitmap.AllFields & 0x1FFFF;
  v12 = v8->BoostBitmap.AllFields & 0xFFFE0000;
  v8->ThreadLocalFlags &= ~1u;
  v16 = v11;
  v8->BoostBitmap.AllFields = v12;
  v8->LockState.0 = 0LL;
  v13 = ((char *)v8 - (char *)v2 - 800) / 96;
  if ( v4 == 1 )
    v2->AbEntrySummary |= 1 << v13;
  else
    _InterlockedOr8((volatile signed __int8 *)&v2->AbOrphanedEntrySummary, 1 << v13);
LABEL_28:
  --v2->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v2, (__int64)&PnpWatchdogBugcheckConfigLock, &v16);
  v9 = v2->SpecialApcDisable++ == -1;
  if ( v9 )
  {
    v14 = &v2->152;
    if ( ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v14->ApcState.ApcListHead[0].Flink != v14 )
      KiCheckForKernelApcDelivery((__int64)v14);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v1;
}
