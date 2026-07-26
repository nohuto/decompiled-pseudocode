/*
 * XREFs of ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVNdisStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C0030448
 * Callers:
 *     ndisMInvokeInitialize @ 0x1C0108640 (ndisMInvokeInitialize.c)
 * Callees:
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031284 (_TlgKeywordOn.c)
 *     ?GetElapsedTimeInMilliseconds@NdisStopwatch@@QEBA_JXZ @ 0x1C00312B0 (-GetElapsedTimeInMilliseconds@NdisStopwatch@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceInitialized(__int64 a1, NdisStopwatch *a2, __int64 a3, int a4)
{
  int *v5; // r10
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  const GUID *v8; // r8
  const GUID *v9; // r9
  _DWORD *v10; // r10
  int v11; // r11d
  int ElapsedTimeInMilliseconds; // [rsp+30h] [rbp-59h] BYREF
  int v13; // [rsp+34h] [rbp-55h] BYREF
  int v14; // [rsp+38h] [rbp-51h] BYREF
  int v15; // [rsp+3Ch] [rbp-4Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  int *p_ElapsedTimeInMilliseconds; // [rsp+60h] [rbp-29h]
  __int64 v18; // [rsp+68h] [rbp-21h]
  int *v19; // [rsp+70h] [rbp-19h]
  __int64 v20; // [rsp+78h] [rbp-11h]
  int *v21; // [rsp+80h] [rbp-9h]
  __int64 v22; // [rsp+88h] [rbp-1h]
  int *v23; // [rsp+90h] [rbp+7h]
  __int64 v24; // [rsp+98h] [rbp+Fh]
  int *v25; // [rsp+A0h] [rbp+17h]
  __int64 v26; // [rsp+A8h] [rbp+1Fh]
  _DWORD *v27; // [rsp+B0h] [rbp+27h]
  __int64 v28; // [rsp+B8h] [rbp+2Fh]
  char *v29; // [rsp+C0h] [rbp+37h]
  __int64 v30; // [rsp+C8h] [rbp+3Fh]

  if ( a4 )
  {
    if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v14 = (int)v9;
      p_ElapsedTimeInMilliseconds = &v14;
      v19 = &v13;
      v21 = v10 + 1002;
      ElapsedTimeInMilliseconds = v10[116];
      v23 = &ElapsedTimeInMilliseconds;
      v15 = v10[458];
      v25 = &v15;
      v27 = v10 + 8;
      v29 = (char *)v10 + 33;
      v18 = 4LL;
      v13 = v11;
      v20 = 4LL;
      v22 = 16LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 1LL;
      v30 = 1LL;
      TlgWrite(&hProvider, &unk_1C00D218A, v8, v9, 9u, &pData);
    }
  }
  else if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      ElapsedTimeInMilliseconds = NdisStopwatch::GetElapsedTimeInMilliseconds(a2);
      p_ElapsedTimeInMilliseconds = &ElapsedTimeInMilliseconds;
      v19 = v5 + 1002;
      v13 = v5[116];
      v21 = &v13;
      v14 = v5[458];
      v23 = &v14;
      v25 = v5 + 8;
      v27 = (int *)((char *)v5 + 33);
      v18 = 4LL;
      v20 = 16LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 1LL;
      v28 = 1LL;
      TlgWrite(&hProvider, &unk_1C00D142E, v6, v7, 8u, &pData);
    }
  }
}
