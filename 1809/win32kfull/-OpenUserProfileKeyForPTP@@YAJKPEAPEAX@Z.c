/*
 * XREFs of ?OpenUserProfileKeyForPTP@@YAJKPEAPEAX@Z @ 0x1C01333CC
 * Callers:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00AC468 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 * Callees:
 *     RtlUnicodeStringCatString @ 0x1C00AC764 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x1C00AC8B4 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall OpenUserProfileKeyForPTP(ACCESS_MASK DesiredAccess, void **a2)
{
  NTSTATUS v4; // ecx
  void *KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  char v9; // [rsp+70h] [rbp-90h] BYREF

  KeyHandle = 0LL;
  if ( !grpWinStaList )
    return 3221225701LL;
  *(_DWORD *)&DestinationString.Length = 45875200;
  DestinationString.Buffer = (PWSTR)&v9;
  v4 = RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)(grpWinStaList + 168LL));
  if ( v4 >= 0 )
  {
    v4 = RtlUnicodeStringCatString(
           &DestinationString,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad");
    if ( v4 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
      if ( v4 >= 0 )
        *a2 = KeyHandle;
    }
  }
  return (unsigned int)v4;
}
