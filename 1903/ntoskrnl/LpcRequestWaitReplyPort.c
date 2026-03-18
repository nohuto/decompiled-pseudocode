/*
 * XREFs of LpcRequestWaitReplyPort @ 0x14071B1C0
 * Callers:
 *     <none>
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1406CAC38 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPort(void ***a1, __int64 a2, unsigned __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, 0, 2);
}
