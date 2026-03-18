/*
 * XREFs of FWUPDATE_AddIdsForFirmwareUpdateDevice @ 0x1C0081E80
 * Callers:
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C00821AC (FWUPDATE_CreateFirmwareUpdateDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000B2B8 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FWUPDATE_AddIdsForFirmwareUpdateDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // r15d
  unsigned __int16 v5; // r12
  NTSTATUS v7; // ebx
  unsigned __int16 v8; // r9
  int v10; // [rsp+20h] [rbp-99h]
  NTSTATUS v11; // [rsp+28h] [rbp-91h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-89h] BYREF
  char v13; // [rsp+40h] [rbp-79h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 2466);
  v3 = *(unsigned __int16 *)(a1 + 2464);
  v5 = *(_WORD *)(a1 + 2468);
  *(_QWORD *)&DestinationString.Length = 9437184LL;
  DestinationString.Buffer = (wchar_t *)&v13;
  v7 = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X&GFU", v3, v2);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1696))(
           WdfDriverGlobals,
           a2,
           &DestinationString);
    if ( v7 >= 0 )
    {
      v10 = v5;
      v7 = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X&REV_%04X&GFU", v3, v2, v10);
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015
                                                                                               + 1712))(
               WdfDriverGlobals,
               a2,
               &DestinationString);
        if ( v7 >= 0 )
        {
          v7 = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X&GFU", v3, v2);
          if ( v7 >= 0 )
          {
            v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1712))(
                   WdfDriverGlobals,
                   a2,
                   &DestinationString);
            if ( v7 >= 0 )
            {
              v7 = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_WINUSB&MS_SUBCOMP_GFU");
              if ( v7 >= 0 )
              {
                v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1720))(
                       WdfDriverGlobals,
                       a2,
                       &DestinationString);
                if ( v7 >= 0 )
                {
                  v7 = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_WINUSB");
                  if ( v7 >= 0 )
                  {
                    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1720))(
                           WdfDriverGlobals,
                           a2,
                           &DestinationString);
                    if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      v8 = 20;
                      goto LABEL_31;
                    }
                  }
                  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v8 = 19;
                    goto LABEL_31;
                  }
                }
                else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v8 = 18;
                  goto LABEL_31;
                }
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v8 = 17;
                goto LABEL_31;
              }
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v8 = 16;
              goto LABEL_31;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v8 = 15;
            goto LABEL_31;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = 14;
          goto LABEL_31;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 13;
        goto LABEL_31;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 12;
      goto LABEL_31;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 11;
LABEL_31:
    v11 = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v8,
      (__int64)&WPP_ad94032c158638748c3d0f7b1d777a45_Traceguids,
      v11);
  }
  return (unsigned int)v7;
}
