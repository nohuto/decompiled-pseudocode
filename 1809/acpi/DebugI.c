/*
 * XREFs of DebugI @ 0x1C0063AC0
 * Callers:
 *     <none>
 * Callees:
 *     DebugInPort @ 0x1C0063B1C (DebugInPort.c)
 */

__int64 __fastcall DebugI(__int64 a1, __int64 a2)
{
  return DebugInPort(a2, 1LL);
}
