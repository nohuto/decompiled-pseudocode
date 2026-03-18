/*
 * XREFs of IsInsideUserApiHook @ 0x1C00B51F0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsInsideUserApiHook()
{
  return gihmodUserApiHook >= 0;
}
