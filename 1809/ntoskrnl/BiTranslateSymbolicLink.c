/*
 * XREFs of BiTranslateSymbolicLink @ 0x14071324C
 * Callers:
 *     BiGetNtPartitionPath @ 0x140712FE4 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLinkFile @ 0x1408F2E20 (BiTranslateSymbolicLinkFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401BA7D0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1401BADD0 (ZwQuerySymbolicLinkObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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

  LinkHandle = 0LL;
  LinkTarget.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
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
