/*
 * XREFs of ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C01DE34C
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01DF914 (xxxInjectTouchInput.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C010F258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01DE634 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::RIM::InjectInput(__int64 a1)
{
  char v2; // cl
  __int64 v3; // r11
  __int64 v4; // r11
  const CHAR *v5; // rax
  __int64 v6; // r9
  int v7; // r10d
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  int v12; // eax
  __int64 v13; // r11
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r11
  UINT32 cData; // r9d
  __int64 v19; // r11
  UINT32 v20; // r9d
  int v21; // [rsp+30h] [rbp-59h] BYREF
  int v22; // [rsp+34h] [rbp-55h] BYREF
  __int64 v23; // [rsp+38h] [rbp-51h] BYREF
  int v24; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+70h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+90h] [rbp+7h] BYREF
  int *v29; // [rsp+A0h] [rbp+17h]
  __int64 v30; // [rsp+A8h] [rbp+1Fh]
  int *v31; // [rsp+B0h] [rbp+27h]
  __int64 v32; // [rsp+B8h] [rbp+2Fh]
  int *v33; // [rsp+C0h] [rbp+37h]
  __int64 v34; // [rsp+C8h] [rbp+3Fh]

  v2 = *(_BYTE *)(a1 + 48);
  if ( v2 == 2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
    {
      if ( dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x100uLL) )
      {
        v23 = v13;
        v26.Ptr = (ULONGLONG)&v23;
        *(_QWORD *)&v26.Size = 8LL;
        TlgCreateSz(&pDesc, "InjectTouchInput");
        v15 = *(_QWORD *)(v14 + 472);
        v22 = *(unsigned __int16 *)(v15 + 16);
        v28.Ptr = (ULONGLONG)&v22;
        *(_QWORD *)&v28.Size = v16;
        v21 = *(unsigned __int16 *)(v15 + 18);
        v29 = &v21;
        v30 = v16;
        TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E6F3D, 0LL, 0LL, 6u, &pData);
      }
    }
    else if ( dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x100uLL) )
    {
      v23 = v3;
      v26.Ptr = (ULONGLONG)&v23;
      *(_QWORD *)&v26.Size = 8LL;
      TlgCreateSz(&pDesc, "InjectTouchInput");
      v5 = InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(*(_QWORD *)(v4 + 480) + 24LL));
      TlgCreateSz(&v28, v5);
      v9 = *(_QWORD *)(v8 + 472);
      v24 = *(unsigned __int16 *)(v9 + 16);
      v29 = &v24;
      v30 = v6;
      v21 = *(unsigned __int16 *)(v9 + 18);
      v31 = &v21;
      v10 = *(_QWORD *)(v8 + 480);
      v32 = v6;
      v11 = *(_DWORD *)(v10 + 312);
      if ( (v11 & 8) == 0 || (v12 = v6 - 3, (v11 & 0x2000) != 0) )
        v12 = v7;
      v22 = v12;
      v33 = &v22;
      v34 = v6;
      TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E6ECF, 0LL, 0LL, 8u, &pData);
    }
  }
  else if ( v2 )
  {
    if ( v2 == 1 && dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x100uLL) )
    {
      TlgCreateSz(&v26, "InjectTouchInput");
      v23 = v19;
      pDesc.Ptr = (ULONGLONG)&v23;
      *(_QWORD *)&pDesc.Size = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E6FB9, 0LL, 0LL, v20, &pData);
    }
  }
  else if ( dword_1C03222C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x100uLL) )
  {
    TlgCreateSz(&v26, "InjectTouchInput");
    v23 = v17;
    pDesc.Ptr = (ULONGLONG)&v23;
    *(_QWORD *)&pDesc.Size = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E6F83, 0LL, 0LL, cData, &pData);
  }
}
