/*
 * XREFs of KiNpxNotAvailableFault @ 0x1401CA000
 * Callers:
 *     KiNpxNotAvailableFaultShadow @ 0x14032F480 (KiNpxNotAvailableFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiNpxNotAvailableFault @ 0x1401CA000 (KiNpxNotAvailableFault.c)
 *     KiBugCheckDispatch @ 0x1401CFF00 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __noreturn KiNpxNotAvailableFault()
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v1; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r8
  char v6; // [rsp+170h] [rbp+F0h]
  __int16 v7; // [rsp+178h] [rbp+F8h]

  if ( (v6 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v1 = *(_QWORD *)&CurrentThread->Process[2].AddressPolicy;
    __writegsqword(0x858u, v1);
    __writegsword(0x852u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOWORD(v1) = KeGetPcr()->Prcb.BpbState;
    __writegsword(0x854u, v1);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x864u, BpbKernelSpecCtrl);
      v1 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    BpbState = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v1 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
    }
    if ( (BpbState & 2) != 0 )
      JUMPOUT(0x1401CA235LL);
    if ( (BpbState & 0x200) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v1);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v1);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (v7 & 0x200) != 0 )
    _enable();
  v4 = __readcr4();
  v5 = __readcr0();
  KiBugCheckDispatch(127LL, 7LL, v5, v4);
}
