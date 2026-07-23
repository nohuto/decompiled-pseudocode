/*
 * XREFs of PpmEventIdleDurationExpiration @ 0x1402E58EC
 * Callers:
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     PoExecuteIdleCheck @ 0x1402D3A20 (PoExecuteIdleCheck.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PpmEventIdleDurationExpiration(unsigned __int16 *a1)
{
  unsigned __int16 v2; // r10
  unsigned __int16 v3; // cx
  unsigned __int16 v4; // dx
  __int64 v5; // r8
  __int64 v6; // r9
  ULONG UserDataCount; // r8d
  _QWORD *v8; // r9
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int16 v12; // [rsp+40h] [rbp-3F8h] BYREF
  _QWORD v13[40]; // [rsp+50h] [rbp-3E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[41]; // [rsp+190h] [rbp-2A8h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_IDLE_DURATION_EXPIRATION) )
  {
    v2 = *a1;
    v3 = 0;
    v4 = 0;
    v12 = 0;
    do
    {
      v5 = 2LL * v3;
      v13[v5] = 0LL;
      v13[v5 + 1] = 0LL;
      LOWORD(v13[v5 + 1]) = v4;
      if ( v4 >= v2 )
        v6 = 0LL;
      else
        v6 = *(_QWORD *)&a1[4 * v4 + 4];
      v13[2 * v3] = v6;
      if ( v6 )
        ++v3;
      ++v4;
    }
    while ( v4 < 0x14u );
    v12 = v3;
    UserData[0].Ptr = (ULONGLONG)&v12;
    *(_QWORD *)&UserData[0].Size = 2LL;
    UserDataCount = 1;
    if ( v3 )
    {
      v8 = v13;
      v9 = v3;
      do
      {
        v10 = UserDataCount;
        UserData[v10].Ptr = (ULONGLONG)(v8 + 1);
        *(_QWORD *)&UserData[v10].Size = 2LL;
        v11 = UserDataCount + 1;
        UserDataCount += 2;
        UserData[v11].Ptr = (ULONGLONG)v8;
        v8 += 2;
        *(_QWORD *)&UserData[v11].Size = 8LL;
        --v9;
      }
      while ( v9 );
    }
    EtwWriteEx(PpmEtwHandle, &PPM_ETW_IDLE_DURATION_EXPIRATION, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  }
}
