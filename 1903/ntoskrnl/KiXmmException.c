/*
 * XREFs of KiXmmException @ 0x1401D3040
 * Callers:
 *     KiXmmExceptionShadow @ 0x140350A80 (KiXmmExceptionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiXmmException @ 0x1401D3040 (KiXmmException.c)
 *     KiBugCheckDispatch @ 0x1401D58C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 */

void __fastcall __noreturn KiXmmException(__int64 a1, unsigned __int64 Object)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v3; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  ULONG64 v5; // rax
  __int16 v6; // ax
  __int64 v7; // rdx
  void *v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int16 v12; // [rsp+2Ch] [rbp-54h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  __int16 v14; // [rsp+170h] [rbp+F0h]
  __int16 v15; // [rsp+178h] [rbp+F8h]

  if ( (v14 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v3 = *(_QWORD *)&CurrentThread->Process[2].Spare2[23];
    __writegsqword(0x270u, v3);
    __writegsbyte(0x851u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOBYTE(v3) = KeGetPcr()->Prcb.BpbState;
    __writegsbyte(0x852u, v3);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsbyte(0x27Au, BpbKernelSpecCtrl);
      v3 = 72LL;
      HIDWORD(Object) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(Object) = KeGetPcr()->Prcb.BpbState;
    if ( (Object & 8) != 0 )
    {
      Object = 0LL;
      v3 = 73LL;
      __writemsr(0x49u, 1uLL);
    }
    else
    {
      if ( (Object & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
        JUMPOUT(0x1401D3278LL);
      _mm_lfence();
    }
    __writegsbyte(0x853u, 0);
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v3 = 3221225730LL;
      v5 = __readmsr(0xC0000102);
      Object = (unsigned __int64)HIDWORD(v5) << 32;
      if ( v5 >= MmUserProbeAddress )
        v5 = MmUserProbeAddress;
      if ( CurrentThread->Teb != (void *)v5 )
      {
        Object = (unsigned __int64)CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        *(_QWORD *)(Object + 128) = v5;
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v3, Object);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  v12 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (_BYTE)KeSmapEnabled && (v14 & 1) != 0 )
    __asm { stac }
  if ( (v15 & 0x200) != 0 )
    _enable();
  v6 = ~((v12 >> 7) & 0x3F) & v12;
  v7 = 2LL;
  v8 = retaddr;
  if ( v14 == 35 )
    goto LABEL_34;
  v9 = 3221225616LL;
  if ( (v6 & 1) != 0
    || (v9 = 3221225614LL, (v6 & 4) != 0)
    || (v9 = 3221225616LL, (v6 & 2) != 0)
    || (v9 = 3221225617LL, (v6 & 8) != 0)
    || (v9 = 3221225619LL, (v6 & 0x10) != 0)
    || (v9 = 3221225615LL, (v6 & 0x20) != 0) )
  {
    while ( 1 )
    {
      LOBYTE(v6) = KiExceptionDispatch(v9, v7, v8);
LABEL_34:
      v9 = 3221226165LL;
      if ( (v6 & 1) == 0 && (v6 & 4) == 0 && (v6 & 2) == 0 )
      {
        v9 = 3221226164LL;
        if ( (v6 & 8) == 0 && (v6 & 0x10) == 0 && (v6 & 0x20) == 0 )
          break;
      }
    }
  }
  v10 = __readcr4();
  v11 = __readcr0();
  KiBugCheckDispatch(127LL, 9LL, v11, v10);
}
