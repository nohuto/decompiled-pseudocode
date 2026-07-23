/*
 * XREFs of PpmEventCoreParkingStateChange @ 0x1402E575C
 * Callers:
 *     PpmParkReportParkedCore @ 0x1402E80E4 (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x1402E8168 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PpmEventCoreParkingStateChange(__int64 a1, char a2)
{
  REGHANDLE v4; // rbx
  bool v5; // zf
  const EVENT_DESCRIPTOR *v6; // rdx
  const EVENT_DESCRIPTOR *v7; // rdx
  __int16 v8; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]

  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    v5 = a2 == 0;
    v6 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PARK_CORE;
    if ( v5 )
      v6 = &PPM_ETW_UNPARK_CORE;
    if ( EtwEventEnabled(PpmEtwHandle, v6) )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v7 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PARK_CORE;
      v15 = 0;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v8 = *(unsigned __int8 *)(a1 + 208);
      v10 = &v8;
      v13 = a1 + 209;
      UserData.Size = 8;
      v11 = 2;
      v14 = 1;
      if ( !a2 )
        v7 = &PPM_ETW_UNPARK_CORE;
      EtwWriteEx(v4, v7, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
