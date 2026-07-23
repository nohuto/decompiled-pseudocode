/*
 * XREFs of KeUserModeCallback @ 0x140686D70
 * Callers:
 *     <none>
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14001CE10 (MmSessionGetWin32Callouts.c)
 *     MmCreateKernelStack @ 0x1400C3CE0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400C4CB0 (MmDeleteKernelStack.c)
 *     KeExitRetpoline @ 0x1400FF0D8 (KeExitRetpoline.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KiCallUserMode @ 0x1401C70F0 (KiCallUserMode.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExCallCallBack @ 0x1405EB234 (ExCallCallBack.c)
 *     ExRaiseAccessViolation @ 0x140913EA0 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall KeUserModeCallback(int a1, const void *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 ApcStateIndex; // al
  unsigned __int8 CallbackNestingLevel; // cl
  __int64 KernelStack; // rax
  char *v10; // r14
  _KTRAP_FRAME *TrapFrame; // r13
  unsigned __int64 Rsp; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r15
  unsigned __int8 BpbRetpolineState; // di
  unsigned int v19; // esi
  _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned __int64 v22; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-78h]
  int v24; // [rsp+28h] [rbp-70h]
  int v25; // [rsp+30h] [rbp-68h]
  int v26; // [rsp+38h] [rbp-60h]
  int v27; // [rsp+48h] [rbp-50h]
  int v28; // [rsp+60h] [rbp-38h]
  int v29; // [rsp+68h] [rbp-30h]
  int v30; // [rsp+70h] [rbp-28h]
  char v31; // [rsp+78h] [rbp-20h]
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
  if ( (unsigned __int8)(CallbackNestingLevel + 1) > 0x1Fu )
  {
    CurrentThread->CallbackNestingLevel = CallbackNestingLevel;
    return 3221225725LL;
  }
  else
  {
    KernelStack = MmCreateKernelStack(
                    0,
                    *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL),
                    (unsigned __int64)CurrentThread);
    v10 = (char *)KernelStack;
    v27 = KernelStack;
    if ( KernelStack )
    {
      *(_QWORD *)(KernelStack - 48) = KernelStack;
      *(_QWORD *)(KernelStack - 40) = KernelStack - (unsigned int)KeKernelStackSize;
      *(_QWORD *)(KernelStack - 32) = CurrentThread->StackBase;
      *(_QWORD *)(KernelStack - 24) = CurrentThread->StackLimit;
      *(_QWORD *)(KernelStack - 8) = CurrentThread->InitialStack;
      TrapFrame = CurrentThread->TrapFrame;
      Rsp = TrapFrame->Rsp;
      v13 = (Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = v13;
      v15 = v13 + ((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 87;
      if ( v13 > v15 || v15 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v16 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v14 = *(_BYTE *)v14;
        v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v14 != v16 );
      memmove((void *)(v13 + 88), a2, (unsigned int)v5);
      *(_QWORD *)(v13 + 32) = v13 + 88;
      *(_DWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) = v5;
      *(_DWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x2C) = a1;
      *(_QWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x48) = Rsp;
      *(_QWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x30) = TrapFrame->Rip;
      v17 = 0LL;
      v26 = 0;
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
      {
        v22 = __readmsr(0x6A0u);
        if ( (v22 & 1) != 0 )
        {
          v17 = __readmsr(0x6A7u);
          v26 = v17;
        }
      }
      BpbRetpolineState = KeGetPcr()->Prcb.BpbRetpolineState;
      TrapFrame->Rsp = v13;
      v19 = KiCallUserMode(
              a4,
              a5,
              (unsigned __int64)(v10 - 48),
              v10,
              BugCheckParameter4,
              v24,
              v25,
              v26,
              (int)CurrentThread,
              v27,
              (int)TrapFrame,
              Rsp,
              v28,
              v29,
              v30,
              v31);
      if ( (BpbRetpolineState & 1) != 0 )
        KeExitRetpoline();
      _mm_lfence();
      if ( *((_DWORD *)CurrentThread->Teb + 1488) )
      {
        TrapFrame->Rsp -= 256LL;
        Win32Callouts = MmSessionGetWin32Callouts();
        ExCallCallBack((signed __int64 *)Win32Callouts, 7LL, 0LL);
      }
      if ( v17 )
        __writemsr(0x6A7u, v17);
      TrapFrame->Rsp = Rsp;
      --CurrentThread->CallbackNestingLevel;
      MmDeleteKernelStack((unsigned __int64)v10, 0);
      return v19;
    }
    else
    {
      --CurrentThread->CallbackNestingLevel;
      return 3221225495LL;
    }
  }
}
