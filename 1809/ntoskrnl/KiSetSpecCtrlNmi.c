/*
 * XREFs of KiSetSpecCtrlNmi @ 0x1401C0820
 * Callers:
 *     KiNmiInterruptStart @ 0x1401C8800 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1401CC4C0 (KiMcheckAbort.c)
 * Callees:
 *     sub_1401C0982 @ 0x1401C0982 (sub_1401C0982.c)
 */

__int64 __fastcall KiSetSpecCtrlNmi()
{
  __int64 v0; // rbp
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  if ( !KeGetPcr()->Prcb.BpbKernelSpecCtrl
    || (v1 = __readmsr(0x48u),
        *(_DWORD *)(v0 + 192) = v1,
        LOWORD(v1) = KeGetPcr()->Prcb.BpbKernelSpecCtrl,
        v2 = 72LL,
        __writemsr(0x48u, (unsigned __int16)v1),
        (v1 & 1) == 0) )
  {
    if ( (KeGetPcr()->Prcb.BpbFeatures & 2) == 0 )
      JUMPOUT(0x1401C0994LL);
    v2 = 73LL;
    __writemsr(0x49u, 1uLL);
  }
  sub_1401C0982(v2, 0LL);
  return sub_1401C0874();
}
