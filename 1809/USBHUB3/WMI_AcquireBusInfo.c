/*
 * XREFs of WMI_AcquireBusInfo @ 0x1C0079570
 * Callers:
 *     WMI_ExecuteMethodUsbWmiStdData @ 0x1C0079AF0 (WMI_ExecuteMethodUsbWmiStdData.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     HUBUCX_GetControllerName @ 0x1C0022F78 (HUBUCX_GetControllerName.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 */

__int64 __fastcall WMI_AcquireBusInfo(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v7; // ebx
  int ControllerName; // eax
  int v9; // eax
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h] BYREF
  __int16 v13; // [rsp+34h] [rbp-24h]

  *a3 = 0;
  if ( a2 >= 0x10 )
  {
    v12 = 0;
    v13 = 0;
    ControllerName = HUBUCX_GetControllerName(a1, &v12, 6u);
    v7 = ControllerName;
    if ( ControllerName >= 0 )
    {
      a4[1] = 0;
      v9 = v12;
      a4[2] = 0;
      a4[3] = v9;
      *a3 = 16;
    }
    else
    {
      v11 = ControllerName;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0xCu,
        (__int64)&WPP_1362546fee9e322e2fa74dbd802c5a46_Traceguids,
        v11);
    }
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xBu, (__int64)&WPP_1362546fee9e322e2fa74dbd802c5a46_Traceguids);
    return (unsigned int)-1073741789;
  }
  return v7;
}
