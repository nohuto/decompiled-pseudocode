/*
 * XREFs of ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C01CE818
 * Callers:
 *     HandlePTPTelemetry @ 0x1C01623F0 (HandlePTPTelemetry.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  int *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  int *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  int *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  int *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v17 = 0x1000000LL;
      v19 = &v17;
      v3 = 1000LL * *(_QWORD *)(v1 + 96);
      v20 = 8LL;
      v22 = 4LL;
      v24 = 4LL;
      v7 = v3 / v2;
      v21 = &v7;
      v4 = 1000LL * *(_QWORD *)(v1 + 104);
      v26 = 4LL;
      v28 = 4LL;
      v8 = v4 / v2;
      v23 = &v8;
      v5 = 1000LL * *(_QWORD *)(v1 + 112);
      v30 = 4LL;
      v32 = 4LL;
      v9 = v5 / v2;
      v25 = &v9;
      v10 = *(_DWORD *)(v1 + 52);
      v27 = &v10;
      v6 = 1000LL * *(_QWORD *)(v1 + 120);
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v11 = v6 / v2;
      v29 = &v11;
      v12 = *(_DWORD *)(v1 + 84);
      v31 = &v12;
      v13 = *(_DWORD *)(v1 + 128);
      v33 = &v13;
      v14 = *(_DWORD *)(v1 + 132);
      v35 = &v14;
      v15 = *(_DWORD *)(v1 + 136);
      v37 = &v15;
      v16 = *(_DWORD *)(v1 + 140);
      v39 = &v16;
      v40 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E590D, 0LL, 0LL, 0xDu, &pData);
    }
  }
}
