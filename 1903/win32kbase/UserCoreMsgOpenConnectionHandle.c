/*
 * XREFs of UserCoreMsgOpenConnectionHandle @ 0x1C01871E0
 * Callers:
 *     <none>
 * Callees:
 *     CoreMsgOpenConnection @ 0x1C00AA998 (CoreMsgOpenConnection.c)
 */

__int64 __fastcall UserCoreMsgOpenConnectionHandle(char a1, const struct tagMsgRoutingInfo *a2, void **a3)
{
  return CoreMsgOpenConnection(a1, a2, a3);
}
