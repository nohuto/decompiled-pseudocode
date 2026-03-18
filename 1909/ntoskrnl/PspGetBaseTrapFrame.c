/*
 * XREFs of PspGetBaseTrapFrame @ 0x14001B7E0
 * Callers:
 *     RtlpWalkFrameChain @ 0x1400182A0 (RtlpWalkFrameChain.c)
 *     PsGetBaseTrapFrame @ 0x140306AF0 (PsGetBaseTrapFrame.c)
 *     PspInitializeThunkContext @ 0x1405E819C (PspInitializeThunkContext.c)
 *     PspGetSetContextInternal @ 0x1405E87A0 (PspGetSetContextInternal.c)
 *     PspFreeUserFiberShadowStack @ 0x1408C8644 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetBaseTrapFrame(__int64 a1)
{
  __int64 i; // rdx

  for ( i = *(_QWORD *)(a1 + 40); (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
    ;
  return i - 400;
}
