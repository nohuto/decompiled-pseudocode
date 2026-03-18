/*
 * XREFs of KiBoundFault @ 0x1401CF780
 * Callers:
 *     KiBoundFaultShadow @ 0x140350380 (KiBoundFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x1401CF780 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x1401D58C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D5C80 (KiFastFailDispatch.c)
 *     KiUmsTrapEntry @ 0x1401D6280 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401D6700 (KiUmsExit.c)
 *     KiHandleBound @ 0x1402A5E20 (KiHandleBound.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

__int64 __fastcall KiBoundFault(int a1, unsigned __int64 Object, int a3, int a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v6; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  ULONG64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *v13; // rcx
  struct _KTHREAD *v14; // rcx
  unsigned __int8 BpbUserSpecCtrl; // al
  char v19; // [rsp+20h] [rbp-60h]
  unsigned int v20; // [rsp+2Ch] [rbp-54h]
  int v22; // [rsp+40h] [rbp-40h]
  __int16 v25; // [rsp+100h] [rbp+80h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  char v27; // [rsp+170h] [rbp+F0h]
  __int16 v28; // [rsp+178h] [rbp+F8h]

  v22 = Object;
  if ( (v27 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v6 = *(_QWORD *)&CurrentThread->Process[2].Spare2[23];
    __writegsqword(0x270u, v6);
    __writegsbyte(0x851u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOBYTE(v6) = KeGetPcr()->Prcb.BpbState;
    __writegsbyte(0x852u, v6);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsbyte(0x27Au, BpbKernelSpecCtrl);
      v6 = 72LL;
      HIDWORD(Object) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(Object) = KeGetPcr()->Prcb.BpbState;
    if ( (Object & 8) != 0 )
    {
      Object = 0LL;
      v6 = 73LL;
      __writemsr(0x49u, 1uLL);
    }
    else
    {
      if ( (Object & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
      {
        a4 = 1075640589;
        a3 = 1075640580;
        v22 = 1075640571;
        a1 = 1075640562;
        v19 = -41;
      }
      _mm_lfence();
    }
    __writegsbyte(0x853u, 0);
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v6 = 3221225730LL;
      v8 = __readmsr(0xC0000102);
      Object = (unsigned __int64)HIDWORD(v8) << 32;
      if ( v8 >= MmUserProbeAddress )
        v8 = MmUserProbeAddress;
      if ( CurrentThread->Teb != (void *)v8 )
      {
        Object = (unsigned __int64)CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        *(_QWORD *)(Object + 128) = v8;
      }
    }
    v25 = 0;
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v6, Object);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  v20 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (_BYTE)KeSmapEnabled && (v27 & 1) != 0 )
    __asm { stac }
  if ( (v28 & 0x200) != 0 )
    _enable();
  if ( (v27 & 1) != 0 )
  {
    if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) )
      KiUmsTrapEntry();
    v9 = KiHandleBound();
    if ( v9 )
    {
      if ( v9 == 1 )
        goto LABEL_36;
      if ( v9 != 2 )
        KiBugCheckDispatch(127LL, 5LL, v11, v12);
      KiFastFailDispatch(3221226505LL, 1LL, retaddr, 28LL);
    }
  }
  KiExceptionDispatch(3221225612LL, 0LL, retaddr);
LABEL_36:
  _disable();
  if ( (v27 & 1) == 0 )
  {
    _mm_setcsr(v20);
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
  v13 = KeGetCurrentThread();
  if ( (v13->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)v13, v10, v11, v12, v19);
  v14 = KeGetCurrentThread();
  if ( (v14->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v14->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v14 = KeGetCurrentThread();
    }
    if ( (v14->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v14) = 1;
      KiUmsExit(v14);
    }
  }
  _mm_setcsr(v20);
  if ( v25 )
    KiRestoreDebugRegisterState(v14);
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
  return KiKernelExit(a1, v22, a3, a4, a5);
}
