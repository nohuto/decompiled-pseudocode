/*
 * XREFs of _strupr_0 @ 0x1C0030B3B
 * Callers:
 *     FindNSObjMainNoLock @ 0x1C0013AC0 (FindNSObjMainNoLock.c)
 *     DebugExpr @ 0x1C006393C (DebugExpr.c)
 *     DebugNotify @ 0x1C0063C20 (DebugNotify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strupr_0(char *String)
{
  return _strupr(String);
}
