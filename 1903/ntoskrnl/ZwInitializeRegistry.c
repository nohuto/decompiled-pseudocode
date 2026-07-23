/*
 * XREFs of ZwInitializeRegistry @ 0x1401C2030
 * Callers:
 *     NtInitializeRegistry @ 0x1407463C0 (NtInitializeRegistry.c)
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
