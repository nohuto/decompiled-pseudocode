/*
 * XREFs of PopDiagTracePowerAggregatorSessionBegin @ 0x140874BCC
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140877170 (PopPowerAggregatorWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTracePowerAggregatorSessionBegin(int a1, __int64 a2, int a3, _BYTE *a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v7; // rbx
  bool v8; // zf
  BOOL v10; // [rsp+38h] [rbp-39h] BYREF
  BOOL v11; // [rsp+3Ch] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  __int64 v13; // [rsp+58h] [rbp-19h]
  int v14; // [rsp+60h] [rbp-11h]
  int v15; // [rsp+64h] [rbp-Dh]
  int *v16; // [rsp+68h] [rbp-9h]
  int v17; // [rsp+70h] [rbp-1h]
  int v18; // [rsp+74h] [rbp+3h]
  BOOL *v19; // [rsp+78h] [rbp+7h]
  int v20; // [rsp+80h] [rbp+Fh]
  int v21; // [rsp+84h] [rbp+13h]
  _BYTE *v22; // [rsp+88h] [rbp+17h]
  int v23; // [rsp+90h] [rbp+1Fh]
  int v24; // [rsp+94h] [rbp+23h]
  BOOL *v25; // [rsp+98h] [rbp+27h]
  int v26; // [rsp+A0h] [rbp+2Fh]
  int v27; // [rsp+A4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  int v29; // [rsp+D8h] [rbp+67h] BYREF
  int v30; // [rsp+E8h] [rbp+77h] BYREF

  v4 = &retaddr;
  v30 = a3;
  v29 = a1;
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_SESSION_BEGIN);
    if ( (_BYTE)v4 )
    {
      v8 = *a4 == 0;
      UserData.Size = 4;
      v14 = 4;
      v10 = !v8;
      v8 = a4[8] == 0;
      v17 = 4;
      v20 = 4;
      UserData.Reserved = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v11 = !v8;
      UserData.Ptr = (ULONGLONG)&v29;
      v13 = a2 + 8;
      v16 = &v30;
      v19 = &v10;
      v22 = a4 + 4;
      v25 = &v11;
      v23 = 4;
      v26 = 4;
      LOBYTE(v4) = EtwWrite(v7, &POP_ETW_EVENT_POWER_AGGREGATOR_SESSION_BEGIN, 0LL, 6u, &UserData);
    }
  }
  return (char)v4;
}
