/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x1406C9580
 * Callers:
 *     ExpRaiseHardError @ 0x14072EE70 (ExpRaiseHardError.c)
 *     DbgkpSendApiMessageLpc @ 0x140849D94 (DbgkpSendApiMessageLpc.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1406C9658 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(int a1, int a2, __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, KeGetCurrentThread()->PreviousMode, 2);
}
