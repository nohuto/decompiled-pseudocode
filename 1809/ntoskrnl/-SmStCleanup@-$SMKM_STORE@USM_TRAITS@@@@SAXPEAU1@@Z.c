/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D214
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14011CEC0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x14066BFB4 (SmProcessCreateRequest.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     SmAcquireReleaseCharges @ 0x1400E3D84 (SmAcquireReleaseCharges.c)
 *     SmKmStoreHelperCleanup @ 0x14011D624 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x14011D6F0 (SmKmStoreHelperCheckWaitCommand.c)
 *     SmFpCleanup @ 0x14011D710 (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011DA44 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011EBE8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406C3B20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     SmKmFileInfoCleanup @ 0x1408ADBA4 (SmKmFileInfoCleanup.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  void *v2; // rcx
  char v3; // al
  _KPROCESS *v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rdi
  __int64 SessionId; // rdx
  unsigned __int8 v8; // r15
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _KLOCK_ENTRY *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // al
  char v18; // cl
  void *v19; // rdi
  void *v20; // rcx
  __int64 result; // rax
  void **v22; // rdi
  _DWORD v23[2]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v24[48]; // [rsp+38h] [rbp-60h] BYREF

  *(_BYTE *)(a1 + 6021) |= 1u;
  v2 = *(void **)(a1 + 6200);
  if ( v2 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6152), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6200), Executive, 0, 0, 0LL);
    v2 = *(void **)(a1 + 6200);
  }
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  SmKmStoreHelperCheckWaitCommand(a1 + 6232, 1LL);
  v3 = *(_BYTE *)(a1 + 6021);
  if ( (v3 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 6472) )
    {
      KeSetEvent((PRKEVENT)(a1 + 6480), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 6472), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 6472), 0x746C6644u);
      v3 = *(_BYTE *)(a1 + 6021);
    }
    if ( (v3 & 4) != 0 )
    {
      v4 = *(_KPROCESS **)(a1 + 6568);
      if ( v4 )
      {
        KiStackAttachProcess(v4, 0LL, (__int64)v24);
        v3 = *(_BYTE *)(a1 + 6021);
      }
      if ( (v3 & 4) != 0 && *(_QWORD *)(a1 + 6552) )
      {
        v22 = *(void ***)(a1 + 6552);
        if ( *v22 )
          SC_ENV::Free(*v22);
        ExFreePoolWithTag(v22, 0);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  ST_STORE<SM_TRAITS>::StCleanup(a1);
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 6024));
    v23[0] = 0;
    v6 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 6024) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v6->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v6->SpecialApcDisable;
    v8 = ++v6->AbAllocationRegionCount;
    v9 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v10 = !_BitScanReverse((unsigned int *)&v11, v9);
      v23[1] = v11;
      if ( v10 )
        break;
      v12 = 1 << v11;
      v13 = v11;
      v14 = &v6->LockEntries[v13];
      v9 &= ~v12;
      if ( (v14->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v14->LockState.0 & 1) == 0
        && (*(_QWORD *)&v14->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
        && v14->LockState.SessionId == (_DWORD)SessionId )
      {
        v14->AcquiredByte &= ~1u;
        if ( v14->LockState.0 )
        {
          if ( v14 )
          {
            v14->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v14->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v6->LockEntries[v13].TreeNode, SessionId);
            v23[0] = 0;
            v23[0] = v14->BoostBitmap.AllFields & 0x1FFFF;
            v14->BoostBitmap.AllFields &= 0xFFFE0000;
            v14->ThreadLocalFlags &= ~1u;
            v14->LockState.0 = 0LL;
            v15 = ((char *)v14 - (char *)v6 - 800) / 96;
            if ( v8 == 1 )
              v6->AbEntrySummary |= 1 << v15;
            else
              _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v15);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, a1 + 6024, (unsigned int)SessionId, 0LL);
LABEL_30:
    --v6->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v6, a1 + 6024, (__int64)v23);
    v10 = v6->SpecialApcDisable++ == -1;
    if ( v10 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
      KiCheckForKernelApcDelivery(v16);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v17 = *(_BYTE *)(a1 + 6021);
  if ( (v17 & 4) != 0 && *(_QWORD *)(a1 + 6568) )
  {
    KiUnstackDetachProcess((__int64)v24, 0LL);
    v17 = *(_BYTE *)(a1 + 6021);
  }
  v18 = *(_BYTE *)(a1 + 6020);
  if ( v18 )
  {
    if ( v18 == 1 )
      SmKmFileInfoCleanup(a1 + 6216);
  }
  else
  {
    v19 = *(void **)(a1 + 6216);
    if ( (v17 & 4) != 0 )
    {
      v20 = *(void **)(a1 + 6224);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      SmKmStoreHelperCleanup(a1 + 6232);
      SmKmStoreHelperCleanup(a1 + 6352);
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
  }
  result = SmFpCleanup(a1 + 6592);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1, 1);
  return result;
}
