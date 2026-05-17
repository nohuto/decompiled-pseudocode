/*
 * XREFs of sub_180012E38 @ 0x180012E38
 * Callers:
 *     sub_18005BE34 @ 0x18005BE34 (sub_18005BE34.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_18005BEE0 @ 0x18005BEE0 (sub_18005BEE0.c)
 *     RtlGetPersistedStateLocation @ 0x18006FCC0 (RtlGetPersistedStateLocation.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 */

__int64 __fastcall sub_180012E38(__int64 a1, unsigned int *a2, _WORD *a3)
{
  unsigned int v6; // r15d
  int appended; // ebx
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  char *v10; // [rsp+48h] [rbp-B8h]
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+78h] [rbp-88h]
  int *v16; // [rsp+80h] [rbp-80h]
  int v17; // [rsp+88h] [rbp-78h]
  __int128 v18; // [rsp+90h] [rbp-70h]
  _BYTE v19[512]; // [rsp+A0h] [rbp-60h] BYREF
  char v20; // [rsp+2A0h] [rbp+1A0h] BYREF

  if ( !a2 || !a1 )
    return 3221225485LL;
  v6 = *a2;
  v12 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Latest");
  v9 = 0x2000000;
  v10 = &v20;
  appended = RtlAppendUnicodeToString(&v9, L"\\Registry\\Machine\\");
  if ( appended >= 0 )
  {
    appended = RtlGetPersistedStateLocation(L"LanguageOverlayKeyName", v19, 512, 0LL);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&v9, v19);
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeToString(&v9, "\\");
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&v9, L"OverlayPackages");
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeToString(&v9, "\\");
            if ( appended >= 0 )
            {
              appended = RtlAppendUnicodeToString(&v9, a1);
              if ( appended >= 0 )
              {
                v14 = 48;
                v16 = &v9;
                v15 = 0LL;
                v17 = 64;
                v18 = 0LL;
                appended = ZwOpenKey(&v12, 131097LL, &v14);
                if ( appended >= 0 )
                {
                  appended = sub_18005BEE0(v12, &DestinationString, &v11, a3, a2);
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
  if ( v12 )
    ZwClose(v12);
  return (unsigned int)appended;
}
