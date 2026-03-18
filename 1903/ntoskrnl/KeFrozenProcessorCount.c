/*
 * XREFs of KeFrozenProcessorCount @ 0x1402AE1A0
 * Callers:
 *     IoInitializeBugCheckProgress @ 0x140295154 (IoInitializeBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14029571C (IoUpdateBugCheckProgressEnvVariable.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 */

__int64 KeFrozenProcessorCount()
{
  unsigned int v0; // edi
  ULONG i; // ebx
  __int64 Prcb; // rax

  v0 = 0;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( Prcb && (*(_DWORD *)(Prcb + 11656) & 0xF) == 2 )
      ++v0;
  }
  return v0;
}
