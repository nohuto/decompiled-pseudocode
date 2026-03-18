/*
 * XREFs of IsInsideUserApiHook @ 0x1C011C0AC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsInsideUserApiHook()
{
  return gihmodUserApiHook >= 0;
}
