/*
 * XREFs of DebugIW @ 0x1C0063B00
 * Callers:
 *     <none>
 * Callees:
 *     DebugInPort @ 0x1C0063B1C (DebugInPort.c)
 */

__int64 __fastcall DebugIW(__int64 a1, __int64 a2)
{
  return DebugInPort(a2, 2LL);
}
