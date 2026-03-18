/*
 * XREFs of DebugID @ 0x1C0065B20
 * Callers:
 *     <none>
 * Callees:
 *     DebugInPort @ 0x1C0065B5C (DebugInPort.c)
 */

__int64 __fastcall DebugID(__int64 a1, __int64 a2)
{
  return DebugInPort(a2, 4LL);
}
