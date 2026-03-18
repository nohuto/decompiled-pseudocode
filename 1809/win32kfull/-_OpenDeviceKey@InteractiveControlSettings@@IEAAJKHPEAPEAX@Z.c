/*
 * XREFs of ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x1C0123CD4
 * Callers:
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0123B90 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ?WriteSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C023A368 (-WriteSettings@InteractiveControlSettings@@QEAAJXZ.c)
 * Callees:
 *     RtlUnicodeStringCatString @ 0x1C00AC764 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x1C00AC8B4 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlSettings::_OpenDeviceKey(
        InteractiveControlSettings *this,
        ACCESS_MASK a2,
        __int64 a3,
        void **a4)
{
  NTSTATUS v6; // ecx
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  char v11; // [rsp+90h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  if ( grpWinStaList )
  {
    *(_DWORD *)&DestinationString.Length = 45875200;
    DestinationString.Buffer = (PWSTR)&v11;
    v6 = RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)(grpWinStaList + 168LL));
    if ( v6 >= 0 )
    {
      v6 = RtlUnicodeStringCatString(
             &DestinationString,
             L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\InteractiveControl");
      if ( v6 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
        if ( v6 < 0 )
          v6 = ZwCreateKey(&KeyHandle, a2, &ObjectAttributes, 0, 0LL, 0, 0LL);
        *a4 = KeyHandle;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v6;
}
