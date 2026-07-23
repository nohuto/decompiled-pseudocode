/*
 * XREFs of ExpSvmDereferenceDevice @ 0x14033DAD0
 * Callers:
 *     ExFreeSvmAsid @ 0x140134AFC (ExFreeSvmAsid.c)
 *     ExShareAddressSpaceWithDevice @ 0x14033C050 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(_DWORD *P)
{
  unsigned int v2; // r13d
  struct _KTHREAD *CurrentThread; // r12
  struct _KTHREAD *v4; // rbx
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v6; // r15d
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v8; // rax
  __int64 v9; // r14
  int SessionId; // eax
  __int64 v11; // rcx
  bool v12; // zf
  void (__fastcall *v14)(__int64, __int64 *); // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  PVOID *v17; // rcx
  struct _KTHREAD *v18; // rbx
  unsigned __int8 v19; // r14
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v28; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v29[3]; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v30; // [rsp+40h] [rbp-20h] BYREF
  int v31; // [rsp+48h] [rbp-18h]

  v30 = 0LL;
  v31 = 0;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v29[0] = 0;
  v4 = KeGetCurrentThread();
  --v4->SpecialApcDisable;
  if ( ++v4->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v4, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = v4->AbEntrySummary;
  v6 = -1;
  if ( !AbEntrySummary )
  {
    if ( !v4->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v4, (__int64)&ExpSvmDeviceListLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = v4->AbOrphanedEntrySummary;
    v4->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v4->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v8, AbEntrySummary);
  v29[2] = v8;
  v4->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  v9 = (__int64)&v4->LockEntries[v8];
  if ( v9 )
  {
    if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
      && byte_140467140[(((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v9 + 40) = SessionId;
    *(_QWORD *)(v9 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_15;
  }
LABEL_7:
  _interlockedbittestandset((volatile signed __int32 *)&v4->116 + 1, 0x10u);
LABEL_15:
  --v4->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v4, (__int64)&ExpSvmDeviceListLock, v29);
  v12 = v4->SpecialApcDisable++ == -1;
  if ( v12 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
    KiCheckForKernelApcDelivery(v11);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, (_RTL_BALANCED_NODE *)v9, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v12 = P[6]-- == 1;
  if ( v12 )
  {
    v14 = (void (__fastcall *)(__int64, __int64 *))*((_QWORD *)P + 10);
    v15 = *((_QWORD *)P + 5);
    LODWORD(v30) = 7;
    v14(v15, &v30);
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))HalIommuDispatch[7])(ExpSvmIommuSystemContext, *((_QWORD *)P + 14));
    _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
    v16 = *(_QWORD **)P;
    if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || (v17 = (PVOID *)*((_QWORD *)P + 1), *v17 != P) )
      __fastfail(3u);
    *v17 = v16;
    v16[1] = v17;
    (*((void (__fastcall **)(_QWORD))P + 7))(*((_QWORD *)P + 5));
    ExFreePoolWithTag(P, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  v28 = 0;
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    v6 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
  --v18->SpecialApcDisable;
  v19 = ++v18->AbAllocationRegionCount;
  v20 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v24, v20);
    v29[1] = v24;
    if ( v12 )
      goto LABEL_38;
    v21 = 1 << v24;
    v22 = v24;
    v23 = &v18->LockEntries[v22];
    v20 &= ~v21;
    if ( (v23->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v23->LockState.0 & 1) == 0
      && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && v23->LockState.SessionId == v6 )
    {
      v23->AcquiredByte &= ~1u;
      if ( v23->LockState.0 )
        break;
    }
  }
  if ( !v23 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, (ULONG_PTR)&ExpSvmDeviceListLock, v6, 0LL);
    goto LABEL_45;
  }
  v23->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v23->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v18->LockEntries[v22].TreeNode);
  v28 = v23->BoostBitmap.AllFields & 0x1FFFF;
  v23->BoostBitmap.AllFields &= 0xFFFE0000;
  v23->ThreadLocalFlags &= ~1u;
  v23->LockState.0 = 0LL;
  v25 = ((char *)v23 - (char *)v18 - 800) / 96;
  if ( v19 == 1 )
    v18->AbEntrySummary |= 1 << v25;
  else
    _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v25);
LABEL_45:
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v18, (__int64)&ExpSvmDeviceListLock, &v28);
  v12 = v18->SpecialApcDisable++ == -1;
  if ( v12 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery(v26);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v2;
}
