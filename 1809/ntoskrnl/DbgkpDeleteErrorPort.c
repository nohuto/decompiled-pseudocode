/*
 * XREFs of DbgkpDeleteErrorPort @ 0x140708384
 * Callers:
 *     DbgkFlushErrorPort @ 0x140608444 (DbgkFlushErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140703740 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140707F00 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140811FCC (DbgkpSendErrorMessage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
