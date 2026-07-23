/*
 * XREFs of PopDiagTracePowerAggregatorInvalidRequestIndex @ 0x140874968
 * Callers:
 *     PopPowerAggregatorSelectRequest @ 0x140876F34 (PopPowerAggregatorSelectRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerAggregatorInvalidRequestIndex(int a1, int a2)
{
  REGHANDLE v2; // rbx
  int v3; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  int *v5; // [rsp+48h] [rbp-28h]
  int v6; // [rsp+50h] [rbp-20h]
  int v7; // [rsp+54h] [rbp-1Ch]
  int *v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+64h] [rbp-Ch]
  int v11; // [rsp+80h] [rbp+10h] BYREF
  int v12; // [rsp+88h] [rbp+18h] BYREF

  v12 = a2;
  v11 = a1;
  v3 = 16;
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_INVALID_REQUEST_INDEX) )
    {
      UserData.Reserved = 0;
      v7 = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v11;
      UserData.Size = 4;
      v5 = &v12;
      v8 = &v3;
      v6 = 4;
      v9 = 4;
      EtwWrite(v2, &POP_ETW_EVENT_POWER_AGGREGATOR_INVALID_REQUEST_INDEX, 0LL, 3u, &UserData);
    }
  }
}
