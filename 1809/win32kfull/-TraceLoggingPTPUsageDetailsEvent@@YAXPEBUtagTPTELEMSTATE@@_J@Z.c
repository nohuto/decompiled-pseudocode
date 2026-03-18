/*
 * XREFs of ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C01BA798
 * Callers:
 *     HandlePTPTelemetry @ 0x1C0159460 (HandlePTPTelemetry.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingPTPUsageDetailsEvent(const struct tagTPTELEMSTATE *a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+4Ch] [rbp-B4h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  int *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  int *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  int *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  int *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  int *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v3 = 1000LL * *(_QWORD *)(v1 + 96);
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v7 = v3 / v2;
      v18 = &v7;
      v4 = 1000LL * *(_QWORD *)(v1 + 104);
      v25 = 4LL;
      v27 = 4LL;
      v8 = v4 / v2;
      v20 = &v8;
      v5 = 1000LL * *(_QWORD *)(v1 + 112);
      v29 = 4LL;
      v31 = 4LL;
      v9 = v5 / v2;
      v22 = &v9;
      v10 = *(_DWORD *)(v1 + 52);
      v24 = &v10;
      v6 = 1000LL * *(_QWORD *)(v1 + 120);
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v11 = v6 / v2;
      v26 = &v11;
      v12 = *(_DWORD *)(v1 + 84);
      v28 = &v12;
      v13 = *(_DWORD *)(v1 + 128);
      v30 = &v13;
      v14 = *(_DWORD *)(v1 + 132);
      v32 = &v14;
      v15 = *(_DWORD *)(v1 + 136);
      v34 = &v15;
      v16 = *(_DWORD *)(v1 + 140);
      v36 = &v16;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D3EF6, 0LL, 0LL, 0xCu, &pData);
    }
  }
}
