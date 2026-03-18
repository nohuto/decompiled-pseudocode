/*
 * XREFs of MyRegOpenKeyForRead @ 0x1C005DD7C
 * Callers:
 *     CheckUSBFnConfiguration @ 0x1C005D14C (CheckUSBFnConfiguration.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C005D3B8 (CheckUSBFnIncludeDefaultCfg.c)
 *     ReadManifestAssignedValue @ 0x1C005D678 (ReadManifestAssignedValue.c)
 *     ReadTestOverrideValue @ 0x1C005D740 (ReadTestOverrideValue.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C005D84C (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UpdateUcmIsPresentBit @ 0x1C005D9C0 (UpdateUcmIsPresentBit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall MyRegOpenKeyForRead(__int64 a1, const WCHAR *a2, void **a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
}
