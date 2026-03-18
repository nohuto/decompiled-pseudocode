/*
 * XREFs of ZwSetInformationKey @ 0x1401BB390
 * Callers:
 *     CmpDoReDoSetKeyUserFlags @ 0x140807484 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x1408074EC (CmpDoReDoSetLastWriteTime.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&KeySetInformationClass, KeySetInformation);
}
