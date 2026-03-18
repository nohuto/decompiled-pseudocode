/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x1406CAB60
 * Callers:
 *     ExpRaiseHardError @ 0x14072CFA8 (ExpRaiseHardError.c)
 *     DbgkpSendApiMessageLpc @ 0x14084A694 (DbgkpSendApiMessageLpc.c)
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x1406CAC38 (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(int a1, int a2, __int64 a3)
{
  return LpcpRequestWaitReplyPort(a1, a2, a3, 0, KeGetCurrentThread()->PreviousMode, 2);
}
