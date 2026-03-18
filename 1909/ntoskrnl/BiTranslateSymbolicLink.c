/*
 * XREFs of BiTranslateSymbolicLink @ 0x14073E204
 * Callers:
 *     BiGetNtPartitionPath @ 0x14073DD94 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLinkFile @ 0x14092F274 (BiTranslateSymbolicLinkFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401C3150 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1401C3750 (ZwQuerySymbolicLinkObject.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall BiTranslateSymbolicLink(PCWSTR SourceString, wchar_t **a2)
{
  NTSTATUS result; // eax
  unsigned __int16 v4; // di
  NTSTATUS v5; // ebx
  wchar_t *PoolWithTag; // rax
  UNICODE_STRING LinkTarget; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ReturnedLength; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE LinkHandle; // [rsp+A8h] [rbp+38h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&LinkTarget.Length = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  LinkHandle = 0LL;
  LinkTarget.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&LinkTarget, 0LL);
    v4 = 0;
    ReturnedLength = 0;
    do
    {
      while ( 1 )
      {
        v5 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, &ReturnedLength);
        if ( v5 != -1073741789 )
          break;
        if ( LinkTarget.Buffer )
          ExFreePoolWithTag(LinkTarget.Buffer, 0x4B444342u);
        LinkTarget.MaximumLength = ReturnedLength;
        v4 = ReturnedLength + 2;
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, ReturnedLength + 2, 0x4B444342u);
        LinkTarget.Buffer = PoolWithTag;
        if ( !PoolWithTag )
        {
          v5 = -1073741670;
          goto LABEL_11;
        }
      }
      ZwClose(LinkHandle);
      PoolWithTag = LinkTarget.Buffer;
      LinkHandle = 0LL;
      if ( v5 < 0 )
        goto LABEL_16;
      LinkTarget.Buffer[(unsigned __int64)LinkTarget.Length >> 1] = 0;
      ObjectAttributes.ObjectName = &LinkTarget;
      LinkTarget.MaximumLength = v4;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    }
    while ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) >= 0 );
    PoolWithTag = LinkTarget.Buffer;
    v5 = 0;
    *a2 = LinkTarget.Buffer;
LABEL_11:
    if ( LinkHandle )
    {
      ZwClose(LinkHandle);
      PoolWithTag = LinkTarget.Buffer;
      LinkHandle = 0LL;
    }
    if ( v5 < 0 )
    {
LABEL_16:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    }
    return v5;
  }
  return result;
}
