/*
 * XREFs of DebugOD @ 0x1C0065DF0
 * Callers:
 *     <none>
 * Callees:
 *     DebugOutPort @ 0x1C0065E2C (DebugOutPort.c)
 */

__int64 __fastcall DebugOD(__int64 a1, __int64 a2)
{
  return DebugOutPort(a2, 4LL);
}
