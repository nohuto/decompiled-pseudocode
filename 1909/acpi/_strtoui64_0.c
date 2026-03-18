/*
 * XREFs of _strtoui64_0 @ 0x1C00317A9
 * Callers:
 *     ConvertToInteger @ 0x1C002AB2C (ConvertToInteger.c)
 *     DebugExpr @ 0x1C0065984 (DebugExpr.c)
 *     DebugInPort @ 0x1C0065B5C (DebugInPort.c)
 *     DebugOutPort @ 0x1C0065E2C (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C0065F60 (DebugRunMethod.c)
 *     IsNumber @ 0x1C0066314 (IsNumber.c)
 *     DbgParseOneArg @ 0x1C006B2B8 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
