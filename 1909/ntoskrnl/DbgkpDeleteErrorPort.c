/*
 * XREFs of DbgkpDeleteErrorPort @ 0x140849B98
 * Callers:
 *     DbgkFlushErrorPort @ 0x140652D10 (DbgkFlushErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140729B54 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140849BC4 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140849EA8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
