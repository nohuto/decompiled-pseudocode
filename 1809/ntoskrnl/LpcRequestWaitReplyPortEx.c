/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x1406A5670
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x140811EAC (DbgkpSendApiMessageLpc.c)
 *     ExpRaiseHardError @ 0x1408D7BA0 (ExpRaiseHardError.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1406A5748 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(int a1, int a2, __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, KeGetCurrentThread()->PreviousMode, 2);
}
