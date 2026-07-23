/*
 * XREFs of GetOverlayRootFolder @ 0x180042138
 * Callers:
 *     BuildOverlayFilePath @ 0x180032EB0 (BuildOverlayFilePath.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x1800296A0 (RtlGetPersistedStateLocation.c)
 *     QueryRegistryValue @ 0x180032F5C (QueryRegistryValue.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0540 (NtOpenKey.c)
 */

__int64 __fastcall GetOverlayRootFolder(PCWSTR Source, unsigned int *a2, _WORD *a3)
{
  unsigned int v6; // r15d
  int appended; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  WCHAR Sourcea[256]; // [rsp+A0h] [rbp-60h] BYREF
  char v15; // [rsp+2A0h] [rbp+1A0h] BYREF

  if ( !a2 || !Source )
    return 3221225485LL;
  v6 = *a2;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Latest");
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (wchar_t *)&v15;
  appended = RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
  if ( appended >= 0 )
  {
    appended = RtlGetPersistedStateLocation(
                 L"LanguageOverlayKeyName",
                 0LL,
                 L"Software\\Microsoft\\LanguageOverlay",
                 LocationTypeRegistry,
                 Sourcea,
                 0x200u,
                 0LL);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, Sourcea);
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeToString(&Destination, L"\\");
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, L"OverlayPackages");
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeToString(&Destination, L"\\");
            if ( appended >= 0 )
            {
              appended = RtlAppendUnicodeToString(&Destination, Source);
              if ( appended >= 0 )
              {
                KeyHandle = 0LL;
                ObjectAttributes.ObjectName = &Destination;
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.Attributes = 64;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                appended = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
                if ( appended >= 0 )
                {
                  appended = QueryRegistryValue(KeyHandle, &DestinationString, &v11, a3, a2);
                  if ( appended >= 0 )
                  {
                    if ( v11 == 1 )
                    {
                      if ( *a2 > v6 )
                        appended = -1073741789;
                      else
                        a3[((unsigned __int64)*a2 >> 1) - 1] = 0;
                      if ( appended >= 0 )
                        goto LABEL_11;
                    }
                    else
                    {
                      appended = -1073741476;
                    }
                  }
                  if ( a3 && v6 >= 2 )
                    *a3 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)appended;
}
