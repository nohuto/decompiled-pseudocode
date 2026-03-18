/*
 * XREFs of IopApplyMutableTagToRegistryKey @ 0x1406D426C
 * Callers:
 *     IoOpenDeviceRegistryKey @ 0x1406D4140 (IoOpenDeviceRegistryKey.c)
 *     IoOpenDriverRegistryKey @ 0x14077F430 (IoOpenDriverRegistryKey.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140786170 (IoOpenDeviceInterfaceRegistryKey.c)
 * Callees:
 *     ZwQueryKey @ 0x1401C0F10 (ZwQueryKey.c)
 *     ZwSetInformationKey @ 0x1401C3E90 (ZwSetInformationKey.c)
 */

int __fastcall IopApplyMutableTagToRegistryKey(HANDLE KeyHandle)
{
  int result; // eax
  int KeyInformation; // [rsp+40h] [rbp+8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp+10h] BYREF

  KeyInformation = 0;
  ResultLength = 0;
  if ( !KeyHandle )
    return -1073741811;
  result = ZwQueryKey(KeyHandle, KeyHandleTagsInformation, &KeyInformation, 4u, &ResultLength);
  if ( result >= 0 )
  {
    if ( (KeyInformation & 0x1000) != 0 )
    {
      return 0;
    }
    else
    {
      KeyInformation |= 0x1000u;
      return ZwSetInformationKey(KeyHandle, KeySetHandleTagsInformation, &KeyInformation, 4u);
    }
  }
  return result;
}
