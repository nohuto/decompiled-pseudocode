/*
 * XREFs of KeContextToKframes @ 0x1401BBCD0
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1400A240C (KiContinuePreviousModeUser.c)
 *     KiContinueEx @ 0x1400A2540 (KiContinueEx.c)
 *     KiDispatchException @ 0x1400A2F50 (KiDispatchException.c)
 *     KiRestoreSetContextState @ 0x1401BCD40 (KiRestoreSetContextState.c)
 *     KiRaiseException @ 0x14029A0B0 (KiRaiseException.c)
 *     KiRestoreProcessorState @ 0x14029CAEC (KiRestoreProcessorState.c)
 *     KeCopyContextToUch @ 0x1408465F8 (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x140847020 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x14008A780 (KxContextToKframes.c)
 */

char __fastcall KeContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  char result; // al
  int CurrentIrql; // [rsp+28h] [rbp-B0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  result = KxContextToKframes(a1, a2, a3, a4, a5);
  if ( result )
    _fxrstor((void *)(a3 + 256));
  if ( !CurrentIrql )
  {
    result = 0;
    __writecr8(0LL);
  }
  return result;
}
