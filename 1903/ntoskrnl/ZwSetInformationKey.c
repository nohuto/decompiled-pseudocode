/*
 * XREFs of ZwSetInformationKey @ 0x1401C3310
 * Callers:
 *     IopApplyMutableTagToRegistryKey @ 0x1406D4B8C (IopApplyMutableTagToRegistryKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140840CC4 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140840D2C (CmpDoReDoSetLastWriteTime.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
