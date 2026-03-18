/*
 * XREFs of bNotIsKeySymbolicLink @ 0x1C00E9A50
 * Callers:
 *     bAddAllFlEntry @ 0x1C00E9794 (bAddAllFlEntry.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C00E9928 (bReadUserSystemEUDCRegistry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C0292B18 (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 *     IsRegNameEqual @ 0x1C029276C (IsRegNameEqual.c)
 */

_BOOL8 __fastcall bNotIsKeySymbolicLink(PCWSTR SourceString, PHANDLE KeyHandle, PHANDLE a3)
{
  _BOOL8 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *KeyHandle = 0LL;
  *a3 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = 0;
  if ( ZwOpenKey(KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 832;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes) >= 0 && (int)IsRegNameEqual(*KeyHandle, *a3) >= 0 )
      return 1;
  }
  return result;
}
