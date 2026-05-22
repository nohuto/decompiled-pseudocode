/*
 * XREFs of ?SendSignal@SipcEndpoint@@UEAAXXZ @ 0x1800D6CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SipcEndpoint::SendSignal(HANDLE *this)
{
  SetEvent(this[13]);
}
