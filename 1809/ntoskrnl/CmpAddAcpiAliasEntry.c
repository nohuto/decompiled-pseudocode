/*
 * XREFs of CmpAddAcpiAliasEntry @ 0x1407FC578
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1407320C0 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x14019A4A0 (swprintf_s.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpAddAcpiAliasEntry(
        void *a1,
        unsigned __int16 *a2,
        int a3,
        wchar_t *a4,
        ULONG Disposition,
        HANDLE KeyHandle,
        __int64 a7,
        int Data)
{
  unsigned int v10; // edi
  NTSTATUS v13; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v10 = 0;
  RtlInitUnicodeString(&DestinationString, L"AcpiAlias");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v13 == -1073741772 )
    v13 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v13 >= 0 )
  {
    while ( 1 )
    {
      swprintf_s(a4, 0x80uLL, L"%04d", ++v10);
      RtlInitUnicodeString(&DestinationString, a4);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v13 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      if ( v13 < 0 )
        break;
      ZwClose(Handle);
      Handle = 0LL;
      if ( v10 >= 0xC8 )
        goto LABEL_10;
    }
    if ( v13 == -1073741772 )
      v13 = 0;
LABEL_10:
    if ( v13 < 0 || (v13 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition), v13 < 0) )
    {
      Handle = 0LL;
    }
    else
    {
      Data = *a2;
      RtlInitUnicodeString(&DestinationString, L"DockingState");
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
      ZwSetValueKey(Handle, &DestinationString, 0, 3u, a2 + 2, a2[1]);
      Data = a3;
      RtlInitUnicodeString(&DestinationString, L"ProfileNumber");
      v13 = ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    KeyHandle = 0LL;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v13;
}
