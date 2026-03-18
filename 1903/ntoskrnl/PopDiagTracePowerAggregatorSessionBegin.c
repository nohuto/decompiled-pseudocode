/*
 * XREFs of PopDiagTracePowerAggregatorSessionBegin @ 0x1408B04B4
 * Callers:
 *     PopPowerAggregatorExecuteState @ 0x1408B2A8C (PopPowerAggregatorExecuteState.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

char __fastcall PopDiagTracePowerAggregatorSessionBegin(int a1, int a2, int a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v6; // rbx
  unsigned int v7; // ecx
  int v9; // [rsp+38h] [rbp-39h] BYREF
  int v10; // [rsp+3Ch] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  int *v12; // [rsp+58h] [rbp-19h]
  int v13; // [rsp+60h] [rbp-11h]
  int v14; // [rsp+64h] [rbp-Dh]
  int *v15; // [rsp+68h] [rbp-9h]
  int v16; // [rsp+70h] [rbp-1h]
  int v17; // [rsp+74h] [rbp+3h]
  int *v18; // [rsp+78h] [rbp+7h]
  int v19; // [rsp+80h] [rbp+Fh]
  int v20; // [rsp+84h] [rbp+13h]
  __int64 v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+90h] [rbp+1Fh]
  int v23; // [rsp+94h] [rbp+23h]
  int *v24; // [rsp+98h] [rbp+27h]
  int v25; // [rsp+A0h] [rbp+2Fh]
  int v26; // [rsp+A4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  int v28; // [rsp+D8h] [rbp+67h] BYREF
  int v29; // [rsp+E0h] [rbp+6Fh] BYREF
  int v30; // [rsp+E8h] [rbp+77h] BYREF

  v4 = &retaddr;
  v30 = a3;
  v29 = a2;
  v28 = a1;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_SESSION_BEGIN);
    if ( (_BYTE)v4 )
    {
      v7 = *(_DWORD *)(a4 + 4);
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v9 = v7 & 1;
      UserData.Ptr = (ULONGLONG)&v28;
      v12 = &v29;
      v15 = &v30;
      v10 = (v7 >> 3) & 1;
      v18 = &v9;
      UserData.Size = 4;
      v24 = &v10;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      v21 = a4;
      LOBYTE(v4) = EtwWrite(v6, &POP_ETW_EVENT_POWER_AGGREGATOR_SESSION_BEGIN, 0LL, 6u, &UserData);
    }
  }
  return (char)v4;
}
