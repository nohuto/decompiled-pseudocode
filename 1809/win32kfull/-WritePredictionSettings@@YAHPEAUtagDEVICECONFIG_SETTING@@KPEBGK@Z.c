/*
 * XREFs of ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01F6698
 * Callers:
 *     WritePointerDeviceSettings @ 0x1C01F6960 (WritePointerDeviceSettings.c)
 * Callees:
 *     RtlUnicodeStringCopyString @ 0x1C00AC700 (RtlUnicodeStringCopyString.c)
 *     RtlUnicodeStringCatString @ 0x1C00AC764 (RtlUnicodeStringCatString.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C01F6630 (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
 */

_BOOL8 __fastcall WritePredictionSettings(
        struct tagDEVICECONFIG_SETTING *a1,
        const wchar_t *a2,
        const unsigned __int16 *a3)
{
  unsigned int v3; // edi
  NTSTATUS v4; // ebx
  const unsigned __int16 **v5; // rsi
  void *KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  char v10; // [rsp+88h] [rbp-80h] BYREF

  *(_DWORD *)&DestinationString.Length = 45875200;
  DestinationString.Buffer = (PWSTR)&v10;
  v3 = 0;
  v4 = RtlUnicodeStringCopyString(&DestinationString, a2);
  if ( v4 >= 0 )
  {
    v4 = RtlUnicodeStringCatString(&DestinationString, L"\\Software\\Microsoft\\TouchPrediction");
    if ( v4 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v4 >= 0 )
      {
        v5 = (const unsigned __int16 **)&gaPredictionSettings;
        do
        {
          v4 = WritePointerDeviceCfgSetting(KeyHandle, *v5, 4u, (unsigned __int8 *)&dword_1C030C8FC[4 * v3], 4u);
          if ( v4 < 0 )
            break;
          ++v3;
          v5 += 2;
        }
        while ( v3 < 3 );
        ZwClose(KeyHandle);
      }
    }
  }
  return v4 >= 0;
}
