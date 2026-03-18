/*
 * XREFs of KePrepareToDispatchVirtualProcessor @ 0x1402ABDF0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 */

char __fastcall KePrepareToDispatchVirtualProcessor(char a1, _BYTE *a2, _DWORD *a3)
{
  __m128i v3; // xmm0
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 BpbState; // dl
  unsigned __int8 BpbRetpolineExitSpecCtrl; // r8

  v3 = (__m128i)KiSpeculationFeatures;
  *a2 = 0;
  *a3 = 0;
  _disable();
  if ( (_mm_cvtsi128_si32(v3) & 0x100000) == 0 )
    return 1;
  CurrentPrcb = KeGetCurrentPrcb();
  BpbState = CurrentPrcb->BpbState;
  if ( (((v3.m128i_i8[0] & 1) == 0) & (unsigned __int8)~(BpbState >> 3)) != 0
    && a1
    && (CurrentPrcb->BpbRetpolineState & (BpbState >> 4) & 1) == 0 )
  {
    if ( (CurrentPrcb->PairRegister & 2) != 0 )
    {
      KiUpdateStibpPairing(0LL);
    }
    else
    {
      if ( (CurrentPrcb->BpbState & 4) != 0 )
      {
        __writemsr(0x49u, 1uLL);
        CurrentPrcb->BpbState &= ~4u;
      }
      CurrentPrcb->TrappedSecurityDomain = *(_QWORD *)&CurrentPrcb->CurrentThread->Process[2].Spare2[23];
    }
    BpbRetpolineExitSpecCtrl = CurrentPrcb->BpbRetpolineExitSpecCtrl;
    CurrentPrcb->BpbTrappedBpbState = CurrentPrcb->BpbState;
    CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbRetpolineExitSpecCtrl;
    if ( (CurrentPrcb->BpbRetpolineState & ((v3.m128i_i32[0] & 0x2000000) != 0)) == 0 )
      BpbRetpolineExitSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
    if ( CurrentPrcb->BpbCurrentSpecCtrl != BpbRetpolineExitSpecCtrl )
    {
      if ( (v3.m128i_i32[0] & 0x2000000) != 0 )
      {
        __writemsr(0x48u, BpbRetpolineExitSpecCtrl);
      }
      else
      {
        *a3 = BpbRetpolineExitSpecCtrl;
        *a2 = 1;
      }
      CurrentPrcb->BpbCurrentSpecCtrl = BpbRetpolineExitSpecCtrl;
    }
    return 1;
  }
  if ( (BpbState & 4) != 0 )
  {
    __writemsr(0x49u, 1uLL);
    CurrentPrcb->BpbState &= ~4u;
  }
  return 0;
}
