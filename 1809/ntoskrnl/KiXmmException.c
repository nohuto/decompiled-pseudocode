/*
 * XREFs of KiXmmException @ 0x1401CD140
 * Callers:
 *     KiXmmExceptionShadow @ 0x14032FA80 (KiXmmExceptionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiXmmException @ 0x1401CD140 (KiXmmException.c)
 *     KiBugCheckDispatch @ 0x1401CFF00 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __noreturn KiXmmException()
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v1; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  ULONG64 v4; // rax
  _QWORD *Object; // rdx
  __int16 v6; // ax
  __int64 v7; // rdx
  void *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int16 v13; // [rsp+2Ch] [rbp-54h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  __int16 v15; // [rsp+170h] [rbp+F0h]
  __int16 v16; // [rsp+178h] [rbp+F8h]

  if ( (v15 & 1) != 0 )
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
      JUMPOUT(0x1401CD375LL);
    if ( (BpbState & 0x200) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v1);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v1 = 3221225730LL;
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
  v13 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (v16 & 0x200) != 0 )
    _enable();
  v6 = ~((v13 >> 7) & 0x3F) & v13;
  v7 = 2LL;
  v8 = retaddr;
  v9 = 0LL;
  if ( v15 == 35 )
    goto LABEL_31;
  v10 = 3221225616LL;
  if ( (v6 & 1) != 0
    || (v10 = 3221225614LL, (v6 & 4) != 0)
    || (v10 = 3221225616LL, (v6 & 2) != 0)
    || (v10 = 3221225617LL, (v6 & 8) != 0)
    || (v10 = 3221225619LL, (v6 & 0x10) != 0)
    || (v10 = 3221225615LL, (v6 & 0x20) != 0) )
  {
    while ( 1 )
    {
      LOBYTE(v6) = KiExceptionDispatch(v10, v7, v8, v9);
LABEL_31:
      v10 = 3221226165LL;
      if ( (v6 & 1) == 0 && (v6 & 4) == 0 && (v6 & 2) == 0 )
      {
        v10 = 3221226164LL;
        if ( (v6 & 8) == 0 && (v6 & 0x10) == 0 && (v6 & 0x20) == 0 )
          break;
      }
    }
  }
  v11 = __readcr4();
  v12 = __readcr0();
  KiBugCheckDispatch(127LL, 9LL, v12, v11);
}
