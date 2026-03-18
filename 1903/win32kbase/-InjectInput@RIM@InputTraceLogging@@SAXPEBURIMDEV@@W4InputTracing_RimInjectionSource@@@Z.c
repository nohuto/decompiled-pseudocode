/*
 * XREFs of ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C0147FB8
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x1C014A04C (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C014A94C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C014AD44 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C014CBD4 (RIMIDE_InjectGenericHidInput.c)
 *     SynthesizeMitTouchInput @ 0x1C018E91C (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1C018EBF0 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01345B0 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?InjectionSourceToString@InputTraceLogging@@CAPEBDW4InputTracing_RimInjectionSource@@@Z @ 0x1C01482B8 (-InjectionSourceToString@InputTraceLogging@@CAPEBDW4InputTracing_RimInjectionSource@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::InjectInput(__int64 a1, unsigned int a2)
{
  char v4; // cl
  __int64 v5; // r11
  const CHAR *v6; // rax
  __int64 v7; // r11
  const char *v8; // rax
  __int64 v9; // r9
  int v10; // r10d
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // r11
  const CHAR *v17; // rax
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // r9
  const CHAR *v21; // rax
  __int64 v22; // r11
  UINT32 cData; // r9d
  const CHAR *v24; // rax
  __int64 v25; // r11
  UINT32 v26; // r9d
  int v27; // [rsp+30h] [rbp-59h] BYREF
  int v28; // [rsp+34h] [rbp-55h] BYREF
  __int64 v29; // [rsp+38h] [rbp-51h] BYREF
  int v30; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+70h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+90h] [rbp+7h] BYREF
  int *v35; // [rsp+A0h] [rbp+17h]
  __int64 v36; // [rsp+A8h] [rbp+1Fh]
  int *v37; // [rsp+B0h] [rbp+27h]
  __int64 v38; // [rsp+B8h] [rbp+2Fh]
  int *v39; // [rsp+C0h] [rbp+37h]
  __int64 v40; // [rsp+C8h] [rbp+3Fh]

  v4 = *(_BYTE *)(a1 + 48);
  if ( v4 == 2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
    {
      if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
      {
        v29 = v16;
        v32.Ptr = (ULONGLONG)&v29;
        *(_QWORD *)&v32.Size = 8LL;
        v17 = (const CHAR *)InputTraceLogging::InjectionSourceToString(a2);
        TlgCreateSz(&pDesc, v17);
        v19 = *(_QWORD *)(v18 + 472);
        v28 = *(unsigned __int16 *)(v19 + 16);
        v34.Ptr = (ULONGLONG)&v28;
        *(_QWORD *)&v34.Size = v20;
        v27 = *(unsigned __int16 *)(v19 + 18);
        v35 = &v27;
        v36 = v20;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E4ECE, 0LL, 0LL, 6u, &pData);
      }
    }
    else if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v29 = v5;
      v32.Ptr = (ULONGLONG)&v29;
      *(_QWORD *)&v32.Size = 8LL;
      v6 = (const CHAR *)InputTraceLogging::InjectionSourceToString(a2);
      TlgCreateSz(&pDesc, v6);
      v8 = InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(*(_QWORD *)(v7 + 480) + 24LL));
      TlgCreateSz(&v34, v8);
      v12 = *(_QWORD *)(v11 + 472);
      v30 = *(unsigned __int16 *)(v12 + 16);
      v35 = &v30;
      v36 = v9;
      v27 = *(unsigned __int16 *)(v12 + 18);
      v37 = &v27;
      v13 = *(_QWORD *)(v11 + 480);
      v38 = v9;
      v14 = *(_DWORD *)(v13 + 312);
      if ( (v14 & 8) == 0 || (v15 = v9 - 3, (v14 & 0x2000) != 0) )
        v15 = v10;
      v28 = v15;
      v39 = &v28;
      v40 = v9;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E4E60, 0LL, 0LL, 8u, &pData);
    }
  }
  else if ( v4 )
  {
    if ( v4 == 1 && dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v24 = (const CHAR *)InputTraceLogging::InjectionSourceToString(a2);
      TlgCreateSz(&v32, v24);
      v29 = v25;
      pDesc.Ptr = (ULONGLONG)&v29;
      *(_QWORD *)&pDesc.Size = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E4F4A, 0LL, 0LL, v26, &pData);
    }
  }
  else if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
  {
    v21 = (const CHAR *)InputTraceLogging::InjectionSourceToString(a2);
    TlgCreateSz(&v32, v21);
    v29 = v22;
    pDesc.Ptr = (ULONGLONG)&v29;
    *(_QWORD *)&pDesc.Size = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E4F14, 0LL, 0LL, cData, &pData);
  }
}
