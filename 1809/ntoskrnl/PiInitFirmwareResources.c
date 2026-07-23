/*
 * XREFs of PiInitFirmwareResources @ 0x1409E01D0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     RtlStringFromGUID @ 0x14058C220 (RtlStringFromGUID.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     IopCreateRegistryKeyEx @ 0x14070A964 (IopCreateRegistryKeyEx.c)
 */

__int64 __fastcall PiInitFirmwareResources(__int64 a1)
{
  int v1; // eax
  int v2; // edi
  const GUID **v4; // rsi
  int v5; // eax
  HANDLE v6; // r14
  const GUID *v7; // r12
  HANDLE v8; // rbx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  HANDLE v12; // [rsp+98h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+50h] BYREF

  v1 = *(_DWORD *)(a1 + 264);
  v12 = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  if ( (v1 & 1) == 0 )
    return 0;
  v4 = (const GUID **)(a1 + 296);
  if ( *v4 == (const GUID *)v4 )
  {
    return 0;
  }
  else
  {
    *(_DWORD *)&ValueName.Length = 4194366;
    ValueName.Buffer = L"\\Registry\\Machine\\HARDWARE\\UEFI";
    v5 = IopCreateRegistryKeyEx(&v12, 0LL, &ValueName, 0xF003Fu, 1u, 0LL);
    v6 = v12;
    v2 = v5;
    if ( v5 >= 0 )
    {
      ValueName.Buffer = L"ESRT";
      *(_DWORD *)&ValueName.Length = 655368;
      v2 = IopCreateRegistryKeyEx(&Handle, v12, &ValueName, 0xF003Fu, 1u, 0LL);
      if ( v2 >= 0 )
      {
        v7 = *v4;
        if ( *v4 != (const GUID *)v4 )
        {
          do
          {
            v2 = RtlStringFromGUID(v7 + 1, &GuidString);
            if ( v2 < 0 )
              break;
            v2 = IopCreateRegistryKeyEx(&KeyHandle, Handle, &GuidString, 0xF003Fu, 1u, 0LL);
            RtlFreeAnsiString(&GuidString);
            if ( v2 < 0 )
              break;
            v8 = KeyHandle;
            ValueName.Buffer = (wchar_t *)L"Type";
            *(_DWORD *)&ValueName.Length = 655368;
            ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, (PVOID)&v7[2], 4u);
            *(_DWORD *)&ValueName.Length = 1048590;
            ValueName.Buffer = L"Version";
            ZwSetValueKey(v8, &ValueName, 0, 4u, &v7[2].Data2, 4u);
            *(_DWORD *)&ValueName.Length = 3014700;
            ValueName.Buffer = L"LowestSupportedVersion";
            ZwSetValueKey(v8, &ValueName, 0, 4u, v7[2].Data4, 4u);
            *(_DWORD *)&ValueName.Length = 2490404;
            ValueName.Buffer = (wchar_t *)L"LastAttemptVersion";
            ZwSetValueKey(v8, &ValueName, 0, 4u, (PVOID)&v7[3], 4u);
            *(_DWORD *)&ValueName.Length = 2359330;
            ValueName.Buffer = (wchar_t *)L"LastAttemptStatus";
            ZwSetValueKey(v8, &ValueName, 0, 4u, &v7[3].Data2, 4u);
            ZwClose(v8);
            v7 = *(const GUID **)&v7->Data1;
          }
          while ( v7 != (const GUID *)v4 );
          v6 = v12;
        }
      }
      if ( Handle )
        ZwClose(Handle);
    }
    if ( v6 )
      ZwClose(v6);
  }
  return (unsigned int)v2;
}
