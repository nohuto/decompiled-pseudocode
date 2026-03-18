/*
 * XREFs of IsInsideUserApiHook @ 0x1C0054E30
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsInsideUserApiHook()
{
  return gihmodUserApiHook >= 0;
}
