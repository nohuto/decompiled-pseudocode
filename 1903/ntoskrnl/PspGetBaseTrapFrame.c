/*
 * XREFs of PspGetBaseTrapFrame @ 0x14001B3F0
 * Callers:
 *     RtlpWalkFrameChain @ 0x140017EB0 (RtlpWalkFrameChain.c)
 *     PsGetBaseTrapFrame @ 0x140307040 (PsGetBaseTrapFrame.c)
 *     PspInitializeThunkContext @ 0x1405E79CC (PspInitializeThunkContext.c)
 *     PspGetSetContextInternal @ 0x1405E7FD0 (PspGetSetContextInternal.c)
 *     PspFreeUserFiberShadowStack @ 0x1408C8D64 (PspFreeUserFiberShadowStack.c)
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
