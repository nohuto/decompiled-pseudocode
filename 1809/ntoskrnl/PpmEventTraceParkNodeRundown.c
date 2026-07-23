/*
 * XREFs of PpmEventTraceParkNodeRundown @ 0x140879380
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140765460 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceParkNodeRundown(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  __int64 v7; // [rsp+50h] [rbp-9h]
  int v8; // [rsp+58h] [rbp-1h]
  int v9; // [rsp+5Ch] [rbp+3h]
  __int64 v10; // [rsp+60h] [rbp+7h]
  int v11; // [rsp+68h] [rbp+Fh]
  int v12; // [rsp+6Ch] [rbp+13h]
  __int64 v13; // [rsp+70h] [rbp+17h]
  int v14; // [rsp+78h] [rbp+1Fh]
  int v15; // [rsp+7Ch] [rbp+23h]
  __int64 v16; // [rsp+80h] [rbp+27h]
  int v17; // [rsp+88h] [rbp+2Fh]
  int v18; // [rsp+8Ch] [rbp+33h]
  __int64 *v19; // [rsp+90h] [rbp+37h]
  int v20; // [rsp+98h] [rbp+3Fh]
  int v21; // [rsp+9Ch] [rbp+43h]

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN) )
  {
    UserData.Reserved = 0;
    v9 = 0;
    v2 = 2LL;
    v12 = 0;
    v15 = 0;
    v18 = 0;
    UserData.Ptr = a1 + 4;
    UserData.Size = 2;
    v7 = a1 + 8;
    v10 = a1 + 32;
    v13 = a1 + 126;
    v16 = a1 + 128;
    v3 = 0LL;
    v4 = (_QWORD *)(a1 + 48);
    v8 = 8;
    v11 = 8;
    v14 = 1;
    v17 = 1;
    do
    {
      v3 |= *v4++;
      --v2;
    }
    while ( v2 );
    v21 = 0;
    v5 = v3;
    v19 = &v5;
    v20 = 8;
    EtwWrite(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN, 0LL, 6u, &UserData);
  }
}
