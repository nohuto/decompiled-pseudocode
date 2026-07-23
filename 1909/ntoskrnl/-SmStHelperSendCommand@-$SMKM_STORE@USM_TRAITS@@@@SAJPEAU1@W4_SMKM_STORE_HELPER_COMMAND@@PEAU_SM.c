/*
 * XREFs of ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14014885C
 * Callers:
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1401484D8 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14014867C (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x14014E71C (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1401619B4 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     SmKmStoreHelperSendCommand @ 0x14011B268 (SmKmStoreHelperSendCommand.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011CA34 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140148B50 (SmKmStoreHelperWaitForCommand.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r13
  __int64 v8; // r13
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 *v11; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int8 v24; // [rsp+88h] [rbp+10h]
  int v25; // [rsp+98h] [rbp+20h] BYREF

  v23 = 0LL;
  v7 = 6352LL;
  if ( a2 != 4 )
    v7 = 6232LL;
  v8 = a1 + v7;
  v9 = SmKmStoreHelperSendCommand(v8, a2, a3, a4 & 1);
  if ( v9 != -1073741650 )
  {
    if ( (a4 & 2) != 0 )
    {
      v11 = 0LL;
    }
    else
    {
      v10 = -1000000LL;
      if ( *(_BYTE *)(a1 + 6022) > 1u )
        v10 = -5000000LL;
      v23 = v10;
      if ( (a4 & 8) != 0 )
        v23 = v10 / 4;
      v11 = &v23;
    }
    if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 6024));
      v25 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a1 + 6024) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v24 = ++CurrentThread->AbAllocationRegionCount;
      v14 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v15 = !_BitScanReverse((unsigned int *)&v16, v14);
        if ( v15 )
          break;
        v17 = 1 << v16;
        v18 = v16;
        v19 = &CurrentThread->LockEntries[v18];
        v14 &= ~v17;
        if ( (v19->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v19->LockState.0 & 1) == 0
          && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
          && v19->LockState.SessionId == SessionId )
        {
          v19->AcquiredByte &= ~1u;
          if ( v19->LockState.0 )
          {
            if ( v19 )
            {
              v19->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v19->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v18].TreeNode);
              v25 = v19->BoostBitmap.AllFields & 0x1FFFF;
              v19->BoostBitmap.AllFields &= 0xFFFE0000;
              v19->ThreadLocalFlags &= ~1u;
              v19->LockState.0 = 0LL;
              v20 = ((char *)v19 - (char *)CurrentThread - 800) / 96;
              if ( v24 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v20;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v20);
              goto LABEL_27;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 6024, SessionId, 0LL);
LABEL_27:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 6024, &v25);
      v15 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v15
        && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v21);
      }
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v9 = SmKmStoreHelperWaitForCommand(v8, a3, v11, (a4 >> 2) & 1);
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  }
  return v9;
}
