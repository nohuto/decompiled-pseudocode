/*
 * XREFs of KeUserModeCallback @ 0x140647480
 * Callers:
 *     <none>
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x140088A50 (MmSessionGetWin32Callouts.c)
 *     MmCreateKernelStack @ 0x1400C9FF0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400CA580 (MmDeleteKernelStack.c)
 *     KeExitRetpoline @ 0x14013926C (KeExitRetpoline.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiCallUserMode @ 0x1401C0000 (KiCallUserMode.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExCallCallBack @ 0x1405F5BA4 (ExCallCallBack.c)
 *     ExRaiseAccessViolation @ 0x1408D7860 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall KeUserModeCallback(int a1, const void *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  size_t v5; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 ApcStateIndex; // al
  unsigned __int8 CallbackNestingLevel; // cl
  __int64 KernelStack; // rax
  unsigned __int64 v11; // r15
  _KTRAP_FRAME *TrapFrame; // r13
  unsigned __int64 Rsp; // r12
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int8 BpbRetpolineState; // bl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // r14d
  _RTL_RUN_ONCE *Win32Callouts; // rax
  ULONG_PTR retaddr; // [rsp+98h] [rbp+0h]

  v5 = a3;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x1000) != 0 )
    KeBugCheckEx(0x107u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x4Au, retaddr, KeGetCurrentIrql(), 0LL, 0LL);
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex || CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, retaddr, ApcStateIndex, CurrentThread->CombinedApcDisable, 0LL);
  CallbackNestingLevel = CurrentThread->CallbackNestingLevel;
  CurrentThread->CallbackNestingLevel = CallbackNestingLevel + 1;
  if ( (unsigned __int8)(CallbackNestingLevel + 1) <= 0x1Fu )
  {
    KernelStack = MmCreateKernelStack(
                    0,
                    *(_WORD *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL),
                    (unsigned __int64)CurrentThread);
    v11 = KernelStack;
    if ( KernelStack )
    {
      *(_QWORD *)(KernelStack - 48) = KernelStack;
      *(_QWORD *)(KernelStack - 40) = KernelStack - (unsigned int)KeKernelStackSize;
      *(_QWORD *)(KernelStack - 32) = CurrentThread->StackBase;
      *(_QWORD *)(KernelStack - 24) = CurrentThread->StackLimit;
      *(_QWORD *)(KernelStack - 8) = CurrentThread->InitialStack;
      TrapFrame = CurrentThread->TrapFrame;
      Rsp = TrapFrame->Rsp;
      v14 = (Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL;
      v15 = v14;
      v16 = v14 + ((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 87;
      if ( v14 > v16 || v16 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v15 = *(_BYTE *)v15;
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != v17 );
      memmove((void *)(v14 + 88), a2, v5);
      *(_QWORD *)(v14 + 32) = v14 + 88;
      *(_DWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) = v5;
      *(_DWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x2C) = a1;
      *(_QWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x48) = Rsp;
      *(_QWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x30) = TrapFrame->Rip;
      v18 = 0LL;
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
      {
        v19 = __readmsr(0x6A0u);
        if ( (v19 & 1) != 0 )
          v18 = __readmsr(0x6A7u);
      }
      BpbRetpolineState = KeGetPcr()->Prcb.BpbRetpolineState;
      TrapFrame->Rsp = v14;
      v25 = KiCallUserMode(a4, a5, v11 - 48, v11);
      if ( (BpbRetpolineState & 1) != 0 )
        KeExitRetpoline(v22, v21, v23, v24);
      _mm_lfence();
      if ( *((_DWORD *)CurrentThread->Teb + 1488) )
      {
        TrapFrame->Rsp -= 256LL;
        Win32Callouts = MmSessionGetWin32Callouts();
        ExCallCallBack((signed __int64 *)Win32Callouts, 7LL, 0LL);
      }
      if ( v18 )
        __writemsr(0x6A7u, v18);
      TrapFrame->Rsp = Rsp;
      --CurrentThread->CallbackNestingLevel;
      MmDeleteKernelStack(v11, 0);
      return v25;
    }
    else
    {
      --CurrentThread->CallbackNestingLevel;
      return 3221225495LL;
    }
  }
  else
  {
    CurrentThread->CallbackNestingLevel = CallbackNestingLevel;
    return 3221225725LL;
  }
}
