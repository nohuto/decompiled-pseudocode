/*
 * XREFs of ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1408DC9F0
 * Callers:
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x14075E924 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x14065B870 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x14065BB74 (RtlLengthSidAsUnicodeString.c)
 */

NTSTATUS __fastcall ExpWnfGetPermanentPerUserDataStoreHandle(PSID Sid, PHANDLE KeyHandle)
{
  NTSTATUS result; // eax
  unsigned __int16 v5; // si
  unsigned __int16 v6; // r14
  wchar_t *PoolWithTag; // rbx
  NTSTATUS v8; // edi
  UNICODE_STRING Destination; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  ULONG StringLength; // [rsp+D0h] [rbp+77h] BYREF

  result = RtlLengthSidAsUnicodeString(Sid, &StringLength);
  if ( result >= 0 )
  {
    v5 = StringLength;
    v6 = StringLength + 82;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, StringLength + 82, 0x20666E57u);
    if ( PoolWithTag )
    {
      Destination.Buffer = PoolWithTag;
      *(_QWORD *)&Destination.Length = 0LL;
      Destination.MaximumLength = v6;
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\User\\");
      UnicodeString.Length = 0;
      UnicodeString.MaximumLength = v5;
      UnicodeString.Buffer = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
      v8 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
      if ( v8 >= 0 )
      {
        Destination.Length += UnicodeString.Length;
        RtlAppendUnicodeToString(&Destination, L"_Classes\\NotificationData");
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v8 = ZwCreateKey(KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
      }
      ExFreePoolWithTag(PoolWithTag, 0x20666E57u);
      return v8;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
