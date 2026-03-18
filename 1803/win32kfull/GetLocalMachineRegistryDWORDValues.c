/*
 * XREFs of GetLocalMachineRegistryDWORDValues @ 0x1C006962C
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C0069000 (ReadPointerDeviceSettings.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C0069470 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     InitializeTouchPadSysParams @ 0x1C0107FE0 (InitializeTouchPadSysParams.c)
 *     ?_ReadSettingsFromRegKey@PalmRejection@@YAXXZ @ 0x1C01BDD44 (-_ReadSettingsFromRegKey@PalmRejection@@YAXXZ.c)
 * Callees:
 *     RtlUnicodeStringCopyString @ 0x1C006974C (RtlUnicodeStringCopyString.c)
 *     RtlUnicodeStringCatString @ 0x1C006980C (RtlUnicodeStringCatString.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C0069C7C (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall GetLocalMachineRegistryDWORDValues(__int64 a1, const wchar_t *a2, __int128 *a3)
{
  __int128 v3; // xmm0
  NTSTATUS PointerDeviceCfgDWORDSetting; // ebx
  void *KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v10; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  char v12; // [rsp+80h] [rbp-80h] BYREF

  v3 = *a3;
  *(_DWORD *)&DestinationString.Length = 45875200;
  DestinationString.Buffer = (PWSTR)&v12;
  KeyHandle = 0LL;
  v10 = v3;
  PointerDeviceCfgDWORDSetting = RtlUnicodeStringCopyString(&DestinationString, a2);
  if ( PointerDeviceCfgDWORDSetting >= 0 )
  {
    PointerDeviceCfgDWORDSetting = RtlUnicodeStringCatString(&DestinationString, a2);
    if ( PointerDeviceCfgDWORDSetting >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      PointerDeviceCfgDWORDSetting = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( PointerDeviceCfgDWORDSetting >= 0 )
      {
        PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgDWORDSetting(
                                         KeyHandle,
                                         (struct tagDEVICECONFIG_SETTING *)&v10);
        if ( PointerDeviceCfgDWORDSetting >= 0 && HIDWORD(v10) != DWORD2(v10) )
        {
          *((_DWORD *)a3 + 3) = HIDWORD(v10);
          PointerDeviceCfgDWORDSetting = 0;
        }
        ZwClose(KeyHandle);
      }
    }
  }
  return (unsigned int)PointerDeviceCfgDWORDSetting;
}
