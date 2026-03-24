/*
 * XREFs of HvlUpdateMicrocodeDatabase @ 0x140817A60
 * Callers:
 *     <none>
 * Callees:
 *     HvlpCondenseMicrocode @ 0x140817A84 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140817AF0 (HvlpDynamicUpdateMicrocode.c)
 */

__int64 __fastcall HvlUpdateMicrocodeDatabase(__int64 a1, int a2)
{
  if ( a1 || a2 )
    return HvlpDynamicUpdateMicrocode();
  else
    return HvlpCondenseMicrocode();
}
