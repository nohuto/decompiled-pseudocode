/*
 * XREFs of WheaInitialize @ 0x140A02E24
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     WheapCallErrorSourceInitialize @ 0x14018B030 (WheapCallErrorSourceInitialize.c)
 *     WheapInitializeWorkQueue @ 0x14019D514 (WheapInitializeWorkQueue.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14019D948 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     IoWMIRegistrationControl @ 0x140714870 (IoWMIRegistrationControl.c)
 *     TraceLoggingRegisterEx @ 0x140745F64 (TraceLoggingRegisterEx.c)
 *     WheapLogInitEvent @ 0x14077DCC0 (WheapLogInitEvent.c)
 *     WheapInitializeErrorSourceTable @ 0x140A03434 (WheapInitializeErrorSourceTable.c)
 *     WheapQueryPshedForErrorSources @ 0x140A0358C (WheapQueryPshedForErrorSources.c)
 *     WheapInitializeEventing @ 0x140A19458 (WheapInitializeEventing.c)
 *     WheapLoadPolicy @ 0x140A1EA7C (WheapLoadPolicy.c)
 *     WheapCreatePerProcessorInfo @ 0x140A21078 (WheapCreatePerProcessorInfo.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  ULONG_PTR v3; // r12
  __int64 v4; // r13
  int v5; // eax
  int PerProcessorInfo; // eax
  int v7; // eax
  int *v8; // rbx
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  int v13; // eax
  int v14; // eax
  __int64 j; // rbx
  __int64 v16; // rbx
  int v17; // r13d
  bool v18; // zf
  int v19; // eax
  char v20; // al
  struct _KTHREAD *v21; // rbx
  ULONG_PTR v22; // r9
  unsigned __int8 v23; // r12
  unsigned int v24; // edx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  _KLOCK_ENTRY *v28; // r14
  int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  int v35; // eax
  ULONG i; // ebx
  __int64 Prcb; // rax
  __int64 v38; // rcx
  char v39; // dl
  int SessionId; // eax
  __int64 v41; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // al
  PVOID Address; // [rsp+38h] [rbp-30h] BYREF
  __int64 v55; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-20h]
  unsigned __int64 v57; // [rsp+50h] [rbp-18h]
  unsigned int v59; // [rsp+B8h] [rbp+50h] BYREF
  int v60; // [rsp+C0h] [rbp+58h] BYREF
  int v61; // [rsp+C8h] [rbp+60h] BYREF

  v2 = 0LL;
  v3 = a2;
  v55 = 0LL;
  v4 = a1;
  v59 = 0;
  if ( !a2 )
  {
    WheapStatus = 0LL;
    dword_14042EC18 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 240) + 116LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v5 = PshedInitialize(v4, &v55);
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v5, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v7 = WheapQueryPshedForErrorSources(&v59, &Address);
    if ( v7 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v7, 0LL, 0LL);
    WheapErrorSourceTable = 1279410516LL;
    stru_1404F2AB8.Header.WaitListHead.Blink = &stru_1404F2AB8.Header.WaitListHead;
    qword_1404F2AB0 = (__int64)&qword_1404F2AA8;
    qword_1404F2AA8 = (__int64)&qword_1404F2AA8;
    stru_1404F2AB8.Header.WaitListHead.Flink = &stru_1404F2AB8.Header.WaitListHead;
    LOWORD(stru_1404F2AB8.Header.Lock) = 1;
    stru_1404F2AB8.Header.Size = 6;
    stru_1404F2AB8.Header.SignalState = 1;
    WheapInitializeEventing();
    TraceLoggingRegisterEx(&stru_140426FC8, 0LL, 0LL);
    TraceLoggingRegisterEx(&stru_1404266C0, 0LL, 0LL);
    v8 = (int *)Address;
    v9 = 0;
    if ( v59 )
    {
      do
      {
        v10 = qword_140509698[8 * (__int64)v8[2]](0LL, v8, 0LL);
        if ( v10 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v10, 0LL, v8[2]);
        v11 = (unsigned int)*v8;
        ++v9;
        v8[3] = 2;
        v8 = (int *)((char *)v8 + v11);
      }
      while ( v9 < v59 );
      v8 = (int *)Address;
    }
    PshedFreeMemory(v8);
    return 0LL;
  }
  qword_14042EB78 = (__int64)&WheapPrevErrList;
  WheapPrevErrList = (__int64)&WheapPrevErrList;
  v13 = PshedInitialize(a1, &v55);
  if ( v13 < 0 )
    KeBugCheckEx(0x122u, 3uLL, v13, 0LL, 0LL);
  WheapInitializeWorkQueue();
  v14 = WheapQueryPshedForErrorSources(&v59, &Address);
  if ( v14 < 0 )
    KeBugCheckEx(0x122u, 5uLL, v14, v3, 0LL);
  CurrentThread = KeGetCurrentThread();
  v61 = 0;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&WheapConfigTableLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v38) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v38 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask[0]) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, (__int64)&WheapConfigTableLock);
      goto LABEL_71;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v38) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v39 = v38;
  _BitScanForward((unsigned int *)&v38, (unsigned __int8)v38);
  CurrentThread->AbEntrySummary = v39 & ~(1 << v38);
  v2 = (__int64)&CurrentThread->LockEntries[v38];
  if ( !v2 )
  {
LABEL_71:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_68;
  }
  if ( (unsigned __int64)&WheapConfigTableLock >= 0xFFFF800000000000uLL
    && byte_140467440[(((unsigned __int64)&WheapConfigTableLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v2 + 40) = SessionId;
  v4 = a1;
  *(_QWORD *)(v2 + 32) = (unsigned __int64)&WheapConfigTableLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_68:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&WheapConfigTableLock, &v61);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v41);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapConfigTableLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&WheapConfigTableLock, (_RTL_BALANCED_NODE *)v2, (ULONG_PTR)&WheapConfigTableLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  v35 = WheapInitializeErrorSourceTable(v59, Address);
  if ( v35 < 0 )
    KeBugCheckEx(0x122u, 7uLL, v35, 0LL, 0LL);
  PshedFreeMemory(Address);
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; *(_QWORD *)(*(_QWORD *)(Prcb + 24608) + 8LL) = &WheapErrorSourceTable )
  {
    Prcb = KeGetPrcb(i++);
    **(_DWORD **)(Prcb + 24608) = v59;
    *(_QWORD *)(*(_QWORD *)(Prcb + 24608) + 16LL) = &WheapWorkQueue;
  }
  for ( j = qword_1404F2AA8; (__int64 *)j != &qword_1404F2AA8; j = *(_QWORD *)j )
  {
    if ( *(_DWORD *)(j + 104) == 7 )
    {
      v33 = WheapCallErrorSourceInitialize(j, v3);
      if ( v33 < 0 )
        KeBugCheckEx(0x122u, 6uLL, v33, v3, *(int *)(j + 104));
      *(_DWORD *)(j + 108) = 2;
    }
  }
  v56 = 0LL;
  v57 = 0LL;
  if ( KeGetCurrentPrcb()->CpuVendor == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    v56 = __PAIR64__(_RBX, _RAX);
    v57 = __PAIR64__(_RDX, _RCX);
    if ( (unsigned int)_RAX >= 0x80000008 )
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      v56 = __PAIR64__(_RBX, _RAX);
      v57 = __PAIR64__(_RDX, _RCX);
      if ( (_RBX & 1) != 0 )
        WheapClearPoisonSupported = 1;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 240) + 2600LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
    WheapCheckForAndReportErrorsFromPreviousSession();
  v16 = qword_1404F2AA8;
  v17 = 0;
  while ( (__int64 *)v16 != &qword_1404F2AA8 )
  {
    v18 = *(_DWORD *)(v16 + 104) == 7;
    *(_DWORD *)(v16 + 124) = v17;
    if ( !v18 && !*(_BYTE *)(v16 + 88) )
    {
      v19 = WheapCallErrorSourceInitialize(v16, v3);
      if ( v19 < 0 )
        KeBugCheckEx(0x122u, 6uLL, v19, v3, *(int *)(v16 + 104));
      *(_DWORD *)(v16 + 108) = 2;
    }
    v16 = *(_QWORD *)v16;
    ++v17;
  }
  WheapLogInitEvent();
  *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
  IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
  WheapInitializationComplete = 1;
  v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)&WheapConfigTableLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v20 & 2) != 0 && (v20 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapConfigTableLock);
  v21 = KeGetCurrentThread();
  v60 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&WheapConfigTableLock) == 1 )
    v22 = (unsigned int)MmGetSessionIdEx((__int64)v21->ApcState.Process);
  else
    v22 = 0xFFFFFFFFLL;
  --v21->SpecialApcDisable;
  v23 = ++v21->AbAllocationRegionCount;
  v24 = ((char)v21->AbEntrySummary | (char)v21->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v18 = !_BitScanReverse((unsigned int *)&v25, v24);
    if ( v18 )
      break;
    v26 = 1 << v25;
    v27 = v25;
    v28 = &v21->LockEntries[v27];
    v24 &= ~v26;
    if ( (v28->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v28->LockState.0 & 1) == 0
      && (*(_QWORD *)&v28->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&WheapConfigTableLock & 0x7FFFFFFFFFFFFFFCLL)
      && v28->LockState.SessionId == (_DWORD)v22 )
    {
      v28->AcquiredByte &= ~1u;
      if ( v28->LockState.0 )
      {
        if ( v28 )
        {
          v28->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v28->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v21->LockEntries[v27].TreeNode);
          v29 = v28->BoostBitmap.AllFields & 0x1FFFF;
          v30 = v28->BoostBitmap.AllFields & 0xFFFE0000;
          v28->ThreadLocalFlags &= ~1u;
          v60 = v29;
          v28->BoostBitmap.AllFields = v30;
          v28->LockState.0 = 0LL;
          v31 = ((char *)v28 - (char *)v21 - 800) / 96;
          if ( v23 == 1 )
            v21->AbEntrySummary |= 1 << v31;
          else
            _InterlockedOr8((volatile signed __int8 *)&v21->AbOrphanedEntrySummary, 1 << v31);
          goto LABEL_46;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v21->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v21, (ULONG_PTR)&WheapConfigTableLock, v22, 0LL);
LABEL_46:
  --v21->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v21, (__int64)&WheapConfigTableLock, &v60);
  v18 = v21->SpecialApcDisable++ == -1;
  if ( v18 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery(v32);
  return 0LL;
}
