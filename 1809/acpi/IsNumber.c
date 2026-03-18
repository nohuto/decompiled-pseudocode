/*
 * XREFs of IsNumber @ 0x1C00642DC
 * Callers:
 *     DebugExpr @ 0x1C006393C (DebugExpr.c)
 *     DebugInPort @ 0x1C0063B1C (DebugInPort.c)
 *     DebugNotify @ 0x1C0063C20 (DebugNotify.c)
 *     DebugOutPort @ 0x1C0063DEC (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C0063F20 (DebugRunMethod.c)
 * Callees:
 *     _strtoui64_0 @ 0x1C0030B29 (_strtoui64_0.c)
 */

char __fastcall IsNumber(const char *a1, int a2)
{
  char v3; // di
  char *EndPtr; // [rsp+40h] [rbp+18h] BYREF

  EndPtr = 0LL;
  v3 = 1;
  if ( strtoui64_0(a1, &EndPtr, a2) == -1LL || a1 == EndPtr || !*a1 )
    return 0;
  return v3;
}
