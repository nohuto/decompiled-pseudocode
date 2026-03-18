/*
 * XREFs of ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C01CA8F4
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01CBA28 (xxxInjectTouchInput.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?InjectionSourceToString@InputTraceLogging@@CAPEBDW4InputTracing_RimInjectionSource@@@Z @ 0x1C01CABF0 (-InjectionSourceToString@InputTraceLogging@@CAPEBDW4InputTracing_RimInjectionSource@@@Z.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01CAC58 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::RIM::InjectInput(__int64 a1)
{
  char v2; // cl
  int v3; // r9d
  __int64 v4; // r11
  const CHAR *v5; // rax
  __int64 v6; // r11
  const CHAR *v7; // rax
  __int64 v8; // r9
  int v9; // r10d
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  __int64 v15; // r11
  const CHAR *v16; // rax
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // r9d
  const CHAR *v21; // rax
  __int64 v22; // r11
  UINT32 cData; // r9d
  int v24; // r9d
  const CHAR *v25; // rax
  __int64 v26; // r11
  UINT32 v27; // r9d
  int v28; // [rsp+30h] [rbp-59h] BYREF
  int v29; // [rsp+34h] [rbp-55h] BYREF
  __int64 v30; // [rsp+38h] [rbp-51h] BYREF
  int v31; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+70h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+90h] [rbp+7h] BYREF
  int *v36; // [rsp+A0h] [rbp+17h]
  __int64 v37; // [rsp+A8h] [rbp+1Fh]
  int *v38; // [rsp+B0h] [rbp+27h]
  __int64 v39; // [rsp+B8h] [rbp+2Fh]
  int *v40; // [rsp+C0h] [rbp+37h]
  __int64 v41; // [rsp+C8h] [rbp+3Fh]

  v2 = *(_BYTE *)(a1 + 48);
  if ( v2 == 2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
    {
      if ( (unsigned int)dword_1C030D340 > 4 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x100uLL) )
      {
        v30 = v15;
        v33.Ptr = (ULONGLONG)&v30;
        *(_QWORD *)&v33.Size = 8LL;
        v16 = (const CHAR *)InputTraceLogging::InjectionSourceToString(6LL);
        TlgCreateSz(&pDesc, v16);
        v18 = *(_QWORD *)(v17 + 472);
        v29 = *(unsigned __int16 *)(v18 + 16);
        v35.Ptr = (ULONGLONG)&v29;
        *(_QWORD *)&v35.Size = v19;
        v28 = *(unsigned __int16 *)(v18 + 18);
        v36 = &v28;
        v37 = v19;
        TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D4B02, 0LL, 0LL, 6u, &pData);
      }
    }
    else if ( (unsigned int)dword_1C030D340 > 4 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x100uLL) )
    {
      v30 = v4;
      v33.Ptr = (ULONGLONG)&v30;
      *(_QWORD *)&v33.Size = 8LL;
      v5 = (const CHAR *)InputTraceLogging::InjectionSourceToString((unsigned int)(v3 + 2));
      TlgCreateSz(&pDesc, v5);
      v7 = InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(*(_QWORD *)(v6 + 480) + 24LL));
      TlgCreateSz(&v35, v7);
      v11 = *(_QWORD *)(v10 + 472);
      v31 = *(unsigned __int16 *)(v11 + 16);
      v36 = &v31;
      v37 = v8;
      v28 = *(unsigned __int16 *)(v11 + 18);
      v38 = &v28;
      v12 = *(_QWORD *)(v10 + 480);
      v39 = v8;
      v13 = *(_DWORD *)(v12 + 308);
      if ( (v13 & 0x20) == 0 || (v14 = v8 - 3, (v13 & 0x8000) != 0) )
        v14 = v9;
      v29 = v14;
      v40 = &v29;
      v41 = v8;
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D4A94, 0LL, 0LL, 8u, &pData);
    }
  }
  else if ( v2 )
  {
    if ( v2 == 1 && (unsigned int)dword_1C030D340 > 4 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x100uLL) )
    {
      v25 = (const CHAR *)InputTraceLogging::InjectionSourceToString((unsigned int)(v24 + 2));
      TlgCreateSz(&v33, v25);
      v30 = v26;
      pDesc.Ptr = (ULONGLONG)&v30;
      *(_QWORD *)&pDesc.Size = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D4B7E, 0LL, 0LL, v27, &pData);
    }
  }
  else if ( (unsigned int)dword_1C030D340 > 4 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x100uLL) )
  {
    v21 = (const CHAR *)InputTraceLogging::InjectionSourceToString((unsigned int)(v20 + 2));
    TlgCreateSz(&v33, v21);
    v30 = v22;
    pDesc.Ptr = (ULONGLONG)&v30;
    *(_QWORD *)&pDesc.Size = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D4B48, 0LL, 0LL, cData, &pData);
  }
}
