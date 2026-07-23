/*
 * XREFs of MiSessionCreateInternal @ 0x140716F08
 * Callers:
 *     MiSessionCreate @ 0x1407162A8 (MiSessionCreate.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     RtlGetInterruptTimePrecise @ 0x14008BA90 (RtlGetInterruptTimePrecise.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     RtlFindClearBitsAndSet @ 0x1400D9660 (RtlFindClearBitsAndSet.c)
 *     MiGetPdeAddress @ 0x1400EDBE4 (MiGetPdeAddress.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     MiMarkSessionMasterProcess @ 0x1401709B0 (MiMarkSessionMasterProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiMapNewSession @ 0x1407171D8 (MiMapNewSession.c)
 */

__int64 __fastcall MiSessionCreateInternal(ULONG_PTR *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v2; // r12
  __int64 Process; // rax
  ULONG ClearBitsAndSet; // ebp
  char v6; // al
  ULONG_PTR v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rdi
  unsigned __int16 v10; // si
  unsigned __int64 PdeAddress; // rax
  __int64 v12; // rax
  void *CurrentServerSilo; // rax
  unsigned int v15; // edi
  _RTL_BITMAP *PoolWithTag; // rax
  _RTL_BITMAP *v17; // r14
  __int64 v18; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h]
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v22; // [rsp+58h] [rbp-40h] BYREF
  ULONG v23; // [rsp+60h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  v2 = qword_14043B080;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v19 = Process;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043B058, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_14043C010, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v15 = qword_14043C010->SizeOfBitMap + 128;
    if ( v15 > 0x7FFFF )
      v15 = 0x7FFFF;
    PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                   PagedPool,
                                   8 * ((v15 >> 6) + ((v15 & 0x3F) != 0) + 2),
                                   0x20206D4Du);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_22;
    PoolWithTag->SizeOfBitMap = v15;
    PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
    RtlClearAllBits(PoolWithTag);
    memmove(
      v17->Buffer,
      qword_14043C010->Buffer,
      8 * (((unsigned __int64)qword_14043C010->SizeOfBitMap >> 6) + ((qword_14043C010->SizeOfBitMap & 0x3F) != 0)));
    ExFreePoolWithTag(qword_14043C010, 0);
    qword_14043C010 = v17;
    ClearBitsAndSet = RtlFindClearBitsAndSet(v17, 1u, 0);
  }
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043B058, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043B058);
  KeAbPostRelease((ULONG_PTR)&qword_14043B058);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( (unsigned int)MiChargeCommit((__int64)a1, 8uLL, 0) )
  {
    v7 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)3);
    v8 = v7;
    if ( v7 )
    {
      v9 = (__int64)(v7 << 25) >> 16;
      if ( (unsigned int)MiChargeResident(a1, ClearBitsAndSet != 0 ? 1032LL : 28LL, 0LL) )
      {
        v10 = MiMapNewSession(v9, *(unsigned __int16 *)a1);
        *(_DWORD *)(v9 + 112) = PsDefaultSystemLocaleId;
        *(_QWORD *)v9 = 1LL;
        *(_DWORD *)(v9 + 8) = ClearBitsAndSet;
        *(LARGE_INTEGER *)(v9 + 8312) = RtlGetInterruptTimePrecise(&PerformanceCounter);
        PdeAddress = MiGetPdeAddress(v2);
        v18 = MI_READ_PTE_LOCK_FREE(PdeAddress);
        *(_QWORD *)(v9 + 32) = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFLL;
        *(_WORD *)(v9 + 3182) = *(_WORD *)a1;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a1[21] + 24)) <= 1 )
          __fastfail(0xEu);
        *(_DWORD *)(v9 + 3008) = v10;
        *(_QWORD *)(v9 + 3120) = ClearBitsAndSet != 0 ? 1024LL : 20LL;
        *(_QWORD *)(v9 + 40) = 8LL;
        *(_QWORD *)(v9 + 48) = 8LL;
        v12 = MI_READ_PTE_LOCK_FREE(8 * ((v2 >> 39) & 0x1FF) - 0x90482413000LL);
        *(_QWORD *)(v9 + 8008) = v12;
        *(_QWORD *)(v9 + 8016) = 0LL;
        *(_QWORD *)(v9 + 104) = 0LL;
        *(_QWORD *)(v9 + 8112) = 0LL;
        v18 = v12;
        *(_QWORD *)(v9 + 24) = v9 + 16;
        *(_QWORD *)(v9 + 16) = v9 + 16;
        *(_DWORD *)(v9 + 12) = 1;
        CurrentServerSilo = (void *)PsGetCurrentServerSilo();
        *(_QWORD *)(v9 + 8304) = CurrentServerSilo;
        if ( CurrentServerSilo )
        {
          ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
          _InterlockedCompareExchange(
            *((volatile signed __int32 **)PsGetServerSiloGlobals(*(_QWORD *)(v9 + 8304)) + 140),
            ClearBitsAndSet,
            -1);
        }
        MiMarkSessionMasterProcess(v19, v9);
        *(_DWORD *)(v9 + 8160) = 4;
        *(_QWORD *)(v9 + 8152) = MiGetPteAddress(qword_14043A040);
        *(_QWORD *)(v9 + 8168) = v2 + 2972;
        *(_DWORD *)(v9 + 8164) = 1;
        *(_QWORD *)(v9 + 8184) = v9 + 8112;
        *(_BYTE *)(v9 + 3192) = *(_BYTE *)(v9 + 3192) & 0xF8 | 1;
        if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400000) != 0 )
        {
          v23 = ClearBitsAndSet;
          v21[0] = &v22;
          v22 = v9;
          v21[1] = 12LL;
          EtwTraceKernelEvent((__int64)v21, 1u, 0x20400000u, 0x24Bu, 0x401803u);
        }
        return 0LL;
      }
    }
    MiReturnCommit((__int64)a1, 8uLL);
    if ( v8 )
      MiReleasePtes((__int64)&qword_14043C060, v8, 3u);
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043B058, 0LL);
  _bittestandreset((signed __int32 *)qword_14043C010->Buffer, ClearBitsAndSet);
LABEL_22:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043B058, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043B058);
  KeAbPostRelease((ULONG_PTR)&qword_14043B058);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 3221225495LL;
}
