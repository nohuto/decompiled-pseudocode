/*
 * XREFs of PspGetBaseTrapFrame @ 0x1400A0E58
 * Callers:
 *     RtlpWalkFrameChain @ 0x14009EAD0 (RtlpWalkFrameChain.c)
 *     PsGetBaseTrapFrame @ 0x1402E9C5C (PsGetBaseTrapFrame.c)
 *     PspGetSetContextInternal @ 0x140620940 (PspGetSetContextInternal.c)
 *     PspInitializeThunkContext @ 0x1406217DC (PspInitializeThunkContext.c)
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
