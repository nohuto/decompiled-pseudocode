/*
 * XREFs of ZwStartProfile @ 0x1401BB910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwStartProfile(HANDLE ProfileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProfileHandle);
}
