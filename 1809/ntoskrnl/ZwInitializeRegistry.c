/*
 * XREFs of ZwInitializeRegistry @ 0x1401BA230
 * Callers:
 *     NtInitializeRegistry @ 0x14071EF70 (NtInitializeRegistry.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwInitializeRegistry(USHORT Flag)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Flag);
}
