/*
 * XREFs of KiVirtualizationException @ 0x1401D3400
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140350B00 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KzLowerIrql @ 0x140015970 (KzLowerIrql.c)
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     KzRaiseIrql @ 0x1400ED050 (KzRaiseIrql.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x1401D3400 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x1401D58C0 (KiBugCheckDispatch.c)
 *     KiUmsExit @ 0x1401D6700 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x1402B3400 (KiEpfHandleNotification.c)
 */

__int64 __fastcall KiVirtualizationException(int a1, __int64 a2, int a3, int a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v6; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  _DWORD *VirtualApicAssist; // r9
  _QWORD *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v14; // rcx
  struct _KTHREAD *v15; // rcx
  unsigned __int8 BpbUserSpecCtrl; // al
  char NewIrql; // [rsp+20h] [rbp-60h]
  unsigned int v21; // [rsp+2Ch] [rbp-54h]
  int v23; // [rsp+40h] [rbp-40h]
  __int16 v26; // [rsp+100h] [rbp+80h]
  char v27; // [rsp+170h] [rbp+F0h]
  __int16 v28; // [rsp+178h] [rbp+F8h]

  v23 = a2;
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
      HIDWORD(a2) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(a2) = KeGetPcr()->Prcb.BpbState;
    if ( (a2 & 8) != 0 )
    {
      a2 = 0LL;
      v6 = 73LL;
      __writemsr(0x49u, 1uLL);
    }
    else
    {
      if ( (a2 & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
      {
        a4 = 1075656077;
        a3 = 1075656068;
        v23 = 1075656059;
        a1 = 1075656050;
        NewIrql = 87;
      }
      _mm_lfence();
    }
    __writegsbyte(0x853u, 0);
    v26 = 0;
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v6, a2);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  v21 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (_BYTE)KeSmapEnabled && (v27 & 1) != 0 )
    __asm { stac }
  VirtualApicAssist = KeGetPcr()->Prcb.VirtualApicAssist;
  if ( !VirtualApicAssist
    || VirtualApicAssist[17] != 1
    || (v28 & 0x200) == 0
    || (NewIrql = KeGetCurrentIrql(), NewIrql >= 2) )
  {
    KiBugCheckDispatch(127LL, 32LL, (unsigned __int8)NewIrql, KeGetPcr()->Prcb.VirtualApicAssist);
  }
  KzRaiseIrql(2u);
  _enable();
  v9 = KeGetPcr()->Prcb.VirtualApicAssist;
  v10 = v9[9];
  *((_DWORD *)v9 + 17) = 0;
  KiEpfHandleNotification(v10);
  _disable();
  KzLowerIrql(NewIrql);
  if ( (v27 & 1) == 0 )
  {
    _mm_setcsr(v21);
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
  v14 = KeGetCurrentThread();
  if ( (v14->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)v14, v11, v12, v13, NewIrql);
  v15 = KeGetCurrentThread();
  if ( (v15->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v15->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v15 = KeGetCurrentThread();
    }
    if ( (v15->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v15) = 1;
      KiUmsExit(v15);
    }
  }
  _mm_setcsr(v21);
  if ( v26 )
    KiRestoreDebugRegisterState(v15);
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
  return KiKernelExit(a1, v23, a3, a4, a5);
}
