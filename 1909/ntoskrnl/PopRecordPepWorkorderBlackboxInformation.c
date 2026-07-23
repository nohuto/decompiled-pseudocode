/*
 * XREFs of PopRecordPepWorkorderBlackboxInformation @ 0x1403059B8
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x1408BA36C (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 */

void PopRecordPepWorkorderBlackboxInformation()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rsi
  __int64 *v2; // rax
  __int64 v3; // rcx
  SIZE_T v4; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // r8
  __int64 *i; // r9
  unsigned __int64 v8; // kr00_8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v14; // r15
  unsigned int v15; // r8d
  int v16; // eax
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rdi
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD InputBuffer[4]; // [rsp+30h] [rbp-20h] BYREF
  int v26; // [rsp+80h] [rbp+30h] BYREF
  int v27; // [rsp+88h] [rbp+38h]

  memset(InputBuffer, 0, sizeof(InputBuffer));
  v0 = 0;
  v1 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopWorkOrderLock, 0LL);
  v2 = (__int64 *)PopWorkOrderList;
  if ( (__int64 *)PopWorkOrderList == &PopWorkOrderList )
    goto LABEL_13;
  do
  {
    v2 = (__int64 *)*v2;
    v3 = v0++;
  }
  while ( v2 != &PopWorkOrderList );
  if ( !v0 )
  {
LABEL_13:
    v4 = 0LL;
  }
  else
  {
    v4 = 48 * v3 + 64;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x42424F50u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v4);
      *v1 = 1;
      v6 = v1 + 4;
      v1[1] = v4;
      v1[2] = v0;
      for ( i = (__int64 *)PopWorkOrderList; i != &PopWorkOrderList; v6 += 12 )
      {
        v8 = MEMORY[0xFFFFF78000000008] - i[20];
        *((_QWORD *)v6 + 1) = i;
        *v6 = v8 / 0x2710;
        *((_QWORD *)v6 + 2) = i[18];
        v9 = i[19];
        *((_QWORD *)v6 + 3) = v9;
        if ( v9 )
        {
          v6[8] = *(_DWORD *)v9;
          if ( v9 != -8 )
          {
            v10 = *(_QWORD *)(v9 + 8);
            if ( v10 )
            {
              v11 = *(_QWORD *)(v10 + 64);
              if ( v11 )
                *((_QWORD *)v6 + 5) = *(_QWORD *)(v11 + 96);
            }
          }
        }
        i = (__int64 *)*i;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopWorkOrderLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopWorkOrderLock);
  v26 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopWorkOrderLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v14 = ++CurrentThread->AbAllocationRegionCount;
  v15 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v19 = !_BitScanReverse((unsigned int *)&v20, v15);
    v27 = v20;
    if ( v19 )
      goto LABEL_26;
    v16 = 1 << v20;
    v17 = v20;
    v18 = &CurrentThread->LockEntries[v17];
    v15 &= ~v16;
    if ( (v18->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v18->LockState.0 & 1) == 0
      && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopWorkOrderLock & 0x7FFFFFFFFFFFFFFCLL)
      && v18->LockState.SessionId == SessionId )
    {
      v18->AcquiredByte &= ~1u;
      if ( v18->LockState.0 )
        break;
    }
  }
  if ( !v18 )
  {
LABEL_26:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PopWorkOrderLock, SessionId, 0LL);
    goto LABEL_33;
  }
  v18->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v18->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v17].TreeNode);
  v21 = v18->BoostBitmap.AllFields & 0x1FFFF;
  v22 = v18->BoostBitmap.AllFields & 0xFFFE0000;
  v18->ThreadLocalFlags &= ~1u;
  v26 = v21;
  v18->BoostBitmap.AllFields = v22;
  v18->LockState.0 = 0LL;
  v23 = ((char *)v18 - (char *)CurrentThread - 800) / 96;
  if ( v14 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v23;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v23);
LABEL_33:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&PopWorkOrderLock, &v26);
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v24);
  if ( v4 )
  {
    InputBuffer[2] = 0LL;
    InputBuffer[3] = 7LL;
    InputBuffer[0] = v1;
    InputBuffer[1] = (unsigned int)v4;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0x42424F50u);
}
