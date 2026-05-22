/*
 * XREFs of ?MPCMouseProcessor_PopulateTargetingDataForMouseDelta_@ISMTracing@@QEAAXIJJHJJMM@Z @ 0x1800FE794
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800FC980 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta_(
        ISMTracing *this,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        float a8,
        float a9)
{
  __int64 v9; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-81h] BYREF
  int *v11; // [rsp+58h] [rbp-61h]
  __int64 v12; // [rsp+60h] [rbp-59h]
  int *v13; // [rsp+68h] [rbp-51h]
  __int64 v14; // [rsp+70h] [rbp-49h]
  int *v15; // [rsp+78h] [rbp-41h]
  __int64 v16; // [rsp+80h] [rbp-39h]
  char *v17; // [rsp+88h] [rbp-31h]
  __int64 v18; // [rsp+90h] [rbp-29h]
  char *v19; // [rsp+98h] [rbp-21h]
  __int64 v20; // [rsp+A0h] [rbp-19h]
  char *v21; // [rsp+A8h] [rbp-11h]
  __int64 v22; // [rsp+B0h] [rbp-9h]
  float *v23; // [rsp+B8h] [rbp-1h]
  __int64 v24; // [rsp+C0h] [rbp+7h]
  float *v25; // [rsp+C8h] [rbp+Fh]
  __int64 v26; // [rsp+D0h] [rbp+17h]
  int v27; // [rsp+100h] [rbp+47h] BYREF
  int v28; // [rsp+108h] [rbp+4Fh] BYREF
  int v29; // [rsp+110h] [rbp+57h] BYREF

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v9 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v9 > 5u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
  {
    v12 = 4LL;
    v11 = &v27;
    v13 = &v28;
    v15 = &v29;
    v17 = &a5;
    v19 = &a6;
    v21 = &a7;
    v23 = &a8;
    v25 = &a9;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 4LL;
    TlgWrite((TraceLoggingHProvider)v9, &unk_18016B7A4, 0LL, 0LL, 0xAu, &pData);
  }
}
