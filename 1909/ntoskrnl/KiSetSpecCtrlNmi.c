/*
 * XREFs of KiSetSpecCtrlNmi @ 0x1401C8320
 * Callers:
 *     KiNmiInterruptStart @ 0x1401CF840 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1401D3140 (KiMcheckAbort.c)
 * Callees:
 *     sub_1401C8492 @ 0x1401C8492 (sub_1401C8492.c)
 */

__int64 __fastcall KiSetSpecCtrlNmi()
{
  __int64 v0; // rbp
  unsigned __int64 v1; // rax

  if ( !KeGetPcr()->Prcb.BpbKernelSpecCtrl
    || (v1 = __readmsr(0x48u),
        *(_BYTE *)(v0 - 86) = v1,
        LOBYTE(v1) = KeGetPcr()->Prcb.BpbKernelSpecCtrl,
        __writemsr(0x48u, (unsigned __int8)v1),
        (v1 & 1) == 0) )
  {
    if ( (KeGetPcr()->Prcb.BpbFeatures & 2) != 0 )
      __writemsr(0x49u, 1uLL);
LABEL_7:
    JUMPOUT(0x1401C849FLL);
  }
  if ( (KeGetPcr()->Prcb.BpbFeatures & 4) != 0 )
    goto LABEL_7;
  sub_1401C8492(72LL, 0LL);
  return sub_1401C8384();
}
