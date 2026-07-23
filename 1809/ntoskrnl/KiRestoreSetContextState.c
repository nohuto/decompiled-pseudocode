/*
 * XREFs of KiRestoreSetContextState @ 0x1401BCEC0
 * Callers:
 *     NtContinue @ 0x1401BC450 (NtContinue.c)
 *     NtRaiseException @ 0x1401BC870 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1401BD360 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDCD0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BE0B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE490 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE870 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEC50 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401BF890 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0BD0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C2170 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C2560 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C2C00 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C3320 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3960 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401C4E10 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401C6100 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1401C9340 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C99C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401CB600 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401CCB00 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401CD500 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CDB40 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401CF200 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D03C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0800 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KeContextToKframes @ 0x1401BBE50 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
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
    v15[21] = 0x1401BD0B5LL;
    v15[52] = 0x1401BD1CCLL;
    v15[51] = 0x1401BD1C3LL;
    v15[50] = 0x1401BD1BALL;
    v15[49] = 0x1401BD1B1LL;
    v15[48] = 0x1401BD1A8LL;
    v15[47] = 0x1401BD19FLL;
    v15[46] = 0x1401BD196LL;
    v15[45] = 0x1401BD18DLL;
    v15[44] = 0x1401BD184LL;
    v15[43] = 0x1401BD17BLL;
    v15[42] = 0x1401BD172LL;
    v15[41] = 0x1401BD169LL;
    v15[40] = 0x1401BD160LL;
    v15[39] = 0x1401BD157LL;
    v15[38] = 0x1401BD14ELL;
    v15[37] = 0x1401BD145LL;
    v15[36] = 0x1401BD13CLL;
    v15[35] = 0x1401BD133LL;
    v15[34] = 0x1401BD12ALL;
    v15[33] = 0x1401BD121LL;
    v15[32] = 0x1401BD118LL;
    v15[31] = 0x1401BD10FLL;
    v15[30] = 0x1401BD106LL;
    v15[29] = 0x1401BD0FDLL;
    v15[28] = 0x1401BD0F4LL;
    v15[27] = 0x1401BD0EBLL;
    v15[26] = 0x1401BD0E2LL;
    v15[25] = 0x1401BD0D9LL;
    v15[24] = 0x1401BD0D0LL;
    v15[23] = 0x1401BD0C7LL;
    v15[22] = 0x1401BD0BELL;
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
