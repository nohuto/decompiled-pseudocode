/*
 * XREFs of KeContextToKframes @ 0x1401C3C50
 * Callers:
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x14001B824 (KiContinuePreviousModeUser.c)
 *     KiContinueEx @ 0x14001BA10 (KiContinueEx.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiRaiseException @ 0x1402B14B0 (KiRaiseException.c)
 *     KiRestoreProcessorState @ 0x1402B55C0 (KiRestoreProcessorState.c)
 *     KeCopyContextToUch @ 0x140881A38 (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x140882460 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x140082480 (KxContextToKframes.c)
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
