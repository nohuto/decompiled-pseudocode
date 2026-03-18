/*
 * XREFs of ?InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z @ 0x1C006EB40
 * Callers:
 *     rimInputApc @ 0x1C006E9D0 (rimInputApc.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01345B0 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 */

void __fastcall InputTraceLogging::RIM::InputApc(const struct RIMDEV *a1, const struct _IO_STATUS_BLOCK *a2)
{
  char v3; // cl
  __int64 v4; // r9
  __int64 v5; // r10
  int *v6; // r11
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // r10
  int *v11; // r11
  const CHAR *v12; // rax
  __int64 v13; // r9
  __int64 v14; // r10
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // r9
  __int64 v19; // r10
  _DWORD *v20; // r11
  __int64 v21; // rcx
  __int64 v23; // r9
  __int64 v24; // r10
  _DWORD *v25; // r11
  int v26; // [rsp+38h] [rbp-69h] BYREF
  int v27; // [rsp+3Ch] [rbp-65h] BYREF
  int v28; // [rsp+40h] [rbp-61h] BYREF
  __int64 v29; // [rsp+48h] [rbp-59h] BYREF
  __int64 v30; // [rsp+50h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-49h] BYREF
  __int64 *v32; // [rsp+78h] [rbp-29h]
  __int64 v33; // [rsp+80h] [rbp-21h]
  __int64 *v34; // [rsp+88h] [rbp-19h]
  __int64 v35; // [rsp+90h] [rbp-11h]
  _DWORD *v36; // [rsp+98h] [rbp-9h]
  __int64 v37; // [rsp+A0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp+7h] BYREF
  int *v39; // [rsp+B8h] [rbp+17h]
  __int64 v40; // [rsp+C0h] [rbp+1Fh]
  int *v41; // [rsp+C8h] [rbp+27h]
  __int64 v42; // [rsp+D0h] [rbp+2Fh]
  __int64 *v43; // [rsp+D8h] [rbp+37h]
  __int64 v44; // [rsp+E0h] [rbp+3Fh]

  v3 = *((_BYTE *)a1 + 48);
  if ( v3 )
  {
    if ( v3 == 2 )
    {
      if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
      {
        v7 = *((_QWORD *)a1 + 60);
        v8 = *(_QWORD *)(v7 + 712);
        if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
        {
          v30 = v10;
          v32 = &v30;
          v26 = *v11;
          v34 = (__int64 *)&v26;
          v36 = v11 + 2;
          v33 = 8LL;
          v35 = v9;
          v37 = 8LL;
          v12 = InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v7 + 24));
          TlgCreateSz(&pDesc, v12);
          if ( !v8 || (v15 = 0, !*(_DWORD *)(v8 + 36)) )
            v15 = 1;
          v16 = *(_QWORD *)(v14 + 472);
          v27 = v15;
          v39 = &v27;
          v40 = v13;
          v28 = *(unsigned __int16 *)(v16 + 16);
          v41 = &v28;
          v42 = v13;
          LODWORD(v29) = *(unsigned __int16 *)(v16 + 18);
          v43 = &v29;
          v44 = v13;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E54F8, 0LL, 0LL, 9u, &pData);
        }
      }
      else if ( dword_1C020FB50 > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
        {
          v21 = *(_QWORD *)(v19 + 472);
          v32 = &v30;
          LODWORD(v29) = *v20;
          v34 = &v29;
          v36 = v20 + 2;
          v30 = v19;
          v33 = 8LL;
          v35 = v18;
          v37 = 8LL;
          v28 = *(unsigned __int16 *)(v21 + 16);
          pDesc.Ptr = (ULONGLONG)&v28;
          *(_QWORD *)&pDesc.Size = v18;
          v27 = *(unsigned __int16 *)(v21 + 18);
          v39 = &v27;
          v40 = v18;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E556B, 0LL, 0LL, 7u, &pData);
        }
      }
    }
    else if ( v3 == 1 && dword_1C020FB50 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
      {
        v30 = v24;
        v32 = &v30;
        LODWORD(v29) = *v25;
        v34 = &v29;
        v36 = v25 + 2;
        v33 = 8LL;
        v35 = v23;
        v37 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E55BD, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  else if ( dword_1C020FB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v29 = v5;
      v32 = &v29;
      v26 = *v6;
      v34 = (__int64 *)&v26;
      v36 = v6 + 2;
      v33 = 8LL;
      v35 = v4;
      v37 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E54B6, 0LL, 0LL, 5u, &pData);
    }
  }
}
