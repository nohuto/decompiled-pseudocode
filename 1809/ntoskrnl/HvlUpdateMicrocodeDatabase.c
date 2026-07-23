/*
 * XREFs of HvlUpdateMicrocodeDatabase @ 0x140818C60
 * Callers:
 *     <none>
 * Callees:
 *     HvlpCondenseMicrocode @ 0x140818C84 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140818CF0 (HvlpDynamicUpdateMicrocode.c)
 */

__int64 __fastcall HvlUpdateMicrocodeDatabase(__int64 a1, int a2)
{
  if ( a1 || a2 )
    return HvlpDynamicUpdateMicrocode();
  else
    return HvlpCondenseMicrocode();
}
