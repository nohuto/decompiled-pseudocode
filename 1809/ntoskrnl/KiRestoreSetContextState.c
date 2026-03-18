/*
 * XREFs of KiRestoreSetContextState @ 0x1401BCD40
 * Callers:
 *     NtContinue @ 0x1401BC2D0 (NtContinue.c)
 *     NtRaiseException @ 0x1401BC6F0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1401BD1E0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDB50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BDF30 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE310 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE6F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEAD0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401BF710 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0A50 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C1FF0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C23E0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C2A80 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C31A0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C37E0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401C4C90 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401C5F80 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1401C9140 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C97C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401CB400 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401CC900 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401CD300 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CD940 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401CF000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401CFD80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D01C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0600 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BD0 (KiUpdateStibpPairing.c)
 *     KeContextToKframes @ 0x1401BBCD0 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC070 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD40 (KiRestoreSetContextState.c)
 *     KiUmsExit @ 0x1401D0F00 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140295DC0 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiRestoreSetContextState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  struct _KTHREAD *Thread; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v11; // cf
  _QWORD v15[87]; // [rsp-298h] [rbp-3D0h] BYREF

  __writecr8(1uLL);
  _enable();
  Thread = KeGetCurrentThread()[1].WaitBlock[3].Thread;
  KeContextToKframes(v5 - 128, (__int64)v15, (__int64)Thread, (int)Thread->StackLimit, 1LL);
  _disable();
  __writecr8(0LL);
  _interlockedbittestandreset(&KeGetCurrentThread()->Header.Lock, 0x1Bu);
  if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 20) & 2) != 0 )
    ((void (__fastcall *)(_QWORD))KiUpdateStibpPairing)(0LL);
  if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    __asm { iretq }
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(CurrentThread) = 1;
      ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(CurrentThread);
    }
  }
  _mm_setcsr(*(_DWORD *)(v5 - 84));
  if ( *(_WORD *)(v5 + 128) )
    KiRestoreDebugRegisterState();
  v8 = *(_QWORD *)(v5 - 48);
  v9 = *(_QWORD *)(v5 - 56);
  __writegsbyte(0x856u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x864u, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v11 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
  if ( v11 )
    __writemsr(0x49u, 1uLL);
  v11 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
  if ( v11 )
  {
    v15[21] = 0x1401BCF35LL;
    v15[52] = 0x1401BD04CLL;
    v15[51] = 0x1401BD043LL;
    v15[50] = 0x1401BD03ALL;
    v15[49] = 0x1401BD031LL;
    v15[48] = 0x1401BD028LL;
    v15[47] = 0x1401BD01FLL;
    v15[46] = 0x1401BD016LL;
    v15[45] = 0x1401BD00DLL;
    v15[44] = 0x1401BD004LL;
    v15[43] = 0x1401BCFFBLL;
    v15[42] = 0x1401BCFF2LL;
    v15[41] = 0x1401BCFE9LL;
    v15[40] = 0x1401BCFE0LL;
    v15[39] = 0x1401BCFD7LL;
    v15[38] = 0x1401BCFCELL;
    v15[37] = 0x1401BCFC5LL;
    v15[36] = 0x1401BCFBCLL;
    v15[35] = 0x1401BCFB3LL;
    v15[34] = 0x1401BCFAALL;
    v15[33] = 0x1401BCFA1LL;
    v15[32] = 0x1401BCF98LL;
    v15[31] = 0x1401BCF8FLL;
    v15[30] = 0x1401BCF86LL;
    v15[29] = 0x1401BCF7DLL;
    v15[28] = 0x1401BCF74LL;
    v15[27] = 0x1401BCF6BLL;
    v15[26] = 0x1401BCF62LL;
    v15[25] = 0x1401BCF59LL;
    v15[24] = 0x1401BCF50LL;
    v15[23] = 0x1401BCF47LL;
    v15[22] = 0x1401BCF3ELL;
  }
  if ( (KiKvaShadow & 1) == 0 )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 0x100) != 0 )
      __asm { verw    [rsp-298h+arg_2B0] }
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v9, v8, a5);
}
