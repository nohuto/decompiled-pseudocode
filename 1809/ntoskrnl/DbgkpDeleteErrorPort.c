/*
 * XREFs of DbgkpDeleteErrorPort @ 0x140707104
 * Callers:
 *     DbgkFlushErrorPort @ 0x140607444 (DbgkFlushErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x1407024C0 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140706C80 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140810DEC (DbgkpSendErrorMessage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
