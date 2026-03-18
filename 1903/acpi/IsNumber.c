/*
 * XREFs of IsNumber @ 0x1C0066314
 * Callers:
 *     DebugExpr @ 0x1C0065984 (DebugExpr.c)
 *     DebugInPort @ 0x1C0065B5C (DebugInPort.c)
 *     DebugNotify @ 0x1C0065C60 (DebugNotify.c)
 *     DebugOutPort @ 0x1C0065E2C (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C0065F60 (DebugRunMethod.c)
 * Callees:
 *     _strtoui64_0 @ 0x1C00317A9 (_strtoui64_0.c)
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
