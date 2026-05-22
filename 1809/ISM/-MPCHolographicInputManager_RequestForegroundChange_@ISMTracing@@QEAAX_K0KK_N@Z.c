/*
 * XREFs of ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x180044374
 * Callers:
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180042B58 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(
        ISMTracing *this,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        bool a6)
{
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-39h] BYREF
  __int64 *v9; // [rsp+58h] [rbp-19h]
  int v10; // [rsp+60h] [rbp-11h]
  int v11; // [rsp+64h] [rbp-Dh]
  __int64 *v12; // [rsp+68h] [rbp-9h]
  int v13; // [rsp+70h] [rbp-1h]
  int v14; // [rsp+74h] [rbp+3h]
  int *v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  char *v18; // [rsp+88h] [rbp+17h]
  int v19; // [rsp+90h] [rbp+1Fh]
  int v20; // [rsp+94h] [rbp+23h]
  bool *v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]
  __int64 v24; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v25; // [rsp+D8h] [rbp+67h] BYREF
  int v26; // [rsp+E0h] [rbp+6Fh] BYREF

  v26 = a4;
  v25 = a3;
  v24 = a2;
  v6 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v6 )
  {
    if ( *v6 )
    {
      v7 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
      {
        v11 = 0;
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v9 = &v24;
        v12 = &v25;
        v15 = &v26;
        v18 = &a5;
        v21 = &a6;
        v10 = 8;
        v13 = 8;
        v16 = 4;
        v19 = 4;
        v22 = 1;
        TlgWrite((TraceLoggingHProvider)v7, &unk_180166F53, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
