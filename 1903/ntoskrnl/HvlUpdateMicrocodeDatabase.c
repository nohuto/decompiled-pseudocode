/*
 * XREFs of HvlUpdateMicrocodeDatabase @ 0x140851490
 * Callers:
 *     <none>
 * Callees:
 *     HvlpCondenseMicrocode @ 0x1408514B4 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140851528 (HvlpDynamicUpdateMicrocode.c)
 */

__int64 __fastcall HvlUpdateMicrocodeDatabase(__int64 a1, int a2)
{
  if ( a1 || a2 )
    return HvlpDynamicUpdateMicrocode();
  else
    return HvlpCondenseMicrocode();
}
