/*
 * XREFs of GetOverlayRootFolder @ 0x180012E38
 * Callers:
 *     BuildOverlayFilePath @ 0x18005BED4 (BuildOverlayFilePath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     QueryRegistryValue @ 0x18005BF80 (QueryRegistryValue.c)
 *     RtlGetPersistedStateLocation @ 0x18006FF10 (RtlGetPersistedStateLocation.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 */

__int64 __fastcall GetOverlayRootFolder(PCWSTR Source, unsigned int *a2, _WORD *a3)
{
  unsigned int v6; // r15d
  NTSTATUS appended; // ebx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+50h] [rbp-B0h]
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
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
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = &Destination;
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.Attributes = 64;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                appended = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
                if ( appended >= 0 )
                {
                  appended = QueryRegistryValue(KeyHandle, &DestinationString, (__int64)a2);
                  if ( appended >= 0 )
                  {
                    if ( v10 == 1 )
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
