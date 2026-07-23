/*
 * XREFs of SiOpenArcNameObject @ 0x1407057EC
 * Callers:
 *     SiGetBiosSystemDisk @ 0x1407056C8 (SiGetBiosSystemDisk.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401BA7D0 (ZwOpenSymbolicLinkObject.c)
 */

__int64 __fastcall SiOpenArcNameObject(PCWSTR SourceString, HANDLE *a2)
{
  NTSTATUS v3; // eax
  unsigned int v4; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  HANDLE LinkHandle; // [rsp+80h] [rbp+18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenSymbolicLinkObject(&LinkHandle, 0x20001u, &ObjectAttributes);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 != -1073741801 && v3 != -1073741670 )
      return (unsigned int)-1073740718;
  }
  else
  {
    *a2 = LinkHandle;
  }
  return v4;
}
