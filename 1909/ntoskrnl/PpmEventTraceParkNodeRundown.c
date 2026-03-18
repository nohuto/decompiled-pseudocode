/*
 * XREFs of PpmEventTraceParkNodeRundown @ 0x1408B4BEC
 * Callers:
 *     PpmEventTraceControlCallback @ 0x14078CE60 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceParkNodeRundown(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  ULONG v5; // r9d
  __int64 v6; // [rsp+30h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  __int64 v8; // [rsp+50h] [rbp-19h]
  int v9; // [rsp+58h] [rbp-11h]
  int v10; // [rsp+5Ch] [rbp-Dh]
  __int64 v11; // [rsp+60h] [rbp-9h]
  int v12; // [rsp+68h] [rbp-1h]
  int v13; // [rsp+6Ch] [rbp+3h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  __int64 v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  __int64 *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]
  __int64 v23; // [rsp+A0h] [rbp+37h]
  int v24; // [rsp+A8h] [rbp+3Fh]
  int v25; // [rsp+ACh] [rbp+43h]

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN) )
  {
    UserData.Reserved = 0;
    v10 = 0;
    v2 = (_QWORD *)(a1 + 56);
    v13 = 0;
    v3 = 2LL;
    v16 = 0;
    v19 = 0;
    UserData.Ptr = a1 + 4;
    v8 = a1 + 8;
    UserData.Size = 2;
    v11 = a1 + 32;
    v14 = a1 + 134;
    v17 = a1 + 136;
    v4 = 0LL;
    v9 = 8;
    v12 = 8;
    v15 = 1;
    v18 = 1;
    do
    {
      v4 |= *v2++;
      --v3;
    }
    while ( v3 );
    v22 = 0;
    v6 = v4;
    v20 = &v6;
    v21 = 8;
    if ( PoSoftParkingAllowed )
    {
      v25 = 0;
      v24 = 8;
      v5 = 7;
      v23 = a1 + 48;
    }
    else
    {
      v5 = 6;
    }
    EtwWrite(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN, 0LL, v5, &UserData);
  }
}
