/*
 * XREFs of GetOverlayRootFolder @ 0x180042138
 * Callers:
 *     BuildOverlayFilePath @ 0x180032EB0 (BuildOverlayFilePath.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x1800296A0 (RtlGetPersistedStateLocation.c)
 *     QueryRegistryValue @ 0x180032F5C (QueryRegistryValue.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0520 (NtOpenKey.c)
 */

__int64 __fastcall GetOverlayRootFolder(_WORD *a1, unsigned int *a2, _WORD *a3)
{
  unsigned int v6; // r15d
  int appended; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+48h] [rbp-B8h] BYREF
  char *v11; // [rsp+50h] [rbp-B0h]
  int v12; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+78h] [rbp-88h]
  int *v16; // [rsp+80h] [rbp-80h]
  int v17; // [rsp+88h] [rbp-78h]
  __int128 v18; // [rsp+90h] [rbp-70h]
  _WORD v19[256]; // [rsp+A0h] [rbp-60h] BYREF
  char v20; // [rsp+2A0h] [rbp+1A0h] BYREF

  if ( !a2 || !a1 )
    return 3221225485LL;
  v6 = *a2;
  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Latest");
  v10 = 0x2000000;
  v11 = &v20;
  appended = RtlAppendUnicodeToString((unsigned __int16 *)&v10, L"\\Registry\\Machine\\");
  if ( appended >= 0 )
  {
    appended = RtlGetPersistedStateLocation(
                 L"LanguageOverlayKeyName",
                 0LL,
                 L"Software\\Microsoft\\LanguageOverlay",
                 0,
                 v19,
                 0x200u,
                 0LL);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString((unsigned __int16 *)&v10, v19);
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeToString((unsigned __int16 *)&v10, L"\\");
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)&v10, L"OverlayPackages");
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeToString((unsigned __int16 *)&v10, L"\\");
            if ( appended >= 0 )
            {
              appended = RtlAppendUnicodeToString((unsigned __int16 *)&v10, a1);
              if ( appended >= 0 )
              {
                Handle = 0LL;
                v16 = &v10;
                v14 = 48;
                v15 = 0LL;
                v17 = 64;
                v18 = 0LL;
                appended = NtOpenKey(&Handle, 131097LL, &v14);
                if ( appended >= 0 )
                {
                  appended = QueryRegistryValue((__int64)Handle, (__int64)&DestinationString, &v12, a3, a2);
                  if ( appended >= 0 )
                  {
                    if ( v12 == 1 )
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
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)appended;
}
