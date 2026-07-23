/*
 * XREFs of ZwImpersonateAnonymousToken @ 0x1401C2B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwImpersonateAnonymousToken(HANDLE Thread)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Thread);
}
