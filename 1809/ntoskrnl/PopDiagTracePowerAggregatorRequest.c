/*
 * XREFs of PopDiagTracePowerAggregatorRequest @ 0x140874AE0
 * Callers:
 *     PopPowerAggregatorSelectRequest @ 0x140876F34 (PopPowerAggregatorSelectRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTracePowerAggregatorRequest(int a1, int a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v6; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-29h] BYREF
  int *v9; // [rsp+48h] [rbp-19h]
  int v10; // [rsp+50h] [rbp-11h]
  int v11; // [rsp+54h] [rbp-Dh]
  __int64 v12; // [rsp+58h] [rbp-9h]
  int v13; // [rsp+60h] [rbp-1h]
  int v14; // [rsp+64h] [rbp+3h]
  __int64 v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+74h] [rbp+13h]
  __int64 v18; // [rsp+78h] [rbp+17h]
  int v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+84h] [rbp+23h]
  int *v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+90h] [rbp+2Fh]
  int v23; // [rsp+94h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  int v25; // [rsp+C8h] [rbp+67h] BYREF
  int v26; // [rsp+D0h] [rbp+6Fh] BYREF
  int v27; // [rsp+E0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v27 = a4;
  v26 = a2;
  v25 = a1;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_REQUEST);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)&v25;
      UserData.Size = 4;
      v9 = &v26;
      v15 = a3 + 4;
      v18 = a3 + 8;
      v21 = &v27;
      v10 = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      v12 = a3;
      LOBYTE(v4) = EtwWrite(v6, &POP_ETW_EVENT_POWER_AGGREGATOR_REQUEST, 0LL, 6u, &UserData);
    }
  }
  return (char)v4;
}
