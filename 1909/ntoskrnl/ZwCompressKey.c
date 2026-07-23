/*
 * XREFs of ZwCompressKey @ 0x1401C1FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCompressKey(HANDLE Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Key);
}
