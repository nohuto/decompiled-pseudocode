/*
 * XREFs of ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1408DB730
 * Callers:
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x14075D734 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     ZwCreateKey @ 0x1401B8530 (ZwCreateKey.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x14065A6B0 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x14065A9B4 (RtlLengthSidAsUnicodeString.c)
 */

__int64 __fastcall ExpWnfGetPermanentPerUserDataStoreHandle(unsigned __int8 *Sid, PHANDLE KeyHandle)
{
  __int64 result; // rax
  unsigned __int16 v5; // si
  unsigned __int16 v6; // r14
  wchar_t *PoolWithTag; // rbx
  NTSTATUS v8; // edi
  UNICODE_STRING Destination; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  int v12; // [rsp+D0h] [rbp+77h] BYREF

  result = RtlLengthSidAsUnicodeString(Sid, &v12);
  if ( (int)result >= 0 )
  {
    v5 = v12;
    v6 = v12 + 82;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v12 + 82), 0x20666E57u);
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
      return (unsigned int)v8;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
