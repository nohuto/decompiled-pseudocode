/*
 * XREFs of KiRestoreSetContextState @ 0x1401BCD60
 * Callers:
 *     NtContinue @ 0x1401BC2F0 (NtContinue.c)
 *     NtRaiseException @ 0x1401BC710 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1401BD200 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDB70 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BDF50 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE330 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE710 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEAF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401BF730 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0A70 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C2010 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C2400 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C2AA0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C31C0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3800 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401C4CB0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401C5FA0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1401C9240 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C98C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401CB500 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401CCA00 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401CD400 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CDA40 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401CF100 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D02C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0700 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KeContextToKframes @ 0x1401BBCF0 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiUmsExit @ 0x1401D1000 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
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
    v15[21] = 0x1401BCF55LL;
    v15[52] = 0x1401BD06CLL;
    v15[51] = 0x1401BD063LL;
    v15[50] = 0x1401BD05ALL;
    v15[49] = 0x1401BD051LL;
    v15[48] = 0x1401BD048LL;
    v15[47] = 0x1401BD03FLL;
    v15[46] = 0x1401BD036LL;
    v15[45] = 0x1401BD02DLL;
    v15[44] = 0x1401BD024LL;
    v15[43] = 0x1401BD01BLL;
    v15[42] = 0x1401BD012LL;
    v15[41] = 0x1401BD009LL;
    v15[40] = 0x1401BD000LL;
    v15[39] = 0x1401BCFF7LL;
    v15[38] = 0x1401BCFEELL;
    v15[37] = 0x1401BCFE5LL;
    v15[36] = 0x1401BCFDCLL;
    v15[35] = 0x1401BCFD3LL;
    v15[34] = 0x1401BCFCALL;
    v15[33] = 0x1401BCFC1LL;
    v15[32] = 0x1401BCFB8LL;
    v15[31] = 0x1401BCFAFLL;
    v15[30] = 0x1401BCFA6LL;
    v15[29] = 0x1401BCF9DLL;
    v15[28] = 0x1401BCF94LL;
    v15[27] = 0x1401BCF8BLL;
    v15[26] = 0x1401BCF82LL;
    v15[25] = 0x1401BCF79LL;
    v15[24] = 0x1401BCF70LL;
    v15[23] = 0x1401BCF67LL;
    v15[22] = 0x1401BCF5ELL;
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
