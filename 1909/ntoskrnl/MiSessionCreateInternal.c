/*
 * XREFs of MiSessionCreateInternal @ 0x14074240C
 * Callers:
 *     MiSessionCreate @ 0x140741918 (MiSessionCreate.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140006560 (PsGetCurrentServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     MiGetPdeAddress @ 0x14001F7E4 (MiGetPdeAddress.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     RtlFindClearBitsAndSet @ 0x140085750 (RtlFindClearBitsAndSet.c)
 *     RtlClearAllBits @ 0x14008D950 (RtlClearAllBits.c)
 *     RtlGetInterruptTimePrecise @ 0x14009E740 (RtlGetInterruptTimePrecise.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     MiMarkSessionMasterProcess @ 0x14017A750 (MiMarkSessionMasterProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiMapNewSession @ 0x14074270C (MiMapNewSession.c)
 */

__int64 __fastcall MiSessionCreateInternal(ULONG_PTR *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rax
  ULONG ClearBitsAndSet; // r14d
  char v5; // al
  ULONG_PTR v6; // rax
  unsigned __int64 v7; // r15
  __int64 v8; // rdi
  unsigned __int16 v9; // ax
  int v10; // ecx
  unsigned __int16 v11; // si
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rcx
  unsigned __int64 PdeAddress; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r9
  void *CurrentServerSilo; // rax
  unsigned int v20; // edi
  _RTL_BITMAP *PoolWithTag; // rax
  _RTL_BITMAP *v22; // r14
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h]
  __int64 v25; // [rsp+40h] [rbp-40h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-38h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  ULONG v28; // [rsp+58h] [rbp-28h]
  int v29; // [rsp+5Ch] [rbp-24h]
  _QWORD v30[2]; // [rsp+60h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v24 = qword_1404656D8;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v25 = Process;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404656B0, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140466690, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v20 = qword_140466690->SizeOfBitMap + 128;
    if ( v20 > 0x7FFFF )
      v20 = 0x7FFFF;
    PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                   PagedPool,
                                   8 * ((v20 >> 6) + ((v20 & 0x3F) != 0) + 2),
                                   0x20206D4Du);
    v22 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_22;
    PoolWithTag->SizeOfBitMap = v20;
    PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
    RtlClearAllBits(PoolWithTag);
    memmove(
      v22->Buffer,
      qword_140466690->Buffer,
      8 * (((unsigned __int64)qword_140466690->SizeOfBitMap >> 6) + ((qword_140466690->SizeOfBitMap & 0x3F) != 0)));
    ExFreePoolWithTag(qword_140466690, 0);
    qword_140466690 = v22;
    ClearBitsAndSet = RtlFindClearBitsAndSet(v22, 1u, 0);
  }
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404656B0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404656B0);
  KeAbPostRelease((ULONG_PTR)&qword_1404656B0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( (unsigned int)MiChargeCommit((__int64)a1, 8uLL, 0) )
  {
    v6 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)1);
    v7 = v6;
    if ( v6 )
    {
      v8 = (__int64)(v6 << 25) >> 16;
      if ( (unsigned int)MiChargeResident(a1, ClearBitsAndSet != 0 ? 1032LL : 28LL, 0LL) )
      {
        v9 = MiMapNewSession(v8, *(unsigned __int16 *)a1);
        v10 = PsDefaultSystemLocaleId;
        v11 = v9;
        *(_DWORD *)(v8 + 4) = 0;
        *(_DWORD *)(v8 + 96) = v10;
        *(_DWORD *)v8 = 1;
        *(_DWORD *)(v8 + 8) = ClearBitsAndSet;
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        v13 = v24;
        v14 = v24;
        *(LARGE_INTEGER *)(v8 + 1336) = InterruptTimePrecise;
        PdeAddress = MiGetPdeAddress(v14);
        v23 = MI_READ_PTE_LOCK_FREE(PdeAddress);
        *(_QWORD *)(v8 + 32) = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFLL;
        *(_WORD *)(v8 + 430) = *(_WORD *)a1;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a1[21] + 24)) <= 1 )
          __fastfail(0xEu);
        *(_DWORD *)(v8 + 256) = v11;
        *(_QWORD *)(v8 + 368) = ClearBitsAndSet != 0 ? 1024LL : 20LL;
        *(_QWORD *)(v8 + 40) = 8LL;
        *(_QWORD *)(v8 + 48) = 8LL;
        v16 = MI_READ_PTE_LOCK_FREE(8 * ((v13 >> 39) & 0x1FF) - 0x90482413000LL);
        *(_QWORD *)(v8 + 1096) = v16;
        v23 = v16;
        *(_QWORD *)(v8 + 1104) = 0LL;
        *(_QWORD *)(v8 + 88) = 0LL;
        *(_QWORD *)(v8 + 1136) = 0LL;
        *(_QWORD *)(v8 + 24) = v8 + 16;
        *(_QWORD *)(v8 + 16) = v8 + 16;
        *(_DWORD *)(v8 + 12) = v17;
        *(_QWORD *)(v8 + 224) = v17 + _InterlockedExchangeAdd64(&PsNextSecurityDomain, v17);
        CurrentServerSilo = (void *)PsGetCurrentServerSilo();
        *(_QWORD *)(v8 + 1328) = CurrentServerSilo;
        if ( CurrentServerSilo )
        {
          ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
          _InterlockedCompareExchange(
            *((volatile signed __int32 **)PsGetServerSiloGlobals(*(_QWORD *)(v8 + 1328)) + 138),
            ClearBitsAndSet,
            -1);
        }
        MiMarkSessionMasterProcess(v25, v8);
        *(_DWORD *)(v8 + 1184) = 4;
        *(_QWORD *)(v8 + 1176) = MiGetPteAddress(qword_140464698);
        *(_QWORD *)(v8 + 1192) = v13 + 220;
        *(_DWORD *)(v8 + 1188) = 1;
        *(_QWORD *)(v8 + 1208) = v8 + 1136;
        *(_BYTE *)(v8 + 440) = *(_BYTE *)(v8 + 440) & 0xF8 | 1;
        if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400000) != 0 )
        {
          v29 = 0;
          v30[0] = &v27;
          v28 = ClearBitsAndSet;
          v27 = v8;
          v30[1] = 12LL;
          EtwTraceKernelEvent((__int64)v30, 1u, 0x20400000u, 0x24Bu, 0x401803u);
        }
        return 0LL;
      }
    }
    MiReturnCommit((__int64)a1, 8uLL);
    if ( v7 )
      MiReleasePtes((__int64)&qword_1404666C0, v7, 1u);
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404656B0, 0LL);
  _bittestandreset((signed __int32 *)qword_140466690->Buffer, ClearBitsAndSet);
LABEL_22:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404656B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404656B0);
  KeAbPostRelease((ULONG_PTR)&qword_1404656B0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 3221225495LL;
}
