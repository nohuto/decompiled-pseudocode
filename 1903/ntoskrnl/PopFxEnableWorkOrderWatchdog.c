/*
 * XREFs of PopFxEnableWorkOrderWatchdog @ 0x1400B331C
 * Callers:
 *     PopFxPluginWork @ 0x1400B2FE0 (PopFxPluginWork.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1402F343C (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeSetCoalescableTimer @ 0x1400B2900 (KeSetCoalescableTimer.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall PopFxEnableWorkOrderWatchdog(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 *v4; // rax
  char v5; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v8; // bp
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _KLOCK_ENTRY *v14; // rdi
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  $6EAC78A6FCFADE0A5FA44F358736B38F *v18; // rcx
  int v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 168) = KeGetCurrentThread();
    if ( a2 )
    {
      KeSetCoalescableTimer((PKTIMER)(v2 + 16), (LARGE_INTEGER)(-10000LL * a2), 0, a2 / 0xA, (PKDPC)(v2 + 80));
      v3 = MEMORY[0xFFFFF78000000008];
      *(_QWORD *)(v2 + 152) = 0LL;
      *(_QWORD *)(v2 + 160) = v3;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopWorkOrderLock, 0LL);
      v4 = (__int64 *)qword_140444728;
      if ( *(__int64 **)qword_140444728 != &PopWorkOrderList )
        __fastfail(3u);
      *(_QWORD *)(v2 + 8) = qword_140444728;
      *(_QWORD *)v2 = &PopWorkOrderList;
      *v4 = v2;
      qword_140444728 = v2;
      v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopWorkOrderLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PopWorkOrderLock);
      v20 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopWorkOrderLock) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v8 = ++CurrentThread->AbAllocationRegionCount;
      v9 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v10 = !_BitScanReverse((unsigned int *)&v11, v9);
        v21 = v11;
        if ( v10 )
          break;
        v12 = 1 << v11;
        v13 = v11;
        v14 = &CurrentThread->LockEntries[v13];
        v9 &= ~v12;
        if ( (v14->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v14->LockState.0 & 1) == 0
          && (*(_QWORD *)&v14->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopWorkOrderLock & 0x7FFFFFFFFFFFFFFCLL)
          && v14->LockState.SessionId == SessionId )
        {
          v14->AcquiredByte &= ~1u;
          if ( v14->LockState.0 )
          {
            if ( v14 )
            {
              v14->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v14->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v13].TreeNode);
              v15 = v14->BoostBitmap.AllFields & 0x1FFFF;
              v16 = v14->BoostBitmap.AllFields & 0xFFFE0000;
              v14->ThreadLocalFlags &= ~1u;
              v20 = v15;
              v14->BoostBitmap.AllFields = v16;
              v14->LockState.0 = 0LL;
              v17 = ((char *)v14 - (char *)CurrentThread - 800) / 96;
              if ( v8 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v17;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v17);
              goto LABEL_19;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PopWorkOrderLock, SessionId, 0LL);
LABEL_19:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&PopWorkOrderLock, &v20);
      v10 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v10 )
      {
        v18 = &CurrentThread->152;
        if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v18->ApcState.ApcListHead[0].Flink != v18 )
          KiCheckForKernelApcDelivery((__int64)v18);
      }
    }
  }
  return v2;
}
