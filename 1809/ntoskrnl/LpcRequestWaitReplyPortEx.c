/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x1406A43F0
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x140810CCC (DbgkpSendApiMessageLpc.c)
 *     ExpRaiseHardError @ 0x1408D6900 (ExpRaiseHardError.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1406A44C8 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(int a1, int a2, __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, KeGetCurrentThread()->PreviousMode, 2);
}
