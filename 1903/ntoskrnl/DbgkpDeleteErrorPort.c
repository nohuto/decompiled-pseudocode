/*
 * XREFs of DbgkpDeleteErrorPort @ 0x14084A498
 * Callers:
 *     DbgkFlushErrorPort @ 0x1406E404C (DbgkFlushErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x1407287E4 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x14084A4C4 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
