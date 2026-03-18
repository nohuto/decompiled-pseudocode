/*
 * XREFs of KeContextToKframes @ 0x1401C47D0
 * Callers:
 *     KiDispatchException @ 0x1400161A0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x14001BC14 (KiContinuePreviousModeUser.c)
 *     KiContinueEx @ 0x14001BE00 (KiContinueEx.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiRaiseException @ 0x1402B1210 (KiRaiseException.c)
 *     KiRestoreProcessorState @ 0x1402B5320 (KiRestoreProcessorState.c)
 *     KeCopyContextToUch @ 0x140881138 (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x140881B60 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x140082880 (KxContextToKframes.c)
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
