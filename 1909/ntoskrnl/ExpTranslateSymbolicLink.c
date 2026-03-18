/*
 * XREFs of ExpTranslateSymbolicLink @ 0x14091046C
 * Callers:
 *     ExpConvertArcName @ 0x14090CE48 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x14090D00C (ExpConvertSignatureName.c)
 *     ExpFindArcName @ 0x14090D79C (ExpFindArcName.c)
 *     ExpTranslateEfiPath @ 0x14090FAE0 (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x140910158 (ExpTranslateNtPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401C3150 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1401C3750 (ZwQuerySymbolicLinkObject.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpTranslateSymbolicLink(PCWSTR SourceString, UNICODE_STRING *a2)
{
  unsigned __int16 v3; // si
  wchar_t *PoolWithTag; // rbx
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  UNICODE_STRING LinkTarget; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ReturnedLength; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE LinkHandle; // [rsp+B8h] [rbp+48h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)(&LinkTarget.MaximumLength + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v3 = 2;
  PoolWithTag = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        LinkTarget.Length = 0;
        LinkTarget.Buffer = PoolWithTag;
        LinkTarget.MaximumLength = v3 - 2;
        v6 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, &ReturnedLength);
        if ( v6 != -1073741789 )
          break;
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        v3 = ReturnedLength + 2;
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, ReturnedLength + 2, 0x72766E45u);
        if ( !PoolWithTag )
        {
          ZwClose(LinkHandle);
          return -1073741670;
        }
      }
      ZwClose(LinkHandle);
      if ( v6 < 0 )
        break;
      PoolWithTag[(unsigned __int64)LinkTarget.Length >> 1] = 0;
      LinkTarget.MaximumLength = v3;
      RtlInitUnicodeString(&DestinationString, PoolWithTag);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) < 0 )
      {
        result = 0;
        *a2 = LinkTarget;
        return result;
      }
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    return v6;
  }
  return result;
}
