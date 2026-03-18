/*
 * XREFs of ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C005B28C
 * Callers:
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C005AF10 (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     EditionGetPointerDeviceConfigurationKey @ 0x1C005B1D0 (EditionGetPointerDeviceConfigurationKey.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F8584 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F8818 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C01F89BC (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C005B54C (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C005B720 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?IsTouchpadQuery@@YAHKPEAG@Z @ 0x1C005B83C (-IsTouchpadQuery@@YAHKPEAG@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDeviceCfgKey(unsigned int a1, unsigned __int16 *a2, ACCESS_MASK a3, void **a4, int a5)
{
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v12; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Disposition; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  char v16; // [rsp+A0h] [rbp-60h] BYREF

  KeyHandle = 0LL;
  if ( a1 <= 0x15E )
  {
    *(_QWORD *)&v12.Length = 45875200LL;
    v12.Buffer = (PWSTR)&v16;
    if ( (unsigned int)IsTouchpadQuery(a1, a2) )
    {
      if ( grpWinStaList )
        v8 = RtlUnicodeStringCopy(&v12, (const struct _UNICODE_STRING *)(grpWinStaList + 168LL));
      else
        v8 = -1073741595;
    }
    else
    {
      *(_QWORD *)&KeyPath.Length = 0LL;
      KeyPath.Buffer = 0LL;
      v8 = RtlFormatCurrentUserKeyPath(&KeyPath);
      if ( v8 < 0 )
        return (unsigned int)v8;
      v8 = RtlUnicodeStringCopy(&v12, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
    }
    if ( v8 >= 0 )
    {
      v8 = RtlUnicodeStringCatString(&v12, a2);
      if ( v8 >= 0 )
      {
        ObjectAttributes.ObjectName = &v12;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.RootDirectory = 0LL;
        if ( a5 )
          v9 = ZwCreateKey(&KeyHandle, a3, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        else
          v9 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
        v8 = v9;
        if ( v9 >= 0 )
          *a4 = KeyHandle;
      }
    }
    return (unsigned int)v8;
  }
  return 2147483653LL;
}
