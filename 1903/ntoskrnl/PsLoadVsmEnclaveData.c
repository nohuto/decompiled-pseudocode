/*
 * XREFs of PsLoadVsmEnclaveData @ 0x14030A198
 * Callers:
 *     MiLoadDataIntoVsmEnclave @ 0x1408943C0 (MiLoadDataIntoVsmEnclave.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VslLoadEnclaveData @ 0x14085293C (VslLoadEnclaveData.c)
 *     MiHotPatchImageTreeCompare @ 0x14088EAA4 (MiHotPatchImageTreeCompare.c)
 */

__int64 __fastcall PsLoadVsmEnclaveData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  _QWORD *PoolWithTag; // rbx
  int EnclaveData; // eax
  unsigned int v12; // r15d
  int v13; // ecx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 *v16; // r14
  bool v17; // r8
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  struct _KTHREAD *v20; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v22; // bp
  unsigned int v23; // r8d
  int v24; // eax
  __int64 v25; // rcx
  _KLOCK_ENTRY *v26; // rdi
  bool v27; // zf
  __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  _DWORD v33[4]; // [rsp+30h] [rbp-38h] BYREF
  int v34; // [rsp+80h] [rbp+18h] BYREF

  if ( a3 == 4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x74457350u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = 0LL;
  }
  EnclaveData = VslLoadEnclaveData(*(_QWORD *)(a1 + 24), a2, a3, a4, a5, (__int64)v33);
  v12 = EnclaveData;
  if ( PoolWithTag )
  {
    if ( EnclaveData < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v13 = v33[0];
      *((_DWORD *)PoolWithTag + 9) = 0;
      *((_DWORD *)PoolWithTag + 8) = v13;
      PoolWithTag[3] = a2;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = a1 + 112;
      ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
      v16 = (unsigned __int64 *)(a1 + 104);
      v17 = 0;
      v18 = *(_QWORD **)(a1 + 104);
      if ( v18 )
      {
        while ( 1 )
        {
          if ( (int)MiHotPatchImageTreeCompare(a2, v18) < 0 )
          {
            v19 = (_QWORD *)*v18;
            if ( !*v18 )
            {
              v17 = 0;
              break;
            }
          }
          else
          {
            v19 = (_QWORD *)v18[1];
            if ( !v19 )
            {
              v17 = 1;
              break;
            }
          }
          v18 = v19;
        }
      }
      RtlAvlInsertNodeEx(v16, (unsigned __int64)v18, v17, PoolWithTag);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v15);
      v34 = 0;
      v20 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v20->ApcState.Process);
      else
        SessionId = -1;
      --v20->SpecialApcDisable;
      v22 = ++v20->AbAllocationRegionCount;
      v23 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v27 = !_BitScanReverse((unsigned int *)&v28, v23);
        v33[1] = v28;
        if ( v27 )
          goto LABEL_26;
        v24 = 1 << v28;
        v25 = v28;
        v26 = &v20->LockEntries[v25];
        v23 &= ~v24;
        if ( (v26->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v26->LockState.0 & 1) == 0
          && (*(_QWORD *)&v26->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
          && v26->LockState.SessionId == SessionId )
        {
          v26->AcquiredByte &= ~1u;
          if ( v26->LockState.0 )
            break;
        }
      }
      if ( !v26 )
      {
LABEL_26:
        if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v20, v15, SessionId, 0LL);
        goto LABEL_33;
      }
      v26->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v26->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v20->LockEntries[v25].TreeNode);
      v29 = v26->BoostBitmap.AllFields & 0x1FFFF;
      v30 = v26->BoostBitmap.AllFields & 0xFFFE0000;
      v26->ThreadLocalFlags &= ~1u;
      v34 = v29;
      v26->BoostBitmap.AllFields = v30;
      v26->LockState.0 = 0LL;
      v31 = ((char *)v26 - (char *)v20 - 800) / 96;
      if ( v22 == 1 )
        v20->AbEntrySummary |= 1 << v31;
      else
        _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v31);
LABEL_33:
      --v20->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v20, v15, &v34);
      v27 = v20->SpecialApcDisable++ == -1;
      if ( v27 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
        KiCheckForKernelApcDelivery(v32);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  return v12;
}
