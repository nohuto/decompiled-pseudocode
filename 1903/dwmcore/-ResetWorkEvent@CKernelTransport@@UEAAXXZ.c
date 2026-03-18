/*
 * XREFs of ?ResetWorkEvent@CKernelTransport@@UEAAXXZ @ 0x18019B670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CKernelTransport::ResetWorkEvent(HANDLE *this)
{
  ResetEvent(this[2]);
}
