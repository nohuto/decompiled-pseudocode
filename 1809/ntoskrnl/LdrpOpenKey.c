/*
 * XREFs of LdrpOpenKey @ 0x14073F8F8
 * Callers:
 *     _RtlpRemovePendingDeleteLanguages @ 0x140182840 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401829A0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 */

NTSTATUS __fastcall LdrpOpenKey(UNICODE_STRING *a1, void *a2, ACCESS_MASK a3, HANDLE *a4)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  *a4 = 0LL;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a4, a3, &ObjectAttributes);
}
