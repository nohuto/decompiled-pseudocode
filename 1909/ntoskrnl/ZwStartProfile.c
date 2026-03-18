/*
 * XREFs of ZwStartProfile @ 0x1401C4290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwStartProfile(HANDLE ProfileHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ProfileHandle, v1, v2);
}
