/*
 * XREFs of ?InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@J@Z @ 0x1C008E4D0
 * Callers:
 *     rimInputApc @ 0x1C008E340 (rimInputApc.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C010A730 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::RIM::InputApc(const struct RIMDEV *a1, int a2)
{
  char v3; // cl
  __int64 cData; // r9
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  const CHAR *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v21; // r9
  __int64 v22; // r10
  int v23; // [rsp+38h] [rbp-59h] BYREF
  int v24; // [rsp+3Ch] [rbp-55h] BYREF
  int v25; // [rsp+40h] [rbp-51h] BYREF
  __int64 v26; // [rsp+48h] [rbp-49h] BYREF
  __int64 v27; // [rsp+50h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v29; // [rsp+78h] [rbp-19h]
  __int64 v30; // [rsp+80h] [rbp-11h]
  __int64 *v31; // [rsp+88h] [rbp-9h]
  __int64 v32; // [rsp+90h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+7h] BYREF
  int *v34; // [rsp+A8h] [rbp+17h]
  __int64 v35; // [rsp+B0h] [rbp+1Fh]
  int *v36; // [rsp+B8h] [rbp+27h]
  __int64 v37; // [rsp+C0h] [rbp+2Fh]
  __int64 *v38; // [rsp+C8h] [rbp+37h]
  __int64 v39; // [rsp+D0h] [rbp+3Fh]

  v3 = *((_BYTE *)a1 + 48);
  if ( v3 )
  {
    if ( v3 == 2 )
    {
      if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
      {
        v7 = *(_QWORD *)(*((_QWORD *)a1 + 60) + 704LL);
        if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
        {
          v27 = v9;
          v29 = &v27;
          v31 = (__int64 *)&v23;
          v30 = 8LL;
          v23 = a2;
          v32 = v8;
          v11 = InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v10 + 24));
          TlgCreateSz(&pDesc, v11);
          if ( !v7 || (v14 = 0, !*(_DWORD *)(v7 + 36)) )
            v14 = 1;
          v15 = *(_QWORD *)(v13 + 472);
          v24 = v14;
          v34 = &v24;
          v35 = v12;
          v25 = *(unsigned __int16 *)(v15 + 16);
          v36 = &v25;
          v37 = v12;
          LODWORD(v26) = *(unsigned __int16 *)(v15 + 18);
          v38 = &v26;
          v39 = v12;
          TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019F5F0, 0LL, 0LL, 8u, &pData);
        }
      }
      else if ( dword_1C01C7F10 > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
        {
          v19 = *(_QWORD *)(v18 + 472);
          v29 = &v27;
          v31 = &v26;
          v27 = v18;
          v30 = 8LL;
          LODWORD(v26) = a2;
          v32 = v17;
          v25 = *(unsigned __int16 *)(v19 + 16);
          pDesc.Ptr = (ULONGLONG)&v25;
          *(_QWORD *)&pDesc.Size = v17;
          v24 = *(unsigned __int16 *)(v19 + 18);
          v34 = &v24;
          v35 = v17;
          TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019F656, 0LL, 0LL, 6u, &pData);
        }
      }
    }
    else if ( v3 == 1 && dword_1C01C7F10 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
      {
        v27 = v22;
        v29 = &v27;
        v31 = &v26;
        v30 = 8LL;
        LODWORD(v26) = a2;
        v32 = v21;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019F69B, 0LL, 0LL, v21, &pData);
      }
    }
  }
  else if ( dword_1C01C7F10 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
    {
      v26 = v6;
      v29 = &v26;
      v31 = (__int64 *)&v23;
      v30 = 8LL;
      v23 = a2;
      v32 = cData;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019F5BB, 0LL, 0LL, cData, &pData);
    }
  }
}
