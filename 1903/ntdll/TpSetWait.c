/*
 * XREFs of TpSetWait @ 0x18002F0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpSetWait(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout)
{
  TpSetWaitEx(Wait, Handle, Timeout, 0LL);
}
