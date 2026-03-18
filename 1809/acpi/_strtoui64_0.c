/*
 * XREFs of _strtoui64_0 @ 0x1C0030B29
 * Callers:
 *     ConvertToInteger @ 0x1C000BE4C (ConvertToInteger.c)
 *     DebugExpr @ 0x1C006393C (DebugExpr.c)
 *     DebugInPort @ 0x1C0063B1C (DebugInPort.c)
 *     DebugOutPort @ 0x1C0063DEC (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C0063F20 (DebugRunMethod.c)
 *     IsNumber @ 0x1C00642DC (IsNumber.c)
 *     DbgParseOneArg @ 0x1C0069264 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
