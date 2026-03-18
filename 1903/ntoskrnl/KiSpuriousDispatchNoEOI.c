/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x1401C5FF0
 * Callers:
 *     <none>
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140042A80 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400AEB30 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CA1A0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A4590 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiSpuriousDispatchNoEOI(__int64 a1, __int64 a2, __int64 CurrentThread, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  int v12; // ecx
  struct _KPRCB *v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  struct _KTHREAD *v17; // rcx
  struct _KTHREAD *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned __int8 BpbUserSpecCtrl; // al
  char v25; // [rsp-C8h] [rbp-C8h]

  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(15LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
  }
  *(_BYTE *)(v5 - 87) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v9 = __rdtsc() - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v9;
    v10 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v9;
    v11 = v9 + v10;
    v12 = v11;
    a2 = HIDWORD(v11);
    if ( a2 )
      v12 = -1;
    *(_DWORD *)(CurrentThread + 80) = v12;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v9);
  }
  _enable();
  ++*(_DWORD *)(v6 + 116);
  _disable();
  v13 = KeGetCurrentPrcb();
  if ( v13->NestingLevel <= 1u )
  {
    v14 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v14) << 32;
    v15 = (a2 | (unsigned int)v14) - v13->StartCycles;
    v13->CycleTime += v15;
    v13->StartCycles += v15;
    CurrentThread = v15;
    if ( (v13->CurrentThread->Header.Size & 0x72) != 0 )
    {
      KiBeginThreadAccountingPeriod((__int64)v13, 0LL, v15);
      v13 = KeGetCurrentPrcb();
      ++v13->NestingLevel;
    }
    LOBYTE(a2) = v13->InterruptRequest;
    v13->InterruptRequest = 0;
    if ( !v13->IdleHalt )
    {
      if ( (_BYTE)a2 )
      {
        if ( *(_BYTE *)(v5 - 87) < 2u )
        {
          v13->NestingLevel = 0;
          KiDpcInterruptBypass(v13, a2, CurrentThread);
          goto LABEL_18;
        }
        HalRequestSoftwareInterrupt(2LL);
        v13 = KeGetCurrentPrcb();
      }
    }
  }
  --v13->NestingLevel;
LABEL_18:
  v16 = *(unsigned __int8 *)(v5 - 87);
  if ( KiIrqlFlags )
    KzSetIrqlUnsafe(v16);
  else
    __writecr8(v16);
  _disable();
  if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    __asm { iretq }
  }
  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  while ( (KeGetCurrentThread()->ApcState.UserApcPendingAll & 3) != 0 )
  {
    __writecr8(1uLL);
    _enable();
    KiInitiateUserApc();
    _disable();
    __writecr8(0LL);
  }
  if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 14) & 2) != 0 )
    KiUpdateStibpPairing(0LL);
  v17 = KeGetCurrentThread();
  if ( (v17->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)v17, a2, CurrentThread, a4, v25);
  v18 = KeGetCurrentThread();
  if ( (v18->Header.LockNV & 0x40010000) != 0 && (v18->Header.Size & 1) != 0 )
  {
    KiCopyCounters();
    v18 = KeGetCurrentThread();
  }
  _mm_setcsr(*(_DWORD *)(v5 - 84));
  if ( *(_WORD *)(v5 + 128) )
    ((void (__fastcall *)(struct _KTHREAD *))KiRestoreDebugRegisterState)(v18);
  v19 = *(_QWORD *)(v5 - 48);
  v20 = *(_QWORD *)(v5 - 56);
  __writegsbyte(0x853u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsbyte(0x27Au, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  if ( _bittestandreset16(MK_FP(__GS__, 632LL), 2u) )
    __writemsr(0x49u, 1uLL);
  if ( (KiKvaShadow & 1) == 0 )
  {
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v20, v19, a5);
}
