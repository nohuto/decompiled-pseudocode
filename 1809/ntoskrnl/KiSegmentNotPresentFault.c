/*
 * XREFs of KiSegmentNotPresentFault @ 0x1401CABC0
 * Callers:
 *     KiSegmentNotPresentFaultShadow @ 0x14032F680 (KiSegmentNotPresentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiSegmentNotPresentFault @ 0x1401CABC0 (KiSegmentNotPresentFault.c)
 *     KiBugCheckDispatch @ 0x1401CFF00 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __fastcall __noreturn KiSegmentNotPresentFault(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  ULONG64 v4; // rax
  _QWORD *Object; // rdx
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+E0h]
  __int64 v10; // [rsp+168h] [rbp+E8h]
  char v11; // [rsp+170h] [rbp+F0h]
  __int16 v12; // [rsp+178h] [rbp+F8h]

  if ( (v11 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    a1 = *(_QWORD *)&CurrentThread->Process[2].AddressPolicy;
    __writegsqword(0x858u, a1);
    __writegsword(0x852u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOWORD(a1) = KeGetPcr()->Prcb.BpbState;
    __writegsword(0x854u, a1);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x864u, BpbKernelSpecCtrl);
      a1 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    BpbState = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      a1 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
    }
    if ( (BpbState & 2) != 0 )
      JUMPOUT(0x1401CADF1LL);
    if ( (BpbState & 0x200) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(a1);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      a1 = 3221225730LL;
      v4 = __readmsr(0xC0000102);
      if ( v4 >= MmUserProbeAddress )
        v4 = MmUserProbeAddress;
      if ( CurrentThread->Teb != (void *)v4 )
      {
        Object = CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        Object[16] = v4;
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(a1);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
    {
      a1 = 72LL;
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    }
    else
    {
      _mm_lfence();
    }
  }
  _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  LOBYTE(v6) = (_BYTE)retaddr;
  if ( ((unsigned __int8)retaddr & 4) != 0 )
    a1 = _InterlockedExchange64(MK_FP(__GS__, 26344LL), 0LL);
  if ( (v12 & 0x200) != 0 )
    _enable();
  if ( (v6 & 4) != 0 )
    KiExceptionDispatch(268435462LL, 2LL, v10, a1);
  if ( (v11 & 1) != 0 )
    KiExceptionDispatch(268435463LL, 2LL, v10, (unsigned __int16)retaddr | 3u);
  v7 = (unsigned int)retaddr;
  v8 = __readcr0();
  KiBugCheckDispatch(127LL, 11LL, v8, v7);
}
