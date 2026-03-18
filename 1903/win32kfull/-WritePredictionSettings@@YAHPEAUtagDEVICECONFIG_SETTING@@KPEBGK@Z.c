/*
 * XREFs of ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01F8E54
 * Callers:
 *     WritePointerDeviceSettings @ 0x1C01F9054 (WritePointerDeviceSettings.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00B9E6C (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00B9F50 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C01F8DE4 (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
 */

_BOOL8 __fastcall WritePredictionSettings(
        struct tagDEVICECONFIG_SETTING *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  unsigned int v3; // edi
  NTSTATUS v4; // ebx
  const unsigned __int16 **v5; // rsi
  struct _UNICODE_STRING v7; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  char v10; // [rsp+88h] [rbp-80h] BYREF

  *(_QWORD *)&v7.Length = 45875200LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = 0;
  v7.Buffer = (PWSTR)&v10;
  v4 = RtlUnicodeStringCopyString(&v7, a2);
  if ( v4 >= 0 )
  {
    v4 = RtlUnicodeStringCatString(&v7, L"\\Software\\Microsoft\\TouchPrediction");
    if ( v4 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v7;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v4 >= 0 )
      {
        v5 = (const unsigned __int16 **)&gaPredictionSettings;
        do
        {
          v4 = WritePointerDeviceCfgSetting(KeyHandle, *v5, 4u, (unsigned __int8 *)&dword_1C032169C[4 * v3], 4u);
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
